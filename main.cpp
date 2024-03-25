#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeData();

void readData();

void exit();

int main(){

    cout << "Welcome to the Data Management System. Select a function:\n1: Write new data\n2: Read Current Data\n3: Exit Program\n";

    int input;

    cin >> input;

    switch (input)
    {
    case 1:
        writeData();
        break;
    case 2:
        readData();
    case 3: 
        exit();
    default:
        break;
    }

    return 0;
}

void writeData(){
    cout << "Write any data: ";

    string input;

    cin >> input;

    ofstream file("data.txt");

    file << input;

    file.close();
}

void readData(){

    string contents;

    ifstream file("data.txt");

    while (getline (file, contents))
    {
        cout << contents << endl;
    }
    
    file.close();

    main();
}

void exit(){
    cout << "Exiting Program...";

    exit(0);
}