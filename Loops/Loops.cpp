// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<algorithm>
#include <fstream>
using namespace std;
/*
class Test
{
public:
    int x;
    Test() { x = 5; }
};*/

class Name
{
public:
    
    void output(string name)
    {
        cout << name <<endl;
    }

    void output2()
    {
        cout << "hello" << endl;
    }

};

void output(string name)
{
    cout << name << endl;
}

// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

// Function to get the missing number
int getMissingNo(int a[], int n)
{
    // Given the range of elements
    // are 1 more than the size of array
    int N = n + 1;

    int total = (N) * (N + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
// Function to reverse a string
void reverseStr(string& str, int n, int i)
{

    if (n <= i) { return; }
    //  Swaping the character
    swap(str[i], str[n]);
    reverseStr(str, n - 1, i + 1);

}

class Test
{
private:
    int x;
public:
    Test(int x = 0) { this->x = x; }
    void change(Test* t) { this->x = t->x; }
    void print() { cout << "x = " << x << endl; }
};

int main()
{

    Test obj(5);
    Test* ptr = new Test(10);
    obj.change(ptr);
    obj.print();
    cout << "13:18"; // c1a8e55 commit number
    cout << "16:13"; //f892db4 commit number
    cout << "16:15";
    return 0;
/*
    char* ptr = "GeeksQuiz";
    printf("%s\n", *&*&ptr);
    return 0;

 */  
 /*
    int a;
    char* x;
    x = (char*)&a;
    a = 512;
    x[0] = 1;
    x[1] = 2;
    printf("%d", a);
    return 0;

    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr1 = arr;
    int* ptr2 = arr + 5;
    //printf("Number of elements between two pointer are: %d.",(ptr2 - ptr1));
    printf("Number of bytes between two pointers are: %d",(char*)ptr2 - (char*)ptr1);
    
    return 0;
*/
/*

    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];
    float* ptr2 = ptr1 + 3;

    printf("%f ", *ptr2);
    
    

    printf("%d ",(ptr2-ptr1));

    return 0;
*/

/*
    int nums[2][3] = { {16, 18, 20}, {25, 26, 27} };

    cout << *(*(nums+1)+1);
    return 0;

    // A normal integer variable
    int Var = 10;

    // A pointer variable that holds address of var.
    int* ptr = &Var;

    *ptr = 20;


    cout << *ptr;

    cout << Var;

    return 0;

*/
/*
    char str[] = "This is a string";
    char* ch = strrchr(str, 'i');
    cout << ch;
    return 0;

*/
/*
    string str = "geeksforgeeks";
    reverseStr(str, str.length() - 1, 0);
    cout << str;
    return 0;
*/
/*
// initialization by raw string
    string str1("first string");

    // initialization by another string
    string str2(str1);

    // initialization by character with number of occurrence
    string str3(5, '#');

    // initialization by part of another string
    string str4(str1, 6, 6); //    from 6th index (second parameter)
                             // 6 characters (third parameter)

    // initialization by part of another string : iterator version
    string str5(str2.begin(), str2.begin() + 5);

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
*/
/*
    int iArray2D[2][3] = {
                                { {1,2,3},{5,6,7},{9,10,11} },
                                { {1,2,3},{5,6,7},{9,10,11} }
                            };

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
        cout << iArray2D[i][j] << endl;

    return 0;
*/

/*
    Test* t = new Test();
    cout << t->x;
    return 0;
*/
/*
    int arr[] = { 1, 2, 3,4,5,6,7,9};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int miss = getMissingNo(arr, N);
    cout << miss;
*/
/*
    int arr[] = { 14, 12, 12, 0, 14, 12, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The odd occurring element is  " << findOdd(arr, n);
*/

/*
    int x = 0;
    //(x & 1) ? cout << "Odd" : cout << "Even";
    cout << (~x);
*/

/*
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 100;

    // The result is 00000001
    cout << "a = " << a << "," << " b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    //// The result is 00001101
    //cout << "a | b = " << (a | b) << endl;

    //// The result is 00001100
    //cout << "a ^ b = " << (a ^ b) << endl;

    //// The result is 11111010
    //cout << "~a = " << (~a) << endl;

    // The result is 00010010
    cout << "a << 1" << " = " << (a << 1) << endl;

    // The result is 00000100
    cout << "b >> 3 " << "= " << (b >> 3) << endl;
*/

/*
    string str;
    int t = 4;
    while (t--) {
        getline(cin, str);

        // Keep reading a new line while there is
        // a blank line
        while (str.length() == 0)
            getline(cin, str);

        cout << str << " : newline" << endl;
    }
*/    
    
 /*
    fstream file;
    file.open("E:\\cout.txt", ios::out);
    streambuf* coutbuffer = cout.rdbuf();
    streambuf* cinbuffer = cin.rdbuf();
    
    streambuf* filebuffer = file.rdbuf();

    cout.rdbuf(filebuffer);
    cout << "line 1 will go file" << endl;
    cout << "line 2 will go in file" << endl;

    cout.rdbuf(coutbuffer);
    cout << "line 3 will go on screen" << endl;
 */
    
 /*

    int digits[10];

    int iNum = 103;
    
    int index = 0;

    do
    {
        digits[index] = iNum % 10;
        iNum = iNum / 10;
        index++;
    } while (iNum != 0);
    
    char word[][10] = { "zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (int i = index - 1; i >= 0; i--)
        cout << word[digits[i]];
*/

    /*
    
    int c1 = 0, c2 = 0;   
 // FIRST
    for (int i = 0; ++c1 && i < 10; i++)
        for (int j = 0; ++c1 && j < 100; j++);


    // Second
    for (int i = 0; ++c2 && i < 100; i++)
        for (int j = 0; ++c2 && j < 10; j++);


    cout << " Count for FIRST  " << c1 << endl;
    cout << " Count for SECOND  " << c2 << endl;
    */

   /* int i = 2;

    switch (i)
    {

    case 1: cout << "1";
    case 2: cout << "2"; break;
    case 3: cout << "3";
    default: cout << "default";
            break;
    }
    */
    getchar();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
