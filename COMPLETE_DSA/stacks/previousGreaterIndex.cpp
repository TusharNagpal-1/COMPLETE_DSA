#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int a[]={100,80,60,81,70,60,75,85};
    int n=sizeof(a)/sizeof(a[0]);
    int a1[n];
    a1[0]=-1;
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.size()>0 && a[s.top()]<=a[i]){
            s.pop();
        }
        if(s.empty()) a1[i]=-1;
        else{
            
            a1[i]=s.top();
            s.push(i);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i-a1[i]<<" ";
    }
    return 0;
}