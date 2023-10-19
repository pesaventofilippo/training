#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max_sum = A[0];
    int sum = A[0];
    for (int i = 1; i < N; i++) {
        sum = max(A[i], sum + A[i]);
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
}
