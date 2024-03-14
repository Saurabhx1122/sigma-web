#include<iostream>
using namespace std;

 typedef struct employee  // typedef its use for shortn things like empoylee == ep 
    {
        int ID;
        char favchar;
        float salary;
    }ep; // typedef <----------

    union money
    {
        int rice;
        char car;
        float ponds;
    };
    

int main(){
    // ep harry;
    // harry. ID = 1;
    // harry. favchar = 'c'; 
    // harry. salary = 1200000;
    // cout<<"the ID is "<<harry.ID<<endl;
    // cout<<"the favchar is "<<harry.favchar<<endl;
    // cout<<"the salary is "<<harry.salary<<endl;
    
    // union money  m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice;

enum  meal {breakfast, lunch, dinner,};
meal m1 = lunch;
cout<<m1;
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
    return 0;
}