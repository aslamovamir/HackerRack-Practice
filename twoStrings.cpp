// Given two strings, determine if they share a common substring. A substring may be as small as one character.
// Example 
// s1 = "and"
// s2 = "art"
// These share the common substring "a".

/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

string twoStrings(string s1, string s2) {
    set<char> Set1, Set2;
    string iter = "";
    for (unsigned int i = 0; i < s1.length(); i++) {
        Set1.insert(s1[i]);
    }
    
    for (unsigned int i = 0; i < s2.length(); i++) {
        Set2.insert(s2[i]);
    }
    for (auto itr: Set1) {
        if (Set2.find(itr) != Set2.end()) {
            return "YES";
        }
    }
    
    return "NO";
}
