#include<iostream>
using namespace std;

int main(){

    // selection structure: if esle-if else ladder

    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    // if((age<18) &&(age>0)){
    //     cout<<"you can not come to my party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    // selection structure: Switch case  statements
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break; //"(break)"----> this helping in print only one line which we called

    case 22:
        cout<<"you are 22"<<endl;
        break;

    case 2:
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"no special case"<<endl;
        break;
    } 
    return 0;
}