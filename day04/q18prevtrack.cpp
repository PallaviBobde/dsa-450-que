// Que - find all pairs on integer array whose sum is equal to given number

// Solution - (3 pointer approach only - added variables to track previous value(solves duplicate value error))
#include<iostream>
using namespace std;

int commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    //code here.
    int i=0,j=0,k=0;
    int prev1=0,prev2=0,prev3=0;
            
    while(i<n1 && j<n2 && k<n3){
        while(A[i]==prev1){
            i++;
        }
        while(B[j]==prev2){
            j++;
        }
        while(C[k]==prev3){
            k++;
        }
            
        if(A[i]==B[j] && B[j]==C[k]){
            cout<<A[i]<<" ";
            prev1= A[i];
            prev2= B[j];
            prev3= C[k];
            i++;
            j++;
            k++;
        }
        else if(A[i]<B[j]){
            prev1=A[i];
            i++;
        }else if(B[j]<C[k]){
            prev2=B[j];
            j++;
        }else{
            prev3=C[k];
            k++;
        }
    }
    return 0;
}

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int arr1[n1],arr2[n2],arr3[n3];
    // take the 3 array as input
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    
    commonElements(arr1,arr2,arr3,n1,n2,n3);

    return 0;
}