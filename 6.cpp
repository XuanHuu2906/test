#include <bits/stdc++.h>
using namespace std;

bool doixung(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string word;
    vector<string> vt;
    vector<int> dem; 
    int maxLen = 0; 
    while (cin >> word) {
        if (doixung(word)) {
            bool ok = false;
            for (int i = 0; i < vt.size(); ++i) {
                if (vt[i] == word) {
                    dem[i]++;
                    ok = true;
                    break;
                }
            }
            if (!ok) {
                vt.push_back(word);
                dem.push_back(1);
            }
            maxLen = max(maxLen, (int)word.size()); 
        }
    }
    for (int i = 0; i < vt.size(); ++i) {
        if (vt[i].size() == maxLen) {
            cout << vt[i] << " " << dem[i] << endl;
            break;
        }
    }

    return 0;
}
