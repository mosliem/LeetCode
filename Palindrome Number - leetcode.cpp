class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        string x_string;
        x_string = to_string(x);
        int x_length = x_string.length();
        
        int len  = x_length / 2 ;
        int jlen = len * 2;
        if(!(x_length % 2))
            jlen -= 1;
        for(int i = 0 , j = jlen ; i < len , j >= len; i++ , j--)
        {
            if(x_string[i] != x_string[j])
            {
                return false;
                break;
            }
        }
        return true;  
    }
};

