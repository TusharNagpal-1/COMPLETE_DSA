#include <bits/stdc++.h>
using namespace std;
void peakElement(vector<int> &v){
    ///////we have to find the peak element in the array which is greater than its neighbours 
    int n=v.size();
    int l=1, h=n-2;
    while(l<=h){
        long long m=l + (h-l)/2;
        if(v[m] > v[m-1] && v[m]> v[m+1] ){
                cout<<v[m]<<endl;
                break;
            }
        else if(v[m] > v[m-1]){
            l=m+1;
        }
        else h=m-1;
       
    }
}
int main()
{
    vector<int> v={3,5,3,2,0};
    peakElement(v);
    return 0;
}