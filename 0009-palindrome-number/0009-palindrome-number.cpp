class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int temp=x;
        if(temp<0)
          return false;
        while(temp!=0)
        {
           int ld=temp%10;
            rev=rev*10+ld;
            temp=temp/10;
            
        }
        return (rev==x);
        
    }
};