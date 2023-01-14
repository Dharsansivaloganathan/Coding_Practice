

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack <string> words;
        string a =" ";
        
        for(int i=0; S[i] != '\0'; i++)
        {
            if (S[i] == '.')
            {
                words.push(a);
                a="";
                
            }
            else
            {
                a+= S[i];
            }
        }
        words.push(a);
        
        string ans ="";
        ans+= words.top();
        words.pop();
        
        while(!words.empty())
        {
            ans+='.';
            ans += words.top();
            words.pop();
            
        }
        return ans; 
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
