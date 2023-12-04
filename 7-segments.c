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
    digit encodedDigit = {0, 0, 0, 0, 0, 0, 0};
    switch (d) {
        case 0: encodedDigit = (digit){0, 0, 0, 0, 0, 0, 1}; break;
        case 1: encodedDigit = (digit){1, 0, 0, 1, 1, 1, 1}; break;
        case 2: encodedDigit = (digit){0, 0, 1, 0, 0, 1, 0}; break;
        case 3: encodedDigit = (digit){0, 0, 0, 0, 1, 1, 0}; break;
        case 4: encodedDigit = (digit){1, 0, 0, 1, 1, 0, 0}; break;
        case 5: encodedDigit = (digit){0, 1, 0, 0, 1, 0, 0}; break;
        case 6: encodedDigit = (digit){0, 1, 0, 0, 0, 0, 0}; break;
        case 7: encodedDigit = (digit){0, 0, 0, 1, 1, 1, 1}; break;
        case 8: encodedDigit = (digit){0, 0, 0, 0, 0, 0, 0}; break;
        case 9: encodedDigit = (digit){0, 0, 0, 0, 1, 0, 0}; break;
        default: break;
    }
    return encodedDigit;
}

int decode(digit d)
{
    if (d.a == 0 && d.b == 0 && d.c == 0 && d.d == 0 && d.e == 0 && d.f == 0 && d.g == 1) return 0;
    if (d.a == 1 && d.b == 0 && d.c == 0 && d.d == 1 && d.e == 1 && d.f == 1 && d.g == 1) return 1;
    if (d.a == 0 && d.b == 0 && d.c == 1 && d.d == 0 && d.e == 0 && d.f == 1 && d.g == 0) return 2;
    if (d.a == 0 && d.b == 0 && d.c == 0 && d.d == 0 && d.e == 1 && d.f == 1 && d.g == 0) return 3;
    if (d.a == 1 && d.b == 0 && d.c == 0 && d.d == 1 && d.e == 1 && d.f == 0 && d.g == 0) return 4;
    if (d.a == 0 && d.b == 1 && d.c == 0 && d.d == 0 && d.e == 1 && d.f == 0 && d.g == 0) return 5;
    if (d.a == 0 && d.b == 1 && d.c == 0 && d.d == 0 && d.e == 0 && d.f == 0 && d.g == 0) return 6;
    if (d.a == 0 && d.b == 0 && d.c == 0 && d.d == 1 && d.e == 1 && d.f == 1 && d.g == 1) return 7;
    if (d.a == 0 && d.b == 0 && d.c == 0 && d.d == 0 && d.e == 0 && d.f == 0 && d.g == 0) return 8;
    if (d.a == 0 && d.b == 0 && d.c == 0 && d.d == 0 && d.e == 1 && d.f == 0 && d.g == 0) return 9;
    
    return -1; // invalid input
}

char* digitToString(digit d, bool isReserve)
{
    char* str = (char*)malloc(8 * sizeof(char) + 1); // 7 digits + '\0'
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    char ch1 = '1';
    char ch0 = '0';
    if (!isReserve) {
        ch1 = '0';
        ch0 = '1';
    }
    str[0] = d.a ? ch1 : ch0;
    str[1] = d.b ? ch1 : ch0;
    str[2] = d.c ? ch1 : ch0;
    str[3] = d.d ? ch1 : ch0;
    str[4] = d.e ? ch1 : ch0;
    str[5] = d.f ? ch1 : ch0;
    str[6] = d.g ? ch1 : ch0;
    str[7] = '\0';
    
    return str;
}

int main(int argc, char** argv)
{
    int numbersToEncode[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numDigits = sizeof(numbersToEncode) / sizeof(numbersToEncode[0]);

    printf("Encoded to Decoded mapping:\n");
    for (int i = 0; i < numDigits; ++i) {
        digit encoded = encode(numbersToEncode[i]);
        int decoded = decode(encoded);
        printf("Encoded: %d (%s - %s) => Decoded: %d\n", numbersToEncode[i], digitToString(encoded, false), digitToString(encoded, true), decoded);
    }

    return 0;
}
