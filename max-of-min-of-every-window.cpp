#include <bits/stdc++.h>
vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    vector<int> pse(n,-1) ;
    vector<int> nse(n,n) ;
    stack<int> st ;
    for(int i = 0 ; i < n; i++){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop() ;
        }
        if(!st.empty()){
            pse[i] = st.top() ;
        }
        st.push(i) ;
    }
    while(!st.empty()) st.pop() ;
    for(int i = n-1 ; i >= 0 ; i--){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop() ;
        }
        if(!st.empty()){
            nse[i] = st.top() ;
        }
        st.push(i) ;
    }
    vector<int> sizes ;
    for(int i =0 ;i < n ; i++){
        sizes.push_back(nse[i] - pse[i] -1) ;
    }
    unordered_map<int,int> mp ;
    for(int i = 0 ; i < n ; i++){
        if(mp.find(sizes[i]) != mp.end()){
            mp[sizes[i]] = max(mp[sizes[i]] , a[i]) ;
        }
        else mp[sizes[i]] = a[i] ;
    }
    int curr = -1 ;
    vector<int> res ;
    for(int i = n ; i >= 1 ; i--){
        if(mp.find(i) != mp.end()){
            curr = i ;
            
        }
        res.push_back(mp[curr]) ;
    }
    reverse(res.begin() , res.end()) ;
    return res ;
    
}
