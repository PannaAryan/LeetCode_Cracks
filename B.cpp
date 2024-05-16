#include <iostream>

using namespace std;

int modularExponentiation(int base, int exponent, int modulus) {
    if (exponent == 0)
        return 1;

    int temp = modularExponentiation(base, exponent / 2, modulus);
    temp = (temp * temp) % modulus;

    if (exponent % 2 == 1)
        temp = (temp * base) % modulus;

    return temp;
}

int main() {
    int base = 40;
    int exponent = 233;
    int modulus = 353;

    int result = modularExponentiation(base, exponent, modulus);
    cout << "3^97 mod 353 = " << result << endl;

    return 0;
}