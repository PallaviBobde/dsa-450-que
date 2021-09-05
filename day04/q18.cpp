// Que - find all pairs on integer array whose sum is equal to given number

// Solution - (3 pointer approach - doesn't work for duplicate values)
#include<iostream>
using namespace std;

 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
        //code here.
        vector<int> result;
        int i=0,j=0,k=0;
            
        while(i<n1 && j<n2 && k<n3){
            if(A[i]==B[j] && B[j]==C[k]){
                result.push_back(A[i]);
                i++;
                j++;
                k++;
            }
            else if(A[i]<B[j]){
                i++;
            }else if(B[j]<C[k]){
                j++;
            }else{
                k++;
            }
        }
        return result;
    }

int main(){
    
    return 0;
}