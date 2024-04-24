#include<iostream>
#include<Windows.h>

using namespace std;

int main(){
    int option;
    cout<<"Welcome to the Petruk Hotline" << endl;
    Sleep(1);
    cout<<"Please select an option" << endl;
    Sleep(1);
    cout<<"1.Sequence, 2.PEMDAS" << endl;
    cin>>option;
    if(option == 1){
        cout << "What you want me to help you with in Sequence?" << endl;
        Sleep(1);
        cout << "1.Definition?, 2.Calculator" << endl;
        int option2;
        cin >> option2;
        if(option2 == 1){
            cout << "A sequence is basically an ordered list with a certain rule!" << endl;
    }else if(option == 2){

    }
}
}