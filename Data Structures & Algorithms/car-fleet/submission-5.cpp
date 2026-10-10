class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> ps;
        int len=speed.size();
        int res=len;
        stack<int> st;
        for(int i=0;i<len;i++) {
            ps.push_back({position[i],speed[i]});
        }
        sort(ps.begin(),ps.end());
       
        for( int i=0;i<len;i++) {
            while(!st.empty() && ps[st.top()].second>ps[i].second){
                double timeToCatchup=(double)((ps[i].first-ps[st.top()].first)/(double)(ps[st.top()].second-ps[i].second));
                if((double)target>=(double)(ps[i].first)+(double)(ps[i].second*timeToCatchup)){
                    res--;
                    st.pop();
                }
                else break;
            }
            st.push(i);
        }
        return res;
    }
};
