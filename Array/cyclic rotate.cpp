#include<iostream>
using namespace std;

void rotate(int arr[], int n){
    int last_el = arr[n-1];

    for (int i=n-1;i>0;i--){
        arr [i] = arr[i-1];
    }
    arr[0]=last_el; 
}
int main(){
    
    int arr[5]={5,4,6,8,1};
    int n=5;

    cout << "Original array is: \n";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    rotate(arr,n);

    
    cout << "\nrotated array is: \n";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;

}
