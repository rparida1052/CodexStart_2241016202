
/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/1094/
 */

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	int n; cin>>n;
	ll pre,lks=0,curr; cin>>pre;
	for(int i=1;i<n;i++){
		cin>>curr;
		lks+=((pre-curr)>0?(pre-curr):0);
		pre=max(pre,curr);
	}
	cout<<lks;
	return 0;
