
#include "movie.h"
#include "cartoon.h"
#include "fiction.h"
#include "Documentary.h"

movie* movie::In(ifstream& ifst) {
    movie* mv;
    int k;
    ifst >> k;  
    switch (k) {
    case 1:    
        mv = new fiction;
        //ifst >> mv->title;
        break;
    case 2:    
        mv = new cartoon;
        //ifst >> mv->title;
        break;
    case 3:
        mv = new documentary;
      //  ifst >> mv->title;
        break;
    default:
        return 0;
    }
    mv->InData(ifst);
    return mv;
}

int movie::Count()
{
    int count = 0;
    string vowels = "àîıåèûó¸şÿaeiouy" ;
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
    return Count() < other.Count();
}

void movie::Out_common(ofstream& ofst)
{
    ofst << "Title: " << title << endl;
    ofst <<"Country of Origin: "<< country<<endl;
   
}
void movie::In_common(ifstream& ifst)
{
    ifst >> title;
    ifst >> country; 
}
 void movie::Out_cartoon(ofstream& ofst) {
    ofst << endl;
}

 void movie::Out_group(ofstream& ofst) {
     ofst << endl;
 }