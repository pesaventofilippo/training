#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N, C;
    in >> N >> C;

    vector<int> v(N);
    
    for (int i=0; i<N; i++) {
        in >> v[i];
    }

    int minlen = N;
    for (int i=0; i<=N-C; i++) {
        vector<bool> colors(C, false);
        for (int j=i; j<i+C; j++)
            colors[v[j]] = true;
        bool alltrue = count(colors.begin(), colors.end(), true) == C;

        if (!alltrue) {
            for (int j=i+C; j<N; j++) {
                colors[v[j]] = true;
                bool alltrue = count(colors.begin(), colors.end(), true) == C;
                if (alltrue) {
                    minlen = min(minlen, j-i+1);
                    break;
                }
            }
        }
        else {
            minlen = C;
            break;
        }
    }

    out << minlen << endl;

    return 0;
}
