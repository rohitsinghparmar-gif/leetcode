class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>arr;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    arr.push_back(arr1[j]);
                }
                

            }
        }
      int n=arr.size();
      for(int i = 0; i < arr1.size(); i++) {
            bool found = false;

            for(int j = 0; j < arr2.size(); j++) {
                if(arr1[i] == arr2[j]) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                arr.push_back(arr1[i]);
            }
        }


          
          return arr;

        
        
        
    }
};