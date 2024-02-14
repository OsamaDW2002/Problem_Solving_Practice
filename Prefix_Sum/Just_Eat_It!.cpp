/*
 *
 * Problem Name : Just Eat It!
 * URL : https://codeforces.com/problemset/problem/1285/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */
#define FAST std::ios_base::sync_with_stdio(false), std::cin.tie(NULL);
#define el "\n"
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void prefix_sum(vector<ll> &vec){
    for (int i = 1; i < vec.size(); ++i) {
        vec[i] += vec[i - 1];
    }
}
void solve(){
    ll N  , Yasser , l = 0 ;
    cin >> N;
    vector<ll> tastiness(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> tastiness[i];
    }
    prefix_sum(tastiness);
    Yasser = tastiness[N];
    for (int i = 1; i <=N ; ++i) {
        if(tastiness[i] - tastiness[l] >= Yasser && (l != 0 || i != N)) {
            cout << "NO" << el;
            return;
        }
        else if(tastiness[i] - tastiness[l] <= 0) { l = i;}
    }
    cout << "YES" << el;

}
int main() {
    FAST;
    int T;
    cin >> T;
    while (T--)
        solve();

    return 0;

}