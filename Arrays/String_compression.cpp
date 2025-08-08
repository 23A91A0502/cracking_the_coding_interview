//implement a method to perform basic string compression using the counts of repeated characters.for ex the string aabcccccaaa would become a2b1c5a3.
//if the compressed string would not become smaller than the original string . 
//your method should return the original string. you can assume the string has only uppercase and lowercase letters(a-z)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string newstr = "";
    int conseCnt = 0;
    for(int i=0;i<s.size();i++){
        conseCnt++;
        if(i+1 >= s.size() || s[i]!=s[i+1]){
            newstr.push_back(s[i]);
            newstr += to_string(conseCnt);
            conseCnt = 0; // reset count
        }
    }
   if(newstr.size()<s.size()) cout<<newstr;
   else cout<<s;
}
