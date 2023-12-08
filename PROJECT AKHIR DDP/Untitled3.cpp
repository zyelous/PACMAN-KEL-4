/* Program Game Suit, dibuat oleh :
	- Arjuna Gunatama Sihombing 	(2317051085)
	- Zahra Citra Apriliana 		(2317051049)
	- Rizky Firmansyah				(2357051016)
	
	Referensi codingan :https://github.com/nicholaselvis/UAP.git
*/
#include <iostream>
#include <time.h>
#include <conio.h>
#include <ncurses/ncurses.h>
#include <windows.h>
#include <fstream>
using namespace std;


int  X, Y,pilih; 
COORD coord={X=0,Y=0};

void gotoxy(int x,int y){
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void loading(){
		for(int i=3;i>0;i--){
		gotoxy(52,14);
		cout << "Memuat.....";
		Sleep(200);
		system("cls");
		gotoxy(52,14);
		cout << "Memuat...";
		Sleep(200);
		system("cls");
		gotoxy(52,14);
		cout << "Memuat.";
		Sleep(200);
		system("cls");
	}
}

void pilihan1(){
	system("color 6f");
		system("color 3f");
		ifstream myfile;
	char sv_text;
	
	myfile.open("GAJAHSEMUTORANG.txt", ios::app);
	
	if (!myfile.fail()){
		
		while(!myfile.eof()){
			myfile.get(sv_text);
			cout << sv_text;			
		}
		myfile.close();
	}
	string pilihan[4] = {"1. GAJAH","2. SEMUT","3. ORANG","SILAHKAN PILIH (angka): "};
	for(int i=0;i<4;i++){
		gotoxy(44,13+i);
		cout << pilihan[i] << endl;
	}
	
	// Input Pilihan
	gotoxy(68,16);
	cin >> pilih;
	    system ("cls");
		loading();
	
	// Random Komputer		
	if(pilih==1){
		gotoxy(45,13); cout << "Kamu     = GAJAH" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
            	gotoxy(44,15); cout << " KALAH ! " << endl;
            	gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " MENANG " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==2){
		gotoxy(45,13); cout << "Kamu     = SEMUT" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==3){
		gotoxy(45,13); cout << "Kamu     = ORANG" << endl;
        srand(time(NULL)); //random/acak
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = GAJAH" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = SEMUT" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = ORANG" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
	}else
    		{
        		gotoxy(44,14); cout << "salah saudara/i Ku !!" << endl;
    		}	
}

void pilihan2(){
	system("color 8f");
		
	ifstream myfile;
	char sv_text;
	
	myfile.open("LOGOBATUGUNTING.txt", ios::app);
	
	if (!myfile.fail()){
		
		while(!myfile.eof()){
			myfile.get(sv_text);
			cout << sv_text;			
		}
		myfile.close();
	}
	

	
	string pilihan[4] = {"1. BATU","2. KERTAS","3. GUNTING","SILAHKAN PILIH (angka): "};
	for(int i=0;i<4;i++){
		gotoxy(44,13+i);
		cout << pilihan[i] << endl;
	}
	// Input Pilihan
	gotoxy(68,16);
	cin >> pilih;
	    system ("cls");
		loading();
	
	// Random Komputer		
	if(pilih==1){
		gotoxy(45,13); cout << "Kamu     = BATU" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = BATU" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KERTAS" << "\n\n";
            	gotoxy(44,15); cout << " KALAH ! " << endl;
            	gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = GUNTING" << "\n\n";
                gotoxy(44,15); cout << " MENANG " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==2){
		gotoxy(45,13); cout << "Kamu     = KERTAS" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = BATU" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KERTAS" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = GUNTING" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==3){
		gotoxy(45,13); cout << "Kamu     = GUNTING" << endl;
        srand(time(NULL)); //random/acak
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = BATU" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KERTAS" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = GUNTING" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
	}else
    		{
        		gotoxy(44,14); cout << "salah saudara/i Ku !!" << endl;
    		}	
}
 

void pilihan3(){
	system("color 2f");
	string pilihan[4] = {"1. JEMPOL","2. KELINGKING","3. TELUNJUK","SILAHKAN PILIH (angka): "};
	for(int i=0;i<4;i++){
		gotoxy(44,13+i);
		cout << pilihan[i] << endl;
	}

	// Input Pilihan
	gotoxy(68,16);
	cin >> pilih;
	    system ("cls");
		loading();
	
	// Random Komputer		
	if(pilih==1){
		gotoxy(45,13); cout << "Kamu     = JEMPOL" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = JEMPOL" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KELINGKING" << "\n\n";
            	gotoxy(44,15); cout << " KALAH ! " << endl;
            	gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = TELUNJUK" << "\n\n";
                gotoxy(44,15); cout << " MENANG " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==2){
		gotoxy(45,13); cout << "Kamu     = KELINGKING" << endl;
        srand(time(NULL)); 
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = JEMPOL" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KELINGKING" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = TELUNJUK" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
    }else if(pilih==3){
		gotoxy(45,13); cout << "Kamu     = TELUNJUK" << endl;
        srand(time(NULL)); //random/acak
        int com = 1 + (rand() % 3);
        if (com==1)
            {
                gotoxy(44,14); cout << " Computer = JEMPOL" << "\n\n";
                gotoxy(44,15); cout << " KALAH ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==2)
            {
                gotoxy(44,14); cout << " Computer = KELINGKING" << "\n\n";
                gotoxy(44,15); cout << " MENANG ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
        else if (com==3)
            {
                gotoxy(44,14); cout << " Computer = TELUNJUK" << "\n\n";
                gotoxy(44,15); cout << " SERI ! " << endl;
                gotoxy(44,16); cout<<"teken enter untuk lanjut saudara/i ku \n";
            }
	}else
    		{
        		gotoxy(44,14); cout << "salah saudara/i Ku !!" << endl;
    		}	
}


void jenisPermainan (){

	int pilihan;
	gotoxy(43,20); cout << "Silahkan Dipilih :D "<<endl;
	gotoxy(43,21); cout << "1. SUIT GAJAH ,ORANG , SEMUT   "<<endl;
	gotoxy(43,22); cout << "2. SUIT BATU ,GUINTING ,KERTAS "<<endl;
	gotoxy(43,23); cout << "3. SUIT TELUNJUK ,JEMPOL ,KELINGKING"<<endl;
	gotoxy(43,24); cout << "KETIKKAN PILIHAN ANDA SAUDARA/I KU  (1,2,3) :";
	cin >> pilihan;
	
	switch (pilihan ){
	 case 1:
	  system ("cls");
      loading();
      pilihan1();
      break;
    case 2:
	  system ("cls");
      loading();
      pilihan2();
      break;
    case 3:
	  system ("cls");
      loading();
      pilihan3();
      break;
    default:
      cout << "Pilihan saudara/i tidak ada di opsi :D \n";
  }
}


int main(){
	system("color 3f");
	
	ifstream myfile;
	char sv_text;
	
	myfile.open("BATUGUNTING.txt", ios::app);
	
	if (!myfile.fail()){
		
		while(!myfile.eof()){
			myfile.get(sv_text);
			cout << sv_text;			
		}
		myfile.close();
	}
	
	int pilih, ulang, x, y;
	char lagi; 
	int opsi;
	// Menu
	init_pair(1,COLOR_WHITE,COLOR_GREEN);
	jenisPermainan();
	getche();
	system ("cls");
	loading();
	
        
	
	// Pilihan Bermain Lagi
	gotoxy(44,15);	cout << "TERIMA KASIH SAUDARA/I SUDAH MEMAINKAN THE SUIT GAME \n";
	gotoxy(44,17);	cout<<"INGIN MAIN LAGI?  (y/n) : ";
	cin>>lagi;
	switch (lagi){
		case 'y':
			system ("cls");
			loading();
			main();
			break;
		case 'n':
			system ("cls");
			gotoxy(44,13);	cout << "TERIMA KASIH SUDAH MEMAINKAN GAME SUIT by ARRIZA\n";
			gotoxy(44,14); 	cout << "          /\\_/\\" << endl;
			gotoxy(44,15);	cout << "         (  >.<)" << endl;
			gotoxy(44,16);	cout << "         / )[bye!]" << endl;
			loading();
	}
	
	system ("cls");
	getch();

}

