//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int beg = 0;
        int end = n-1;
        int mid;
        int index = 0;
        
        while(beg <= end)
        {
            mid = (beg+end)/2;
            if (a[mid]==b[mid])
            {
                beg = mid+1;
                
            }
            else
            {
                index = mid;
                end = mid-1;
            }
            
        }
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends
