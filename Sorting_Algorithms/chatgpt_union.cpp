#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int>& a, vector<int>& b) {
    vector<int> temp;
    int i = 0, j = 0;
    int asize = a.size(), bsize = b.size();

    while (i < asize && j < bsize) {
        if (a[i] == b[j]) {
            if (temp.empty() || temp.back() != a[i]) {
                temp.push_back(a[i]);
            }
            i++;
            j++;
        } else if (a[i] > b[j]) {
            if (temp.empty() || temp.back() != b[j]) {
                temp.push_back(b[j]);
            }
            j++;
        } else {
            if (temp.empty() || temp.back() != a[i]) {
                temp.push_back(a[i]);
            }
            i++;
        }
    }

    while (i < asize) {
        if (temp.empty() || temp.back() != a[i]) {
            temp.push_back(a[i]);
        }
        i++;
    }

    while (j < bsize) {
        if (temp.empty() || temp.back() != b[j]) {
            temp.push_back(b[j]);
        }
        j++;
    }

    return temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> b = {2, 3, 5};

    vector<int> temp = sortedArray(arr, b);

    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << endl;
    }

    return 0;
}
