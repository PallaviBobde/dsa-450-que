// Que - Best time to buy and sell stock

#include<iostream>
using namespace std;

int maxProfit(int prices[],int size) {
    int maxprofit=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(prices[i]<prices[j]){
                maxprofit = max(maxprofit,prices[j]-prices[i]);
            }
        }
    }
    return maxprofit;
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    // take array as input
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(arr,N);
    return 0;
}