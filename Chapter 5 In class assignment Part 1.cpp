/*  Program File Name: Chapter 4 Exercise 3
    Programmer: Christian Min
    Date: 10/18/26
    Requirements:
    Create a menu-based program that allows a user to repeatedly choose an arithmetic function to perform. The actual functions are not due for this part of the assignment. 
    The program should be repeatable and display the function chosen.

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int choice, num1, num2, result;
    
    cout << "Welcome to the VS calculator!" << endl;
    cout << "Enter a difit corresponding to the operation: " << endl;
    cout << "1. Addition \n2. Subtraction \n3.Multiplication \n4.Division \n5. Modulo \n6. Power \n. (Exit Code)" << endl;

    cin >> choice;
    
    cout << "Please enter the two numbers with space between" << endl;
    cin >> num1 >> num2;

    switch (choice) {
    case 1: cout << "Addition";
        break;
    case 2: cout << "Subtraction";
        break;
    case 3: cout << "Multiplication";
        break;
    case 4: cout << "Division";
        break;
    case 5: cout << "Modulo";
        break;
    case 6: cout << "Power";
        break;
    default: cout << "Exitting Program";
        break;
    }

    cout << "Hmm, looks like your answer is...!" << result;

    return 0;
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
