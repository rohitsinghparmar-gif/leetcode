class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int row=0,col=m-1;
        // while(row<n && col>=0){
        //     int key=matrix[row][col];
        //     if(key==target){
        //         return true;
        //     }
        //     else if(key>target){
        //         col--;
        //     }
        //     else{
        //         row++;
        //     }
        // }
        // return false;

        // the question is solved with both methods

        int n=matrix.size();
        int m=matrix[0].size();
        int row=n-1;
        int col=0;
        while(row>=0 && col<m){
            int key=matrix[row][col];
            if(key==target){
                return true;

            }
            else if(key<target){
                col++;
            }
            else{
                row--;
            }

        }
        return false;
        
    }
};