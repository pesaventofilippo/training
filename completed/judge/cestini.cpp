#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > cestini;

void inizia(int N, int M) {
    cestini = vector< vector<int> >(M, vector<int>());
    for (int i=0; i<N; i++)
        cestini[0].push_back(i);
}

void sposta(int a, int b) {
    int oggetto = cestini[a].back();
    cestini[a].pop_back();
    cestini[b].push_back(oggetto);
}

int controlla(int a, int i) {
    if (i >= cestini[a].size())
        return -1;
    return cestini[a][i];
}
