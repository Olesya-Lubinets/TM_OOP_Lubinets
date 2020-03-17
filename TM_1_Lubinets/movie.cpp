
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
        ifst >> mv->title;
        break;
    case 2:    
        mv = new cartoon;
        ifst >> mv->title;
        break;
    case 3:
        mv = new documentary;
        ifst >> mv->title;
        break;
    default:
        return 0;
    }
    mv->InData(ifst);
    return mv;
}

void movie::Out_common(ofstream& ofst)
{
    ofst <<"Country of Origin: "<< country<<endl;
}
void movie::In_common(ifstream& ifst)
{
    ifst >> country;
}