// Que - Find duplicate in an array of N+1 integers

#include<iostream>
#include <algorithm>
using namespace std;

int findDuplicate(int arr[],int size){
        sort(arr,arr+size);
        for(int i=1;i<size;i++){
            if(arr[i]==arr[i-1]){
                return arr[i];
            }
        }
        return -1;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<findDuplicate(arr,N);

    return 0;
}