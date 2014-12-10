//eunjiiiii
typedef struct stu
{
	char id[8];
	char pw[5];
	char name[20];
	char department[40];

}STU;

void CreateID();
int Create();
void Student_Save_File(STU student[]);
void Read_Student_File();
void Count_Student();
int Check_ID(char id[], int flag);
int Check_PW(char pw[]);


void StuLogin();
int StuLogin_Menu();

void StudentMenu();