#include <iostream>
#include <clocale>
#include <string>
#include <chrono>
#include <thread>
using namespace std;


struct �ye
{
	char isim[90];
	char soyisim[90];
	long long  telefon;

};

int main()
{
	setlocale(LC_ALL, "Turkish");
	�ye �{};
	string atat�rk_inklap_tarihi, Fatih_Sultan_Mehmed, Yavuz_Sultan_Selim;     //projede kullanaca��m�z iisim ve kelimeleri tan�mlad���m�z alan....
	int yan�t;
	int saniye = 0;
	char yeniyan�t = 0,yan�t1=0,yan�t2=0,yan�t3=0;

	//////////////////////////

	
	
	cout << "---K�T�PAHANEM�Z�N UYGULAMASINA HO�GELD�N�Z---" << endl;
	cout << endl; 
	cout << "// KAYIT EKRANI G�R��� //" << endl;
	cout << endl;

	cout << "�S�M = " << " "; 	cin >> �.isim;                                            ////kullan�c� bilgilerini ald���m�z alan...
	cout << "SOY �S�M = " << " "; 	cin >> �.soyisim;
	cout << "TELEFON NUMARASI = " << " "; 	cin >> �.telefon;

	cout << endl;
tekraral:

	cout << "SE��M EKRANI ->" << endl;
	cout << "HANG� K�TABI ALMAK �STERS�N�Z  = " << " "; 
	cout << "ATAT�RK �NKLAP TAR�H�  ise '1'";             // kitap se�imi
	cout << "FAT�H SULTAN MEHMED ise '2'";
	cout << "YAVUZ SULTAN SEL�M ise '3'";

	cin >> yan�t;    //tercih...
	cout << endl;

	switch (yan�t)
	{
	case 1:
		cout << "ATAT�RK K�TABININ GER� VER�LMES� ���N 3 G�NL�K SAYA� BA�LATILMI�TIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;  //kodu 60 saniye boyunca duraklat�yoruz "30 saniye = 1 g�n olarak yap�lm��t�r"
		cout << "**** B�LD�R�!!!!!! ****" << endl;
		cout << "2 g�n ge�mi�tir bilginize... kitab� verdiyseniz 'e' tu�lay�n�z vermediysseniz 'h' tu�lay�n�z = "<<" "; cin >> yeniyan�t;

		if (yeniyan�t == 'e')
		{
			cout << endl;
			cout << "//// K�TABI ALAN �YEN�N B�LG�LER� ////" << endl;

			cout << "�YEN�N �S�M = " << �.isim << endl;   
			cout << "�YEN�N SOY�S�M  = " << �.soyisim << endl;
			cout << "�YEN�N TELEFONU = " << �.telefon << endl;
			cout << "K�TABIN ADI = " << "ATAT�RK" << endl;
			cout << "K�TABIN ID = " << "1" << endl; 
			cout << endl;

			cout << "YEN�DEN ��LEM YAPMAK �ST�YOR MUSUNUZ (evet ise 'e' || hay�r ise 'h') = "; cin >> yan�t1; cout << endl;
			if (yan�t1 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERC�H ETT���N�Z ���N TE�EKK�RLER KISA ZAMANDA BEKLER�Z....." << endl;
				break;
		}

		else if(yeniyan�t == 'h')
		{
			cout << "YARIN SON G�N�N�ZD�R!!!!!!!" << endl;
		}

		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitab�n s�resi dolmu�tur '�YEL���N�Z �PTAL ED�LM��T�R' !!!!!!!"<<endl;
		break;


	case 2:
		cout << "FAT�H K�TABININ GER� VER�LMES� ���N 3 G�N SAYA� BA�LATILMI�TIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;
		cout << "**** B�LD�R�!!!!!! ****" << endl;
		cout << "2 g�n ge�mi�tir bilginize... kitab� verdiyseniz 'e' tu�lay�n�z vermediysseniz 'h' tu�lay�n�z = " << " "; cin >> yeniyan�t;

		if (yeniyan�t == 'e')
		{
			cout << endl;
			cout << "//// K�TABI ALAN �YEN�N B�LG�LER� ////" << endl;

			cout << "�YEN�N �S�M : " << �.isim << endl;
			cout << "�YEN�N SOY�S�M  : " << �.soyisim << endl;
			cout << "�YEN�N TELEFONU = " << �.telefon << endl;
			cout << "K�TABIN ADI : " << "FAT�H" << endl;
			cout << "K�TABIN ID : " << "2" << endl;
			cout << endl;
			cout << "YEN�DEN ��LEM YAPMAK �ST�YOR MUSUNUZ (evet ise 'e' || hay�r ise 'h') = "; cin >> yan�t2; cout << endl;
			if (yan�t2 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERC�H ETT���N�Z ���N TE�EKK�RLER KISA ZAMANDA BEKLER�Z....." << endl;
				break;
			
		}
		else if (yeniyan�t == 'h')
		{
			cout << "YARIN SON G�N�N�ZD�R!!!!!!!" << endl;
		}
		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitab�n s�resi dolmu�tur '�YEL���N�Z �PTAL ED�LM��T�R'  !!!!!!!" << endl;
		break;

	case 3:
		cout << "YAVUZ K�TABININ GER� VER�LMES� ���N 3 G�NL�K �YEL�K SAYA� BA�LATILMI�TIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;
		cout << "**** B�LD�R�!!!!!! ****" << endl;
		cout << "2 g�n ge�mi�tir bilginize... kitab� verdiyseniz 'e' tu�lay�n�z vermediysseniz 'h' tu�lay�n�z = " << " "; cin >> yeniyan�t;
		if (yeniyan�t == 'e')
		{
			cout << endl;
			cout << "//// K�TABI ALAN �YEN�N B�LG�LER� ////" << endl;

			cout << "�YEN�N �S�M : " << �.isim << endl;
			cout << "�YEN�N SOY�S�M  : " << �.soyisim << endl;
			cout << "�YEN�N TELEFONU = " << �.telefon << endl;
			cout << "K�TABIN ADI : " << "YAVUZ" << endl;
			cout << "K�TABIN ID : " << "3" << endl;
			cout << endl;
			cout << "YEN�DEN ��LEM YAPMAK �ST�YOR MUSUNUZ (evet ise 'e' || hay�r ise 'h') = "; cin >> yan�t3; cout << endl;
			if (yan�t3 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERC�H ETT���N�Z ���N TE�EKK�RLER KISA ZAMANDA BEKLER�Z....." << endl;
				break;
		}
		else if (yeniyan�t == 'h')
		{
			cout << "YARIN SON G�N�N�ZD�R!!!!!!!" << endl;
		}
		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitab�n s�resi dolmu�tur '�YEL���N�Z �PTAL ED�LM��T�R'  !!!!!!!" << endl;
		break;

	default:
		cout << "G�RD���N�Z KODA A�T K�TAP BULUNAMAMI�TIR" << endl;
		break;
	}

	
	return  0;
}
