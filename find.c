//
// This functions for find key value in file
//

#include <string.h>
#include <stdio.h>
#include "headers/const.h"


#define FILE_SIZE 2048

int sleuth (void) 
{
    char cell[FILE_SIZE];
    FILE *file;
    int found;
    file = fopen(FILE_D, "r");
    if (file == NULL) {
        return 1;
    }
    found = 0;
    while(fgets(cell, FILE_SIZE, file)) {
        if (strstr(cell, KEY)) {
            found = 1;
            break;
        }
    }
    if( found ) {
        return 0;
    } else {
        return 1;
   }
        
    fclose(file);
}
