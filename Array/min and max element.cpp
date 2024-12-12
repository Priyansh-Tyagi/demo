#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int arr[5]={7,3,8,9,2};
    int result = arr[0];
    int min = arr[0];

    for (int i=0;i<5;i++){
        if (arr[i]>result){
            result=arr[i];
        }
    }

    
    for (int i=0;i<5;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }

    
    cout << "greatest number is: ";
    cout << result << endl;

    cout << "Smallest number is: ";
    cout << min;

    return 0;
}