#include<iostream>
#include<Windows.h>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<unordered_map>

using namespace std;

// Function to display the welcome message
void displayWelcomeMessage() {
    cout << "Please select an option" << endl;
    Sleep(1000);
    cout << "1.Sequence, 2.PEMDAS, 3.Calculator, 4.Geometry, 5.Angles, 6.Trigonometry, 7.Quadratic, 8.Statistic, 9.Probability , 0.Exit" << endl;
}

// Function to handle Sequence option
void handleSequence() {
    int sequence = -1;
    while (sequence != 0) {
        cout << "What do you want me to help you with in Sequence?" << endl;
        Sleep(1500);  
        cout << "1.Definition, 2.Calculator, 0.Back to Main Menu" << endl;
        cin >> sequence;

        if(sequence == 1){
            cout << "What is sequence!?" << endl;
            Sleep(2000);
            cout << "I will chop your head off yo!" << endl;
            Sleep(2500);
            cout << "fine I will help you" << endl;
            Sleep(1000);
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

// Function to handle weight option
void handleWeight() {
    cout << "Well, I'm not an expert in this, but because it's math, I can calculate your ideal weight." << endl;
    cout << "BMI under 18.5 is underweight, 18.5-25 is normal, 25-30 is overweight, the rest is obese" << endl;
    double height;
    double weight;

    cout << "Enter your height in meter: ";
    cin >> height;
    cout << "Enter your weight in kilogram: ";
    cin >> weight;
    double bmi = weight / (height * height);

    string status;
    if (bmi < 18.5) {
        status = "Underweight";
    } else if (bmi < 25) {
        status = "Normal weight";
    } else if (bmi < 30) {
        status = "Overweight";
    } else {
        status = "Obese";
    }

    cout << "Your BMI is: " << bmi << endl;
    cout << "You are considered: " << status << endl;
}

// Function to handle Calculator option
void handleCalculator() {
    int calc;
    while (calc != 0) {
        cout << "Choose an option:" << endl;
        cout << "1. Arithmetic Calculation" << endl;
        cout << "2. Weight Calculation" << endl;
        cout << "0. Back to Main Menu" << endl;
        cin >> calc;

        switch(calc) {
            case 1: {
                double num1, num2;
                char op;
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
                        if (num2 != 0) {
                            result = num1 / num2;
                            cout << result;
                        } else {
                            cout << "Division by zero is not allowed";
                        }
                        break;

                    default:
                        cout << "Invalid operator";
                        break;
                }
                cout << endl;
                break;
            }
            case 2: {
                handleWeight(); // Call the handleWeight function
                break;
            }
            case 0:
                cout << "Returning to Main Menu..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }
}

// Function to handle Geometry option
void handleGeometry() {
    int geometry;
    bool exitGeometry = false;  // Flag to control exiting the geometry menu

    while (!exitGeometry) {
        cout << "What do you want me to help you with in Geometry?" << endl;
        cout << "1. Circle, 2. Triangle, 3. Rectangle, 4. Kite, 5. Parallelogram, 6. Trapezium, 7. Prism, 8. Pyramid, 9. Ball, 0. Back to Main Menu" << endl;
        cin >> geometry;

        switch(geometry) {
            case 1: {
                // Circle calculations
                double radius, perimeter, area;
                const double pi = 3.14159;
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                perimeter = 2 * pi * radius;
                cout << "Perimeter of the circle: " << perimeter << endl;

                area = pi * radius * radius;
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 2: {
                // Triangle calculations
                double side1, side2, side3, perimeter, area;
                cout << "Enter the lengths of the three sides of the triangle: ";
                cin >> side1 >> side2 >> side3;

                perimeter = side1 + side2 + side3;
                cout << "Perimeter of the triangle: " << perimeter << endl;

                // Heron's formula for area
                double s = perimeter / 2;
                area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                // Rectangle calculations
                double length, width, perimeter, area;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;

                perimeter = 2 * (length + width);
                cout << "Perimeter of the rectangle: " << perimeter << endl;

                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
                break;
            }
            case 4: {
                // Kite calculations
                // Implement calculations for kite
                cout << "Kite calculations are not implemented yet." << endl;
                break;
            }
            case 5: {
                // Parallelogram calculations
                // Implement calculations for parallelogram
                cout << "Parallelogram calculations are not implemented yet." << endl;
                break;
            }
            case 6: {
                // Trapezium calculations
                // Implement calculations for trapezium
                cout << "Trapezium calculations are not implemented yet." << endl;
                break;
            }
            case 7: {
                // Prism calculations
                int prismType;
                cout << "Select prism type: 1. Cylinder, 2. Square Prism, 3. Triangular Prism: ";
                cin >> prismType;

                switch (prismType) {
                    case 1: {
                        // Cylinder calculations
                        double radius, height, surfaceArea, volume;
                        const double pi = 3.14159;
                        cout << "Enter the radius of the cylinder: ";
                        cin >> radius;
                        cout << "Enter the height of the cylinder: ";
                        cin >> height;

                        surfaceArea = 2 * pi * radius * (radius + height);
                        cout << "Surface area of the cylinder: " << surfaceArea << endl;

                        volume = pi * radius * radius * height;
                        cout << "Volume of the cylinder: " << volume << endl;
                        break;
                    }
                    case 2: {
                        // Square prism calculations
                        double sideLength, height, surfaceArea, volume;
                        cout << "Enter the side length of the square prism: ";
                        cin >> sideLength;
                        cout << "Enter the height of the square prism: ";
                        cin >> height;

                        surfaceArea = 2 * (sideLength * sideLength) + 4 * sideLength * height;
                        cout << "Surface area of the square prism: " << surfaceArea << endl;

                        volume = sideLength * sideLength * height;
                        cout << "Volume of the square prism: " << volume << endl;
                        break;
                    }
                    case 3: {
                        // Triangular prism calculations
                        double base, height, surfaceArea, volume;
                        cout << "Enter the base length of the triangular prism: ";
                        cin >> base;
                        cout << "Enter the height of the triangular prism: ";
                        cin >> height;

                        surfaceArea = base * base * sqrt(3) + 3 * base * height;
                        cout << "Surface area of the triangular prism: " << surfaceArea << endl;

                        volume = (base * base * height) / 2;
                        cout << "Volume of the triangular prism: " << volume << endl;
                        break;
                    }
                    default:
                        cout << "Invalid prism type." << endl;
                        break;
                }
                break;
            }
            case 8: {
                // Pyramid calculations
                int pyramidType;
                cout << "Select pyramid type: 1. Cone, 2. Square Pyramid: ";
                cin >> pyramidType;

                switch (pyramidType) {
                    case 1: {
                        // Cone calculations
                        double radius, height, surfaceArea, volume;
                        const double pi = 3.14159;
                        cout << "Enter the radius of the cone: ";
                        cin >> radius;
                        cout << "Enter the height of the cone: ";
                        cin >> height;

                        surfaceArea = pi * radius * (radius + sqrt(height * height + radius * radius));
                        cout << "Surface area of the cone: " << surfaceArea << endl;

                        volume = (pi * radius * radius * height) / 3;
                        cout << "Volume of the cone: " << volume << endl;
                        break;
                    }
                    case 2: {
                        // Square pyramid calculations
                        double baseLength, height, surfaceArea, volume;
                        cout << "Enter the base length of the square pyramid: ";
                        cin >> baseLength;
                        cout << "Enter the height of the square pyramid: ";
                        cin >> height;

                        surfaceArea = baseLength * baseLength + 2 * baseLength * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
                        cout << "Surface area of the square pyramid: " << surfaceArea << endl;

                        volume = (baseLength * baseLength * height) / 3;
                        cout << "Volume of the square pyramid: " << volume << endl;
                        break;
                    }
                    default:
                        cout << "Invalid pyramid type." << endl;
                        break;
                }
                break;
            }
            case 9: {
                // Ball calculations
                double radius, surfaceArea, volume;
                const double pi = 3.14159;
                cout << "Enter the radius of the ball: ";
                cin >> radius;

                surfaceArea = 4 * pi * radius * radius;
                cout << "Surface area of the ball: " << surfaceArea << endl;

                volume = (4.0 / 3.0) * pi * radius * radius * radius;
                cout << "Volume of the ball: " << volume << endl;
                break;
            }
            case 0:
                exitGeometry = true;  // Set the flag to true to exit the geometry menu
                break;
            default:
                cout << "Invalid option selected." << endl;
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
void handleTrigonometry() {
    int option = -1;
    while(option != 0){
        cout << "Choose an option:" << endl;
        cout << "1. Find side C (hypotenuse)" << endl;
        cout << "2. Find side A or B" << endl;
        cout << "3. Calculate sine" << endl;
        cout << "4. Calculate cosine" << endl;
        cout << "5. Calculate tangent" << endl;
        cout << "6. Calculate reciprocal of sine" << endl;
        cout << "7. Calculate reciprocal of cosine" << endl;
        cout << "8. Calculate reciprocal of tangent" << endl;
        cout << "9. Calculate using lengths" << endl; // New option
        cout << "0. Exit" << endl;
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

                // Pythagorean theorem: b^2 = c^2 - a^2
                // Solve for side B
                sideB = sqrt(sideC * sideC - sideA * sideA);

                cout << "The length of side B is: " << sideB << endl;
                break;
            }
            case 3: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double sine = sin(angle * M_PI / 180); // Convert degrees to radians
                cout << "The sine of " << angle << " degrees is: " << sine << endl;
                break;
            }
            case 4: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double cosine = cos(angle * M_PI / 180); // Convert degrees to radians
                cout << "The cosine of " << angle << " degrees is: " << cosine << endl;
                break;
            }
            case 5: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double tangent = tan(angle * M_PI / 180); // Convert degrees to radians
                cout << "The tangent of " << angle << " degrees is: " << tangent << endl;
                break;
            }
            case 6: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double sine = sin(angle * M_PI / 180); // Convert degrees to radians
                double reciprocal_sine = 1 / sine;
                cout << "The reciprocal of sine(" << angle << " degrees) is: " << reciprocal_sine << endl;
                break;
            }
            case 7: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double cosine = cos(angle * M_PI / 180); // Convert degrees to radians
                double reciprocal_cosine = 1 / cosine;
                cout << "The reciprocal of cosine(" << angle << " degrees) is: " << reciprocal_cosine << endl;
                break;
            }
            case 8: {
                double angle;
                cout << "Enter the angle in degrees: ";
                cin >> angle;
                double tangent = tan(angle * M_PI / 180); // Convert degrees to radians
                double reciprocal_tangent = 1 / tangent;
                cout << "The reciprocal of tangent(" << angle << " degrees) is: " << reciprocal_tangent << endl;
                break;
            }
            case 9: {
                double sideA, sideB;

                cout << "Enter the length of side A: ";
                cin >> sideA;

                cout << "Enter the length of side B: ";
                cin >> sideB;

                double angleA = asin(sideA / sideB) * 180 / M_PI; // Calculate angle A in degrees
                double angleB = asin(sideB / sideA) * 180 / M_PI; // Calculate angle B in degrees

                cout << "Angle A: " << angleA << " degrees" << endl;
                cout << "Angle B: " << angleB << " degrees" << endl;
                break;
            }
            case 0:
                break;
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

// Function to handle Probability option
void handleProbability() {
    int option;
    while (option != 0) {
        cout << "Choose a probability calculation:" << endl;
        cout << "1. Permutation (P(n, r))" << endl;
        cout << "2. Combination (C(n, r))" << endl;
        cout << "3. Cyclic Permutations (siklis)" << endl;
        cout << "4. Definition" << endl;
        cout << "0. Back to Main Menu" << endl;
        cin >> option;

        switch(option) {
            case 1: {
                int n, r;
                cout << "Enter the total number of items (n): ";
                cin >> n;
                cout << "Enter the number of items to choose (r): ";
                cin >> r;

                if (n < r) {
                    cout << "Invalid input: n should be greater than or equal to r." << endl;
                } else {
                    // Calculate permutation: P(n, r) = n! / (n - r)!
                    long long permutation = 1;
                    for (int i = 0; i < r; ++i) {
                        permutation *= (n - i);
                    }
                    cout << "Permutation (P(" << n << ", " << r << ")) = " << permutation << endl;
                }
                break;
            }
            case 2: {
                int n, r;
                cout << "Enter the total number of items (n): ";
                cin >> n;
                cout << "Enter the number of items to choose (r): ";
                cin >> r;

                if (n < r) {
                    cout << "Invalid input: n should be greater than or equal to r." << endl;
                } else {
                    // Calculate combination: C(n, r) = n! / (r! * (n - r)!)
                    long long combination = 1;
                    for (int i = 1; i <= r; ++i) {
                        combination *= (n - i + 1);
                        combination /= i;
                    }
                    cout << "Combination (C(" << n << ", " << r << ")) = " << combination << endl;
                }
                break;
            }
            case 3: {
                int n;
                cout << "Enter the number of items (n): ";
                cin >> n;

                // Calculate cyclic permutations: (n - 1)!
                long long cyclicPermutations = 1;
                for (int i = 1; i <= n - 1; ++i) {
                    cyclicPermutations *= i;
                }
                cout << "Cyclic Permutations (siklis) = " << cyclicPermutations << endl;
                break;
            }
            case 4: {
                cout << "I WILL FINISH YOU!" << endl;
                Sleep(2500);
                cout << "Just kidding" << endl;
                Sleep(1000);
                cout << "Commutative Property: It means you can add or multiply numbers in any order without changing the result." << endl;
                Sleep(1000);
                cout << "Cyclic Property: In a group, there's an element where repeatedly applying an operation generates all other elements." << endl;
                Sleep(1000);
                cout << "Permutation: It's the arrangement of objects in a specific order, commonly used in combinatorics and algorithms." << endl;
                Sleep(1000);
            }
            case 0:
                break;
            default:
                cout << "Invalid option selected." << endl;
                break;
        }
    }
}

// Function to handle statistics calculations (mean, median, mode)
void handleStatistics() {
    int option = -1;
    while (option != 0) {
        cout << "Choose a statistical calculation:" << endl;
        cout << "1. Mean" << endl;
        cout << "2. Median" << endl;
        cout << "3. Mode" << endl; // Changed from "Average" to "Mode"
        cout << "0. Back to Main Menu" << endl;
        cin >> option;

        switch(option) {
            case 1: {
                // Mean calculation
                int n;
                cout << "Enter the number of elements: ";
                cin >> n;
                
                vector<int> nums(n);
                cout << "Enter " << n << " numbers: "<< endl;
                for (int i = 0; i < n; ++i) {
                    cin >> nums[i];
                }

                double mean = accumulate(nums.begin(), nums.end(), 0) / static_cast<double>(n);
                cout << "Mean: " << mean << endl;
                break;
            }
            case 2: {
                // Median calculation
                int n;
                cout << "Enter the number of elements: ";
                cin >> n;
                
                vector<int> nums(n);
                cout << "Enter " << n << " numbers: "<< endl;
                for (int i = 0; i < n; ++i) {
                    cin >> nums[i];
                }

                sort(nums.begin(), nums.end());
                double median;
                if (n % 2 == 0) {
                    median = (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
                } else {
                    median = nums[n / 2];
                }
                cout << "Median: " << median << endl;
                break;
            }
            case 3: {
                // Mode calculation
                int n;
                cout << "Enter the number of elements: ";
                cin >> n;
                
                vector<int> nums(n);
                cout << "Enter " << n << " numbers: "<< endl;
                for (int i = 0; i < n; ++i) {
                    cin >> nums[i];
                }

                unordered_map<int, int> frequencyMap;
                for (int num : nums) {
                    frequencyMap[num]++;
                }

                int maxFrequency = 0;
                vector<int> modes;
                for (auto& pair : frequencyMap) {
                    if (pair.second > maxFrequency) {
                        maxFrequency = pair.second;
                        modes = {pair.first};
                    } else if (pair.second == maxFrequency) {
                        modes.push_back(pair.first);
                    }
                }

                if (modes.size() == 1) {
                    cout << "Mode: " << modes[0] << endl;
                } else {
                    cout << "Modes:";
                    for (int mode : modes) {
                        cout << " " << mode;
                    }
                    cout << endl;
                }
                break;
            }
            case 0:
                cout << "Returning to Main Menu..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }
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
                handleTrigonometry();
                break;

            case 7:
                handleQuadratic();
                break;

            case 8:
                handleStatistics();
                break;

            case 9:
                handleProbability();
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
