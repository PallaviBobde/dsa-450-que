// Que - Search an element in a Matrix

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
    }

int main(){
    int m,n,target;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;
    vector<vector<int>> matrix;
    cout<<"Enter matrix elements:\n ";
    for(int i=0;i<m;i++){
        vector<int> temp;
        int elem;
        for(int j=0;j<n;j++){
            cin>>elem;
            temp.push_back(elem);
        }
        matrix.push_back(temp);
    }
    cout<<"Enter target: ";
    cin>>target;

    if(searchMatrix(matrix,target)){
        cout<<"Result: Target Found !";
    }else{
        cout<<"Result: Target not Found !";
    }
    return 0;
}