#include <iostream>
using namespace std;

int main(){

float a,b;
int choice;
do {
cout <<"\n----------Simple Calculator--------------\n";
cout <<"1.Add\n";
cout <<"2.Subtraction\n";
cout <<"3.Multiplication\n";
cout <<"4.Divition\n";
cout <<"5.exit\n";

cout << "Enter choice number: ";
cin >> choice;

cout << "Enter first number: ";
cin >> a;

cout << "Enter Second number: ";
cin >> b;

int sum, mul,sub,div;

switch(choice){

case 1:
    sum = a+b;
    cout<<"\nsum:"<<sum<<endl;

    break;

case 2:
    sub = a-b;
    cout<<"\nsub: "<<sub<<endl;

    break;

case 3:
    mul = a*b;
    cout<<"\nmul:"<<mul<<endl;

    break;

case 4:
    if (b!=0){
            div = a/b;
            cout<<"\ndiv:"<<div<<endl;
    break;
    }

 else  {
        cout << "Apologize! Any number can not be divided by zero. Enter a non zero number for the operation"<< endl;
    }
    break;

case 5:
    cout <<"\nexit from the program\n:"<<exit<<endl;
    break;

default:
    cout<<"invalid! Enter a valid number between 1-4. Thank you for your patience"<<endl;

}

} while(choice!=5);
}
