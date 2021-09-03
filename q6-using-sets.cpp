// Que - Find the union and intersection of two sorted arrays

#include<iostream>
#include <set>
using namespace std;

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

    // Defining set container s
    set<int> s;
   
    // Inserting array elements in s
    for (int i = 0; i < N; i++)
      s.insert(arr1[i]);
   
    for (int i = 0; i < M; i++)
        s.insert(arr2[i]);

    // print union
    cout<<"Union : ";
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i<<" ";
    }
    
    

    return 0;
}