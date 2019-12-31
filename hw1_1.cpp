#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream myFile;
    string fileName;
    string line;
   cout << "Enter input file name: " << endl;
   cin >> fileName;
   myFile.open(fileName.c_str());
   
   while(!myFile) // To get you all the lines.
        {
            getline(myFile,line); // Saves the line in STRING.
            cout<<line; // Prints our STRING.
        }
    myFile.close();
   
    return 0;
}
