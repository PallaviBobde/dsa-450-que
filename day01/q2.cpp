//  Que - Find the maximum and minimum element in an array

#include<iostream>
#include<climits>
using namespace std;

int maxElem(int A[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}
int minElem(int A[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(A[i]<min){
            min = A[i];
        }
    }
    return min;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<"Maximum element : "<<maxElem(arr,N) <<"\n";
    cout<<"Minimum element : "<<minElem(arr,N) <<"\n";
    return 0;
}