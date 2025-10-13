#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read sizes
    int sizea, sizeb;
    cout << "Enter size of vector a: ";
    if (!(cin >> sizea)) return 0;
    cout << "Enter size of vector b: ";
    if (!(cin >> sizeb)) return 0;

    // Read vectors (assume they may already be sorted, but logic works regardless)
    vector<int> a(sizea), b(sizeb);
    cout << "Enter elements of a:\n";
    for (int i = 0; i < sizea; ++i) cin >> a[i];

    cout << "Enter elements of b:\n";
    for (int i = 0; i < sizeb; ++i) cin >> b[i];

    // --- logic you provided (complete program version) ---
    int orig_sizea = a.size();
    int orig_sizeb = b.size();

    // Append b into a
    for (int i = 0; i < orig_sizeb; ++i) {
        a.push_back(b[i]);
    }

    // Sort combined vector
    sort(a.begin(), a.end());

    // Clear b and take the largest `orig_sizeb` elements from combined array
    b.clear();
    for (int i = orig_sizea; i < orig_sizea + orig_sizeb; ++i) {
        b.push_back(a[i]);
    }

    // Restore a to its original size (keeping smallest orig_sizea elements)
    while ((int)a.size() > orig_sizea) a.pop_back();

    // --- output results ---
    cout << "\nAfter redistribution:\n";
    cout << "a (size " << a.size() << "): ";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << "b (size " << b.size() << "): ";
    for (int x : b) cout << x << " ";
    cout << "\n";

    return 0;
}
