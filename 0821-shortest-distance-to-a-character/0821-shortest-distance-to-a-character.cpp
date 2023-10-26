class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>left(s.size(),-1);
        int j=0;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c && flag==1)
            {
                left[i]=0;
                j=0;
            }
            if(s[i]==c)
            {
                left[i]=0;
                j=1;
                flag=1;
            }
            else if(s[i]!=c && flag==1)
            {
                left[i]=j++;
            }
        }
        vector<int>right(s.size(),-1);
        j=0;
        flag=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==c && flag==1)
            {
                right[i]=0;
                j=0;
            }
            if(s[i]==c)
            {
                right[i]=0;
                j=1;
                flag=1;
            }
            else if(s[i]!=c && flag==1)
            {
                right[i]=j++;
            }
        }
        vector<int>hny;
        for(int i=0;i<s.size();i++)
        {
            if(left[i]>=0 && right[i]>=0)
            {
                hny.push_back(min(left[i],right[i]));
            }
            else 
              hny.push_back(max(left[i],right[i]));
        }
        return hny;
    }
};