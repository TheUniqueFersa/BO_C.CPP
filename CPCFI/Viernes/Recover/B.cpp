#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    int pointingTo[n+1];
    vector<int> naughtyStudents;
    for(i = 1; i<=n; i++){
        cin >> pointingTo[i];
        // cout<< i<<'\n';
    }
    int a;
    // int a = pointingTo[1];
    for(i = 1; i<=n; i++){
        a = pointingTo[i];
        naughtyStudents.push_back(i);
        while(find(naughtyStudents.begin(), naughtyStudents.end(), a) == naughtyStudents.end()){
            naughtyStudents.push_back(a);
            a = pointingTo[a];
        }
        while(!naughtyStudents.empty()){
            naughtyStudents.pop_back();
        }
        cout << a << " ";
    }
    cout << '\n';

}

int main() {
    fastIo();
    solve();
}