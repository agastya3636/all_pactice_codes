// Count number of hops
// EasyAccuracy: 43.93%Submissions: 140K+Points: 2
// Skill-Up Summer Sale! Get 30% Off on all GfG Courses.
// Get Certified this Summer!

// banner
// A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top of Nth step. As the answer will be large find the answer modulo 1000000007.

// Example 1:

// Input:
// N = 1
// Output: 1
// Example 2:

// Input:
// N = 4
// Output: 7
// Explanation:Below are the 7 ways to reach
// 4
// 1 step + 1 step + 1 step + 1 step
// 1 step + 2 step + 1 step
// 2 step + 1 step + 1 step
// 1 step + 1 step + 2 step
// 2 step + 2 step
// 3 step + 1 step
// 1 step + 3 step
// Your Task:
// Your task is to complete the function countWays() which takes 1 argument(N) and returns the answer%(10^9 + 7).

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ N ≤ 105

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        // your code here
        long long m=1000000007;
        vector<long long>d(n+1,0);
        d[0]=1;
        d[1]=1;
        d[2]=2;
        for(int i=3;i<=n;i++)
        {
            d[i]=(  d[i-1]+((d[i-2]+( d[i-3]%m))%m))%m;
        }
        return d[n];
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends