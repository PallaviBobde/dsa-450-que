// Que - Merge two sorted array's without using extra space

#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int arrsum[n+m];
	    for(int i=0;i<n;i++){
	        arrsum[i]=arr1[i];
	    }
	    for(int i=n;i<n+m;i++){
	        arrsum[i]=arr2[i-n];
	    }
	    sort(arrsum,arrsum+n+m);
	    for(int i=0;i<n;i++){
	        arr1[i]=arrsum[i];
	    }
	    for(int i=0;i<m;i++){
	        arr2[i]=arrsum[i+n];
	    }
	    
	}

int main(){
    int N,M;
    cin>>N>>M;
    int arr1[N],arr2[M];
    // take the 2 arrays as input
    for(int i=0;i<N;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<M;i++){
        cin>>arr2[i];
    }

    merge(arr1,arr2,N,M);
    for(int i=0;i<N;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<M;i++){
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}