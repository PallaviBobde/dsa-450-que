// Que - Write a program to cyclically rotate an array by one

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int first = arr[0];
    for(int i=0;i<N-1;i++){
        arr[i] = arr[i+1];
    }
    arr[N-1]=first;

    // Output resultant array
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}