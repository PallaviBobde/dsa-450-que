// Que - Find row with maximum no. of 1's

#include<iostream>
#include<vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    // code here
	    int maxones=0,tempones,index=-1;
	    for(int i=0;i<n;i++){
	        tempones=0;
	        for(int j=0;j<m;j++){
	            tempones += arr[i][j];
	        }
	        
	        if(tempones>maxones){
	            index=i;
	        }
	        maxones = max(maxones,tempones);
	    }
	    return index;
	}


int main(){
    int N,M;
    cout<<"Enter no. of rows and columns: ";
    cin>>N>>M;
    vector<vector<int>> matrix;
    cout<<"Enter boolean 2D array elements: ";
    for(int i=0;i<N;i++){
        vector<int> temp;
        int elem;
        for(int j=0;j<M;j++){
            cin>>elem;
            temp.push_back(elem);
        }
        matrix.push_back(temp);
    }

    cout<<"The 0-based index of the first row that has the maximum number of 1's: "<<rowWithMax1s(matrix,N,M);

    return 0;
}