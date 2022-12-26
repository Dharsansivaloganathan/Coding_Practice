//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    // code here.
    string copy ="";
    int diff=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        {
            diff = (int)s[i]-65;
            copy += (char)90-diff;
        }
        else
        {
            diff = (int)s[i]-97;
            copy += (char)122-diff;
        }
    }
    return copy;
}
