// Minimum Operations
// EasyAccuracy: 60.02%Submissions: 97K+Points: 2
// Skill-Up Summer Sale! Get 30% Off on all GfG Courses.
// Get Certified this Summer!

// banner
// Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available:

// Double the number
// Add one to the number
// Example 1:

// Input:
// N = 8
// Output: 4
// Explanation: 
// 0 + 1 = 1 --> 1 + 1 = 2 --> 2 * 2 = 4 --> 4 * 2 = 8.
// Example 2:

// Input: 
// N = 7
// Output: 5
// Explanation: 
// 0 + 1 = 1 --> 1 + 1 = 2 --> 1 + 2 = 3 --> 3 * 2 = 6 --> 6 + 1 = 7.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minOperation() which accepts an integer N and return number of minimum operations required to reach N from 0.

// Expected Time Complexity: O(LogN)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 106

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