//
// Created by mohamed khassal on 25/7/2025.
//
#include <stdio.h>

int main() {

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; //  0000 1101


    int result = a<<4;

    int logicalAnd = a & b;
    int logicalOr = a | b;
    int logicalXor = a ^ b;

    printf("result logicalAnd is %d\n", logicalAnd);

    printf("rsult logicalOr is %d\n", logicalOr);

    printf("rsult logicalXor is %d\n", logicalXor);

    // shift left and right
    printf("shift a 4 bits to the left is %d\n", result);

    // shift to right
    result = result>>4;
    printf("shift a 4 bits to the right is %d\n", result);


    return 0;
}