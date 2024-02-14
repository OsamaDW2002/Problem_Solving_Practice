/*
 *
 * Problem Name : Sereja and Suffixes
 * URL : https://codeforces.com/problemset/problem/368/B
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
  int n , m , l , in;
  cin >> n >> m ;
  vector<int>positions(n + 1 );
  vector<int>numbers(100001);
    for (int i = 1; i <= n; ++i) {
        cin >> positions[i];
    }
    for (int i = n ; i > 0; --i) { // to make the distinct number all in the begin
        if(!numbers[positions[i]]){
            numbers[positions[i]]++;
            positions[i] = 1;
        }else{
            positions[i] = 0;
        }
    }
    prefix_sum(positions);
    for (int i = 0; i < m; ++i) {
        cin >> l;
        cout << positions[n] - positions[l - 1] << el;
    }
}
int main(){


    solve();

    return 0;
}