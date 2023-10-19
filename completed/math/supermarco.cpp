#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    long long n;
    in >> n;
    out << (n*(n-1) / 4.0) << endl;
}
