
#include "movie.h"
#include "cartoon.h"
#include "fiction.h"

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