#include <iostream>
using namespace std;

int main()

{
  int angka;
   int faktorial = 1;
   cout << "Masukkan angka : ";
   cin >> angka;
    if (angka < 0)
    {
        cout << "Maaf, bilangan faktorial tidak ditemukan pada bilangan negatif";
     }
     else
      {
           for(int i = 1; i <= angka; i ++)
            {
                 faktorial = faktorial * i;
              }
       }
    cout << "Faktorial : " << faktorial;

}
