#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6}};
    vector<vector<int> > a={{1,2},{3,4},{5,6}};
    vector<vector<int>> c(v.size(),vector<int> (a[0].size()));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<a[0].size();j++){
            c[i][j]=0;
            for(int k=0;k<a.size();k++){
                c[i][j]+=v[i][k] * a[k][j];
            }
        }
    }
    for(int i=0;i<c.size();i++){
        for(int j=0;j<c[0].size();j++){
             cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}