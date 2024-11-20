#include<iostream>

using namespace std;

int addition(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int modulo(int a,int b){
    return a%b;
}

void loops(int a, int b, int value){
        do{
        
        cout <<"Press 1 for +" <<endl;
        cout <<"Press 2 for -" <<endl;
        cout <<"Press 3 for *" <<endl;
        cout <<"Press 4 for /" <<endl;
        cout <<"Press 5 for %" <<endl;
        cout <<"Press 0 for the exit" <<endl <<endl;
        cout << "Enter your choice :" ;
        cin >> value;
        cout << "Enter the first number : " ;
        cin >> a ;
        cout << "Enter the second number : ";
        cin >> b;

        switch(value){
            case 1: 
                cout <<endl <<"addition of " <<a << " and " << b << " is "<<  addition(a,b) << endl <<endl;
            break;
            
            case 2: 
                cout <<endl <<"subtraction of " <<a << " and " << b << " is "<<  subtraction(a,b) << endl<<endl;
            break;
            
            case 3: 
                cout <<endl <<"multiplication of " <<a << " and " << b << " is "<<  mult(a,b) << endl<<endl;
            break;
            case 4: 
                cout <<endl <<"division of " <<a << " and " << b << " is "<<  division(a,b) << endl<<endl;
            break;
            case 5: 
                cout <<endl <<"modulo of " <<a << " and " << b << " is "<<  modulo(a,b) << endl <<endl;
            break;
            default:
             cout << "Enter valid number" << endl <<endl;
        }
    }while(value !=0);
}

int main(){

    int a,b;
    int value;
      loops( a, b, value);
        
  
}