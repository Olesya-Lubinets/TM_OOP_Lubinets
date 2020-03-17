
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
    ofstream ofst(argv[2]);
    cout << "Start" << endl;
    container c;
    c.In(ifst);
    ofst << "Filled container. " << endl<<endl;
    c.Sort();
    c.Out(ofst);
    //c.Out(ofst);
    c.Out_cartoon(ofst);
    c.Clear();
    ofst << endl<<"Empty container. " << endl;
    cout << "Stop" << endl;
    
    return 0;
}