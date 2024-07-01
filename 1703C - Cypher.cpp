/*
      yildiz
*/
#include <string>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            int b;
            string s;
            cin >> b >> s;
            for (int j = 0; j < s.length(); j++) {
                char m = s[j];
                if (m == 'U') {
                    v[i] = (v[i] == 0 ? 9 : v[i] - 1);
                }
                else {
                    v[i] = (v[i] == 9 ? 0 : v[i] + 1);
                }
            }
        }
        for (int x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }
}