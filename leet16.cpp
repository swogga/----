class Solution {
public:
    bool isPalindrome(int x) {
  if (x < 0) 
  {
    return false; 
  }
        long long int t = x;
        long long int rr = 0;

        while (t != 0) {
            int digit = t % 10;
            rr = rr * 10 + digit;
            t = t / 10;
        }

        return x == rr;
    }
};