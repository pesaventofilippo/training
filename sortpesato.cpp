#include <bits/stdc++.h>
using namespace std;

int calcolaS(vector<int> arr) {
    int S = 0;
    for (int i = 0; i < arr.size(); i++) {
        while (arr[i] != i + 1) {
            int correctIndex = arr[i] - 1;
            swap(arr[i], arr[correctIndex]);
            S++;
        }
    }
    return S;
}

int calcolaP(vector<int> arr) {
    int P = 0;
    for (int i = arr.size()-1; i>0; i--) {
        if (arr[i] < i+1) {
            for (int j = i-1; j >= 0; j--) {
                if (arr[j] == i+1) {
                    swap(arr[i], arr[j]);
                    P += arr[i] + arr[j];
                }
            }
        }
    }
    return P;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N;
    in >> N;
    vector<int> arr1(N);
    vector<int> arr2(N);

    // INPUT
    for (int i = 0; i < N; i++) {
        in >> arr1[i];
        arr2[i] = arr1[i];
    }

    // CALCOLO S
    out << calcolaS(arr1) << " ";

    // CALCOLO P
    out << calcolaP(arr2) << endl;

    return 0;
}
