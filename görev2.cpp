#include <locale.h> // veya C++ i�in <clocale>
#include <iostream>
#include <string>
using namespace std;

int main() {
  setlocale(LC_ALL, "Turkish");
  int x;
  cout << "bir 1 ile 999 aras�nda bir say� giriniz: ";
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
			oku.append("y�z");
			break;
		case 200:
			oku = "ikiy�z";
			break;
		case 300:
			oku = "��y�z";
			break;
		case 400:
			oku = "d�rty�z";
			break;	
		case 500:
			oku = "be�y�z";
			break;
		case 600:
			oku = "alt�y�z";
			break;
		case 700:
			oku = "yediy�z";
			break;
		case 800:
			oku = "sekizy�z";
			break;
		case 900:
			oku = "dokuzy�z";
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
			oku.append("k�rk");
			break;	
		case 50:
			oku.append("elli");
			break;
		case 60:
			oku.append("altm��");
			break;
		case 70:
			oku.append("yetmi�");
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
			oku.append("��");
			break;
		case 4:
			oku.append("d�rt");
			break;	
		case 5:
			oku.append("be�");
			break;
		case 6:
			oku.append("alt�");
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
