//One Away : there are three types of edits that can be performed on 
//strings: insert a character,remove a character, or replace a character. 
//Given two strings write a function to check if they are one edit (or zero edits) away. ex: pale,ple are true pale,bae are false and pale,bale are true
//optimal approach:-
#include <bits/stdc++.h>
using namespace std;

bool checkOneAway(string s1, string s2) {
    if (abs((int)s1.size() - (int)s2.size()) > 1) return false;

    string str1 = (s1.size() < s2.size()) ? s1 : s2; // shorter
    string str2 = (s1.size() < s2.size()) ? s2 : s1; // longer

    bool foundDiff = false;
    int i = 0, j = 0;

    while (i < str1.size() && j < str2.size()) {
        if (str1[i] != str2[j]) {
            if (foundDiff) return false;
            foundDiff = true;

            if (str1.size() == str2.size()) {
                // same length → move both
                i++;
            }
            // different length → move only longer string's pointer (j)
        } else {
            i++; // chars match → move shorter string's pointer
        }
        j++; // always move longer string's pointer
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bool res = checkOneAway(s1,s2);
    cout<<res;
}
