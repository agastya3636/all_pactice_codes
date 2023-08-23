//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > m, int n)
    {
        // code here 
        int sc=0,sr=0;
        long long k=0;
        for(int i=0;i<n;i++)
        {
            int s=0;
            int s1=0;
            for(int j=0;j<n;j++)
            {
                s=s+m[i][j];
                s1=s1+m[j][i];
                k=k+m[i][j];
            }
            sc=max(s,sc);
            sr=max(s1,sr);
        }
        sc=max(sc,sr);
        return (sc*n-k);
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends