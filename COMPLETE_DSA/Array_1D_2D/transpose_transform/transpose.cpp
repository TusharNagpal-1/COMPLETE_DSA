
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //////transpose without using extra space and only for square matrix
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v[0].size();j++){
             swap(v[i][j] , v[j][i]);
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