#include <iostream>
#include <istream>
#include <fstream>
#include <string>

using namespace std;

// File encyption is the science of writing the contents of a file in a secret code.  Your encryption program should work like a filter,
// reading the contents of one file, modifying the data into a code, then writing the coded contents out to a second file.
// The second file will be a version of the first file, but written in a secret code.  Although there are complex encyption techniques,
// you should come up with a simple one of your own.  For example, you could read the first file one character at a time, and add 10 to the
// ASCII code of each character before it is written to the second file.

int main() {
    string name,temp;
    ifstream file("test.txt");
    ofstream outPut("outPut.txt");

    if(!file.is_open()) {
        cout << "Error, file does not exist.\n";
        return 0;
    } //Checks to see if file exists
    else {
        cout << "Opened file.\n";
    }

    while(!file.eof()) {
        file >> temp;
        for (int i = 0; i < temp.size(); i++) {
            int x = 10;
            temp[i] += x;
        }
        cout << "Encrypted: " << temp << endl;
        outPut << temp << endl;
    }
    outPut.close();
    file.close();
    cout << "\nEnd of encryption.\n";
    return 0;
}
