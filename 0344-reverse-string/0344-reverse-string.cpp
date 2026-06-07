class Solution {
public:
    void reverseString(vector<char>& s) {
        int right=0;
        int left=s.size()-1;
        while(right<left){
            swap(s[right],s[left]);
            right++;
            left--;
        }
    }
};