#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string line;

    ofstream outFile;
    outFile.open("examplefile.txt");

    cout << ">= Writing to File, enter 'q' to quit: " << endl;

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
    inFile.open("examplefile.txt");

    cout << ">= Reading File: " << endl;

    if (inFile.is_open()) {

        while (getline(inFile, line)) {
            cout << "- " << line << endl;
        }

        inFile.close();

    } else {

        cout << "Cannot open file!" << endl;
        return 0;
    }
}