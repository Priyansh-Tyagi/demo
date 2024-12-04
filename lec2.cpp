#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    if (a<b){
        cout << "B is greatest";
    }
    else{
        cout << "A is greatest";
    }
    return 0;
}

int min(int a , int b){
    if (a<b){
        cout << "A is Minimum";
    }
    else{
        cout << "B is minimum";
    }
    return 0;
}

int main(){
    int a ,b;

    cout << "Enter value of A";
    cin >> a;
    cout << "Enter value of B";
    cin >> b;

    max(a,b);
    min(a,b);

    return 0;

}