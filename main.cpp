#include <algorithm>
#include "string"
#include <iostream>
#include "vector"

using namespace std;

bool my_sort(pair<char, int> a, pair<char, int> b) {
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<pair<char, int>> input_chars;

    for (int i = 0; i < s.length(); i++) {
        input_chars.emplace_back(s[i], i);
    }

    stable_sort(input_chars.begin(), input_chars.end(), my_sort);

    int row_number = n - 1;
    for (int counter = 0; counter < s.length(); counter++) {
        cout << input_chars[row_number].first;
        row_number = input_chars[row_number].second;
    }

    return 0;
}