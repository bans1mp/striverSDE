#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> indices(k , 0) ;
    vector<int> res ;
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq ;
    for(int i = 0 ; i < k ; i++){
        pq.push(make_pair(kArrays[i][0] , i )); 
    }
    while(!pq.empty()){
        auto curr = pq.top() ;
        pq.pop() ;
        res.push_back(curr.first) ;
        if(indices[curr.second] != kArrays[curr.second].size() - 1){
            indices[curr.second]++ ;
            pq.push(make_pair(kArrays[curr.second][indices[curr.second]] , curr.second)) ;
        }
    }
    return res ;
}
