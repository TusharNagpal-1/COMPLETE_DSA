#include <bits/stdc++.h>
using namespace std;
vector<int> binser(vector<int> &v,int t){
    int l=0,h=v.size()-1;
    vector<int> a;
    int idx=-1;
    //////first occurence
    while(l<=h){
        int m=l +(h-l)/2;
        if(v[m] == t){
            if(v[m] == v[m-1]){
                h=m-1;
            }
            else{
                idx=m;
                a.push_back(m);
                break;
            }
        }
        else if(v[m]>t) h=m-1;
        else l=m+1;
    }
     l=0,h=v.size()-1;
    //////last occurence
        while(l<=h){
        int m=l +(h-l)/2;
        if(v[m] == t){
            if(v[m] == v[m+1]){
                l=m+1;
            }
            else{
                idx=m;
                a.push_back(m);
                break;
            }
        }
        else if(v[m]>t) h=m-1;
        else l=m+1;
    }
    return a;
}
int main()
{
   vector<int> v={1,2,2,2,3,3,4,5};
   int t;
   cin>>t;
   vector<int> a=binser(v,t);
   for(auto i:a) cout<<i<<" ";
    return 0;
}