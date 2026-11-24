class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // my approach - uses a single char to char mapping while checking for already mapped elements in string t by using a set
        /*
        if(s.length()!=t.length()) return false;
        unordered_map<char,char> mp1;
        unordered_set<char> st;
       

        for(int i =0;i<s.length();i++)
        {
            if(mp1.contains(s[i]))
            {
                if(mp1.at(s[i])!=t[i]) return false;
            }
            else {
                if(st.contains(t[i])) return false;

                mp1[s[i]]=t[i];
                st.insert(t[i]);
            }
            
        }

        return true;
        */

        // Two map approach

        unordered_map<char,char> mp1,mp2;

        for(int i = 0;i<s.length();i++)
        {
            if(mp1.contains(s[i]))
            {
                if(mp1[s[i]]!=t[i]) return false;
            }
            else
            {
                if(mp2.contains(t[i])) return false;

                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
        }

        return true;
        
    }
};