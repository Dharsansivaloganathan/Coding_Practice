class Solution {
public:
    int majorityElement(vector<int>& a) {
        unordered_map<int, int> m;
        int n = a.size();
        
        for(int i=0;i<n;i++) {
            m [a[i]]++;
        }
        
        for(int i=0;i<n;i++) {
            if(m [a[i]] > (n/2)) {
                n = a[i];
                break;
            }
        }
        
        return n;
    }
};
