// Que - Trapping rainwater problem

#include<iostream>
using namespace std;

int trappingWater(int arr[], int n){
    
        // code here
        int left[n],right[n];
        int water=0;
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]= max(left[i-1],arr[i]);
        }
        
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]= max(right[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++){
            water += min(left[i],right[i]) - arr[i];
        }
        return water;
    }

int main(){
    int n;
    cout<<"Enter no. of buildings: ";
    cin>>n;
    int a[n];
    cout<<"Enter heights of buildings: ";
    for(int i=0;i<n;i++){
        cin>>i;
    }

    int result=trappingWater(a,n);
    cout<<"Water that can be trapped between the blocks during the rainy season is: "<<result;
    return 0;
}