#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(int n){

    //base condition to terminat the recursion when N=0
    if (n==0 || n==1){
        return 1;
    }

    else{
        return  n* fact(n-1);
    }
}
int main()
{
    int n,result;
    cout << "Enter a number n: ";
    cin >> n;

    result=fact(n);
    cout << "The sum of numbers is: ";
    cout << result << endl;
    return 0;
}