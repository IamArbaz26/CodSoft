#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    string fileName;

    cout << "Enter the name of the text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile) 
    {
        cout << "Error opening the file." << endl;
        return 1; 
    }

    string line;
    int wordCount = 0;

    while (getline(inputFile, line)) 
    {
        stringstream ss(line);
        string word;

        while (ss >> word) 
        {
            ++wordCount;
        }
    }

    inputFile.close();

    cout << "Total word count in the file: " << wordCount << endl;

    return 0; 
}
