#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("Iram.txt", ios::app);

    if (myfile.is_open()) {
        myfile << "Appending this line to the file." << endl;
        myfile.close();
        cout << "Data appended successfully." << endl;
    } else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}