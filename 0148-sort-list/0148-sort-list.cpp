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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        vector<int>nums;
        ListNode* temp=head;
       while(temp!=NULL){
        nums.push_back(temp->val);
        temp=temp->next;
       }
       sort(nums.begin(),nums.end());
       ListNode* Head=new ListNode(nums[0]);
       ListNode* curr=Head;
       for(int i=1;i<nums.size();i++){
        curr->next=new ListNode(nums[i]);
        curr=curr->next;
       }
       return Head;
    }
};