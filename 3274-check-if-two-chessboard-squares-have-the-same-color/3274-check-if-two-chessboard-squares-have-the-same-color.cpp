class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int c1=coordinate1[0]-96;
        int r1=coordinate1[1];
        int r2=coordinate2[0]-96;
        int c2=coordinate2[1];
        return (r1+c1)%2==(r2+c2)%2;
        
    }
};