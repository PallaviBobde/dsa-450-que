// Que - Given an array which consist of only 0,1 and 2. Sort the array without using any sorting algo

#include<iostream>
using namespace std;

int main(){
    int N,c0=0,c1=0,c2=0;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }

    for(int i=0;i<c0;i++){
        arr[i]=0;
    }
    for(int i=c0;i<c0+c1;i++){
        arr[i]=1;
    }
    for(int i=c0+c1;i<N;i++){
        arr[i]=2;
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}