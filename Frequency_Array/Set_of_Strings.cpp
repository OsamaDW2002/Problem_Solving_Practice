/*
 *
 * Problem Name : Set of Strings
 * URL : https://codeforces.com/problemset/problem/544/A
 * Solved By : Osama Dweikat
 *
 * Comments About The Solution : Nothing
 *
 * */

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N;
    string str;
    char char_count[26] = {0};
    vector<int> butiful_names;
    cin >> N >> str ;
        for (int i = 0; i < str.size(); ++i) {
            if(char_count[str[i] -'a'] == 0) {
                butiful_names.push_back(i);
                N--;
            }
            if(!N) break;
            else if(N > 1 && i == str.size() - 1) break;
            char_count[str[i] -'a']++ ;
        }
        if(N) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for (int i = 0; i < butiful_names.size(); ++i) {
                if(i == butiful_names.size() - 1){
                    cout << str.substr(butiful_names[i],str.size() - i);
                }else{
                    cout << str.substr(butiful_names[i] , butiful_names[i + 1] - butiful_names[i]) << endl;
                }
            }

        }
}
int main(){


    solve();

    return 0;
}