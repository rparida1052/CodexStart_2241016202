/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/1617/
 */
#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	fio;
	ll n,lks=1; cin>>n;
	while(n--){
		lks<<=1;
		lks%=((int)1e9+7);
	}	
	cout<<lks<<"\n";
	return 0;
}
