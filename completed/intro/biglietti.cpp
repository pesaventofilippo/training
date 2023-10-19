#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N, M, A, B;
    in >> N >> M >> A >> B;
    
    int singolo = A*N;

    int carnet = N/M;
    int resto = N%M;
    int split = B*carnet + A*resto;

    int c2 = N/M + 1;
    int s2 = B*c2;

    out << min({singolo, split, s2}) << endl;

    return 0;
}
