#include <iostream>
#include <cmath>
using namespace std;


/*
    Code Designed by Bryan Mejia
    Basic Calculator Code in C++ using Switch Case
    
    */

int main(){

    double num1, num2; // Used Double integers to mimnimize room for error when dividing if num1 > num2
    char op;

    cout << "====================================================\n";
    cout << "Welcome to Calculator! Please input two numbers.\n";
    
    cin >> num1 >> num2;

    cout << "We offer 5 options in this calculator consisting of : \n";
    cout << " (1) ADDITION \t\t\t + \n (2) SUBTRACTION \t\t - \n (3) MULTIPLICATION \t\t * \n (4) DIVISION \t\t\t / \n (5) EXPONENT \t\t\t ^\n";
    cout << "\nChoose an operator for Mathematical Process : \n";

    cin >> op;

        switch (op) // Switch Case best possible outcome for code - Provides capabilities for algorithms present.
        {
            case '+':
               
                cout << "Addition was selected. Outcome is : " << num1 + num2;
                break;
            
            case '*':
               
                cout << "Multiplication was selected. Outcome is : " << num1 * num2;
                break;

            case '-':
               
                cout << "Subtraction was selected. Outcome is : " << num1 - num2;
                break;

            case '/':
                
                    if(num1 == 0.0 || num2 == 0.0){                 // Numbers cannot be divided by 0 nor can 0 be divided into. Case put in place to prevent issue.
                        cout << "ERROR. Invalid input for /.";
                    }
                    else
                        cout << num1 / num2;
                            
                            break;
            
            case '^':
    
                cout << pow(num1, num2);
                break;
            
            default:
                cout << "Invalid Submission.";
                break;
            }

    return 0;
}