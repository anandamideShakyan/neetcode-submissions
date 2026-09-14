class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int len=height.size();
        stack<int> s;

        for(int i=0;i<len;i++){
                while(!s.empty() && height[s.top()]<=height[i]){
                   int mid=height[s.top()];
                   s.pop();
                   if(!s.empty()){

                   int right=height[i];
                   int left=height[s.top()];
                   int h=min(left,right)-mid;
                   int w=i-s.top()-1;
                   res+=h*w;
                   }
                }
                s.push(i);
            
        }
        return res;
    }
};
