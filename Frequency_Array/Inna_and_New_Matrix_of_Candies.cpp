/*
 *
 * Problem Name : Inna and New Matrix of Candies
 * URL : https://codeforces.com/problemset/problem/400/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N , M , endpoint, count = 0 , startpoint, loose = 0;
    string input ;
    vector<string> reload;
    set<int>moves;
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> input;
        reload.push_back(input);
    }
    for (int i = 0; i < N; ++i) {
        count++;
        startpoint = 0;
        endpoint = 0;
        count = 0;
        for (int j = 0; j < M; ++j) {
           if(reload[i][j] == 'G' && endpoint)loose = 1;
           else if (reload[i][j] == 'G') startpoint = 1;
           else if (reload[i][j] == 'S') { endpoint = 1;startpoint = 0; }
           else if (startpoint)count++;
        }
        moves.insert(count + 1);
    }
    if (loose) cout << -1;
    else cout << moves.size();
}
int main(){


    solve();

    return 0;
}