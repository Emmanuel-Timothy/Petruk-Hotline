#include<iostream>
#include<Windows.h>

using namespace std;

int main(){
    int option;
    cout<<"Welcome to the Petruk Hotline" << endl;  // Menampilkan pesan selamat datang
    Sleep(1000);  
    cout<<"Please select an option" << endl;  // Menampilkan pesan untuk memilih opsi
    Sleep(1000);  
    cout<<"1.Sequence, 2.PEMDAS, 3.Calculator" << endl;  // Menampilkan pilihan opsi
    cin>>option;
    
    if(option == 1){
        cout << "What do you want me to help you with in Sequence?" << endl;  // Menampilkan pilihan bantuan dalam Sequence
        Sleep(1500);  
        cout << "1.Definition?, 2.Calculator" << endl;  // Menampilkan pilihan definisi atau kalkulator
        int sequence;
        cin >> sequence;
        
        if(sequence == 1){
            cout << "What is sequence you ask!?" << endl;
            Sleep(500);
            cout << "I will finish you yo!" << endl;
            Sleep(1000);
            cout << "alright" << endl;
            Sleep(500);
            cout << "A sequence is basically an ordered list with a certain rule!" << endl;  // Menampilkan definisi Sequence
        }
        else if(sequence == 2){
            double operationType, multiplierDivisor, addition, initialNumber, loopCount;
            cout << "This boy, imagine using calculator!" << endl;  // Menampilkan pesan untuk menggunakan kalkulator
            Sleep(500);

            cout << "What kind of operation? 1.Multiplication, 2.Division" << endl;  // Memilih jenis operasi
            cin >> operationType;
            
            cout << "Enter the multiplication/division factor" << endl;  // Memasukkan faktor perkalian/pembagian
            cin >> multiplierDivisor;
            
            cout << "Enter the addition value" << endl;  // Memasukkan nilai penambahan
            cin >> addition;
            
            cout << "Enter the initial number" << endl;  // Memasukkan angka awal
            cin >> initialNumber;
            
            cout << "Enter how many times you want to loop it" << endl;  // Memasukkan berapa kali iterasi
            cin >> loopCount;
            
            if(operationType == 1){
                for (int i = 0; i < loopCount; i++){
                    initialNumber = initialNumber * multiplierDivisor + addition;  // Perhitungan untuk operasi perkalian
                    cout << initialNumber << endl;  // Menampilkan hasil perhitungan
                }
            }
            else if(operationType == 2){
                for (int i = 0; i < loopCount; i++){
                    initialNumber = initialNumber / multiplierDivisor + addition;  // Perhitungan untuk operasi pembagian
                    cout << initialNumber << endl;  // Menampilkan hasil perhitungan
                }
            }
        }
    }else if(option == 2){
        cout <<"See this boy" << endl;
        Sleep(2000);
        cout <<"Alright" << endl;
        Sleep(1000);
        cout <<"So PEMDAS is an acronym" << endl;
        Sleep(1000);
        cout <<"So P is for parentheses() " << endl;
        Sleep(1000);
        cout <<"So E is for Exponent " << endl;
        Sleep(1000);
        cout <<"So M is for Multiplication " << endl;
        Sleep(1000);
        cout <<"So D is for Division " << endl;
        Sleep(1000);
        cout <<"So A is for Addition " << endl;
        Sleep(1000);
        cout <<"So S is for Substraction " << endl;
        Sleep(1000);
        cout <<"So we prioritize P, Then E, then M and D, after that A and S " << endl;
    }else if(option == 3){
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
                    return 1; // Exiting program due to invalid operator
    }
}
}
