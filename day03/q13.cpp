// Que - Kadane's algo [V.V.V.V.V. IMP]

#include<iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int A[],int size){
    int maxsum=INT_MIN,traversesum=0;
    for(int i=0;i<size;i++){
        traversesum += A[i];
        if(traversesum > maxsum){
            maxsum = traversesum;
        }
        if(traversesum < 0){
            traversesum=0;
        }
    }
    return maxsum;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout<<maxSubarraySum(arr,N);
    return 0;
}