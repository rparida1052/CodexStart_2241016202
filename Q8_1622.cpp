
/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/1622/
 */

#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void permute(string str, int l, int r, set<string> &lks){
	
	if(l==r) lks.insert(str);
	else{
		for (int i = l; i <= r; i++) 
		{ 
			swap(str[l], str[i]);
			permute(str, l+1, r, lks); 
			swap(str[l], str[i]); 
		} 
	}
	
}
int main(){
	fio;
	string s; cin>>s;
	set<string> lks;
	permute(s,0,s.length()-1,lks);
	cout<<lks.size()<<"\n";
	for(auto x : lks) cout<<x<<"\n";
 
	return 0;
}
 
