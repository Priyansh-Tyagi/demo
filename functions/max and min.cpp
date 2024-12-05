#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function for max integer
int max(int a, int b){
    if (a<b){
        cout << "B is greatest";
    }
    else{
        cout << "A is greatest";
    }
    return 0;
}


//function for min integer
int min(int a , int b){
    if (a<b){
        cout << "A is Minimum";
    }
    else{
        cout << "B is minimum";
    }
    return 0;
}

//taking input and calling both functions
int main(){
    int a ,b;

    cout << "Enter value of A ";
    cin >> a;
    cout << "Enter value of B " ;
    cin >> b;

    max(a,b);
    min(a,b);

    return 0;

}
