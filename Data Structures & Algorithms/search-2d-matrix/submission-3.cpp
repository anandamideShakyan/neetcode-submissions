class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int len1=matrix.size(),len2=matrix[0].size();
        int l1=0,l2=0,r1=len1-1,r2=len2-1;
        while(l1<=r1 && l2<=r2){
            int mid1=l1+(r1-l1)/2,mid2=l2+(r2-l2)/2;
            if(matrix[mid1][mid2]==target) return true;
            else if(matrix[mid1][mid2]>target) {
                if(mid2==0){
                    r1=mid1-1;
                    l2=0;
                    r2=len2-1;
                }
                else r2=mid2-1;
            }
            else{
                if(mid2==len2-1){
                    l1=mid1+1;
                    l2=0;
                    r2=len2-1;
                }
                else l2=mid2+1;
            }

        }


        return false;
    }
};
