class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> ps;
        int len=speed.size();
        int res=len;
        stack<double> st;
        for(int i=0;i<len;i++) {
            ps.push_back({position[i],speed[i]});
        }
        sort(ps.rbegin(),ps.rend());
        for(int i=0;i<len;i++){
            double t=(double)(target-ps[i].first)/(double)ps[i].second;
            if(!st.empty() && st.top()>=t){
                cout<<i<<" "<<st.top()<<endl;
            }
            else
            st.push(t);


        }
        return st.size();
        
    }
};
