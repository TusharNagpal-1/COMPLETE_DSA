#include <bits/stdc++.h>
using namespace std;
void sortarray(vector<int> &v) {
	int s1=v.size();
    int low=0 , mid=0 ,high =s1-1;
    while(mid <= high){
        if(v[mid] == 0 ){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else {
            swap(v[mid] ,v[high]);
            high--;
        }
    }

}
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}

	sortarray(v);
		for(auto x:v) {
		cout<<x<<" ";
	}
	return 0;
}