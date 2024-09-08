#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;

        if (a == 100 || a == 1000 || a == 10000) {
            cout << "YES" << endl;
        } else {
            string str_a = to_string(a);
            if (str_a.length() > 1 && str_a[0] == '1' && str_a.find('0') != string::npos) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
