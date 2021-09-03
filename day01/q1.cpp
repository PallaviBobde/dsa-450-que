// Que - Reverse the array

#include<iostream>
using namespace std;

void reverseArray(int A[],int size){
    int start=0,end=size-1;
    while(start<end){
        int temp = A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    reverseArray(arr,N);

    // print reversed array
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}