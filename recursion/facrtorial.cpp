#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(int n){
    int sum;

    //base condition to terminat the recursion when N=0
    if (n==0 || n==1){
        return 1;
    }

    else{
        sum = sum * fact(n-1);
    }
    return 0;
}
int main()
{
    int n,sum;
    cout << "Enter a number n: ";
    cin >> n;

    sum=fact(n);
    cout << "The sum of numbers is: ";
    cout << sum << endl;
    return 0;
}