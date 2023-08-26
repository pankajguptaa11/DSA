class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> vec;
        string ans = "";
        string temp = "";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                if(temp.size() != 0)
                    vec.push_back(temp);
                temp = "";
            }
            else
            {
                temp+=s[i];
            }

        }
        if(temp.size() != 0)
            vec.push_back(temp);

        for(int i=vec.size()-1;i>0;i--)
        {
            ans+=vec[i];
            ans+=' ';
        }
        ans+=vec[0];
        return ans;
    }
};
