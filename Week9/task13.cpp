#include <iostream>
using namespace std;

void jazzifyChords(string chords[], int numChords) {
    cout << "Jazzified chords: [";
    for (int i = 0; i < numChords; ++i) {
        if (chords[i].back() != '7') {
            chords[i] += "7";
        }
        cout << chords[i];
        if (i < numChords - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;
    string chords[numChords];

    cout << "Enter " << numChords << " chords, one per line: " << endl;
    for (int i = 0; i < numChords; ++i) {
        cin >> chords[i];
    }

    jazzifyChords(chords, numChords);

    return 0;
}
