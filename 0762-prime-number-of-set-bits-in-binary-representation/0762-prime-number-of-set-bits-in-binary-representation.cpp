class Solution {
public:

bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int count(int n){
    int x=n;
    int sum=0;
    while(x>0){
        int digit=x%2;
        if(digit==1){
            sum++;
        }
        x/=2;
    }
    return sum;
}
    int countPrimeSetBits(int l, int r) {
        int ans=0;
        for(int i=l;i<=r;i++){
            int sum = count(i);

            if(prime(sum)){
                ans++;
            }
        }
        return  ans;  
    }
};