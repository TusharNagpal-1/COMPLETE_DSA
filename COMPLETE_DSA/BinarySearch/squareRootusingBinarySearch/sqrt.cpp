#include <bits/stdc++.h>
using namespace std;
///////////////we have to find the square root using binary search
void sqrt1(int x) {
    int l=0,h=x;
    while(l<=h){
        int m=l +(h-l)/2;
        if(m*m== x){
        cout<<m;
        break;
        }
        else if(m*m > x){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
}
int main()
{
   int x;
   cin>>x;
   sqrt1(x);
    return 0;
}