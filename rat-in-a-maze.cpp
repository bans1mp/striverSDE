// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void helper(vector<string> &res , string curr , int i , int j ,vector<vector<int>> &m ,int n){
        if(i == n || j == n || i < 0 || j < 0 || m[i][j] == 0) return ;
        if(i == n-1 && j == n-1){
            res.push_back(curr) ;
            return ;
        }
        m[i][j] = 0;
        helper(res , curr + 'D' , m , i+1 , j , n) ;
        helper(res , curr + 'U' , m , i-1 , j , n) ;
        helper(res , curr + 'R' , m , i , j+1, n) ;
        helper(res , curr + 'L' , m , i , j-1 , n) ;
        m[i][j] = 1 ;
        return ;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> res ;
        helper(res , "" , m , 0 , 0 , n) ;
        return res ;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
