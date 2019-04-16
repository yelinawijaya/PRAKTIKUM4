#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main(){
	int a,b,mod;
   float bagi;
   cout<<"\n\tContoh penggunaan / dan %\n\n";
   cout<<"\tMasukkan angka pertama (a) = ";cin>>a;
   cout<<"\tMasukkan angka kedua (b) = ";cin>>b;
   bagi=float(a)/b;
   mod=a%b;
   cout<<"\nHasil pembagian = "<<setiosflags(ios::fixed)
                               <<setprecision(3)
                               <<bagi;
   cout<<"\n\tSisa hasil bagi = "<<mod;
   getch();}
