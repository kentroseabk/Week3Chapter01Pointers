// Week3Chapter01Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Challenge:
    Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'.
    Then create two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
    Take an input variable and display the same value by pointer.
*/

#include <iostream>

using namespace std;

int GetInput();
void HandleInvalidInput();
void DisplayOutputByValue(int a, int b);
void DisplayOutputByPointer(int* ptrA, int* ptrB);

int GetInput()
{
    int input;

    bool retry;

    do
    {
        retry = false;

        cout << "Please enter a number." << endl;
        cin >> input;

        if (cin.fail())
        {
            HandleInvalidInput();

            retry = true;
        }
    } while (retry);

    cout << endl;

    return input;
}

void HandleInvalidInput()
{
    cout << "Invalid input." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void DisplayOutputByValue(int a, int b)
{
    cout << "a value: " << a << endl;
    cout << "b value: " << b << endl;
}

void DisplayOutputByPointer(int* ptrA, int* ptrB)
{
    cout << "ptrA value : " << *ptrA << ", ptrA address : " << ptrA << endl;
    cout << "ptrB value : " << *ptrB << ", ptrB address : " << ptrB << endl;
}

int main()
{
    int a = GetInput();
    int b = GetInput();

    DisplayOutputByValue(a, b);

    int* ptrA = &a;
    int* ptrB = &b;

    DisplayOutputByPointer(ptrA, ptrB);
}
