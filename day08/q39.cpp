// Que - Find median in a row wise sorted matrix

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int arr[r*c],k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[k]=matrix[i][j];
                k++;
            }
        }
        sort(arr,arr+r*c);
        return arr[r*c/2];
    }

int main(){
    int R,C;
    cout<<"Enter no. of rows and columns: ";
    cin>>R>>C;
    vector<vector<int>> matrix;
    cout<<"Enter row wise sorted matrix elements: ";
    for(int i=0;i<R;i++){
        vector<int> temp;
        int elem;
        for(int j=0;j<C;j++){
            cin>>elem;
            temp.push_back(elem);
        }
        matrix.push_back(temp);
    }

    cout<<"The median of the matrix is: "<<median(matrix,R,C);
    return 0;
}