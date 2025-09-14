#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            //////for odd row reverse the row
           if(i%2!=0){
               int x=0, y=v[0].size()-1;
               while(x<=y){
                   swap(v[i][x] ,v[i][y]);
                   x++;
                   y--;
               }
           }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
             cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}