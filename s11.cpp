#include<iostream>
using namespace std;

int main(){

// array example
    int marks[4] = {24, 35, 40, 55};

    // cout<<"this are marks"<<endl;
    // cout<<marks[0]<<endl; 
    // cout<<marks[1]<<endl;
     marks[2] = 333; // you can change the value of any array  
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


    int mathmarks[4];

    mathmarks[0]=666; 
    mathmarks[1]=555;
    mathmarks[2]=456;
    mathmarks[3]=345;

    // cout<<"these are math marks"<<endl;
    // cout<<mathmarks[0]<<endl; 
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

// by for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    
    // by while loop
    // int i = 0;
    // while (i < 4){

    //     cout<<"the value of marks "<<i<< " is "<<marks[i]<<endl;
    //     i++;
    // }

    // by do-while loop

    //  int i = 0;
    // do
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    // array and pointer 

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    
    
    
    return 0;
}