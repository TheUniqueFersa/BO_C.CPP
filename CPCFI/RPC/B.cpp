#include <iostream>
#include <set>
#include <string>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    s.erase(3, 1);
    s.erase(6, 1);
    set<char> st;
    for(int i = 0; i<10; i++){
        if(st.find(s[i]) == st.end()){
            st.insert(s[i]);
        }
    }
    cout << st.size();
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    solve();
}