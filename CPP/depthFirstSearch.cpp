/* Depth First Search using C++ 11 */

#include<iostream>
#include<vector>
using namespace std;

#define MAX 112345678;
bool visited[MAX];
vector<int> neighbors[MAX];

void dfs (int s){
    if(visited[s]) return;
    visited[s] = true;
    for(auto u : neighbors[s]){
        dfs(u);
    }
}

int main(void){
    int n = 0, a = 0, b = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        neighbors[a].push_back(b);
        neighbors[b].push_back(a);
    }
    dfs(1);
    return 0;
}