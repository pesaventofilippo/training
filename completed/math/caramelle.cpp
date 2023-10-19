#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    const int MAXN = 1000000000;

    int T;
    in >> T;
    for (int t=0; t<T; t++) {
        int N;
        in >> N;
        vector<int> V(N);
        for (int i=0; i<N; i++)
            in >> V[i];
        
        for (int c=*max_element(V.begin(), V.end()); c<=MAXN; c++) {
            bool flag = false;
            for (int i=0; i<N; i++) {
                if (c % V[i] != 0) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                out << "Case #" << t+1 << ": " << c << endl;
                break;
            }
        }
    }
}
