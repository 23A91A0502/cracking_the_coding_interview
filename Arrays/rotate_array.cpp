//given an image represented by an n*n matrix,where each pixel in the image is 4 bytes write a method to rotate the image by 90 degrees
#include<bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>> &matrix){
  int n=matrix.size();
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>>matrix(n,vector<int>(n));
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++){
        cin>>matrix[i][j];
      }
    }
  rotate90(matrix);
  //print
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << matrix[i][j] << " ";
        cout << "\n";
    }
  }
}
