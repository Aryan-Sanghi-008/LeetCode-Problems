// beginner's approach -- stack

class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != '*')
            {   
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    continue;
                }
                else
                {
                    st.pop();
                }
            }
        }

        string ans;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        if(ans.size() > 0)
        {
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }

};


// optimal approach -- two pointer

class Solution
{
public:
    string removeStars(string s)
    {
        int i = 0, j = 0;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                j = max(j - 1, 0);
            }
            else
            {
                s[j] = s[i];
                j++;
            }
        }

        return s.substr(0, j);
    }
};