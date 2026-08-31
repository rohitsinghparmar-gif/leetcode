/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>nums;
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
               arr.push_back(i);
            
            }
            if(nums[i]<nums[i-1]&& nums[i]<nums[i+1]){
                 arr.push_back(i);
                 }
         }
           int  n=arr.size();
         if( n<2){
            return {-1,-1};
         }  
   int x=INT_MAX;
 
   int  y=arr[n-1]-arr[0];
         for(int i=1;i<arr.size();i++){
            x=min(x,arr[i]-arr[i-1]);
  }   
         return {x,y};   
    }
};