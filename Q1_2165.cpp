/*
 * Name: Rahul Parida
 * Reg No: 2241016202
 * PS LINK: https://cses.fi/problemset/task/2165/
 */


#include <iostream>
using namespace std;
#include <bits/stdc++.h>



void move(int from, int to, int depth){
    if(depth == 1){
        cout<<from<<" "<<to<<endl;
        return;
    }

    int other = 6 - from - to;
    move(from, other, depth-1);
    cout<<from<<" "<<to<<endl;
    move(other, to, depth-1);
}

int main(){
     int N;
    cin>>N;
    cout<< (1<<N)-1<<endl;
    move(1, 3, N);
}