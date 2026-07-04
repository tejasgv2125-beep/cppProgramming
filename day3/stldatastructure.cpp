#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> s;
    int ch, id;
    string name;

    while (true) {
        cout << "\n1.Add 2.Search 3.Delete 4.Display 5.Exit\n";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter ID and Name: ";
            cin >> id >> name;
            s.push_back({id, name});
            break;

        case 2:
            cout << "Enter ID: ";
            cin >> id;
            for (auto x : s)
                if (x.first == id)
                    cout << x.first << " " << x.second << endl;
            break;

        case 3:
            cout << "Enter ID: ";
            cin >> id;
            for (int i = 0; i < s.size(); i++) {
                if (s[i].first == id) {
                    s.erase(s.begin() + i);
                    cout << "Deleted\n";
                    break;
                }
            }
            break;

        case 4:
            for (auto x : s)
                cout << x.first << " " << x.second << endl;
            break;

        case 5:
            return 0;
        }
    }
}