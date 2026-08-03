class Solution {
public:
void reverse(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
   
}
    void rotate(vector<vector<int>>& matrix) {
        // int n=matrix.size();
        // vector<vector<int>>ans(n,vector<int>(n));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         ans[j][n-1-i]=matrix[i][j];
        //     }
        // }
        // matrix=ans;
         // transpose the matrix
       int n=matrix.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }
       //reverse the matrix
       for(int i=0;i<n;i++){
         reverse(matrix[i]);
       }

    }
};