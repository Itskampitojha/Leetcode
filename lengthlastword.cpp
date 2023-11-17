class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream ss(s); string word; 
        while (ss) ss >> word; 
        return word.length();
    }
};
