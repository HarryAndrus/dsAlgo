#include <iostream>

int gcdRecursive(int x, int y) {
    if (y==0) return x;
    return gcdRecursive(y, x % y);
}

int gcd(int x, int y) {
    if(y==0) return x;

    while(y!=0) {
        int remainder = y % x;
        x = y;
        y = remainder;
    }
}

int main() {
    std::cout << gcdRecursive(5,50) << std::endl;
}
