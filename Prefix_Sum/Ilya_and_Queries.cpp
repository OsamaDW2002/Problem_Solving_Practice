/*
 *
 * Problem Name : Ilya and Queries
 * URL : https://codeforces.com/problemset/problem/313/B
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
void prefix_sum(vector<int> &vec){
    for (int i = 1; i < vec.size(); ++i) {
        vec[i] += vec[i - 1];
    }
}
void solve(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> sameNumber(s.size() + 1);
    for (int i = 1; i <= s.size(); ++i) {
        if(s[i - 1] == s[i] && i != s.size()){
            sameNumber[i + 1]++;
        }
    }
    prefix_sum(sameNumber);

    int l , r;
    while (n--){
        cin >> l >> r;
        cout << sameNumber[r] - sameNumber[l] << el;
    }

}
int main(){
    FAST;

    solve();

    return 0;
}
