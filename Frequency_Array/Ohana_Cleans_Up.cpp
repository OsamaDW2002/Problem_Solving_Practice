/*
 *
 * Problem Name :Ohana Cleans Up
 * URL :https://codeforces.com/problemset/problem/554/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : if i use map it will make the solution easier an more performance but it's just a practice on frequency array :)
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
 int N , count = 0 , maxnum = 0 ;
 cin >> N;
 string rows;
 vector<string> squares;
    for (int i = 0; i < N; ++i) {
        cin >> rows;
        squares.push_back(rows);
    }
    for (int i = 0; i < N; ++i) {
        count = 0;
        for (int j = i + 1; j < N; ++j) {
            if(squares[j] == squares[i]) count++;

        }
        maxnum = max(count , maxnum);
    }
    cout << maxnum + 1;

}
int main(){


    solve();

    return 0;
}