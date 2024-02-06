/*
 *
 * Problem Name :Greg and Array
 * URL : https://codeforces.com/contest/295/problem/A
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */
#define ll long long

#include <bits/stdc++.h>
using namespace std;
void prefix_sum(vector<ll> &vec){
    for (ll i = 1; i < vec.size(); ++i) {
        vec[i] += vec[i - 1];
    }
}
void solve(){
    vector<ll> d , a ;
    ll n , m , k , input , least , most;
    cin >> n >> m >> k;
    vector<ll> frequent_of_the_operation(n + 1);
    vector<ll> frequent_of_the_querries(m + 1);
    vector<pair<ll,ll>>operation;
    vector<pair<ll,ll>>querries;
    for (ll i = 0; i < n; ++i) {
        cin >> input;
        a.push_back(input);
    }
    for (ll i = 0; i < m; ++i) {
        cin >> least >> most >> input;
        operation.emplace_back(least , most);
        d.push_back(input);
    }
    for (ll i = 0; i < k; ++i) {
        cin >> least >> most;
        frequent_of_the_querries[least - 1]++;
        frequent_of_the_querries[most] += -1;
    }
    prefix_sum(frequent_of_the_querries);
    for (ll i = 0; i < m ; ++i) {
        d[i] *= frequent_of_the_querries[i];
    }

    for (ll i = 0; i < m; ++i) {
        frequent_of_the_operation[operation[i].first - 1] += d[i];
        frequent_of_the_operation[operation[i].second ] += (d[i] * -1);
    }
    prefix_sum(frequent_of_the_operation);
    for (ll i = 0; i < n; ++i) {
        cout << a[i] + frequent_of_the_operation[i] << " ";
    }
}
int main(){


    solve();

    return 0;
}