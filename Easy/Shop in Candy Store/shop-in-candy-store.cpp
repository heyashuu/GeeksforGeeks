//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int> ans ; 
        sort(candies,candies+N) ; 
        int i = 0 ;
        int j = N-1;
        int mini = 0 ; 
        while(i<=j){
            mini+=candies[i] ; 
            i++ ; 
            j-=K ; 
        }
        int maxi = 0 ; 
        i= 0 ;
        j = N-1; 
        while(j>=i){
            maxi+=candies[j] ; 
            j-- ; 
            i+=K ; 
        }
        ans.push_back(mini) ;
        ans.push_back(maxi) ;
        return ans ; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends