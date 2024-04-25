#include<iostream>
#include<Windows.h>

using namespace std;

// Function to display the welcome message
void displayWelcomeMessage() {
    cout << "Please select an option" << endl;
    Sleep(1000);  
    cout << "1.Sequence, 2.PEMDAS, 3.Calculator, 0.Exit" << endl;
}

// Function to handle Sequence option
void handleSequence() {
    int sequence;
    while (sequence != 0) {
        cout << "What do you want me to help you with in Sequence?" << endl;
        Sleep(1500);  
        cout << "1.Definition?, 2.Calculator, 0.Back to Main Menu" << endl;
        cin >> sequence;

        if(sequence == 1){
            cout << "A sequence is basically an ordered list with a certain rule!" << endl;
        }
        else if(sequence == 2){
            double operationType, multiplierDivisor, addition, initialNumber, loopCount;
            cout << "What kind of operation? 1.Multiplication, 2.Division" << endl;
            cin >> operationType;
            
            cout << "Enter the multiplication/division factor" << endl;
            cin >> multiplierDivisor;
            
            cout << "Enter the addition value" << endl;
            cin >> addition;
            
            cout << "Enter the initial number" << endl;
            cin >> initialNumber;
            
            cout << "Enter how many times you want to loop it" << endl;
            cin >> loopCount;
            
            if(operationType == 1){
                for (int i = 0; i < loopCount; i++){
                    initialNumber = initialNumber * multiplierDivisor + addition;
                    cout << initialNumber << endl;
                }
            }
            else if(operationType == 2){
                for (int i = 0; i < loopCount; i++){
                    initialNumber = initialNumber / multiplierDivisor + addition;
                    cout << initialNumber << endl;
                }
            }
            else{
                cout << "Walawe, You enter the wrong number, there is ONLY 2 NUMBER HOW DID YOU MESSED UP" << endl;
            }
        }
    }
}

// Function to handle PEMDAS option
void handlePEMDAS() {
    int pemdas = -1; // Initialize pemdas with an invalid value

    while (pemdas != 0) {
        cout << "See this boy" << endl;
        Sleep(2000);
        cout << "Alright" << endl;
        Sleep(1000);
        cout << "So PEMDAS is an acronym" << endl;
        Sleep(1000);
        cout << "So P is for parentheses()" << endl;
        Sleep(1000);
        cout << "So E is for Exponent" << endl;
        Sleep(1000);
        cout << "So M is for Multiplication" << endl;
        Sleep(1000);
        cout << "So D is for Division" << endl;
        Sleep(1000);
        cout << "So A is for Addition" << endl;
        Sleep(1000);
        cout << "So S is for Substraction" << endl;
        Sleep(1000);
        cout << "So we prioritize P, Then E, then M and D, after that A and S" << endl;
        Sleep(1000);
        cout << "0.Back to Main Menu" << endl;
        cin >> pemdas;
    }
}


// Function to handle Calculator option
void handleCalculator() {
    int calc;
    while (calc != 0) {
        double num1,num2;
        char op;
        cout << "If you are in africa, you will be standing outside for using calculator yo!" << endl;
        Sleep(2500);
        cout << "Fine, I will allow you!" << endl;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operator(+,-,*,/): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        double result;
        switch(op) {
            case '+':
                result = num1 + num2;
                cout << result;
                break;
            
            case '-':
                result = num1 - num2;
                cout << result;
                break;

            case '*':
                result = num1 * num2;
                cout << result;
                break;

            case '/':
                result = num1 / num2;
                cout << result;
                break;

            default:
                cout << "This boy, What are you doing" << endl;
                return; // Exiting program due to invalid operator
        }
        cout << endl;
        cout << "0.Back to Main Menu" << endl;
        cin >> calc;
    }
}
void Geometry(){
    
}
int main(){
    cout << "Welcome to the Petruk Hotline" << endl;
    Sleep(1000);  
    int option = -1; // Initialize option with an invalid value

    while (option != 0) {
        displayWelcomeMessage();
        cin >> option;

        switch(option) {
            case 1:
                handleSequence();
                break;

            case 2:
                handlePEMDAS();
                break;

            case 3:
                handleCalculator();
                break;

            case 0:
                cout << "Okay, so we are done, Go home!" << endl;
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid option selected" << endl;
                break;
        }
    }

    return 0;
}
