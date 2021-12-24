class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> parn;
        int i = 0;
        while(i < s.length())
        {
         if(s[i] == ')' && !parn.empty()&&parn.top() == '(')
             parn.pop();
         else if(s[i] == ']' &&!parn.empty()&& parn.top() == '[')
             parn.pop();
         else if(s[i] == '}' && !parn.empty() && parn.top() == '{')
             parn.pop();
         else
             parn.push(s[i]);
           i++;
        }
        if(parn.empty())
            return true;
        
        return false;
    }
};
