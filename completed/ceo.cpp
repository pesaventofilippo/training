#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N, x;
    in >> N;
    
    long long total = 1;
    long long lastlevel = 1;
    for (int i=0; i<N; i++) {
        in >> x;
        total += x * lastlevel;
        lastlevel *= x;
    }

    out << total << endl;

    return 0;
}
