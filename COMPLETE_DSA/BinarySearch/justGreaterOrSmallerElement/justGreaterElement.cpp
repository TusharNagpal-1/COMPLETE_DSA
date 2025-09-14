#include <bits/stdc++.h>
using namespace std;
int binser(vector<int> &v,int t){
    ////////////////let 5 is not present so we have to find just greater element than 5 so cout v[low] 
    ///if we have to find just smaller element than 5 then cout v[high]
    int l=0,h=v.size()-1;
    bool flag=false;
    while(l<=h){
        int m=l +(h-l)/2;
        if (v[m] == t) {
            return v[m];
           
        }
        else if(v[m] > t) h=m-1;
        else l=m+1;
    }
   return v[l];
}
int main()
{
    vector<int> v={1,2,3,4,6,7,8};
    int t;
    cin>>t;
    cout<<binser(v,t);

    return 0;
}