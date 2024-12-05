#include<iostream>
using namespace std;

int main(){
    int var = 20;
    int *ip;

    ip = &var;
    
    //print value at var
    cout << "Value of var variable: ";
    cout << var << endl;

    //print address of var
    cout <<"Address stored in ip variable: ";
    cout << ip << endl;

    //access value at the address of ip pointer variable
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}