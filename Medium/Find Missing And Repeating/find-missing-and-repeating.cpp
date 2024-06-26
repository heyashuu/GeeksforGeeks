//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        int m = 0 ;
        int r = 0 ; 
        vector<int> ans ;
        for(int i = 0 ; i<n-1;i++){
             if(arr[i]==arr[i+1]){
                 r=arr[i] ; 
                 arr.erase(arr.begin()+i) ; 
                 break ; 
             }
        }
        for(int i = 0 ; i<n;i++){
            if(i+1 != arr[i]){
                m = i+1 ; 
                break ; 
            }
        }
        
        ans.push_back(r);
        ans.push_back(m);
        return ans ; 
     }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends