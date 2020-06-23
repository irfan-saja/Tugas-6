#include <iostream>
using namespace std;
void Faktorial(int bil)

{
   int faktorial = 1;
    if (bil < 0)
    {

        cout << "Maaf, bilangan faktorial tidak ditemukan pada bilangan negatif";
     }
     else

      {
           for(int i = 1; i <= bil; i ++)

             {
                 faktorial = faktorial * i;
             }
       }

    cout << "Faktorial : " << faktorial;

}
int main()

{
   int angka;
   cout << "Masukkan angka : ";
   cin >> angka;
    Faktorial(angka);

}

