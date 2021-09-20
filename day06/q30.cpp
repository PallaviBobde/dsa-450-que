// Que - Chocolate distribution problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int mindif = a[m-1]-a[0];
    if(m<=n){
        for(int i=0;i<n-(m-1);i++){
            if((a[i+m-1]-a[i]) < mindif){
                mindif = (a[i+m-1]-a[i]);
            }
        }
        
        return mindif;
    }
    
    return -1;
    }   

int main(){
   
        long long n,m;
        cout<<"Enter n and m: ";
        cin>>n>>m;     
        vector<long long> a;

        cout<<"Enter no. of chocolates packetwise: ";
        long long x;
        for(long long i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
        }

        cout<<"The minimum difference between maximum chocolates and minimum chocolates is: "<<findMinDiff(a,n,m);

    return 0;
}