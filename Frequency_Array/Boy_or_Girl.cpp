/*
 *
 * Problem Name : Boy or Girl
 * URL : https://codeforces.com/problemset/problem/236/A
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : this problem solved by using frequency array just to practice the concept , i can make the solution more efficient by using set
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    string name;
    int freq[26] = {0}, count = 0;
    cin >> name;
    for (int i = 0; i < name.size(); ++i) {
        freq[name[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (freq[i]) count++;
    }
    if (!(count % 2)) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

}
int main(){


    solve();

    return 0;
}