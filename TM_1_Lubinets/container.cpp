#include "container.h"

    void container::Out(ofstream& ofst) 
    {
        ofst << "Container contents " << len << " elements." << endl;
        for (int i = 0; i < len; i++) 
        {
            ofst << i << ": ";
            cont[i]->Out(ofst); 
            ofst << "Number of vowels: " << cont[i]->Count(ofst) << endl;
            ofst << endl;
        }
        
    }

    void container::In(ifstream& ifst)
    {
        ifst >> len;
        if (len > max_len) {
            cout << " Invalid number of elements.";
                exit(1);
        }
        for (int i = 0; i < len; i++) {
          cont[i] = movie::In(ifst);
        }                
    }

    container::container()
    {
        len = 0;     
    }

   
    void container::Clear()
    {
        for (int i = 0; i < len; i++) {
            delete cont[i];
        }
        len = 0;
    }
    
