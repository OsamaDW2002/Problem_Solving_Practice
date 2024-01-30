/*
 *
 * Problem Name :Canvas Frames
 * URL :https://codeforces.com/contest/127/problem/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N , input;
    cin >> N;
    vector<int>sticks(101);
    for (int i = 0; i < N; ++i) {
        cin >> input;
        sticks[input]++;
    }
    int count = 0 ;
    for (int i = 1; i < 101; ++i) {
        count += sticks[i]/2;
    }
    cout << count / 2;
}
int main(){


    solve();

    return 0;
}
