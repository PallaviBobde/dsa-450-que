// Que- Rotate a matrix by 90 degrees

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotate90Clockwise(vector<vector<int>>& arr){
    // transpose
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr[0].size();j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    // reverse rigth to left
    for(int i=0;i<arr.size();i++){
        int start=0,end=arr.size()-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int N,M;
    cout<<"Enter no. of rows and columns: ";
    cin>>N>>M;
    vector<vector<int>> arr;
    cout<<"Enter matrix elements: ";
    for(int i=0;i<N;i++){
        vector<int> temp;
        int elem;
        for(int j=0;j<M;j++){
            cin>>elem;
            temp.push_back(elem);
        }
        arr.push_back(temp);
    }
           
    rotate90Clockwise(arr);
    cout<<"After rotating matrix by 90 degrees : \n";
           
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
    return 0;
}