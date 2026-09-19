class Solution {
public:
    int countDigits(int num) {
        int ans=num;
        int count=0;
        while(num>=1){
            int r=num%10;
            if(ans%r==0) count++;
            num/=10;
        }
        return count;
    }
};