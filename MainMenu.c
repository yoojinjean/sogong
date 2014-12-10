#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "MainMenu.h"
#include "StudentMenu.h"
#include "LibrarianMenu.h"


int main()
{
	int menu;

	while (1){

		printf("Main Menu\n");
		printf("1. Librarian mode\n2. Student mode\n3.Create ID\n0.Exit\n\nINPUT: ");//프로그램 시작시 처음 나오는 부분
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

int Login_Check(){//로그인 체크하는 함수
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