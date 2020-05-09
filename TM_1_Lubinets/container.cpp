#include "container.h"

void Container::Out(ofstream& ofst) { 
    ofst << "Container contents " << len_ << " elements." << endl;
    for (int i = 0; i < len_; i++) {
        ofst << i << ": ";
      if (cont_[i] == nullptr) {
          ofst << "Incorrect data" << endl;
      } else {
            cont_[i]->Out(ofst);
            ofst << "Number of vowels: " << cont_[i]->Count() << endl;
      }
        ofst << endl;
    }     
}

void Container::In(ifstream& ifst) {
    ifst >> len_;   
    if (len_ > max_len) {
        cout << "100 records will be processed";
        len_ = 100;
    }
    for (int i = 0; i < len_; i++) {
        cont_[i] = Movie::In(ifst);
    }
}

void Container::Sort() {
    for (int i = 0; i < len_ - 1; i++) {
        for (int j = i + 1; j < len_; j++) {
            if (cont_[i]->Compare(*cont_[j])) {
                Movie* tmp = cont_[i];
                cont_[i] = cont_[j];
                cont_[j] = tmp;
            }
        }
    }
}

void Container::OutCartoon(ofstream& ofst) {
    ofst << "Only cartoons." << endl;
    for (int i = 0; i < len_; i++) {
        ofst << i << ": ";
        if (cont_[i] != nullptr) {
        cont_[i]->OutCartoon(ofst);
        } else {
        ofst << endl;
        }
    }
}

void Container::OutFilter(ofstream& ofst) {
      ofst << endl << "fiction+doc" << endl;
      for (int i = 0; i < len_; i++) {
        ofst << i << ": ";
        if (cont_[i] != nullptr) {
          cont_[i]->OutGroup(ofst);
        } else {
          ofst << endl;
        }   
      }
}

void Container::Clear() {
      for (int i = 0; i < len_; i++) {
        delete cont_[i];
      }
      len_ = 0;
}
    
