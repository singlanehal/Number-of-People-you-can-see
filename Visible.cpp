class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> st;
        vector<int> res(heights.size());
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty() && heights[i]>st.top())
            {
                st.pop();
                res[i]++;
            }
            if(!st.empty())
            {
                res[i]++;
            }
            st.push(heights[i]);
        }
        return res;
    }
};
