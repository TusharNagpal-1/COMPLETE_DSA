
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v,int t){
    int l=0;
    int h=v.size()-1;
    int idx=-1;
    while(l<=h){
        int m=l + (h-l)/2;
        if(v[m] == t){
            if(v[m] == v[m-1]){
                h=h-1;
            }
            else {
                idx=m;
                return idx; 
            }
        }
        else if(v[m]>t) h=m-1;
        else l=m+1;
    }
    return idx;
}

int main()
{
    vector<int> v={1,2,2,2,3,3,4,5};
    int t;
    cin>>t;
    cout<<binarySearch(v,t);

    return 0;
}