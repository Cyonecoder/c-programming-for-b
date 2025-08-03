//
// Created by NBJ on 8/2/2025.
//
#include <stdbool.h>
#include <stdio.h>

int main() {
    int arrPrime[50] = {[0] = 2, [1] = 3};
    int count = 2;
    for (int i = 5; i <= 100; i = i + 2) {
        bool isPrime = true;

        for (int j = 0;  isPrime && i / arrPrime[j] >= arrPrime[j]; j++)
            if (i % arrPrime[j] == 0)
                isPrime = false;



            if (isPrime) {
                arrPrime[count] = i;
                ++count;

        }
    }
    for (int x = 0; x < count; x++) {
        printf("%d\n", arrPrime[x]);
    }
}
