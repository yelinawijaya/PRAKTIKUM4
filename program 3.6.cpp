#include <iostream.h>
#include <conio.h>

main() {
	int a,b,mod;
   float hasil;
   cout<<"Contoh penggunaan / dan %\n\n";
   cout<<"Masukkan angka pertama (a) = ";cin>>a;
   cout<<"Masukkan angka kedua (b) = ";cin>>b;
   hasil=float(a)/b;  hasil=a/float(b);
   mod=a%b;
   cout<<"\nHasil pembagian		= "<<hasil;
   cout<<"\nSisa hasil bagu	  = " <<mod;
   getch();}