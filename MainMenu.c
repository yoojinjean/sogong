#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "MainMenu.h"
#include "StudentMenu.h"
#include "LibrarianMenu.h"

<<<<<<< HEAD
=======
//branch kang
>>>>>>> 6867bbe24e9c97698b577a0d643e9f582f754663

int main()
{
	int menu;

	while (1){

		printf("Main Menu\n");
<<<<<<< HEAD
<<<<<<< HEAD
		printf("1. Librarian mode\n2. Student mode\n3.Create ID\n0.Exit\n\nINPUT: ");//���α׷� ���۽� ó�� ������ �κ�
=======
		printf("1. Librarian mode\n2. Student mode\n3.Create ID\n0.Exit\n\nINPUT: ");
>>>>>>> MODIFIED MAIN CFILE
=======
		printf("1. Librarian mode\n2. Student mode\n3.Create ID\n0.Exit\n\nINPUT: ");
=======
		printf("1. Librarian mode\n2. Student mode\n3.Create ID\n0.Exit\n\nINPUT: ");//���α׷� ���۽� ó�� ������ �κ�
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
>>>>>>> 6867bbe24e9c97698b577a0d643e9f582f754663
		scanf("%d", &menu);
		switch (menu)
		{
		
		case 1:
			Login_Check();
			break;
		case 2:
			StuLogin();  
			break;
		case 3:
			CreateID();
			break;
		case 0:
			exit(0);

		default:
			printf("Wrong Number.\n\n");
		}
	}
}

<<<<<<< HEAD
<<<<<<< HEAD
int Login_Check(){//�α��� üũ�ϴ� �Լ�
=======
int Login_Check(){
>>>>>>> MODIFIED MAIN CFILE
=======
int Login_Check(){
=======
int Login_Check(){//�α��� üũ�ϴ� �Լ�
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
>>>>>>> 6867bbe24e9c97698b577a0d643e9f582f754663
int ok;

   ok=LibLogin();

   if(ok==0)
   {
      LibMenu();
   }
   else
      printf("Wrong password");

   return 0;
}