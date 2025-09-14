#include <bits/stdc++.h>
using namespace std;
///////////////first missing element in array
int binser(vector<int> &v){
    int l=0,h=v.size()-1;
    int ans;
    int idx=-1;
    while(l<=h){
        int m=l +(h-l)/2;
        if(v[m] == m){
        l=m+1;
        }
       
        else{
            ans=m;
            h=m-1;
        }
    }
    return ans;
}
int main()
{
   vector<int> v={0,1,2,3,5,6,7};
   cout<<binser(v);
  
    return 0;
}