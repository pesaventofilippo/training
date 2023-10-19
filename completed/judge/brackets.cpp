#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n, k;
        cin >> n >> k;

        vector<int> brackets;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;

            if (!brackets.empty() && x == brackets.back())
                brackets.pop_back();
            else
                brackets.push_back(x);
        }

        cout << (brackets.empty() ? 1 : 0) << endl;
    }
}
