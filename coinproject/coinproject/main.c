#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Coin.h"

int CountHeads(Coin coin, int goal) {
    Flip(coin);
    while(NumHeads(coin) != goal) {
        continue;
    }
    return coin.flips;
}

int main() {
    Coin coin = InitCoin(15);
    int numHeads = 20;
    int numFlips = CountHeads(coin, numHeads);
    printf("Total number of flips for 20 heads: %d\n", numFlips);
    coin = InitCoin(15);
    numHeads = 100;
    numFlips = CountHeads(coin, numHeads);
    printf("Total number of flips for 1000 heads: %d\n", numFlips);
    return 0;
}
