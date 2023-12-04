#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    bool a;
    bool b;
    bool c;
    bool d;
    bool e;
    bool f;
    bool g;
} digit;

digit encode(int d)
{
    switch (d) {
        case 0: return {0, 0, 0, 0, 0, 0, 0};
        case 1: return {0, 0, 0, 0, 0, 0, 0};
        case 2: return {0, 0, 0, 0, 0, 0, 0};
        case 3: return {0, 0, 0, 0, 0, 0, 0};
        case 4: return {0, 0, 0, 0, 0, 0, 0};
        case 5: return {0, 0, 0, 0, 0, 0, 0};
        case 6: return {0, 0, 0, 0, 0, 0, 0};
        case 7: return {0, 0, 0, 0, 0, 0, 0};
        case 8: return {0, 0, 0, 0, 0, 0, 0};
        case 9: return {0, 0, 0, 0, 0, 0, 0};
        default: return {0, 0, 0, 0, 0, 0, 0};
    }
}

int decode(digit d)
{
    
}

int main(int argc, char** argv)
{
    return 0;
}
