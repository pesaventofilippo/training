#include <bits/stdc++.h>
using namespace std;

long long modpow(int base_, int exponent, int modulus) {
    long long base = base_;
    long long res = 1;
    while (exponent > 0) {
        if (exponent%2 == 1)
            res = (res*base) % modulus;
        exponent = exponent >> 1;
        base = (base*base) % modulus;
    }
    return res;
}

void decifra(int N, int d, int L, int messaggio[], char plaintext[]) {
    for (int i=0; i<L; i++) {
        int b = messaggio[i];
        plaintext[i] = modpow(b, d, N);
    }
    plaintext[L] = '\0';
}

int main() {
    ifstream in("input.txt");
    int N, d, L;
    in >> N >> d >> L;
	
    int messaggio[100];
	char plaintext[110];
	for (int i=0; i<L; i++)
        in >> messaggio[i];

	decifra(N, d, L, messaggio, plaintext);
	cout << plaintext << endl;
	return 0;
}
