#include "movie.h"
#include "cartoon.h"
#include "fiction.h"
#include "Documentary.h"

Movie* Movie::In(ifstream& ifst) {
    string temp;
    string waste;
    ifst >> temp;
    if (temp.length() != 1) {
        ifst.ignore();
        for (int i = 0; i < 3; i++) {
            getline(ifst, waste, '\n');
        }
        return nullptr;
    }
    if (isdigit((unsigned char)temp.front()) == 0) {
        ifst.ignore();
        for (int i = 0; i < 3; i++) {
            getline(ifst, waste, '\n');
        }
        return nullptr;
    }
    int k = stoi(temp);
    Movie* mv;
    switch (k) {
    case 1:    
        mv = new Fiction;
        break;
    case 2:    
        mv = new Cartoon;
        break;
    case 3:
        mv = new Documentary;
        break;
    default:
      return nullptr;
    }
    if (!(mv->InData(ifst))) {
      return nullptr;
    } else {
      return mv;
    }
}

int Movie::Count() {
    int count = 0;
    string vowels = "àîıåèûó¸şÿaeiouy" ;
    for (int i = 0; i < title_.length(); i++) {
      for (int k = 0; k < vowels.length(); k++) {
        if ((char)tolower(title_[i]) == vowels[k]) {
          count++;
          break;
        }
      }
    }
    return count;
}

bool Movie::Compare(Movie& other) {
  if (this == NULL || &other == nullptr) return false;
    return Count() < other.Count();
}

void Movie::OutCommon(ofstream& ofst) {
    ofst << "Title: " << title_ << endl;
    ofst <<"Country of Origin: "<< country_<<endl;  
}

bool Movie::InCommon(ifstream& ifst) {
    string temp;
    string waste;
    ifst.ignore();
    getline(ifst, temp, '\n');
    if ((temp) == "\0") {
        for (int i = 0; i < 2; i++) {
            getline(ifst, waste, '\n');
        }
        return false;
    }
    title_ = temp;
    getline(ifst, temp, '\n');
    if ((temp) == "\0") {
        for (int i = 0; i < 1; i++) {
            getline(ifst, waste, '\n');
        }
        return false;
    }
    country_ = temp;
    return true;
}
