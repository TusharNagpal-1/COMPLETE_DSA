#include <bits/stdc++.h>
using namespace std;
void next_permutation(vector<int> &v) {
    //////first we have to find the index from where the array is not in increasing order(pivotal index)
    int n=v.size();
    int x=n-2;
    int idx=-1;
    for(int i=x;i>=0;i--){
        if(v[i] < v[i+1]){
            idx=i;
            break;
        }
    }
   
    if(idx==-1){
        reverse(v.begin(),v.end());
        return;
    }
    else{
     
        reverse(v.begin()+idx+1,v.begin()+n);
        for(int i=idx+1;i<n-1;i++){
            if(v[i] > v[idx]){
                swap(v[idx],v[i]);
                break;
            }
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    next_permutation(v);
    for(auto x:v) {
        cout<<x<<" ";
    }
}