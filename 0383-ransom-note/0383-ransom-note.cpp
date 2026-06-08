class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int i = 0; // ransomNote
        int j = 0; // magazine

        while (i < ransomNote.size() && j < magazine.size()) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            }
            else if (ransomNote[i] > magazine[j]) {
                j++;
            }
            else {
                return false;
            }
        }

        return i == ransomNote.size();
    
    }
};