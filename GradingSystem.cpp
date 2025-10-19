#include <iostream>
using namespace std;

int main(){

float marks;

cout << "Enter the mark: ";
cin >> marks;

if (marks >100 || marks<0){
    cout <<"You have entered a invalid mark!!!!";
}

else if (marks >= 90 && marks <= 100){
    cout << "you get A+ grade";
}

else if (marks >85 && marks <90){
    cout << "you get A grade";
 }
else if (marks > 80 && marks <= 85){
    cout << "you get B+ grade";
 }
else if (marks >75 && marks <=80){
    cout << "you get B grade";

  }

else if (marks > 70 && marks <= 75){
    cout << "you get C+ grade";
 }
else if (marks >65 && marks <70){
    cout << "you get C grade";
 }

else if (marks > 60 && marks <= 65){
    cout << "you get D+ grade";
}
else if (marks >50 && marks <55){
    cout << "you get D grade";
 }

else{
    cout << "you get F grade";

}



}
