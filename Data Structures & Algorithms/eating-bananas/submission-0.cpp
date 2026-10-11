class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=0,r=0;
        int len=piles.size();
        for(int i=0;i<len;i++) {
            r=max(r,piles[i]);
        }
        int mid=l+(r-l)/2;
        int k=r;
        while(l<=r) {
            mid=l+(r-l)/2;
            if(mid==0) break;
            double sum=0;
            for(int i=0;i<len;i++) {
                sum+=ceil((double)piles[i]/(double)mid);
            }
            if(sum<=(double)h) {
                k=mid;
                r=mid-1;
            } 
            else {
                l=mid+1;
            }
        }
        return k;
    }
};
