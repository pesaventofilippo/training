#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N;
    in >> N;
    vector<int> ver(N);
    vector<int> ham(N);
    for (int i=0; i<N; i++)
        in >> ver[i];
    for (int i=0; i<N; i++)
        in >> ham[i];

    int sumVer = accumulate(ver.begin(), ver.end(), 0);
    int sumHam = accumulate(ham.begin(), ham.end(), 0);
    out << (sumVer < sumHam ? "Verstappen" : "Hamilton") << endl;

    int minVer = *min_element(ver.begin(), ver.end());
    int minHam = *min_element(ham.begin(), ham.end());
    out << (minVer < minHam ? "Verstappen" : "Hamilton") << endl;
}
