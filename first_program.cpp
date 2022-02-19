// Your First C++ Program
// g++ main.cpp -o main.exe && ./main.exe

#include <iostream>

using namespace std;

int main()
{
    // we must put the ";" end of each line
    // end line => breaks the line

    int age;
    string name;
    cout << "Your name : ";
    cin >> name >> age;
    // or
    // cin >> name;
    // cin >> age;
    cout << "Your age : ";
    // int age = 10;
    // string name = "Ali";
    // or
    // age = 10;
    // name = "Ali";
    cout
        << "Hello,my name is " << name << " and I am " << age << " years old";

    return 0;
}
