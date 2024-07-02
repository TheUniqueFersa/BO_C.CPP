#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fastIo();
    int i, j;
    vector<int> a = {5,2,4,6,1,3};
    cout << "Original: \n";
    for(auto each : a){
        cout << each << ", " ;
    }
    cout << '\n';
    
    for(j=1; j<6; j++){
        int key = a[j];
        //Insert A[j] into the sorted sequence A[1..j-1]
        i = j-1;
        while(i>=0 && a[i]>key){
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
    }

    cout << "Sorted: \n";
    for(auto each : a){
        cout << each << ", " ;
    }
    cout << '\n';
    return 0;
}