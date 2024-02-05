/*
 *
 * Problem Name : Fence
 * URL : https://codeforces.com/problemset/problem/363/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void prefix_sum(vector<int> &vec){
    for (int i = 1; i < vec.size(); ++i) {
        vec[i] += vec[i - 1];
    }
}
void solve(){
    int N , k , input;
    vector<int>planks;
    cin >> N >> k;
    for (int i = 0; i < N ; ++i) {
        cin >> input;
        planks.push_back(input);
    }

    int pos = 0;
    prefix_sum(planks);
    int minHight;
    minHight = planks[k - 1];
    for (int i = k; i < N; ++i) {

        if (planks[i] - planks[i - k] < minHight) {
            minHight = planks[i] - planks[i - k];
            pos = i - k + 1;
        }

    }
    cout << pos + 1;
}
int main(){


    solve();

    return 0;
}