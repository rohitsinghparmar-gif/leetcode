// class Solution {
// public:
// void markRow(int i,vector<vector<int>>& matrix){
//     int n=matrix.size();
//     for(int j=0;j<n;j++){
//         matrix[i][j]=-1;

//     }
// }
// void markCol(int j,vector<vector<int>>& matrix){
//     int n=matrix.size();
//     for(int i=0;i<n;i++){
//         matrix[i][j]=-1;
//     }
// }
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     markCol(j,matrix);
//                     markRow(i,matrix);
//                 }
//             }
//         }
//           for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
//     }
// };

class Solution {
public:
            void setZeroes(vector<vector<int>>& mat) {
                int n=mat.size();
                int m=mat[0].size();
                vector<int>row(n,0);
                vector<int>col(m,0);
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(mat[i][j]==0){
                            row[i]=1;
                            col[j]=1;
                        }
                    }
                }
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(row[i]==1||col[j]==1){
                            mat[i][j]=0;
                        }
                    }
                }

     }
};