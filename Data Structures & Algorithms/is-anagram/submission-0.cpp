class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;

    map<char, int> letter;
    map<char, int> letters;
    for(char x:s)
    {
        letters[x]++;
    }
    for(char y:t)
    {
        letter[y]++;
    }
    if(letter==letters)
        return true;
    return false;
    }
};
