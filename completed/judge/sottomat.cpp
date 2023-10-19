#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int R, C;
    cin >> R >> C;
    
    int matrix[R][C];
    for (int i=0; i<R; i++)
        for (int j=0; j<C; j++)
            cin >> matrix[i][j];

    int maxSum = INT_MIN;
    for (int left=0; left<C; left++) {
        int temp[R];
        memset(temp, 0, sizeof(temp));
        for (int right=left; right<C; right++) {
            for (int i=0; i<R; i++)
                temp[i] += matrix[i][right];
            
            int maxEndingHere = 0, maxSoFar = 0;
            for (int i=0; i<R; i++) {
                maxEndingHere = max(0, maxEndingHere + temp[i]);
                maxSoFar = max(maxSoFar, maxEndingHere);
            }
            maxSum = max(maxSum, maxSoFar);
        }
    }

    cout << maxSum << endl;
}
