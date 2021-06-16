class Solution {
public:
    bool areAnagrams(string s1, string s2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
         unordered_map<string, vector<string>> mp; //if you take map complexity increases
         string t;
       for(auto x:strs)
        {  
        t=x;
           sort(t.begin(),t.end());
           mp[t].push_back(x);
        }
        for(auto x:mp)
            ans.push_back(x.second);
        
        return ans;
    }
};
