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
		cout << "������� ������ �����: ";
		cin >> frstoc; 
		if (frstoc <= 0) {
			cout << "������� ��c�� ������ 0" << endl; 
			getch();
			return 0;
	      }
	    if (frstoc > 254) {
			cout << "����� �� ����� ��������� �������� 255" << endl;  
			getch();
			return 0;
	      }
		cout << "������� ������ �����: ";
		cin >> scndoc; 
		 if (scndoc <= 0) {
			cout << "������� ��c�� ������ 0" << endl; 
			getch();
			return 0;
	      }
	     if (scndoc > 254) {
			cout << "����� �� ����� ��������� �������� 255" << endl; 
			getch();
			return 0;
	      }
		cout << "������� ������ �����: ";
		cin >> thrdoc; 
		if (thrdoc > 254) {
			cout << "����� �� ����� ��������� �������� 255" << endl;  
			getch();
			return 0;
	      }
		cout << "������� ��������� �����: ";
		cin >> frthdoc;
		if (frthdoc > 254) {
			cout << "����� �� ����� ��������� �������� 255" << endl; 
			getch();
			return 0;
	      }
		cout << "������� ������ �������� �����: ";
		cin >> thrdocend; 
		if (thrdocend <= thrdoc) {
			cout << "������� �������� ����� ������ ����������!" << endl; 
			getch();
			return 0;
		}
		if (thrdocend > 254) {
			cout << "����� �� ����� ��������� �������� ������ 255" << endl; 
			getch();
			return 0;
	      }
		cout << "������� ��������� �������� �����: ";
		cin  >> frthdocend; 
		if (frthdocend<= frthdoc) {
		 cout << "������� �������� ����� ������ ����������!" << endl; 
		 getch();
		 return 0;
	    }  
	    if (frthdocend > 254) {
			cout << "����� �� ����� ��������� �������� ������ 255" << endl; 
			getch();
			return 0;
	      }
	      
	    string bat;
	    char _ip[15];
	    
	    cout << "������� �������� �������: " << endl;
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



