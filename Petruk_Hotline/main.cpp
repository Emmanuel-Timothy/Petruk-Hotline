#include<iostream>
#include<Windows.h>

using namespace std;

int main(){
    int option;
    cout<<"Welcome to the Petruk Hotline" << endl;
    Sleep(1000);  
    cout<<"Please select an option" << endl;
    Sleep(1000);  
    cout<<"1.Sequence, 2.PEMDAS" << endl;
    cin>>option;
    
    if(option == 1){
        cout << "What do you want me to help you with in Sequence?" << endl;
        Sleep(1000);  
        cout << "1.Definition?, 2.Calculator" << endl;
        int sequence;
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
        }
    }
    
    return 0;  
}
