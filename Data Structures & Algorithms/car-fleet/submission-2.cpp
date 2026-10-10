class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int len = speed.size();
        vector<pair<int,int>> ps;
        stack<int> st;
        for(int i=0;i<len;i++) {
            ps.push_back({position[i],speed[i]});
        }
        sort(ps.begin(),ps.end());

        int res=len;
        for(int i=0;i<len;i++) {
               
               
            while(!st.empty() && ps[i].second<ps[st.top()].second){
                double catchUpTime=(double)(ps[i].first-ps[st.top()].first)/(double)(ps[st.top()].second-ps[i].second);

                if((double)target>=(double)ps[i].first+(double)ps[i].second*catchUpTime){
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
