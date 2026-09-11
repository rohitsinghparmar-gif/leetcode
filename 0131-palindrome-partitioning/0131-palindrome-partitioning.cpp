class Solution {
public:
bool palindrome(string str1){
   string str=str1;
    int low=0,high=str.size()-1;
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
    if(str==str1){
        return true;
    }
    return false;
}
void getAllPal(string s,vector<vector<string>>&ans,int i,vector<string>&partitions){
    if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
    for(int i=0;i<s.size();i++){
        
         string temp=s.substr(0,i+1);
         if(palindrome(temp)){
        partitions.push_back(temp);
            getAllPal(s.substr(i+1),ans,i,partitions);

            partitions.pop_back();
    }
     
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partitions;
         getAllPal(s,ans,0,partitions);
       return ans;
        
    }
};