#include <iostream>
#include <string.h>
using namespace std;

//File
FILE *fpt;
char user[20],pass[10];

//Class
class SystemGame{
    public:
        SystemGame(){cout << "Welcome to makao 888!!\n";} //Constructor
};

//class Login
class LoginSystem{
    public : 
        int ask_signup();
        int Login();
        int SignUP();
};

int LoginSystem::ask_signup(){
    int choice,control = 0;
    do{      
        cout << "1. Login\n2. Sign up\n3. Guest\n0. Exit\n";
        cout << "Select : ";cin >> choice;
        switch(choice){
            case 0:
                return 0;
            case 1:
                control = Login();
                if(control == 1)return 1;
                break;
            case 2:
                control = SignUP();
                if(control == 1)return 1;
                break;
            case 3:
                //function Guest
                break;
            default:
                cout << "Invalid ur choice !\n";
        }
    }while(choice != 0);
    return control;
}
//Sign UP
int LoginSystem::SignUP(){   
    char confirm;
    fpt = fopen("userlogin.txt","a+");
    
    cout << "---- SignUP ----\n";
    cout << "New Username : ";cin >> user;
    cout << "New Password : ";cin >> pass;
    cout << "Confirm (Y) ? : ";cin >> confirm;
    fprintf(fpt,"%s\n%s\n",user,pass);
    cout << "User data saved !\n";
    fclose(fpt);
    return 1;
    
}

int LoginSystem::Login(){
    char usercheck[20],loguser[20],passcheck[10],passuser[10];
    fpt = fopen("userlogin.txt", "r");
    
    cout << "---- Login ----\n";
    cout << "Username : ";cin >> loguser;
    cout << "Password : ";cin >> passuser;
    
    while(fscanf(fpt,"%s",usercheck) && fscanf(fpt,"%s",passcheck)){
        if(strcmp(loguser,usercheck) == 0 && strcmp(passuser,passcheck) == 0){
            cout << "Login success !! \n";
            fclose(fpt);
            return 1;
        }
        if(feof(fpt)){
            cout << "Username or Password invalid !!\n";
            fclose(fpt);
            return 0;
        }
    }
    fclose(fpt);
}

int main() {
    int control ;
    SystemGame sys;
    LoginSystem log;
    control = log.ask_signup();
    if(control != 0){
        cout << "Welcome "<< user << endl;
    }
}
