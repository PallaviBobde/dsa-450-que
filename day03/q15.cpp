// Que - Next Permutation

#include<iostream>
using namespace std;

int nextPermutation(int A[],int size){
    int k;

    for(int i=n-2;i>0;i++){
        if(arr[i] > arr[i+1]){
            k = i;
        }
        else{
            reverse(arr,)
        }
    }
}

// 1 2 3


int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<nextPermutation(arr,N);
    return 0;
}