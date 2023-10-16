/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/1618/
 */

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	ll n,ans=0; cin>>n;
	for(int i=5;i<=n;i*=5) ans+=n/i;
	cout<<ans<<"\n";
	return 0;
