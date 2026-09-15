class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()){
            return false;
        }
        string t1=s1;
        string t2=s2;
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        if(t1!=t2){
            return false;
        }
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                count++;
            }

        }
        if(count==2||count==0){
            return true;
        }
        return false;
        
    }
};