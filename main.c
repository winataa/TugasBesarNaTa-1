#include <stdio.h>
#include <string.h>

void menu(){
	int masukan;
	
	printf ("pilihan menu : \n");
	printf ("\t 1) Menghitung IMB \n");
	printf ("\t 2) Daftar kalori makanan \n");
	printf ("\t 3) Menulis catatan kalori \n");
	printf ("\t 4) keluar");
	
	printf ("\n");
	printf ("masukkan pilihan anda ");
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : 
			printf ("Coming Soon");
			break;
		
		case 2 :
			printf ("Coming Soon");
			break;
			
		case 3 :
			printf ("Coming Soon");
			break;
			
		case 4 :
			printf ("Coming Soon");
			break;
			
		default:
			printf ("Coming Soon");
	}
}	

int main() {
		
	char inputusername [20];
	char inputpassword [20];
	
	char username[20] = "userapa";
	char password[20] = "passapa";
	
	while (1) {
			system("cls");
			
	
	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
		scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);
	
		
	if (strcmp(username, inputusername) == 0 && strcmp(username, inputusername) == 0 )	{
		system ("cls");
		
		printf (" \n\tusername atau password yang anda masukkan benar\n");
		
		printf ("selamat datang\n");
		
		system ("pause");
		
		system ("cls");
		
		menu();
		
		break;
	
	}
	else {
		system ("cls");
		
		printf (" \n\tusername atau password yang anda masukkan salah\n");
		
		system ("pause");
	}
	}

	return 0;
}
