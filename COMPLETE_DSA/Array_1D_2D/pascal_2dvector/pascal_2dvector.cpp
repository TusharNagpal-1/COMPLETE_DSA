#include <bits/stdc++.h>
using namespace std;
int combination(int i,int j){
    int n=1;
    for(int x=1;x<=i;x++){
        n=n*x;
    }
    int x=i-j;
    int q=1;
    for(int y=1;y<=x;y++){
        q*=y;
    }
    int r=1;
    for(int z=1;z<=j;z++){
        r*=z;
    }
    int res=q*r;
    int ans=n/res;
    return ans;
    
}
int main()
{
    
    vector<vector<int>> v1;
    for(int i=0;i<4;i++){
        vector<int>  v;
        for(int j=0;j<=i;j++){
            v.push_back(combination(i,j));
        }
        v1.push_back(v);
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++){
           cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}