/*
 *
 * Problem Name :  Little Girl and Maximum Sum
 * URL : https://codeforces.com/problemset/problem/276/C
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : by using prefix sum i calculate the frequency of each index in the querries and sort it desc with sort the main array desc too then i calculate the sum of array indexes multiply with its mirror in index frequency array
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
    int n , q , l , r;
    cin >> n >> q;
    vector<ll> maxFreqQurrie(n + 2) , numbers(n + 1) ;

    for (int i = 1; i <= n; ++i) {
        cin >> numbers[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        maxFreqQurrie[l]++;
        maxFreqQurrie[r + 1]--;
    }
    prefix_sum(maxFreqQurrie);
    std::sort(numbers.begin(), numbers.end() ,greater<int>());
    std::sort(maxFreqQurrie.begin(), maxFreqQurrie.end() , greater<int>());
    ll sum = 0;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        sum += (maxFreqQurrie[i] * numbers[i]);
    }
    cout << sum << el;
}
int main(){

    FAST;
    solve();

    return 0;
}