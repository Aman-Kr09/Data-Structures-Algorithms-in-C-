#include <iostream>
#include<vector>
using namespace std;
string reverseWords(string s) {
        vector<string> words;
        string word;

        // Split the string into words
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        // Add the last word if it exists "for enter"
        if (!word.empty()) {
            words.push_back(word);
        }

        // Reverse the words
        reverse(words.begin(), words.end());
        return words;//if directly we try to add than it show error so first we will do make stringand add index wise characters of words in it
}
int main() {
    string s;
    cout<<reverseWords(s);
    
    return 0;
}

