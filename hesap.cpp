#include <iostream>
#include <cmath>
#include <cstdlib>
#include <locale.h>
#include <conio.h>
#include <cstdio>
#include <ctime>
#include <windows.h>
#define PI  3.14159265

using namespace std;

int main () 
{
    FILE *HesapGecmisi;
    string Renk="sistem rengi";
    char cikis;
    int secim, faktoriyel=1,sonuc=1;
    double sayi1, sayi2,tercih,rad, aci,karekok;
    do{
        system ("cls"); // Ekran temizler//
        cout << "XXXXXXXXXX HESAP MAKINESI XXXXXXXXXX" << endl;
  cout << "         Isleminizi Seciniz\n\n";
  time_t now=time(0);
cout<<ctime(&now)<<endl;
cout<<"Konsol Rengi  "<<Renk<<endl;
  cout << "1) Toplama \n2) Cikarma\n";
  cout << "3) Carpma \n4) Bolme\n";
  cout << "5) Us Alma\n6) Kok Alma\n";
  cout << "7) Faktoriyel\n8) Trigonometrik Degerler\n";
  cout << "9) Sistem Rengini Degistir\n\n";
  cout << "Programi sonlandirmak icin -1 degerini giriniz.\n\n";

  cin>>secim;
  //eðer seçim -1 ise döngüyü sonlandýracaðýz.
  if(secim == -1)
  {
      break;
  }

        HesapGecmisi = fopen("HesapGecmisi.txt","a+");
        //Hesaplama geçmiþini kaydetmek için dosya oluþturduk.
   
   switch (secim){

   case 1:
     cout << "1. Sayiyi Giriniz: ";
   cin >> sayi1;
   cout << "2. Sayiyi Giriniz: ";
   cin >> sayi2;
   cout << "Toplama Sonucu = " << sayi1+sayi2;
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "%.3f + %.3f = %f\n", sayi1, sayi2, sayi1+sayi2);
    }
   break;
   case 2:
   cout << "1. Sayiyi Giriniz: ";
   cin >> sayi1;
   cout << "2. Sayiyi Giriniz: ";
   cin >> sayi2;
   cout << "Cikarma Sonucu = " << sayi1-sayi2;
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "%.3f - %.3f = %f\n", sayi1, sayi2, sayi1-sayi2);
    }
   break;
   case 3:
  cout << "1. Sayiyi Giriniz: ";
   cin >> sayi1;
   cout << "2. Sayiyi Giriniz: ";
   cin >> sayi2;
   cout << "Carpma Sonucu = " << sayi1 * sayi2;
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "%.3f * %.3f = %f\n", sayi1, sayi2, sayi1*sayi2);
    }
   break;

   case 4:
   cout << "1. Sayiyi Giriniz: ";
   cin >> sayi1;
   cout << "2. Sayiyi Giriniz: ";
   cin >> sayi2;
   cout << "Bolme Sonucu = " << sayi1 / sayi2;
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "%.3f / %.3f = %f\n", sayi1, sayi2, sayi1/sayi2);
    }
   break;

   case 5: 
  cout << "1. Sayiyi Giriniz: ";
   cin >> sayi1;
   cout << "2. Sayiyi Giriniz: ";
   cin >> sayi2;
    for(int x=0; x<sayi2;x++){
    	sonuc = sonuc*sayi1;
	}
	 cout << "Us Sonucu = " <<sonuc;
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "%.3f ^ %.3f = %d\n", sayi1, sayi2, sonuc);
    }
    sonuc=1;
   break;
    case 6:
   cout << "Bir sayi giriniz: ";
   cin >> sayi1;
   karekok=(sayi1+1)/2;
   for(int x=0; x<10000;x++)
   {
   	karekok=((sayi1/karekok)+karekok)/2;
   }
   cout << sayi1 << " Sayisinin Karekoku = " << karekok;
   if (HesapGecmisi != NULL) {
    fprintf(HesapGecmisi, "karekok %.3f = %f\n", sayi1, karekok);
   }
  break;
  case 7:
  cout << "Faktöriyelini Almak Ýstediðiniz Sayýyý Giriniz: ";
   cin >> sayi1;
   for(int i = 1; i <= sayi1; i++){
    faktoriyel *= i;
   }
   cout << sayi1 << "! = " << faktoriyel;
   if (HesapGecmisi != NULL) {
    fprintf(HesapGecmisi, "%.0f! = %d\n", sayi1, faktoriyel);
   }
   faktoriyel=1;
  break;
  case 8:
   cout << "Aciyi Giriniz: ";
   cin >> aci;
   cout << "1)Sinus\n2)Kosinus\n";
   cout << "3)Tanjant\n4)Kotanjant\n";
   cin >> tercih;
   rad = aci*(PI/180);

   if(tercih == 1) {
    cout << "Sinus " << aci << "=" << sin(rad);
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "sin(%.3f) = %.3f\n", aci, sin(rad));
    }
   }
   else if(tercih == 2) {
    cout << "Kosinus " << aci << "=" << cos(rad);
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "cos(%.3f) = %.3f\n", aci, cos(rad));
    }
   }
   else if(tercih == 3) {
    cout << "Tanjant " << aci << "=" << sin(rad)/cos(rad);
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "tan(%.3f) = %.3f\n", aci, sin(rad)/cos(rad));
    }
   }
   else if(tercih == 4) {
    cout << "Kotanjant " << aci << "=" << cos(rad)/sin(rad);
    if (HesapGecmisi != NULL) {
     fprintf(HesapGecmisi, "cot(%.3f) = %.3f\n", aci, cos(rad)/sin(rad));
    }
   }

  break;
  case 9:
  	char colorcode;
  	cout<<"1-Mavi"<<endl<<"2-Yesil"<<endl<<"3-Aqua"<<endl<<"4-Kirmizi"<<endl<<"5-Mor"<<endl<<"6-Sari"<<endl<<"7-Beyaz"<<endl<<"8-Gri"<<endl<<"9-Acik Mavi"<<endl;
	    colorcode=getch();
switch(colorcode)
{
case '1': system("color 1");
Renk="Mavi";
break;
case '2': system("color 2");
Renk="Yesil";
break;
case '3': system("color 3");
Renk="Aqua";
break;	
case '4': system("color 4");
Renk="Kirmizi";
break;	
case '5': system("color 5");
Renk="Mor";
break;	
case '6': system("color 6");
Renk="Sari";
break;	
case '7': system("color 7");
Renk="Beyaz";
break;	
case '8': system("color 8");
Renk="Gri";
break;		
case '9': system("color 9");
Renk="Acik Mavi";
break;	 
default:
  	cout<<"lutfen gecerli bir sayi giriniz"<<endl;
  	break;			
}
 
}
  cout << "\n\nDevam etmek icin bir tusa basiniz...\n";
  cikis = getche();
    }while ( cikis != 27);
    cout<<"Program kapaniyor.";
    Sleep(1);
    cout<<".";
    Sleep(1);
    cout<<"."; 
	Sleep(1);
    cout<<"."<<endl;
    cout<<"Hesap gecmisiniz masaustunde olusturulan Hesap gecmisi adli txt dosyasinda mevcuttur.";
    return 0;
}

