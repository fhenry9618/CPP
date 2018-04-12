#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Filenames
    string censorWordsFilename = "censorwords.txt";
    string originalTextFileName = "original.txt";
    string censoredTextFileName = "censored.txt";

    // Declare / Define / Open filestreams
    
    ifstream censorIn {censorWordsFilename};
    ifstream originalIn{originalTextFileName};
    ofstream censoredOut{censoredTextFileName};

    // Make sure all files were opened okay

    if (!censorIn.is_open()) {
        cerr << "failed to open ..." << endl;
        return 1;
    }
    if (!originalIn.is_open()) {
        cerr << "failed... " << endl;
        return 1;
    }
    if (!censoredOut.is_open()) {
        cerr << "failed... " << endl;
        return 1;
    }
    // get list of words to censor
    vector<string> censorWord;
    string word;
    while(censorIn >> word) {
        cout << word << endl;
        //word = tolower(word);
        censorWord.push_back(word);
    }
    cout << censorWord.size() << endl;

    // read original, process, send to std out

    while (!originalIn.eof()){
        string line;
        getline(originalIn, line);
        //line = tolower(line);
        for (int i = 0; i < line.size() ; ++i) {
            line.at(i) = tolower(line.at(i));
        }
        for (int i = 0 ; i < censorWord.size() ; ++ i) {
            string cw = censorWord.at(i);
            int location = line.find(cw);
            while (location != string::npos)
            {
                line.replace(location, cw.size(), "****");
                location = line.find(cw);
            }
        }
        censoredOut << line << endl;
    }

    // process line-by-line
        // get the next line
        // see if each censor word is in the line
        // if present, replace with symbol
        // output modified line

    // look at output

}
