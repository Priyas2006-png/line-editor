#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList,
                             vector<string> queries) {
    unordered_map<string, int> frequency;

    for (const string &s : stringList)
        frequency[s]++;

    vector<int> result;

    for (const string &q : queries)
        result.push_back(frequency[q]);

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> stringList(n);
    for (string &s : stringList)
        cin >> s;

    int q;
    cin >> q;

    vector<string> queries(q);
    for (string &s : queries)
        cin >> s;

    vector<int> result = matchingStrings(stringList, queries);

    for (int x : result)
        cout << x << '\n';

    return 0;
}
