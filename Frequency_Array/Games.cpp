/*
 *
 * Problem Name : Games
 * URL :https://codeforces.com/problemset/problem/268/A
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N , home , guest , count = 0;
    vector<pair<int,int>>teams(101);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> home >> guest;
        teams.at(home).first++;
        teams.at(guest).second++;
    }
    for (int i = 0; i < 101; ++i) {
        count += (teams.at(i).first * teams.at(i).second);
    }
    cout << count;
}
int main(){


    solve();

    return 0;
}