class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char c: letters){
            if( c - '0' > target - '0'){
                return c;
            }
        }
        return letters[0];
    }
};