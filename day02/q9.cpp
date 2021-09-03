// Que - Minimise the maximum difference between heights [V.IMP]

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    // take array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int result = arr[n-1]-arr[0];
    int mini = arr[0]+k;
    int maxi = arr[n-1]-k;

    int addk,subk;
    for(int i=0;i<n;i++){
        addk = arr[i] + k;
        subk = arr[i] - k;
        
        mini = min(addk,mini);
        maxi = max(subk,maxi);
        result = min(result,mini-maxi);
    }
    cout<<result;
    return 0;
}

