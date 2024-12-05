#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int nsum(int n){
    //base condition to terminat the recursion when N=0
    if (n==0){
        return n;
    }

    else{
        return n + nsum(n-1);
    }
}
int main()
{
    int n,sum;
    cout << "Enter a number n: ";
    cin >> n;

    sum=nsum(n);
    cout << "The sum of numbers is: ";
    cout << sum << endl;
    return 0;
}
