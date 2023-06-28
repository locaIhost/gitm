#include "headers/find.h"
#include "headers/empty.h"
#include "headers/putin.h"

int main()
{
    int state_sl = sleuth();
    if (state_sl == 0) {
        empty();    
    } else {
        putin();
    }
}
