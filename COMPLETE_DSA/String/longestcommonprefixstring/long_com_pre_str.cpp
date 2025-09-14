#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<string> v={"flower","flow","flight"};
   sort(v.begin(),v.end());
   int x=v.size()-1;
   string s;
   int size=v[0].size();
   int size1=v[x].size();
   int ans=min(size,size1);
  for(int i=0;i<ans;i++){
      if(v[0][i] == v[x][i]){
          s.push_back(v[0][i]);
      }
  }
cout<<s;
    return 0;
}