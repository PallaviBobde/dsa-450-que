// Que - Find the "kth" max and min element of an array

#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
    int N,K;
    // take array size and k as input
    cin>>N>>K;

    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+N);

    cout<<"Kth max element : "<<arr[N-K]<<"\n";
    cout<<"Kth min element : "<<arr[K-1]<<"\n";
    return 0;
}