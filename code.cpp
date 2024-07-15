
//////////////////////////////////////
// SAP XEP NOI BOT - LIET KE NGUOC
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, b;
        cin >> n;
        vector<int> a(n);
        stack<vector<int>> st;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            bool k = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    k = true;
                }
            }
            if (k == false) {
                break;
            }
            st.push(a);
        }

        b = st.size();
        while (st.size()) {
            a = st.top();
            st.pop();
            cout << "Buoc " << b-- << ": ";
            for (int j = 0; j < n; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}



//////////////////////////////////////
// SAP XEP CHEN - LIET KE NGUOC
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        stack<vector<int>> st;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            int k = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > k) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = k;
            st.push(a);
        }

        int b = st.size();
        while (st.size()) {
            a = st.top();
            st.pop();
            cout << "Buoc " << b-- << ": ";
            for (int j = 0; j < n; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}



//////////////////////////////////////
// SAP XEP CHON - LIET KE NGUOC
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        stack<vector<int>> st;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            int k = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[k]) {
                    k = j;
                }
            }
            swap(a[k], a[i]);
            st.push(a);
        }

        int b = st.size();
        while (st.size()) {
            a = st.top();
            st.pop();
            cout << "Buoc " << b-- << ": ";
            for (int j = 0; j < n; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}



//////////////////////////////////////
// MERGE SORT
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
