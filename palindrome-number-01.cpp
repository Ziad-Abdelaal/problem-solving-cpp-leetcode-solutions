// https://leetcode.com/problems/palindrome-number/?envType=problem-list-v2&envId=wt1z74ct

class Solution {
public:
    bool isPalindrome(int x)
    {
        long long reversednum=0;
        int original=x;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            int lastdigit=x%10;
            reversednum=reversednum*10+lastdigit;
            x=x/10;
        }
        return(original==reversednum);
    }
};
