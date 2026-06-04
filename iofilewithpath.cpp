#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line, fileName;

    cout << "Enter file name (with path): ";
    getline(cin, fileName);

    ofstream outFile;

    outFile.open(fileName + ".txt", ios::out);
    cout << ">= Writing to file, enter 'q' to quit: " << endl;

    while (true) {
        cout << "- ";
        getline(cin, line);

        if (line == "q") {
            break;
        }

        outFile << line << endl;
    }

    outFile.close();

    ifstream inFile;
    inFile.open(fileName + ".txt", ios::in);

    cout << ">= Reading file: " << endl;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << "- " << line << endl;
        }

        inFile.close();
    }
    else {
        cout << "Cannot open file!" << endl;
        return 0;
    }
}