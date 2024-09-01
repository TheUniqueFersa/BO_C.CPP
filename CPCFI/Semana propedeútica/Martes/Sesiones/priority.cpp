#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int arr[8] = {5,13,10,32,7,14,6,12};

    //definir priority queue
    priority_queue<int> pq;

    cout << "Arreglo normal: " << endl;

    for(auto x: arr){
        cout << "[" << x << "" << "]";
    }

    cout << endl;

    //int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < 8; i++){
        pq.push(arr[i]);
    }

    cout << "\nPriority queue: \n";
    while(!pq.empty()){
        cout << "[" << pq.top() << "" << "]";
        pq.pop();
    }

    cout << endl;

    //VECTOR

    priority_queue< int,vector<int>, greater<int>>gp;

    vector<int> v={4,9,6,7,3,12,20,5,14,19};

    cout << "\nvector normal: " << endl;
    for(auto x:v){
        cout << "[" << x << "]";

    }
    cout << endl ;

    for(int i = 0; i < v.size(); i++){
        gp.push(v[i]);
    }

    cout << "\nPriority queue(ascendente): " << endl;
    while(!gp.empty()){
        cout << "[" << gp.top() << "]";
        gp.pop();
    }
    return 0;

}