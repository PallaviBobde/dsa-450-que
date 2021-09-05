// Que - Count inversion

// Solution - (using merge sort - accepted)

#include<iostream>
using namespace std;

long long int merge(long long int arr[],long long int temp[],long long int l,long long int mid,long long int r){
    long long int i,j,k,inversion_count=0;
    i = l;
    j = mid;
    k=l;
    while(i<mid && j<=r){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inversion_count = inversion_count + (mid-i);
        }
    }
    while(i<mid){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    
    for(int i=l;i<=r;i++){
        arr[i]=temp[i];
    }
    
    return inversion_count;
}

long long int mergeSort(long long int arr[],long long int temp[],long long int l,long long int r){
    // cout<<"done ";
    long long int mid,inversion_count = 0;
    if(r>l){
        mid = (l+r)/2;
         inversion_count += mergeSort(arr,temp,l,mid);
         inversion_count += mergeSort(arr,temp,mid+1,r);
    
         inversion_count += merge(arr,temp,l,mid+1,r);
    }
    
   
    
    return inversion_count;
}

long long int inversionCount(long long arr[], long long N){
    // Your Code Here
    long long int temp[N];
    long long int count = mergeSort(arr,temp,0,N-1);
    
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

    int result = inversionCount(arr,N);
    cout<<result;
    return 0;
}