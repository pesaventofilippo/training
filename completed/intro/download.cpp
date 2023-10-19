#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int T;
    in >> T;
    for (int t=0; t<T; t++) {
        int N, F, C;
        in >> N >> F >> C;
        int nf = N/F;
        int nc = (N-nf*F)/C;
        out << "Case #" << t+1 << ": " << nf << " " << nc << endl;
    }

    return 0;
}
