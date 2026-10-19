class Solution {
public:
    bool isPalindrome(string s) {

        
        int n = s.size();

        string newstring ="";

        for(int i =0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                newstring+=tolower(s[i]);
            }
        }

        
        int start = 0;
        int end = newstring.size()-1;
        while(start<=end)
        {
            if(newstring[start]==newstring[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};