#include <iostream>
using namespace std;

int main(){

    // Assignment Operator
    int a = 2;
    a += 3;
    cout << a << endl;

    int b = 5;
    b -= 3;
    cout << b << endl;

    int c = 5;
    c *= 2;
    cout << c << endl;

    int d = 6;
    d /= 2;
    cout << d << endl;

    int e = 4;
    // e = e + 1;
    // e += 1;
    e++;
    e++;
    e++;
    ++e;
    cout << e << endl;

    int num01 = 5;
    int num02 = num01++;

    // num02 = 5
    // num01 = 6

    int num03 = 5;
    int num04 = ++num03;

    // num03 = 6
    // num04 = 6

    int num05 = 3 + 2 - 5 * 4 / 1;

    // Operator Priority table


    return 0;
}