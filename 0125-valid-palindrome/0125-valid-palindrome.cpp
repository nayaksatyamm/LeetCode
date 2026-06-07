class Solution {
public:
    char tolowercase(char ch){
            if(ch >= 'a' && ch <= 'z')
                return ch;
            else
                return ch-'A'+'a';      
        }

    bool isAlphaNum(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int left=0,right=s.size()-1,flag;
        while(left<right){
            while(left < right && !isAlphaNum(s[left]))
                left++;

            while(left < right && !isAlphaNum(s[right]))
                right--;
            if(tolowercase(s[left]) != tolowercase(s[right]))
                return false;
            else{
                left++;
                right--;
            }
        }
    return true;
    
}};