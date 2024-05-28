// Reach the Nth point
// EasyAccuracy: 31.23%Submissions: 74K+Points: 2
// Skill-Up Summer Sale! Get 30% Off on all GfG Courses.
// Get Certified this Summer!

// banner
// There are N points on the road, you can step ahead by 1 or 2 . If you start from a point 0, and can only move from point i to point i+1 after taking a step of length one, find the number of ways you can reach at point N. 

// Example 1:

// Input: 
// N = 4
// Output: 
// 5
// Explanation: Three ways to reach at 4th
// point. They are {1, 1, 1, 1}, {1, 1, 2},
// {1, 2, 1} {2, 1, 1}, {2, 2}.

// Example 2:

// Input: N = 5
// Output: 8
// Explanation: Three ways to reach at 5th
// point. They are {1, 1, 1, 1, 1},
// {1, 1, 1, 2}, {1, 1, 2, 1}, {1, 2, 1, 1},
// {2, 1, 1, 1}{1, 2, 2}, {2, 1, 2}, {2, 2, 1}
// Your Task:
// You don't need to read or print anyhting. Your task is to complete the function nthPoint() which takes N as input parameter and returns the total number of ways modulo 109 + 7 to reach at Nth point.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)

// Constraints:
// 1 ≤ N ≤ 105


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    vector<long> dp(n+1,1);
		    for(int i=2;i<=n;i++)
		    {
		        dp[i]=(dp[i-1]+dp[i-2])%1000000007;
		    }
		    return dp[n];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends