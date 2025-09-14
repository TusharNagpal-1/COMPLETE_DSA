#include <bits/stdc++.h>
using namespace std;
void heightOfwater(vector<int> &v) {
    int n=v.size();
    vector<int> a(n);
    a[0]=-1;
    /////previous greatest element
    int max_element=v[0];
    for(int i=1;i<n;i++){
        a[i]=max_element;
        if(max_element < v[i]) max_element=v[i];
    }
    /////next greatest element
    vector<int> b(n);
    b[n-1]=-1;
     max_element=v[n-1];
    for(int i=n-2;i>=0;i--){
        b[i]=max_element;
        if(max_element<v[i]) max_element=v[i];
    }
    ///////find min value by comparing both a and b array;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        c[i]=min(a[i],b[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if((c[i] - v[i]) > 0){
            sum+=(c[i] - v[i]);
        }
    }
    cout<<sum<<endl;
  
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
    heightOfwater(v);
}