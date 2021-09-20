// Que - Spirally traversing a matrix

#include<iostream>
#include<vector>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int startrow=0,endrow=r-1,startcolumn=0,endcolumn=c-1;
    
        vector<int>result;
        
        while(startrow<=endrow && startcolumn<=endcolumn){
        
            for(int i=startcolumn;i<=endcolumn;i++){
                result.push_back(matrix[startrow][i]);
            }
            startrow++;
        
            for(int i=startrow;i<=endrow;i++){
                result.push_back(matrix[i][endcolumn]);
            }
            endcolumn--;
            
            if(startrow<=endrow){
            for(int i=endcolumn;i>=startcolumn;i--){
                result.push_back(matrix[endrow][i]);
            }
            endrow--;
            }
            
            if(startcolumn<=endcolumn){
            for(int i=endrow;i>=startrow;i--){
                result.push_back(matrix[i][startcolumn]);
            }
            startcolumn++;
            }
        }
    
        return result;
    }


int main(){
    int r,c;
    cout<<"Enter no. of rows and columns: ";
    cin>>r>>c;
    vector<vector<int> > matrix;
    cout<<"Enter matrix elements: ";
    for(int i=0;i<r;i++){
        vector<int> temp;
        int elem;
        for(int j=0;j<c;j++){
            cin>>elem;
            temp.push_back(elem);
        }
        matrix.push_back(temp);
    }

    vector<int> ans = spirallyTraverse(matrix,r,c);
    cout<<"Ans: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}