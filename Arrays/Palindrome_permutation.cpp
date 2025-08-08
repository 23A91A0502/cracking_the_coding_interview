//given a string write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards.
//A permutation is a rearrangement of letters. 
//The palindrome does not need to be limited to just dictionary words. 
//example:input: Tact Coa Output: true (permutations: "taco cat") 
//brute-force
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
	
// 	string s;
// 	getline(cin,s);
// 	int n=s.size();
// 	unordered_map<char,int>mp;
// 	for(int i=0;i<n;i++){
// 	    if(s[i]!=' '){
// 	    mp[tolower(s[i])]++;
// 	    }
// 	}
// 	int cnt=0;
// 	for(auto it:mp){
// 	    if(it.second%2!=0){
// 	        cnt++;
// 	    }
// 	}
// 	if(cnt <=1 ) cout<<"True";
// 	else cout<<"False";
// }
//optimal - bit manupulation
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin,s);
	int n=s.size();
	int bitmask = 0;
	
	for(int i=0;i<n;i++){
	    if(s[i]!=' '){
	      int pos = tolower(s[i]) -'a';
	      bitmask ^= (1 << pos);
	    }
	}
	if (bitmask == 0 || ((bitmask & (bitmask - 1)) == 0))
        cout << "True";
    else
        cout << "False";
}
