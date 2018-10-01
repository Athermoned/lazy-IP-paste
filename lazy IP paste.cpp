#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <cstring>
using namespace std; 
int main(int argc, char const *argv[])
{
	setlocale(LC_CTYPE, "rus");
	string key;
	int frstoc;
	int scndoc;
	int thrdoc;
	int frthdoc; 
	int thrdocend; 
	int frthdocend; 
	cout << "Lazy IP paste" << endl;
		cout << "¬ведите первый октет: ";
		cin >> frstoc; 
		if (frstoc <= 0) {
			cout << "¬ведите чиcло больше 0" << endl; 
			getch();
			return 0;
	      }
	    if (frstoc > 254) {
			cout << "ќктет не может превышать значени€ 255" << endl;  
			getch();
			return 0;
	      }
		cout << "¬ведите второй октет: ";
		cin >> scndoc; 
		 if (scndoc <= 0) {
			cout << "¬ведите чиcло больше 0" << endl; 
			getch();
			return 0;
	      }
	     if (scndoc > 254) {
			cout << "ќктет не может превышать значение 255" << endl; 
			getch();
			return 0;
	      }
		cout << "¬ведите третий октет: ";
		cin >> thrdoc; 
		if (thrdoc > 254) {
			cout << "ќктет не может превышать значение 255" << endl;  
			getch();
			return 0;
	      }
		cout << "¬ведите четвертый октет: ";
		cin >> frthdoc;
		if (frthdoc > 254) {
			cout << "ќктет не может превышать значение 255" << endl; 
			getch();
			return 0;
	      }
		cout << "¬ведите третий конечный октет: ";
		cin >> thrdocend; 
		if (thrdocend <= thrdoc) {
			cout << "¬ведите конечный октет больше начального!" << endl; 
			getch();
			return 0;
		}
		if (thrdocend > 254) {
			cout << "ќктет не может превышать значение больше 255" << endl; 
			getch();
			return 0;
	      }
		cout << "¬ведите четвертый конечный октет: ";
		cin  >> frthdocend; 
		if (frthdocend<= frthdoc) {
		 cout << "¬ведите конечный октет больше начального!" << endl; 
		 getch();
		 return 0;
	    }  
	    if (frthdocend > 254) {
			cout << "ќктет не может превышать значение больше 255" << endl; 
			getch();
			return 0;
	      }
	      
	    string bat;
	    char _ip[15];
	    
	    cout << "¬ведите желаемую команду: " << endl;
	    cin.ignore();
	    getline(cin, bat);
	    
	    string _cmd;
	    
	    ofstream cout("ip.txt");
	    int _frthdoc = 0;
	    while (thrdoc <= thrdocend) {
			_frthdoc = frthdoc;
			while (_frthdoc <= frthdocend) {
				_cmd = "";
				_cmd += bat;
				
				sprintf(_ip, "%d.%d.%d.%d", frstoc, scndoc, thrdoc, _frthdoc);
				
				_cmd.replace(_cmd.find("{ip}"), 4, _ip);
				cout << _cmd << endl;
				
				_frthdoc++;
			}
			thrdoc++;
		}
	} 



