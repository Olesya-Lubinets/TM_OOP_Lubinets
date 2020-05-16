#include <iostream>
#include <fstream>
#include "container.h"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command infile outfile" << endl;
        exit(1);
    }
    ifstream ifst(argv[1]);
    if (!ifst.is_open()) {
        cout << "No input file found or could not open!" << endl;
        system("pause");
        return 1;
    }
    ofstream ofst(argv[2]);
    cout << "Start" << endl;
    Container c;
    c.In(ifst);
    ofst << "Filled container. " << endl<<endl;
    c.Sort();
    c.Out(ofst);
    c.OutCartoon(ofst);
    c.OutFilter(ofst);
    c.MultiMethod(ofst);
    c.Clear();
    ofst << endl<<"Empty container. " << endl;
    cout << "Stop" << endl;
    
    return 0;
}