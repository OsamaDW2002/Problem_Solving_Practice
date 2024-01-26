/*
 *
 * Problem Name : Triple
 * URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/A
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : i can solve it by using hash table
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ,lock = 0, input;
    cin >> n;
    int A[n + 1];
    for (int i = 0; i < n + 1; ++i) {
        A[i]=0;
    }
    for (int i = 0; i < n ; ++i) {
        cin >> input;
        A[input]++;
        if(A[input] == 3 && lock == 0)
        {
            cout << input << endl;
            lock = 1;
        }
    }
    if(!lock)
    cout << -1 << endl;
}
int main(){
    int n;
    cin >> n;
    while (n--){solve();}


    return 0;
}