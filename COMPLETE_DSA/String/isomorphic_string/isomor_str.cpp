#include <bits/stdc++.h>
using namespace std;
bool isomorphic(string s,string v) {

	vector<int> a(150,1000);
	if(s.size() != v.size()) return false;
	for(int i=0; i<s.size(); i++) {
		int idx=(int)s[i];
		if(a[idx]==1000) {
			a[idx]=s[i]-v[i];
		}
		else if(a[idx]!= s[i]-v[i]) return false;
	}
	for(int i=0;i<150;i++){
	    a[i]=1000;
	}
	for(int i=0; i<v.size(); i++) {
		int idx=(int)v[i];
		if(a[idx]==1000) {
			a[idx]=v[i]-s[i];
		}
		else if(a[idx]!= v[i]-s[i]) return false;
	}
	
	return true;
}
int main()
{
	string s="egg";
	string v="doo";
	if(isomorphic(s,v)) cout<<"yes"<<endl;
	else cout<<"no"<<endl;


	return 0;
}