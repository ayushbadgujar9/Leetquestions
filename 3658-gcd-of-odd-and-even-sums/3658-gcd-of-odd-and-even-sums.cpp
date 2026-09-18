class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int SumEven=0;
        int SumOdd=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0) SumEven+=i;
            else SumOdd+=i;
        }
        int mini=min(SumEven,SumOdd);
        int ans=1;
        for(int i=1;i<=mini;i++){
     if(SumEven%i==0 && SumOdd%i==0){
        ans=i;
     }
        }
        return ans;
    }
};