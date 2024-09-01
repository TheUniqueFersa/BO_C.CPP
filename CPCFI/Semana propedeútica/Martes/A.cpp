#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include <map>

void solve() {
    int n_plan;
    cin >> n_plan;
    map<int, int> orbits;
    int incoming, m, total=0;
    cin >> m; //cost of the 2nd macihne
    for(int i=0; i<n_plan; i++){
        cin >> incoming;
        if(orbits.find(incoming) != orbits.end()){ //It issss
            orbits[incoming] ++;
        } else {
            orbits[incoming] = 1;
        }
    }
    for(auto &each : orbits){
        if(each.second < m){
            total+=each.second;
        } else {
            total += m;
        }
    }
    cout << total << '\n';
}

int main() {
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}