//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,double>> v ;
        for(int i = 0 ; i < n ; i++){
            v.push_back({(double)arr[i].value/(double)arr[i].weight , (double)arr[i].weight}) ;
        }
        sort(v.begin() , v.end()) ;
        reverse(v.begin() , v.end()) ;
        double res = 0 ;
        double cap = W ;
        for(auto x : v){
            if(x.second <= cap){
                res += (x.first*x.second) ;
                cap -= x.second ;
            }
            else{
                res += (x.first*cap) ;
                break ;
            }
        }
        return res ;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
