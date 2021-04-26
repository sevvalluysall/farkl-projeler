#include <iostream>

using namespace std;

 //6 basamaklı bir sayinin değerlerini bulma
int main()
{

   int sayi,yuzbinler,onbinler,binler,yuzler,onlar,birler;

   cout<<"Lutfen 6 basamakli bir sayi giriniz "<< endl;

   cin>> sayi ;

   yuzbinler=  sayi/100000;
   onbinler=  (sayi%100000)/10000;
   binler=    (sayi%10000)/1000;
   yuzler =   (sayi%1000)/100;
   onlar=     (sayi%100)/10;
   birler=    sayi%10;

   cout<< " " <<yuzbinler<< "  " <<onbinler<<"  " << binler << "  " << yuzler  << "  "<< onlar << "  " << birler << endl;

    return 0;
}
