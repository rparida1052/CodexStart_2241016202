/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/1083/
 */
#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	int n; cin>>n;
	int lks=0,k=0;
	for(int i=1;i<=n;i++) lks^=i;
	for(int i=1;i<n;i++) cin>>k, lks^=k;
	cout<<lks<<"\n";
	return 0;
}
 