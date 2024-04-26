#include<iostream>
#include<Windows.h>
#include<cmath>

using namespace std;

// Function to display the welcome message
void displayWelcomeMessage() {
    cout << "Please select an option" << endl;
    Sleep(1000);
    cout << "1.Sequence, 2.PEMDAS, 3.Calculator, 4.Geometry, 5.Angles, 6.Pytagoras, 7.Quadratic,0.Exit" << endl;
}

// Function to handle Sequence option
void handleSequence() {
    int sequence;
    while (sequence != 0) {
        cout << "What do you want me to help you with in Sequence?" << endl;
        Sleep(1500);  
        cout << "1.Definition, 2.Calculator, 0.Back to Main Menu" << endl;
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
                cout << "BOY!, You enter the wrong number, there are ONLY 2 NUMBER HOW DID YOU MESSED UP" << endl;
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

// Function to handle Geometry option
void handleGeometry() {
    int geometry;
    bool exitGeometry = false;  // Flag to control exiting the geometry menu

    while (!exitGeometry) {
        cout << "What do you want me to help you with in Geometry?" << endl;
        Sleep(1500);  
        cout << "1. Circle, 2. Triangle, 3. Rectangle, 4. Pentagon, 5. Hexagon, 6. Heptagon, 7. Octagon, 8. Nonagon, 9. Decagon, 0. Back to Main Menu" << endl;
        cin >> geometry;

        switch(geometry) {
            case 1: {
                // Circle calculations
                int option;
                double radius, perimeter, area;
                const double pi = 3.14159;
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = 2 * pi * radius;
                        cout << "Perimeter of the circle: " << perimeter << endl;
                        break;
                    
                    case 2:
                        area = pi * radius * radius;
                        cout << "Area of the circle: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 2: {
                // Triangle calculations
                int triangleOption;
                double side1, side2, side3, perimeter, area, base, height, s;
                cout << "Enter the lengths of the three sides of the triangle: ";
                cin >> side1;
                cout << "Enter another the lengths of the three sides of the triangle: ";
                cin >> side2;
                cout << "Enter another the lengths of the three sides of the triangle: ";
                cin >> side3;               
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "1. Calculate Perimeter\n2. Calculate Area(without height)\n3. Calculate Area\n0. Back to Menu" << endl;
                cin >> triangleOption;

                switch(triangleOption) {
                    case 1:
                        perimeter = side1 + side2 + side3;
                        cout << "Perimeter of the triangle: " << perimeter << endl;
                        break;
                    case 2:
                        perimeter = side1 + side2 + side3; // Calculate perimeter first
                        s = perimeter / 2;
                        area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula
                        cout << "Area of the triangle: " << area << endl;
                        break;
                    case 3:
                        area = (base * height) / 2;
                        cout << "Area of the triangle: " << area << endl;
                    break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 4 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;

                }
                break;
            }

            case 3: {
                // Rectangle calculations
                int option;
                double length, width, perimeter, area;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = 2 * (length + width);
                        cout << "Perimeter of the rectangle: " << perimeter << endl;
                        break;
                    
                    case 2:
                        area = length * width;
                        cout << "Area of the rectangle: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 4: {
                // Pentagon calculations
                int option, sides = 5;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the pentagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the pentagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        area = 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * sideLength * sideLength; // Regular pentagon area formula
                        cout << "Area of the pentagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there areee ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 5: {
                // Hexagon calculations
                int option, sides = 6;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the hexagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the hexagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        area = 3 * sqrt(3) / 2 * sideLength * sideLength; // Regular hexagon area formula
                        cout << "Area of the hexagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 6: {
                // Heptagon calculations
                int option, sides = 7;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the heptagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the heptagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        // Regular heptagon area formula is quite complex, using approximation for simplicity
                        area = 3.63391 * sideLength * sideLength; 
                        cout << "Area of the heptagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 7: {
                // Octagon calculations
                int option, sides = 8;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the octagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the octagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        area = 2 * (1 + sqrt(2)) * sideLength * sideLength; // Regular octagon area formula
                        cout << "Area of the octagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 8: {
                // Nonagon calculations
                int option, sides = 9;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the nonagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the nonagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        // Regular nonagon area formula is quite complex, using approximation for simplicity
                        area = 6.18182 * sideLength * sideLength; 
                        cout << "Area of the nonagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 9: {
                // Decagon calculations
                int option, sides = 10;
                double sideLength, perimeter, area;
                cout << "Enter the length of each side of the decagon: ";
                cin >> sideLength;

                cout << "1. Calculate Perimeter\n2. Calculate Area\n0. Back to Menu" << endl;
                cin >> option;

                switch(option) {
                    case 1:
                        perimeter = sides * sideLength;
                        cout << "Perimeter of the decagon: " << perimeter << endl;
                        break;
                    
                    case 2:
                        // Regular decagon area formula is quite complex, using approximation for simplicity
                        area = 2.5 * (1 + sqrt(5)) * sideLength * sideLength; 
                        cout << "Area of the decagon: " << area << endl;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "BOY!, You enter the wrong number, there are ONLY 3 NUMBER HOW DID YOU MESSED UP" << endl;
                        break;
                }
                break;
            }

            case 0:
                exitGeometry = true;  // Set the flag to true to exit the geometry menu
                break;

            default:
                cout << "BOY!, You enter the wrong number, there are ONLY 10 NUMBER HOW DID YOU MESSED UP" << endl;
                break;
        }
    }
}

// Function to handle Angles option
void handleAngles(){
    int sides;
    double sumOfInteriorAngles;
    cout << "Enter the number of sides of the polygon: ";
    cin >> sides;
    
    sumOfInteriorAngles = (sides - 2) * 180.0;
    cout << "Sum of Interior Angles of the polygon: " << sumOfInteriorAngles << " degrees" << endl;
}

// Function to handle Pythagoras option
void handlePythagoras() {
    int option;
    while(option != 0){
        cout << "Choose an option:" << endl;
        cout << "1. Find side C (hypotenuse)" << endl;
        cout << "2. Find side A or B" << endl;
        cout << "0.Exit" << endl;
        cin >> option;

        switch(option) {
            case 1: {
                double sideA, sideB, hypotenuse;

                cout << "Enter the length of side A: ";
                cin >> sideA;

                cout << "Enter the length of side B: ";
                cin >> sideB;

                // Pythagorean theorem: c^2 = a^2 + b^2
                hypotenuse = sqrt(sideA * sideA + sideB * sideB);

                cout << "The length of the hypotenuse (side C) is: " << hypotenuse << endl;
                break;
            }
            case 2: {
                double sideA, sideC, sideB;

                cout << "Enter the length of side A: ";
                cin >> sideA;

                cout << "Enter the length of the hypotenuse (side C): ";
                cin >> sideC;

                // Pythagorean theorem: a^2 = c^2 - b^2
                // Solve for side B
                sideB = sqrt(sideC * sideC - sideA * sideA);

                cout << "The length of side B is: " << sideB << endl;
                break;
            case 0:
                break;
            }
            default:
                cout << "Invalid option selected" << endl;
                break;
        }
    }
}

// Function to handle Quadratic option
void handleQuadratic() {
    double a, b, c;
    cout << "Enter the coefficients a: ";
    cin >> a;
    cout << "Enter the coefficients b: ";
    cin >> b;
    cout << "Enter the coefficients c: ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots of the quadratic equation are: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root of the quadratic equation is: " << root << endl;
    } else {
        cout << "The quadratic equation has complex roots." << endl;
        // Calculate and display the real and imaginary parts of the roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots of the quadratic equation are: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    cout << "The discriminant is " << discriminant << endl;
}

// The main function
int main(){
    cout << "Welcome to the Petruk Hotline" << endl;
    cout << "Everything is inside of me" << endl;
    cout << "So ask me anything" << endl;
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

            case 4:
                handleGeometry();
                break;

            case 5:
                handleAngles();
                break;

            case 6:
                handlePythagoras();
                break;

            case 7:
                handleQuadratic();
                break;

            case 0:
                cout << "Okay, so we are done, Go home!" << endl;
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "BOY!, You enter the wrong number, there are ONLY A FEW NUMBER HOW DID YOU MESSED UP" << endl;
                break;
        }
    }

    return 0;
}
