/*
 *
 * Problem Name : Counting Test
 * URL : https://codeforces.com/gym/101532/problem/D
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */
#define FAST std::ios_base::sync_with_stdio(false), std::cin.tie(NULL);
#define ll long long
#define el "\n"
#include <bits/stdc++.h>
using namespace std;
//void prefix_sum(vector<ll> &vec){
//    for (int i = 1; i < vec.size(); ++i) {
//        vec[i] += vec[i - 1];
//    }
//}
void fill_table(vector<int>&vec , int size_inside , string str , int thechar){
    for (int i = 1; i <= size_inside; ++i) {
        if(str[i - 1] - 'a' + 1 == thechar)
            vec[i]++;

        vec[i] += vec[i - 1];
    }


}
void solve(){
    int n , q;
    cin >> n >> q;
    string sequence;
    cin >> sequence;
    int least , most , charnum;
    char ch;
    vector<vector<int>>char_prefixsum_table(27 , vector<int>(n + 1));

    for (int i = 1; i < 27; ++i) {
        fill_table(char_prefixsum_table[i] , n , sequence , i);
    }

    while (q--) {
        cin >> least >> most >> ch;
        charnum = ch - 'a' + 1;
        if(most <= n){
             cout << char_prefixsum_table[charnum][most] - char_prefixsum_table[charnum][least - 1]<<el;
        }else{
            cout << ( char_prefixsum_table[charnum][n] * ((most)/n) + char_prefixsum_table[charnum][most % n] ) - ( char_prefixsum_table[charnum][n] * ((least - 1)/n) + char_prefixsum_table[charnum][(least - 1) % n]) << el;

        }
    }
}
int main(){
    FAST;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}