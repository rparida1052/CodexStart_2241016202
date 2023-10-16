/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/2205/
 */

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	fio;
	ll n; cin>>n;
	for(int i=0;i<1<<n;i++){
		int val=(i ^ (i >> 1));
		bitset<32> r(val);
		string s = r.to_string();
		cout<<s.substr(32 - n)<<"\n";
	}
 
	return 0;
}