/*
 *
 * Problem Name : Garland
 * URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/B
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int freqOfFirstLine[26] = {0} , freqOfSecondLine[26] = {0} , countOfMaxPossible =0;
    string colors , Vasyacolors ;
    cin >> colors >> Vasyacolors;

    for (int i = 0; i < colors.length(); ++i) {
        freqOfFirstLine[colors[i] - 97]++;
    }
    for (int i = 0; i < Vasyacolors.length(); ++i) {
        freqOfSecondLine[Vasyacolors[i] - 97]++;
    }
    for (int i = 0; i < 26; ++i) {
        if(freqOfSecondLine[i] > 0 && freqOfFirstLine[i] == 0) {
            cout << -1  << endl;
            return;
        }
        countOfMaxPossible += min(freqOfFirstLine[i] , freqOfSecondLine[i]);
    }
    cout << countOfMaxPossible << endl;

}
int main(){


    solve();

    return 0;
}