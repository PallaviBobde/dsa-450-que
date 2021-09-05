// Que - Count inversion

// Solution - (brute force approach - gives Time limit exceeded error)
#include<iostream>
using namespace std;

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    long long int N;
    cin>>N;
    long long int arr[N];
    // take array as input
    for(long long int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<inversionCount(arr,N);
    return 0;
}