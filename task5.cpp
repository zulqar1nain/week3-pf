#include <iostream>
using namespace std;
main(){

string name;
float matric1;
float matric;
float inter1;
float inter;
float ecat1;
float ecat; 
float aggregate;

cout << "my name is: ";
cin >> name;
cout << "my obtained marks in matric is: ";
cin >> matric1;
cout << "obtained inter marks is: ";
cin >> inter1;
cout << "obtained ecat marks is: ";
cin >> ecat1;
matric=matric1/1100*10;
inter=inter1/1100*40;
ecat=ecat1/400*50;
aggregate=matric+inter+ecat;
cout << "my uet aggregate: "  <<aggregate;

}

