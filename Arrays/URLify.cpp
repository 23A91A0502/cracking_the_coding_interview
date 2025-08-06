// Q :- write a method to replace all spaces in a string with '%20' and you are given inputs as string and it's true length
//input : mr john smith , 13
//output : mr%20john%20smith
#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  int truelen;
  cin>>truelen;
  int spacecnt=0;
  for(int i=0;i<truelen;i++){
    if(s[i]==' '){
      spacecnt++;
    }
  }
  int newlen = truelen + spacecnt * 2;
  string res(newlen,'\0');
  int idx = newlen - 1;
  for(int i=truelen - 1;i>=0;i--){
    if(s[i]==' '){
      res[idx--]='0';
      res[idx--]='2';
      res[idx--]='%';
    }
    else{
      res[idx--]=s[i];
    }
  }
  cout<<res<<endl;
  return 0;
}
