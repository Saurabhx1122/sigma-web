#include <iostream>
#include <iomanip>
using namespace std;

int main (){
// int a = 35;
// cout<<"the value of a was: "<<a<<endl;
// a = 45;
// cout<<"the value of a is: "<<a<<endl;

// constants of c++

// const int a = 35; // you cant change constants variables
// cout<<"the value of a was: "<<a<<endl;
// a = 30; // you will get an error because a is constants.
// cout<<"the value of a is:  "<<a<<endl;

//manipilator endl, setw using '#include <iomanip>'

int a = 3, b = 484, c = 66665;
cout<<"the value of a without setw is: "<<a<<endl;
cout<<"the value of b without setw is: "<<b<<endl;
cout<<"the value of c without setw is: "<<c<<endl;

cout<<"the value of a  is: "<<setw(5)<<a<<endl;
cout<<"the value of b  is: "<<setw(5)<<b<<endl;
cout<<"the value of c  is: "<<setw(5)<<c<<endl;

return 0;
     
}