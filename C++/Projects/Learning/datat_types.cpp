// Computers follow binary number system
// 1 byte = 8 bits
// int : 4 bytes, char : 1 bytes, float  =4 bytes, double = 8 Bytes, bool = 1 byte;--PRIMITIVE DATA TYPES
// ASCII values : A -- 65 a : 97 print
// bool true -> 1 & false -> 0

// TYPE CONVERSION : small to big, Implicit - automatic process, done automatically. No data loss;
// Casting : Explicit conversion , can be anything. specified for specific converison;

// 100 and 100.99 both are to 100 . No math here. Just cut off float part.
#include <iostream>
using namespace std;

int main()
{
    char grade = 'a';
    int value = grade; // converts grade char to int ASCII value, explicit done automatically
    cout << value << endl;

    float oneval = 100.998;
    cout << int(oneval) << endl;

    int age;
    cout << "Enter your age";
    cin >> age;

    cout << "Your age is " << age << endl;

    return 0;
}
