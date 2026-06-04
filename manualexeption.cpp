#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Welcome to the Information Technology Program at UMY" << endl;
        cout << "This statement is not displayed" << endl;
    }
    catch (int a) {
        cout << "Exception will be executed" << endl;
    }

    catch (...) {
        cout << "Default exception is executed" << endl;
    }

    return 0;
}