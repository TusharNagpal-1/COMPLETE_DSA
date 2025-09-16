#include <bits/stdc++.h>
using namespace std;
bool check(int mid,vector<int>& weights, int days){
    ///////function to check if we can ship the packages within days with capacity mid
    int n=weights.size();
    int m=mid;
    int count=1;
    for(int i=0;i<n;i++){
        if(m >=weights[i]){
            m-=weights[i];
        }
        else{
            count++;
            m=mid;
            m-=weights[i];
        }
    }
    if(count > days) return false;
    else return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        ///////we have to find the minimum capacity to ship the packages within days
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        ////////finding the max weight and sum of weights
        for(int i=0;i<n;i++){
            if(max < weights[i]) max=weights[i];
            sum+=weights[i];
        }
        int low=max;
        int high=sum;
        int ans=sum;
        //////////binary search
        while(low<=high){
            int mid=low +(high -low)/2;
            if(check(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
    }
    return ans;}
int main(){
    vector<int> weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    cout<<shipWithinDays(weights,days);
    return 0;
}