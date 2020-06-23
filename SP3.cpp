#include<iostream>
using namespace std;

int deret(int bil)

{
     int total = 0;
      for (int i = 2; i <= bil ; i++)
     {
            total += i;

      }
      cout <<"Sum dari deret yang kurang dari " << bil << " adalah : " << total;

}

int main()
{

   int angka;
   cout << "Batas deret : ";
   cin >> angka;
    deret(angka);

   return 0;

}
