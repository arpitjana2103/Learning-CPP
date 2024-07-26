#include <iostream>
using namespace std;
/*
Questions :
Create a program which will take two number as input from user.
Then will print the sbstraction of two numbers.

Enter First Number : 
12
Enter Second Number :
6

12 - 6 = 6

*/

int main(){

    int num_01;
    int num_02;

    cout << "Enter First Number : " << endl;
    cin >> num_01;

    cout << "Enter Second Number : " << endl;
    cin >> num_02;

    cout << num_01 << "+" << num_02 << "=" << num_01+num_02 << endl;

    return 0;
}