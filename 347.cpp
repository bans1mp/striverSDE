class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        for(auto x : nums) mp[x]++ ;

        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq ;
        for(auto x : mp){
            if(pq.size() < k){
                pq.push({x.second , x.first}) ;
            }
            else{
                if(pq.top().first >= x.second) continue ;
                else{
                    pq.pop() ;
                    pq.push({x.second , x.first}) ;
                }
            }
        }
        vector<int> res ;
        while(!pq.empty()){
            res.push_back(pq.top().second) ;
            pq.pop() ;
        }
        return res ;
    }
};
