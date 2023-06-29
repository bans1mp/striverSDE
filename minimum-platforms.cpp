//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n); 
    	sort(dep , dep+n) ;
    	int a = 0 , b = 0 ;
    	int res = 1 ;
    	int curr = 0 ;
    	for(int i = 0 ; i < 2400 ; i++ ){
    	    
    	        while(a < n && arr[a] == i){
    	            a++ ;
    	            curr++ ;
    	        }
    	    
    	    res = max(res , curr) ;
    	     while(b < n && dep[b] == i){
    	            b++ ;
    	            curr-- ;
    	        }
    	}
    	return res ;
    	
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends
