#include <typeinfo>
#include <iostream>

using namespace std;

int main() {

    // Arithmetic Operators

    int a = 11;
    double b = 7.0;
    float c = 3.0;
    int d = 4;

    int r1 = a + b;
    int r2 = b - a;
    double r3 = b / a; // 1.4
    float r4 = b / c;

    int r5 = a % d; // 11 % 4 = 3

    cout << r1 << endl; // 12
    cout << r2 << endl; // 2
    cout << r3 << endl; // 1.4
    cout << r5 << endl; // 3

    // int / int = int
    // int / float = float
    // float / int = float
    // double / float = doubl
    


    return 0;
}
