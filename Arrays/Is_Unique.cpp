// Question :- implement an algo to determine if a string has all unique characters. what if you cannot use additional data structures i'll give my code once check where my ans is wrong
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
        while(mp[s[i]]>1){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"False";
    else cout<<"True";
}
