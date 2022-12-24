//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int count[26] = {0};
        for (int i=0; arr[i] != '\0'; i++)
        {
            int temp = (int)arr[i] - 97;
            count[temp]++;
        }
        string ans="";
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<count[i]; j++)
            ans += (char)i+97;
            
        }
        return ans;
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
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends
