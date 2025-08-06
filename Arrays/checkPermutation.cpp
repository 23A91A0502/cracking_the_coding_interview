// q :- given 2 strings write a method to decide if one is a permutation of the other

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) {
        cout << "False";
        
    }

    map<char, int> mp;

    for (char c : s) {
        mp[c]++;
    }

    for (char c : t) {
        mp[c]--;
        if (mp[c] < 0) {  
            cout << "False";
        }
    }

    cout << "True";
    
}
