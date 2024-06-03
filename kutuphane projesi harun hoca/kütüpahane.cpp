#include <iostream>
#include <clocale>
#include <string>
#include <chrono>
#include <thread>
using namespace std;


struct üye
{
	char isim[90];
	char soyisim[90];
	long long  telefon;

};

int main()
{
	setlocale(LC_ALL, "Turkish");
	üye ü{};
	string atatürk_inklap_tarihi, Fatih_Sultan_Mehmed, Yavuz_Sultan_Selim;     //projede kullanacaðýmýz iisim ve kelimeleri tanýmladýðýmýz alan....
	int yanýt;
	int saniye = 0;
	char yeniyanýt = 0,yanýt1=0,yanýt2=0,yanýt3=0;

	//////////////////////////

	
	
	cout << "---KÜTÜPAHANEMÝZÝN UYGULAMASINA HOÞGELDÝNÝZ---" << endl;
	cout << endl; 
	cout << "// KAYIT EKRANI GÝRÝÞÝ //" << endl;
	cout << endl;

	cout << "ÝSÝM = " << " "; 	cin >> ü.isim;                                            ////kullanýcý bilgilerini aldýðýmýz alan...
	cout << "SOY ÝSÝM = " << " "; 	cin >> ü.soyisim;
	cout << "TELEFON NUMARASI = " << " "; 	cin >> ü.telefon;

	cout << endl;
tekraral:

	cout << "SEÇÝM EKRANI ->" << endl;
	cout << "HANGÝ KÝTABI ALMAK ÝSTERSÝNÝZ  = " << " "; 
	cout << "ATATÜRK ÝNKLAP TARÝHÝ  ise '1'";             // kitap seçimi
	cout << "FATÝH SULTAN MEHMED ise '2'";
	cout << "YAVUZ SULTAN SELÝM ise '3'";

	cin >> yanýt;    //tercih...
	cout << endl;

	switch (yanýt)
	{
	case 1:
		cout << "ATATÜRK KÝTABININ GERÝ VERÝLMESÝ ÝÇÝN 3 GÜNLÜK SAYAÇ BAÞLATILMIÞTIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;  //kodu 60 saniye boyunca duraklatýyoruz "30 saniye = 1 gün olarak yapýlmýþtýr"
		cout << "**** BÝLDÝRÝ!!!!!! ****" << endl;
		cout << "2 gün geçmiþtir bilginize... kitabý verdiyseniz 'e' tuþlayýnýz vermediysseniz 'h' tuþlayýnýz = "<<" "; cin >> yeniyanýt;

		if (yeniyanýt == 'e')
		{
			cout << endl;
			cout << "//// KÝTABI ALAN ÜYENÝN BÝLGÝLERÝ ////" << endl;

			cout << "ÜYENÝN ÝSÝM = " << ü.isim << endl;   
			cout << "ÜYENÝN SOYÝSÝM  = " << ü.soyisim << endl;
			cout << "ÜYENÝN TELEFONU = " << ü.telefon << endl;
			cout << "KÝTABIN ADI = " << "ATATÜRK" << endl;
			cout << "KÝTABIN ID = " << "1" << endl; 
			cout << endl;

			cout << "YENÝDEN ÝÞLEM YAPMAK ÝSTÝYOR MUSUNUZ (evet ise 'e' || hayýr ise 'h') = "; cin >> yanýt1; cout << endl;
			if (yanýt1 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERCÝH ETTÝÐÝNÝZ ÝÇÝN TEÞEKKÜRLER KISA ZAMANDA BEKLERÝZ....." << endl;
				break;
		}

		else if(yeniyanýt == 'h')
		{
			cout << "YARIN SON GÜNÜNÜZDÜR!!!!!!!" << endl;
		}

		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitabýn süresi dolmuþtur 'ÜYELÝÐÝNÝZ ÝPTAL EDÝLMÝÞTÝR' !!!!!!!"<<endl;
		break;


	case 2:
		cout << "FATÝH KÝTABININ GERÝ VERÝLMESÝ ÝÇÝN 3 GÜN SAYAÇ BAÞLATILMIÞTIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;
		cout << "**** BÝLDÝRÝ!!!!!! ****" << endl;
		cout << "2 gün geçmiþtir bilginize... kitabý verdiyseniz 'e' tuþlayýnýz vermediysseniz 'h' tuþlayýnýz = " << " "; cin >> yeniyanýt;

		if (yeniyanýt == 'e')
		{
			cout << endl;
			cout << "//// KÝTABI ALAN ÜYENÝN BÝLGÝLERÝ ////" << endl;

			cout << "ÜYENÝN ÝSÝM : " << ü.isim << endl;
			cout << "ÜYENÝN SOYÝSÝM  : " << ü.soyisim << endl;
			cout << "ÜYENÝN TELEFONU = " << ü.telefon << endl;
			cout << "KÝTABIN ADI : " << "FATÝH" << endl;
			cout << "KÝTABIN ID : " << "2" << endl;
			cout << endl;
			cout << "YENÝDEN ÝÞLEM YAPMAK ÝSTÝYOR MUSUNUZ (evet ise 'e' || hayýr ise 'h') = "; cin >> yanýt2; cout << endl;
			if (yanýt2 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERCÝH ETTÝÐÝNÝZ ÝÇÝN TEÞEKKÜRLER KISA ZAMANDA BEKLERÝZ....." << endl;
				break;
			
		}
		else if (yeniyanýt == 'h')
		{
			cout << "YARIN SON GÜNÜNÜZDÜR!!!!!!!" << endl;
		}
		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitabýn süresi dolmuþtur 'ÜYELÝÐÝNÝZ ÝPTAL EDÝLMÝÞTÝR'  !!!!!!!" << endl;
		break;

	case 3:
		cout << "YAVUZ KÝTABININ GERÝ VERÝLMESÝ ÝÇÝN 3 GÜNLÜK ÝYELÝK SAYAÇ BAÞLATILMIÞTIR..." << endl;
		std::this_thread::sleep_for(std::chrono::seconds(60)); cout << endl;
		cout << "**** BÝLDÝRÝ!!!!!! ****" << endl;
		cout << "2 gün geçmiþtir bilginize... kitabý verdiyseniz 'e' tuþlayýnýz vermediysseniz 'h' tuþlayýnýz = " << " "; cin >> yeniyanýt;
		if (yeniyanýt == 'e')
		{
			cout << endl;
			cout << "//// KÝTABI ALAN ÜYENÝN BÝLGÝLERÝ ////" << endl;

			cout << "ÜYENÝN ÝSÝM : " << ü.isim << endl;
			cout << "ÜYENÝN SOYÝSÝM  : " << ü.soyisim << endl;
			cout << "ÜYENÝN TELEFONU = " << ü.telefon << endl;
			cout << "KÝTABIN ADI : " << "YAVUZ" << endl;
			cout << "KÝTABIN ID : " << "3" << endl;
			cout << endl;
			cout << "YENÝDEN ÝÞLEM YAPMAK ÝSTÝYOR MUSUNUZ (evet ise 'e' || hayýr ise 'h') = "; cin >> yanýt3; cout << endl;
			if (yanýt3 == 'e')
				goto tekraral;
			else if ('h')
				cout << "UYGULAMAMIZI TERCÝH ETTÝÐÝNÝZ ÝÇÝN TEÞEKKÜRLER KISA ZAMANDA BEKLERÝZ....." << endl;
				break;
		}
		else if (yeniyanýt == 'h')
		{
			cout << "YARIN SON GÜNÜNÜZDÜR!!!!!!!" << endl;
		}
		std::this_thread::sleep_for(std::chrono::seconds(30));
		cout << "kitabýn süresi dolmuþtur 'ÜYELÝÐÝNÝZ ÝPTAL EDÝLMÝÞTÝR'  !!!!!!!" << endl;
		break;

	default:
		cout << "GÝRDÝÐÝNÝZ KODA AÝT KÝTAP BULUNAMAMIÞTIR" << endl;
		break;
	}

	
	return  0;
}
