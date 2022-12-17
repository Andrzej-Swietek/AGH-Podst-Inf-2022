#ifndef INC_02_CONTROL_PRINT_AND_FLUSH_H
#define INC_02_CONTROL_PRINT_AND_FLUSH_H

#include <stdio.h>

void print_and_flush(const char* prompt) {
    printf("%s: ", prompt);
    fflush(stdout);
}

#endif //INC_02_CONTROL_PRINT_AND_FLUSH_H
