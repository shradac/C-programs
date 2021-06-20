class Solution {
public:
    bool isPalindrome(int x) {
        long int temp,r,rem=0;
        temp=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            r=x%10;
            rem=rem*10+r;
            x=x/10;
        }
        if(temp==rem){
            return true;
        }
        else{
            return false;
        }
    }
};
