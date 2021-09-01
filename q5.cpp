// Que - Move all the negative elements to one side of the array

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

    int left=0;
    for(int i=0;i<N;i++){
        if(arr[i]<0){
            int temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;
            left++;
        }
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}