#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
  int mincol=0 , minrow=0 ,maxcol=v[0].size()-1, maxrow=v.size()-1;
   
   
   while(minrow<=maxrow && mincol<=maxcol){
   ///////traverse right
   if(minrow > maxrow || mincol> maxcol) break;
   for(int i=mincol;i<=maxcol;i++){
       cout<<v[minrow][i]<<" ";
   }
   minrow++;
   ///////traverse down
   if(minrow > maxrow || mincol> maxcol) break;
   for(int i=minrow;i<=maxrow;i++){
       cout<<v[i][maxcol]<<" ";
   }
   maxcol--;
   if(minrow > maxrow || mincol> maxcol) break;
   ///////traverse left
   for(int i=maxcol;i>=mincol;i--){
       cout<<v[maxrow][i]<<" ";
   }
   maxrow--;
   if(minrow > maxrow || mincol> maxcol) break;
   ///////traverse top
   for(int i=maxrow;i>=minrow;i--){
       cout<<v[i][mincol]<<" ";
   }
   mincol++;
   }
    return 0;
}