#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    in >> n;
    
    vector< pair<int, int> > intervals;
    vector< pair<int, int> > liberi;

    for (int i = 0; i < n; i++) {
        int a, b;
        in >> a >> b;
        intervals.push_back(make_pair(a, b));
    }

    sort(intervals.begin(), intervals.end());
    int lastEnd = intervals[0].second;

    for (int i=1; i < n; i++) {
        if (intervals[i].first <= lastEnd)
            lastEnd = max(lastEnd, intervals[i].second);
        else {
            liberi.push_back(make_pair(lastEnd, intervals[i].first));
            lastEnd = intervals[i].second;
        }
    }

    if (liberi.size() == 0)
        out << 0 << endl;
    else {
        int maxLen = 0;
        int maxIndex = 0;
        for (int i=0; i < liberi.size(); i++) {
            int len = liberi[i].second - liberi[i].first;
            if (len > maxLen) {
                maxLen = len;
                maxIndex = i;
            }
        }

        out << liberi[maxIndex].first << " " << liberi[maxIndex].second << endl;
    }
}
