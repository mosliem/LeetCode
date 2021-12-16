class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman;
        roman.insert(pair<char ,int >('I' , 1));
        roman.insert(pair<char , int>('V' , 5));
        roman.insert(pair<char , int>('X' , 10));
        roman.insert(pair<char , int>('L' , 50));
        roman.insert(pair<char , int>('C' , 100));
        roman.insert(pair<char , int>('D' , 500));
        roman.insert(pair<char , int>('M' , 1000));
        
        int len = s.length(), sum = 0;
        for(int i = 0; i < len-1 ; i++)
        {
            if(roman[s[i]] < roman[s[i+1]] )
                sum -=roman[s[i]];
            else
                sum += roman[s[i]];
        }
        sum += roman[s[len-1]];
        return sum;
    }
};
