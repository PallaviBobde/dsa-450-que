// Que - Find the union and intersection of two sorted arrays

#include<iostream>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int arr1[N],arr2[M];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<M;i++){
        cin>>arr2[i];
    }

    cout<<"\nUnion: ";
    for(int i=0;i<N;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<M;i++){
        int flag=1;
        for(int j=0;j<M;j++){
            if(arr2[i]==arr1[j]){
                flag=0;
                break;
            }
        }
        if(flag){
                cout<<arr2[i]<<" ";
        }
    }

    cout<<"\nIntersection: ";
    for(int i=0;i<M;i++){
        int flag=0;
        for(int j=0;j<M;j++){
            if(arr2[i]==arr1[j]){
                flag=1;
                break;
            }
        }
        if(flag){
                cout<<arr2[i]<<" ";
        }
    }

    return 0;
}