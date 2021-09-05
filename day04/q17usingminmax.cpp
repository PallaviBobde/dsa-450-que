// Que - Best time to buy and sell stock

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(int prices[],int size) {
    int maxprofit=0,minprice=prices[0];
    for(int i=0;i<size;i++){
        minprice = min(minprice,prices[i]);
        maxprofit = max(maxprofit,prices[i]-minprice);
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