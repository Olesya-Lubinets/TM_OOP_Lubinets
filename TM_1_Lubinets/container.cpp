#include "container.h"

    void container::Out(ofstream& ofst) 
        
    {
   
        ofst << "Container contents " << len << " elements." << endl;
        for (int i = 0; i < len; i++) 
        {
            ofst << i << ": ";
            if(cont[i]==NULL)
            ofst << "Incorrect data" << endl;
            else {
                cont[i]->Out(ofst);
                ofst << "Number of vowels: " << cont[i]->Count() << endl;
            }
            ofst << endl;
        }
        
    }

   

    void container::In(ifstream& ifst)
    {
        ifst >> len;
       
        if (len > max_len) {
            cout << "100 records will be processed";
            len = 100;
        }
        for (int i = 0; i < len; i++) {
            cont[i] = movie::In(ifst);
        }
    }
    void container::Sort() {
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (cont[i]->Compare(*cont[j])) {
                    movie* tmp = cont[i];
                    cont[i] = cont[j];
                    cont[j] = tmp;
                }
            }
        }
    }


    void container::Out_cartoon(ofstream& ofst) {
        ofst << "Only cartoons." << endl;
        for (int i = 0; i < len; i++) {
            ofst << i << ": ";
            if (cont[i] != NULL)
                cont[i]->Out_cartoon(ofst);
            else
                ofst << endl;
        }
    }
    void container::Out_filter(ofstream& ofst) {
        ofst << endl<<"fiction+doc" << endl;
        for (int i = 0; i < len; i++) {
            ofst << i << ": ";
            if (cont[i] != NULL)
            cont[i]->Out_group(ofst);
            else
                ofst << endl;
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
    
