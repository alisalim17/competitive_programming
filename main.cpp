#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
#define ll long long

void solve()
{
    // int n = -1;
    // string sentence = "achieve this one";
    // string sentence2 = "achive";
    // cout << sentence.find("ie") << endl;
    // cout << sentence.substr(1, 2) << endl;
    // for (auto x : sentence)
    // {
    //     if (x == ' ')
    //         cout << endl;
    //     else
    //         cout << x;
    // }
    // int i = 5 + 5.6;
    // double d = 0.1 + 0.2;
    // d++;
    // cout << round(5.6) << endl;
    // cout << round(5.3) << endl;
    // cout << ceil(5.3) << endl;
}
void printCharPointer(char *myChar)
{
    cout << *myChar;
}

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}

int sumRecursive(int n)
{
    if (n > 0)
    {
    }
    return n + sumRecursive(n - 1);
}

class MyClass
{
public:
    void saySmth()
    {
        cout << "I said hello";
    }
};

int a = 20;

void printNumber(int x)
{
    cout << "X is : " << x;
}

void printNumber(float x)
{
    cout << "X is : " << x;
}

void printVector(vector<int> &myVector)
{
    myVector.push_back(100);
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << "Before Last : " << myVector[myVector.size() - 2] << " Last : " << myVector[myVector.size() - 1] << "\t";
        cout << myVector[i] << "\t" << endl;
    }
}

void printArray(int arrayToPrint[])
{
    cout << arrayToPrint[2] << endl;
}

void printHello()
{
    cout << "Hello" << endl;
    printHello();
}

int findFactorial(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * findFactorial(x - 1);
}

struct Person
{
    string name;
    string surname;
    int age;
};

void findBiggestNumberInVector(vector<int> numbers)
{
    int max;
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    cout << "MAX =  " << max << endl;
}

void findMaxAndMin(vector<int> numbers, int *max, int *min)
{
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }
}

int main()
{
    // MyClass myClass;
    // myClass.saySmth();
    // solve();
    // int a = 15;
    // if (a > 5)
    // {
    //     cout << "1";
    // }
    // else if (a > 3)
    // {
    //     cout << "2";
    // }

    // cout << sum(5, 12);
    // bool isTrue = true;
    // int n = 55;
    // string a = n > 40 ? "truee" : "falseee";
    // cout << a;

    // int age = 0;
    // while (age <= 5)
    // {
    //      cout << "my age is " << age << endl;
    //     age++;
    // }
    // int x;
    // int sum;
    // while (true)
    // {

    //     cin >> x;
    //     if (x == -1)
    //         break;
    //     sum += x;
    // }
    // cout << "Sum is " << sum;

    //++i increments the value, then returns it.
    // i++ returns the value, and then increments it.

    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "i : " << i << endl;
    // }
    // int day;
    // float r;
    // float money;
    // cin >> day >> r >> money;
    // for (int i = 0; i < day; i++)
    // {
    //     money = money + (money / 100) * r;
    //     cout << money << endl;
    // }
    // cout << "moneywer " << money;
    // int x = 100;
    // do
    // {
    //     cout << "salam";
    //     x++;

    // } while (x  < 5);
    // int age = 61;
    // switch (age)
    // {
    // case 16:
    //     cout << "Drive a car" << endl;
    //     break;

    // case 18:
    //     cout << "Drink beer" << endl;
    // default:
    //     cout << "Do nothing";
    //     break;
    // }
    // srand(time(0));

    // cout
    //     << rand() << endl;
    // cout << rand() << endl;
    // cout << rand() << endl;
    // cout << rand() << endl;
    // cout << sum() << endl;
    // cout << sum(5) << endl;
    // int b = 20;
    // float a = 20.5;
    // cout << a << endl;
    // cout << ::a << endl;
    // printNumber(b);
    // printNumber(a);
    // printHello();
    // int n;
    // cin >> n;
    // cout << findFactorial(n);
    // int myArray[5] = {
    //     2, 5, 132, 64754, 123};

    // cout << myArray;
    // printArray(myArray, 5);

    // 2 rows,3 columns
    int mdArray[2][3] = {
        {1, 3, 5},
        {11, 13, 15}};
    //  _______________
    // | 1  | 3  |  5  |
    // | 11 | 13 |  15 |
    //  _______________
    // cout << mdArray[0][2];
    // for (int r = 0; r < 2; r++)
    // {
    //     for (int c = 0; c < 3; c++)
    //         cout << mdArray[r][c] << " ";
    //     cout << endl;
    // }
    // int a;
    // char b;
    // cout << sizeof(a) << endl;
    // cout << sizeof(b) << endl;

    // double bucky[10];
    // cout << "Number of elements in the array :  " << sizeof(bucky) / sizeof(bucky[0]);
    // 0 -> false
    // 1 -> true
    // cout << !(a == b);
    // cout << (a == b ? "salam" : "sag ol");
    // int a = 5, b = 10;
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    // cout << "a is " << a << " b is " << b;

    // Guess the number game
    // int ans;
    // bool isGuessed = false;
    // cout << "Enter the number to guess : ";
    // cin >> ans;

    // while (!isGuessed)
    // {
    //     int ng;

    //     cout << "Your guess : ";

    //     cin >> ng;
    //     if (ng == ans)
    //         isGuessed = true;
    //     else if (ng > ans)
    //         cout << "Too high" << endl;
    //     else
    //         cout << "Too low" << endl;
    // }

    // cout << "You won!" << endl;
    // int n, c;

    // cin >> n;
    // while (n > 0)
    // {
    //     n /= 10;
    //     c++;
    // }
    // cout << c;

    // const char *str = "12345";
    // int x;
    // sscanf(str, "%d", &x);
    // printf("\nThe value of x : %d", x + 5);
    // cout << 10 / 3.25 << endl;
    // cout << remainder(10, 3.25) << endl;
    // cout << fmax(15, 20) << endl;
    // cout << fmin(15, 20) << endl;
    // cout << round(15.5) << endl;
    // cout << round(15.3) << endl;
    // cout << abs(15) << endl;
    // cout << abs(-15) << endl;
    // int a = 113141;

    // int counter = 0;
    // while (a > 0)
    // {
    //     a /= 10;
    //     counter++;
    // }
    // cout << counter;
    // string s = "dog:cat";

    // int n = s.find(":");
    // cout << s.substr(n + 1) << endl;
    // cout << (s.find('!') == -1 ? "NOT FOUND" : "FOUND") << endl;
    // cout << s.replace(s.find(":"), 1, "********") << endl;

    // int a[] = {
    // 1, 5, 23, 21};
    // cout << a[2];
    vector<int> myVector = {
        2, 3, 5, 7};
    // printVector(myVector);
    // cout << myVector[myVector.size() - 1];

    // int myArray[] = {
    // 177, 7, 8, 11};
    // cout << sizeof(myArray) / sizeof(myArray[0]);
    // array<int, 5> myStlArray = {
    //     1,
    //     3,
    //     5,
    //     7,
    //     9};
    // cout << myStlArray[myStlArray.size() - 1];

    // for (auto x : myStlArray)
    // {
    //     cout << x << endl;
    // }
    // Person person;
    // person.age = 10;
    // person.name = "Ali";
    // person.surname = "Salimli";
    // cout << person.name;
    // cout << sumRecursive(3);
    // int n = 17;
    // int *myPointer = &n;
    // cout << n << endl;
    // cout << *myPointer << endl;
    // *myPointer = 25;
    // cout << n << endl;
    // cout << *myPointer << endl;

    // char a = 'A';
    // int b = 22;

    // printCharPointer(&a);
    // print(&b, 'i');

    // vector<int> myVector = {2, 4, 6, 8};
    // int size = sizeof(myArray) / sizeof(myArray[0]);
    // for (int i = 0; i < size; ++i)
    // {
    //     cout << *(myArray + i) << endl;
    // }

    // int max = myVector[0];
    // int min = myVector[0];

    // findMaxAndMin(myVector, &max, &min);
    // cout << "Minumum is : " << min << endl;
    // cout << "Maximum is : " << max << endl;
    // int c;
    // cin >> c;

    // int *myArray = new int[c];

    // for (int i = 0; i < c; i++)
    // {
    //     cin >> myArray[i];
    // }

    // cout << myArray[2];
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d %d\n", a, b);
    // int array[8] = {
    //     -1,
    //     2,
    //     4, -3,
    //     5,
    //     2, -5,
    //     2

    // };
    // cout << array[0] << "  " << array[1] << endl;
    // swap(array[0], array[1]);
    // cout << array[0] << "  " << array[1];

    myVector.insert(myVector.end(), 9, 3);
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
        cout
            << ' ' << *it;
    return 0;
};
/*

9:34:07 - Operator Overloading == and +
9:41:13 - Overloading Insert and Extraction Operators
9:49:07 - Friend Functions and Operator Overloading
*/