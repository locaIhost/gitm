//
// This function implements the deletion of your key from the file
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prem.h"
#include "const.h"
#define FILE_NEW "authorized_keys"
#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int empty(void)
{
    char buffer[MAX_LINE_LENGTH];
    char *lines[MAX_LINES];
    int line_count = 0;
    int i;
    FILE *file;
    FILE *new_file;
    file = fopen(FILE_D, "r");
    new_file = fopen(FILE_NEW, "w");
    if (file == NULL || new_file == NULL) {
        return 1;
    }
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        lines[line_count] = malloc(strlen(buffer) + 1);
        strcpy(lines[line_count], buffer);
        line_count++;
    }
    fclose(file);
    line_count--;
    for (i = 0; i < line_count; i++) {
        fprintf(new_file, "%s", lines[i]);
        free(lines[i]);
    }
    fclose(new_file);
    remove(FILE_D);
    rename(FILE_NEW, FILE_D);
    prem();
    return 0;
}
