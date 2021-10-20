//question link: https://leetcode.com/problems/roman-to-integer/
//Please consider this under Hacktober Fest teg



class Solution {

    public:
    int romanToInt(string s) {
        unordered_map <char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int result = 0; 
        for(int i = 0; i < s.length(); i++){
            if(i < s.length()-1 && m[s[i]] < m[s[i+1]]){
                result -= m[s[i]];
            }else{
                result += m[s[i]];
            }
        }
        return result;

        
    }
};
   
