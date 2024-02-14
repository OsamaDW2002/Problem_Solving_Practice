/*
 *
 * Problem Name : Stripe
 * URL : https://codeforces.com/problemset/problem/18/C
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
    int n , numberOfProbabilities = 0;
    cin >> n;
    vector<int> stripe(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> stripe[i];
    }
    prefix_sum(stripe);
    for (int i = 1; i < n; ++i) {
        if(stripe[i] - stripe[0] == stripe[n] - stripe[i])numberOfProbabilities++;
    }
    cout << numberOfProbabilities << el;

}
int main(){


    solve();

    return 0;
}