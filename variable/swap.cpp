#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter the second number";
    cin >> b;
    
    //swapping 
    a=a+b;
    b=a-b;
    a=a-b;

    cout << "value of a is : " << a ;
    cout << "value of b is : " << b ;


}