#include <iostream>
using namespace std;

/*

Variable : 
-------------
Variable is nothing but an empty box or storage unit where we can store data.

There can be different types of data such as : 

| No. | Data Type | Literals                                                            |
|-----|-----------|---------------------------------------------------------------------|
| 1   | string    | "Rini", "Shiro", "Kolkata", "I m a boy", "721212", "%#$%90902345"   |
| 2   | char      | 'A', 'B', 'C', 'D', 'E', '$', '-', '2'                              |
| 3   | bool      | true (1), false (0)                                                 |
| 4   | int       | 12, 34, -1234, 8996, 7074809373, 721212, 1                          |
| 5   | float     | 13.764, -9.4, 67.12                                                 |
| 6   | double    | 123.7656, 9.46, 78.500                                              |
| 7   | void      | (No value)                                                          |

*/

int main() {

    // Create a variable to store your name
    string myName = "Arpit";
    string friendName = "Rini";

    // Create a variable to store your age
    int myAge = 22;

    // Create a variable to store if your male or not
    bool isMale = true;
    

    // There are two variables, firstName & lastName
    // Your have to print fullName

    string firstName = "Shiro";
    string lastName = "Mondal";

    // Solution 1 :
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
    cout << firstName + " " + lastName << endl;


    int num01 = 2;
    int num02 = 3;
    cout << num01 + num02 << endl;


    string num03 = "2";
    string num04 = "3";
    cout << num03 + num04 << endl;


    char charA = 'a'; // 97
    char charB = 'b'; // 98
    cout << charA + charB << endl; // 195


    // char charC = 'c';
    char charC = 120;
    cout << charC << endl;


    const string homeTown = "Kolkata";
    const string myPet = "Shiro";
    const int age = 18;

    cout << homeTown << " " << myPet << endl;

    return 0;
}