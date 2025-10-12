#include <iostream>
using namespace std;

int main(){

int choice;
float area;

do {
cout <<""<<endl;
cout <<"-------Area Calculator---------\n";
cout <<"1.radius\n";
cout <<"2.triangle\n";
cout <<"3.square\n";
cout <<"4.rectangle\n";
cout <<"5.Exit\n";

cout << "Enter choice number: ";
cin >> choice;

switch(choice){

case 1:
    int r;
    cout << "Enter the value of radius: ";
    cin >> r;

    area= 3.1416*r*r;
    cout<<"\nThe Area of a radius: "<<area<<endl;
    break;

case 2:
    int a,b;
    cout << "Enter the value of height: ";
    cin >> a;

    cout << "Enter the value of base: ";
    cin >> b;

    area = 0.5*a*b;
    cout<<"\nThe Area of a triangle:"<<area<<endl;
    break;

case 3:
    int s;
    cout << "Enter the value of edge: ";
    cin >> s;

    area = s*s;
    cout<<"\nThe Area of a square:"<<area<<endl;
    break;

case 4:
    int w,l;
    cout << "Enter the value of length: ";
    cin >> l;

    cout << "Enter the value of width: ";
    cin >> w;

    area = l*w;
    cout<<"\nThe Area of a rectangle:"<<area<<endl;
    break;
case 5:
    cout << "\nExist from the program\n";
    break;

default:
    cout <<"\n Invalid! You press a wrong number. Please, enter a number between 1 to 4. Thanks for your patience."<<endl;

}

}while(choice!=5);
}
