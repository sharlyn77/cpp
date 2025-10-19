#include <iostream>
using namespace std;

int main(){

int choice;
float area;

do {
cout <<""<<endl;
cout <<"-------tempareture Converter--------\n";
cout <<"1.celcious to Fahrenheit\n";
cout <<"2.Fahrenheit to celcious\n";
cout <<"3.celcious to kelvin\n";
cout <<"4.kelvin to celcious  \n";
cout <<"5.exit  \n";


cout << "Enter choice number: ";
cin >> choice;

switch(choice){

case 1:
    float Fahrenheit,celcious;
    cout << "the value of celcious to: ";
    cin >> celcious;

    Fahrenheit = (celcious * 9/5) + 32 ;
    cout<<"\nThe value of a Fahrenheit: "<<Fahrenheit<<endl;
    break;

case 2:
    float fahrenheit;
    cout <<"the value of Fahrenheit :";
    cin >> fahrenheit;

    celcious = (5.0/9.0)*(fahrenheit-32);
    cout <<"\nThe value of celcious:"<<celcious<<endl;
    break;

case 3:
    float kelvin;
    cout <<"the value of celcious  :";
    cin >> celcious;

    kelvin = celcious + 273.15;
    cout <<"\nThe value of kelvin:"<<kelvin<<endl;
    break;

case 4:
    cout <<"the value of kelvin   :";
    cin >> kelvin;

    celcious = kelvin - 273.15 ;
    cout <<"\nThe value of celcious:"<<celcious<<endl;
    break;

case 5:
    cout <<"\nexit from the program\n:"<<exit<<endl;
    break;


default:
    cout <<"\n Invalid! You press a wrong number. Please, enter a valid number. Thanks for your patience."<<endl;

}

}while(choice!=5);


}
