#include <locale.h> // veya C++ için <clocale>
#include <iostream>
#include <string>
using namespace std;

int main() {
  setlocale(LC_ALL, "Turkish");
  int x;
  cout << "bir 1 ile 999 arasýnda bir sayý giriniz: ";
  cin >> x;
  

  
  int num1 = x % 10;
  x = x - num1; 
  int num2 = x % 100;
  x = x - num2;
  int num3 = x % 1000;
  x = x - num3;
	
	string oku;
		
	switch(num3){	
		case 0:
			break;
		case 100:
			oku.append("yüz");
			break;
		case 200:
			oku = "ikiyüz";
			break;
		case 300:
			oku = "üçyüz";
			break;
		case 400:
			oku = "dörtyüz";
			break;	
		case 500:
			oku = "beþyüz";
			break;
		case 600:
			oku = "altýyüz";
			break;
		case 700:
			oku = "yediyüz";
			break;
		case 800:
			oku = "sekizyüz";
			break;
		case 900:
			oku = "dokuzyüz";
			break;
		}
		
	switch(num2){	
		case 0:
			break;
		case 10:
			oku.append("on");
			break;
		case 20:
			oku.append("yirmi");
			break;
		case 30:
			oku.append("otuz");
			break;
		case 40:
			oku.append("kýrk");
			break;	
		case 50:
			oku.append("elli");
			break;
		case 60:
			oku.append("altmýþ");
			break;
		case 70:
			oku.append("yetmiþ");
			break;
		case 80:
			oku.append("seksen");
			break;
		case 90:
			oku.append("doksan");
			break;
		}

	switch(num1){	
		case 0:
			break;
		case 1:
			oku.append("bir");
			break;
		case 2:
			oku.append("iki");
			break;
		case 3:
			oku.append("üç");
			break;
		case 4:
			oku.append("dört");
			break;	
		case 5:
			oku.append("beþ");
			break;
		case 6:
			oku.append("altý");
			break;
		case 7:
			oku.append("yedi");
			break;
		case 8:
			oku.append("sekiz");
			break;
		case 9:
			oku.append("dokuz");
			break;
		}	
		
	cout << oku;						
						


  
  return 0;
}
