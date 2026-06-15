class Solution {
public:
int reverse(int n1){
    int rev=0;
    while(n1>0){
        int digit=n1%10;
        rev=rev*10+digit;
        n1=n1/10;
    }
    return rev;

}

    bool sumOfNumberAndReverse(int num) {
        // if(num==0){
        //     return true;
        // }
    int n=num/2;
    while(n<=num){
        if(n+reverse(n)==num){
            return true;
        }
        n++;
    }
    return false;
        
    }
};