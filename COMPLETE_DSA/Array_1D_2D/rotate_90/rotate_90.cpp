#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    //////transpose
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v[0].size();j++){
             swap(v[i][j] , v[j][i]);
        }
    }
    ////////reverse each row
    for(int k=0;k<v[0].size();k++){
        int i=0;
        int j=v[0].size()-1;
        while(i<=j){
            swap(v[k][i] , v[k][j]);
            i++;
            j--;
        }
      
    }
    /////print matrix
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
             cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}