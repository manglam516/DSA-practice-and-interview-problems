class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();


        for(int i = 0;i<=h-n;i++)
        {
            int count = 0;
            for(int j=0;j<n;j++)
            {
                if(haystack[j+i]==needle[j])
                {
                    count++;
                }
                if(count==n) return i;
            }
        }

        return -1;
    }
};