
#include "movie.h"
#include "cartoon.h"
#include "fiction.h"
#include "Documentary.h"
#include <string>

movie* movie::In(ifstream& ifst) {
    movie* mv;
    int k;
    string temp;
    string waste;
    ifst >> temp;
    if (temp.length() != 1)
    {
        ifst.ignore();
        for (int i = 0; i < 3; i++) {
            getline(ifst, waste, '\n');
        }
        return NULL;
    }
    if (isdigit((unsigned char)temp.front()) == 0) {
        ifst.ignore();
        for (int i = 0; i < 3; i++)
        {
            getline(ifst, waste, '\n');
        }
        return NULL;
    }
    k = stoi(temp);
    switch (k) {
    case 1:    
        mv = new fiction;
        break;
    case 2:    
        mv = new cartoon;
        break;
    case 3:
        mv = new documentary;
        break;
    default:
        return NULL;
    }
    if (!(mv->InData(ifst)))
        return NULL;
   else
   return mv;
}

int movie::Count()
{
    int count = 0;
    string vowels = "àîýåèûó¸þÿaeiouy" ;
    for (int i = 0; i < title.length(); i++)
    {
        for(int k=0;k<vowels.length();k++)
            if ((char)tolower(title[i]) == vowels[k])
            {
                count++;
                break;
            }
    }
    return count;
}

bool movie::Compare(movie& other) {
    if (this == NULL || &other == NULL) { return false; }
    return Count() < other.Count();
}

void movie::Out_common(ofstream& ofst)
{
    ofst << "Title: " << title << endl;
    ofst <<"Country of Origin: "<< country<<endl;
   
}
bool movie::In_common(ifstream& ifst)
{
    string temp;
    string waste;
    ifst.ignore();
    getline(ifst, temp, '\n');
    if ((temp) == "\0")
    {
        for (int i = 0; i < 2; i++) {
            getline(ifst, waste, '\n');
        }
        return NULL;
    }
     title = temp;
    getline(ifst, temp, '\n');
    if ((temp) == "\0")
    {
        for (int i = 0; i < 1; i++) {
            getline(ifst, waste, '\n');
        }
        return NULL;
    }
     country = temp;
    return true;
}
 void movie::Out_cartoon(ofstream& ofst) {
    ofst << endl;
}

 void movie::Out_group(ofstream& ofst) {
     ofst << endl;
 }