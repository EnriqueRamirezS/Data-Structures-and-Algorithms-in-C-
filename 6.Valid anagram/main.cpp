/*
Leetcode Problem 242 - Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false
otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different
word or phrase,
typically using all the original letters exactly once.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true
Example 2:
Input: s = "rat", t = "car"
Output: false
Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
NOTE: Your code has to run in O(n) time where n is the number of letters.
Zero points for any non-O(n) algorithm.
*/
#include <iostream>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t);
int main() {
string s = "anagram";
string t = "nagaram";
if (isAnagram(s, t)) cout << "True" << endl;
else cout << "False" << endl;
s = "rat";
t = "car";
if (isAnagram(s, t)) cout << "True" << endl;
else cout << "False" << endl;

}
bool isAnagram(string s, string t) {
 // Your code here
 if(s.length() != t.length()){
        return false;
    }
    
 unordered_map<char, int> sMap;
 unordered_map<char, int> tMap;
 
 for (int i = 0; i < s.length(); ++i) {
        sMap[s[i]] = sMap[s[i]] + 1;
        tMap[t[i]] = tMap[t[i]] + 1;
    }
    
return sMap == tMap;


}
