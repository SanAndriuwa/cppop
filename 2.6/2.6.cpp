#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>

using namespace std;

class Moksleivis {
    private:
      int* pazymiai;
      int pazymiuKiekis;
    public:
      Moksleivis(int* pazymiai, int pazymiuKiekis) {
        this->pazymiai = pazymiai;
        this->pazymiuKiekis = pazymiuKiekis;
      } 

      bool arGausPagyrimoRasta() {
          int pazymiuSuma = 0;
          for (int i = 0; i < pazymiuKiekis; i++) {
            if (pazymiai[i] < 8) {
              return false;
            } else {
               pazymiuSuma += pazymiai[i]; 
            }
          }
          double vidurkis = ((double)pazymiuSuma / pazymiuKiekis);
          return vidurkis > 8.5;
      } 

};

list<Moksleivis*> duomenuNuskaitymas();

int main() {
  list<Moksleivis*> moksleiviai = duomenuNuskaitymas();

  list<Moksleivis*>::iterator moksleivis;

  int mokiniuKiekisGausPagyrimoRasta = 0;
  for (moksleivis = moksleiviai.begin(); moksleivis != moksleiviai.end(); moksleivis++) {
      if ((*moksleivis)->arGausPagyrimoRasta()) {
        mokiniuKiekisGausPagyrimoRasta++;
      }
  }
  if (mokiniuKiekisGausPagyrimoRasta == 0) {
    cout << "visi looseriai";
  } else if (mokiniuKiekisGausPagyrimoRasta % 10 == 0 || (mokiniuKiekisGausPagyrimoRasta < 20 && mokiniuKiekisGausPagyrimoRasta > 9)) {
    printf("Pagyrimo raštą gaus %d moksleivių", mokiniuKiekisGausPagyrimoRasta);  
  } else if (mokiniuKiekisGausPagyrimoRasta == 1 || (mokiniuKiekisGausPagyrimoRasta-1) % 10 == 0) {
    printf("Pagyrimo raštą gaus %d moksleivis", mokiniuKiekisGausPagyrimoRasta);  
  } else if (mokiniuKiekisGausPagyrimoRasta) {
    printf("Pagyrimo raštą gaus %d moksleiviai", mokiniuKiekisGausPagyrimoRasta);  
  }
}

list<Moksleivis*> duomenuNuskaitymas() {
  list <Moksleivis*> moksleiviai;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    int* pazymiai = new int[k];
    for (int j = 0; j < k; j++) {
        int pazymys;
        cin >> pazymys;
        pazymiai[j] = pazymys;
    }
    moksleiviai.push_back(new Moksleivis(pazymiai, k));
  }
  return moksleiviai;
}
