#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int T;
    in >> T;
    for (int t=0; t<T; t++) {
        vector<int> N(4);
        vector<string> F(4, string());
        for (int i=0; i<4; i++) {
            in >> N[i];
            F[i].resize(N[i]);
        }
        
        int M;
        in >> M;
        
        for (int i=0; i<4; i++) {
            for (int j=0; j<N[i]; j++)
                in >> F[i][j];
        }

        vector<string> substrings;
        for (int i=0; i<4; i++) {
            vector<string> tmp;
            for (int j=0; j<=N[i]-M; j++) {
                if (count(tmp.begin(), tmp.end(), F[i].substr(j, M)) == 0)
                    tmp.push_back(F[i].substr(j, M));
            }
            substrings.insert(substrings.end(), tmp.begin(), tmp.end());
        }

        string virus;
        for (string s : substrings) {
            if (count(substrings.begin(), substrings.end(), s) == 4) {
                virus = s;
                break;
            }
        }

        out << "Case #" << t+1 << ": ";
        for (int i=0; i<4; i++) {
            for (int j=0; j<=N[i]-M; j++) {
                string sub = F[i].substr(j, M);
                if (sub == virus) {
                    out << j << " ";
                    break;
                }
            }
        }
        out << endl;
    }
}
