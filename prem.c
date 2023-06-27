//
// Func to change file permissions
//

#include <stdlib.h>
#include <sys/stat.h>
#include "headers/const.h"

void prem(void)
{
    int c;
    char mode[] = "0600";
    c = strtol(mode, 0, 8);
    chmod(FILE_D, c);
}
