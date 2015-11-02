#include <iostream>
using namespace std;
int main()
{
int menusecim;
int geritepmesin=0;
	cout <<"Ana Menu"<<endl
	     <<"1-)Oyuna Basla"<<endl
	     <<"2-)Bilgi      "<<endl
	     <<"              "<<endl;
	cin >> menusecim;
	if(menusecim==1)
{
	int puan=1;
	string isim,sehir,meslek;
	char secim1,secim2;
	while(puan==0||puan<0)
	{
		geritepmesin=geritepmesin+1;
		if(geritepmesin>=1)
		{
			for(int xx=0;xx<33;xx++)
			{
				cout<<"Bu mesajı bir sandalyeden karnına bir hançer saplanmıs bir bicimde okuyorsun gözlerin kararıyor çok usuyorsun \n bitte";
			}
		}
	cout <<"Moslow:Adin ne yabanci";
	cin >>isim;
	cout<<"Moslow:demek adın "<<isim<<" yabanci nerelerden geldin?"<<endl
	    <<"a)Begonya"<<endl
	    <<"b)Trimenca"<<endl
	    <<"c)Loveria"<<endl
	    <<"d)Krismosto"<<endl;
	cin >>secim1;
	if(secim1=='a')
	{
		cout << "Moslow:Begonyada bir kadinla tanismistim neydi onun adı neyse onu boşverelim de... "<<endl;
		sehir="Begonya";
		puan=puan+10;
	}
	else if(secim1=='b')
	{
		cout<<"Moslow:Trimenca ic savasinda bir cok yakinimi kaybettim "<<endl;
		sehir="Trimenca";
		puan=puan+6;
	}
	else if(secim1=='c')
	{
		puan=puan+3;
		sehir="Loveria";
		cout <<"Moslow:ah o uzun sıcak kis geceleri Loveria hayati bana sevdiren sehir"<<endl;
	}
	else
	{sehir="Krismosto";
		cout<<"Moslow:Demek Krismostolusun seni hain .Muhafizlar gebertin haini";
		puan=puan-1;
	}
	cout <<"Moslow:Ne is yaparsin ?"<<endl
	     <<"a-)Demirci"<<endl
		 <<"b-)Ciftci"<<endl
		 <<"c-)Madenci"<<endl
		 <<"d-)Hirsiz"<<endl
		 <<"e-)Yalan soyle"<<endl;
		 cin>> secim2;
		 if(secim2=='a')
		 {cout<<"Moslow:Adeleli kollarindan anlamistim sen gel isimize yararsin";
	     meslek="Demirci";
	     puan=puan+10;
		 }
		 else if(secim2=='b')
		 {cout<<"Moslow:AHAHAHAHAHA ciftci mi HAHAHAAHAHA sen burada HAHAHAHAAH sen HAHAHAHAAH";
		 meslek="Ciftci";
		 puan=puan+2;
		 }
		 else if(secim2=='c')
		 {cout<<"Moslow:Beyaz tenin ve bakımsız ellerinden anlasiliyor sen burada satin alacak cok insan var AHAHAHAHAHHAHAHAAHAH";
		 meslek="Madenci";
		 puan=puan-1;
		 }
		 else if(secim2=='d')
		 {
		 }
		 else if(secim2=='e')
		 {
		 }
   }
		
}}
