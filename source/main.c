#include "find.h"
#include "empty.h"
#include "putin.h"

int main()
{
    int state_sl = sleuth();
    if (state_sl == 0) {
        empty();    
    } else {
        putin();
    }
}
