/*
 *
 * Problem Name : Maximum Subarray Sum
 * URL : https://codeforces.com/problemset/gymProblem/102961/H
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 **/
#define ll long long
#include <bits/stdc++.h>
using namespace std;
void prefix_sum(vector<ll> &vec){
    for (int i = 1; i < vec.size(); ++i) {
        vec[i] += vec[i - 1];
    }
}
void solve(){
    ll N , input;
    cin >> N;
    vector<ll>vec;
    for (int i = 0; i < N; ++i) {
        cin >> input;
        vec.push_back(input);
    }
    ll maxelement = *max_element(vec.begin(), vec.end());
    prefix_sum(vec);
    ll maxSubArray = vec[0] , sumSub  , l = 0;
    for (int i = 0; i < N; ++i) {
        sumSub = vec[i] - l;

        if(sumSub <= 0){
            l = vec[i];
        }else{
            if(sumSub > maxSubArray)maxSubArray = sumSub;
        }

//        if (maxSubArray == vec[N - 1]){
//            if(maxSubArray - vec[0] > vec[N - 2]){
//                maxSubArray -= vec[0];
//            }else{
//                maxSubArray = vec[N - 2];
//            }
//        }
    }
    cout << ((maxSubArray <= 0)?maxelement:maxSubArray);
}
int main(){


    solve();

    return 0;
}