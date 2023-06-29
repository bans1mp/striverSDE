class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        int ans = 1;
        
        for(int i = 0; i < n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        
        int lastTime = v[0].first;
        
        for(int i = 1; i < n; i++){
             if(lastTime < v[i].second){
                lastTime = v[i].first;
                ans++;
             }
            
        }
        
        return ans;
    }
};
