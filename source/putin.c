//
// This func implements the insertion of your key into a file
//

#include <stdio.h>
#include "headers/prem.h"
#include "headers/const.h"
#define SPACE " "
int putin(void) 
{
    const char *ALGKEY = ALG SPACE KEY;
    FILE *file;
    file = fopen(FILE_D, "a");
    if (file != NULL) {
        fputs(ALGKEY, file);
        fclose(file);
        prem();
        return 0;
    } else {
        return 1;
    
    }
}
