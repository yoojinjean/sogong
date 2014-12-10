#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MainMenu.h"
//#include "StudentMenu.h"
#include "LibrarianMenu.h"


int LibMenu()
{
<<<<<<< HEAD
	int menu;
	INFO data[MAX];

	while (1){

		printf("Librarian Function\n");
		printf("1. Add book\n2. Update book\n3. Delete book\n0. Exit\n\nINPUT: ");
		scanf("%d", &menu);
		switch (menu)
		{
		
		case 1:
			AddBook(data);
			Save_File(data);
			break;
		case 2:
			UpdateBook(data);  
			break;

		case 3:
			DeleteBook(data);
			break;

		case 0:
			printf("Exit\n\n");
			return 0;
		
		default:
			printf("Wrong Number.\n\n");
			system("pause");
			system("cls");
			LibMenu();
		}
	}
=======
   int menu;
   INFO data[MAX];

   while (1){

      printf("Librarian Function\n");
      printf("1. Add book\n2. Update book\n3. Delete book\n0. Exit\n\nINPUT: ");
      scanf("%d", &menu);
      switch (menu)
      {
      
      case 1:
         AddBook(data);
         Save_File(data);
         break;
      case 2:
         Search_title_lib(data);  
         break;

      case 3:
         DeleteBook(data);
         break;

      case 0:
         printf("Exit\n\n");
         return 0;
      
      default:
         printf("Wrong Number.\n\n");
         system("pause");
         system("cls");
         LibMenu();
      }
   }
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
}

int LibLogin()//사서 로그인
{
   int psw;
   printf("Insert password\n");
   printf("pw:");
   scanf("%d",&psw);

   if(psw==1234){
      system("cls");
      return 0;}
   else
      return 1;

}


void AddBook(INFO book[])//추가
{
<<<<<<< HEAD
		printf("Title: ");
		scanf("%s",&book[num].Title);
		printf("Author: ");
		scanf("%s",&book[num].Author);
		printf("Publisher:");
		scanf("%s",&book[num].Publisher);
		printf("ISBN: ");
		scanf("%s",&book[num].ISBN);
		printf("Availability: ");
		scanf("%d",&book[num].Avail);
		num++; 
=======

   int k=0,j=0,m=0;
   char buffer[30];
      printf("Title: ");
      gets(buffer);
      while(buffer[k]){
         strcpy(book[num].Title,buffer);
         k++;
      }
      fgets(book[num].Title,30,stdin);
      printf("Author: ");
      scanf("%s",&book[num].Author);
      printf("Publisher:");
      scanf("%s",&book[num].Publisher);
      printf("ISBN: ");
      scanf("%s",&book[num].ISBN);
      printf("Availability: ");
      scanf("%d",&book[num].Avail);
      num++; 
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
}

void Save_File(INFO book[]) //파일 저장 함수
{
<<<<<<< HEAD
	int i;
	
	FILE * fp = fopen("bookinfo.txt","a");
	fprintf(fp, "%d\n", num);
	for (i = 0; i<num; i++)
	{
		fprintf(fp, "%s %s %s %s %d \n",book[i].Title,book[i].Author, book[i].Publisher, book[i].ISBN, book[i].Avail);
	}
	printf("Success!\n");
	system("cls");
	fclose(fp);
=======
   int i;
   
   FILE * fp = fopen("bookinfo.txt","at");
 
   fprintf(fp, "%s%s\n%s\n%s\n%d\n", book[num-1].Title,book[num-1].Author, book[num-1].Publisher, book[num-1].ISBN, book[num-1].Avail);
   printf("Success!\n");
   system("cls");
   fclose(fp);




>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
}


void Search_title_lib(INFO book[])//삭제할때 책 제목 검색
{
<<<<<<< HEAD
	int i;
	char find[30];
	//int ret;
	//num=fscanf(fp, "%d\n",num);

	FILE * fp = fopen("bookinfo.txt","rt");
	printf("Search book\n\n");

	
	for(i=0; i < num; i++)
		fscanf(fp, "%s\n",book[i].Title);

	printf("Insert Title: ");
	scanf("%s", find);
	/*
	for(i=0;i<num;i++)
	{
		ret=fscanf(fp, "%c",book[i].Title);
		printf("%s",book[i].Title);
		if(ret==EOF)
			break;
		if(ret==find)
		{
			printf("Search book Result\n");
			printf("Title: %d\nAuthor: %s\nPublisher: %s\nISBN: %s \nAvailability: %d\nRenting Student: %d\n"
				, book[i].Title, book[i].Author, book[i].Publisher, book[i].ISBN,book[i].Avail,book[i].RentStu);
			printf("undate found");
		}
	}
	*/
	////////////////////////////////////////////////////
	for (i = 0; i<num; i++)
	{
		if(strcmp(book[i].Title,find)==0)
		{
			printf("Search book Result\n");
			printf("Title: %d\nAuthor: %s\nPublisher: %s\nISBN: %s \nAvailability: %d\nRenting Student: %d\n"
				, book[i].Title, book[i].Author, book[i].Publisher, book[i].ISBN,book[i].Avail,book[i].RentStu);

			return;
		}
		printf("Not Found!\n");
	}
	
=======
   int i;
   char find[30];
   char buffer[30];


   FILE * fp = fopen("bookinfo.txt","rt");
   printf("Search book\n\n");

   printf("Insert Title: ");
   scanf("%s", find);
   printf("%s",find);
   if(fp!=NULL)
   {
	   while((fgets(buffer,128,fp)!=0))
	   {
		  // printf("%s\n",find);
		   printf("%s",buffer);
		   if(strcmp(buffer,find)==0)
			   printf("got title");
		   //else  printf("%s\n",find);
	   }
 
   }
   /*
   for(i=0;i<num;i++)
   {
      ret=fscanf(fp, "%c",book[i].Title);
      printf("%s",book[i].Title);
      if(ret==EOF)
         break;
      if(ret==find)
      {
         printf("Search book Result\n");
         printf("Title: %d\nAuthor: %s\nPublisher: %s\nISBN: %s \nAvailability: %d\nRenting Student: %d\n"
            , book[i].Title, book[i].Author, book[i].Publisher, book[i].ISBN,book[i].Avail,book[i].RentStu);
         printf("undate found");
      }
   }
  
   ////////////////////////////////////////////////////
   for (i = 0; i<num; i++)
   {
      if(strcmp(book[i].Title,find)==0)
      {
         printf("Search book Result\n");
         printf("Title: %d\nAuthor: %s\nPublisher: %s\nISBN: %s \nAvailability: %d\nRenting Student: %d\n"
            , book[i].Title, book[i].Author, book[i].Publisher, book[i].ISBN,book[i].Avail,book[i].RentStu);

         return;
      }
      printf("Not Found!\n");
   }
    */
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
}



void DeleteBook(INFO book[])//삭제
{
<<<<<<< HEAD
	int num, i, j,dnum = 0;
	INFO data[MAX];
	char find[30];
	
	printf("Delete book\n\n");
	Search_title_lib(data);
	printf("Insert ISBN:");
	scanf("%s",find);
	for (j = 0; j<i; j++){
		if (book[i].Avail == 1 && strcmp(book[i].ISBN,find)==0){
			strcpy(book[i].Title,"0");
			strcpy(book[i].Author,"0");
			strcpy(book[i].Publisher,"0");
			strcpy(book[i].ISBN,"0");
			
			num--;
			printf("Success!\n");
			system("cls");
			return;
		}
	}
}

void UpdateBook(INFO book[])
{
	INFO data[MAX];
	char find[30];
	
	printf("Update book\n\n");
	Search_title_lib(data);
	printf("Insert ISBN:");
	scanf("%s",&find);
	//////////////미완성//////////
}


=======
   int num, i, j,dnum = 0;
   INFO data[MAX];
   char find[30];
   
   printf("Delete book\n\n");
  // Search_title_lib(data);
   printf("Insert ISBN:");
   scanf("%s",find);
   for (j = 0; j<i; j++){
      if (book[i].Avail == 1 && strcmp(book[i].ISBN,find)==0){
         strcpy(book[i].Title,"0");
         strcpy(book[i].Author,"0");
         strcpy(book[i].Publisher,"0");
         strcpy(book[i].ISBN,"0");
         
         num--;
         printf("Success!\n");
         system("cls");
         return;
      }
   }
}
/*
void UpdateBook(INFO book[])
{
   INFO data[MAX];
   char find[30];
   
   printf("Update book\n\n");
   Search_title_lib(data);
   printf("Insert ISBN:");
   scanf("%s",&find);
   //////////////미완성//////////
}

*/
>>>>>>> 84b9cdc5553c25b650b3a1bdc1cb6c26bbab80be
