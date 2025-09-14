#include <bits/stdc++.h>
using namespace std;
vector<int> mergearray(vector<int> &v,vector<int> &v1) {
	int s1=v.size();
	int s2=v1.size();
	vector<int> a;
	int i=0,j=0;
	while(i<s1 && j<s2 ) {
		if(v[i] < v1[j]) {
			a.push_back(v[i]);
			i++;
		}
		else if(v[i] > v1[j]) {
			a.push_back(v1[j]);
			j++;
		}
	}
	if(j==s2){
	while(i<s1){
	   	a.push_back(v[i]);
	   	i++;
	}}
	if(i==s1){
	while(j<s2){
	   	a.push_back(v1[j]);
	   	j++;
	}}
	return a;
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
	int n1;
	cin>>n1;
	vector<int> v1;
	for(int i=0; i<n1; i++) {
		int x;
		cin>>x;
		v1.push_back(x);
	}
	vector<int> v3=mergearray(v,v1);
	for(auto x:v3) {
		cout<<x<<" ";
	}
	return 0;
}