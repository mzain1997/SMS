#include<iostream>
#include<conio.h>
using namespace std;
void choicefn(char);
void studentfn(void);
void teacherfn(void);
void loading(void);
static int i = 0;
static int ti = 0;
static int load = 1;

void std_add(void);
void std_search(void);
void std_display(void);
void std_del(void);

void t_add(void);
void t_search(void);
void t_display(void);
void t_del(void);

struct student
{
	int rollno;
	char name[30];
	char class1[20];
	int age;
	char add[30];
	char blood[5];
}; student s[50];
struct teacher
{
	int id;
	char name[30];
	char qual[20];
	char exp[20];
	int age;
	char add[30];
	char blood[5];
}; teacher t[50];


int main()
{
	
	if (load == 1){
		loading();
		load = load + 1;
	}

	system("cls");
	char ch;
	do{
		system("color 7");
		char choice;
		cout << "\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << " \t\t\t\t ASSALAM.O.ALAIKUM" << endl;
		cout << "\t\t\t\t\t\tWELLCOME To" << endl;
		cout << "\t\t\t\t\t\t\tSCHOOL MANAGEMENT SYSTEM" << endl;
		cout << "\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "\n\t\t\t\t\t\tMAIN SCREEN\n\n";
		cout << "Enter your choice: " << endl;
		cout << "1.Students information" << endl;
		cout << "2.Teacher information" << endl;
		cout << "3.Exit program" << endl;
		cin >> choice;
		choicefn(choice);
		system("cls");
		cout << "\n\n\t\tpress any key to run again and press n to terminate...." <<endl;
		cin >> ch;
		system("cls");
	} while ( ch !='n' );
	exit(0);

	_getch();
	return 0;
}
void choicefn(char choice)
{
	system("color 9");
	switch (choice)
	{
	case '1':
	system("color B");
		studentfn();
		break;
	case '2':
	system("color B");
		teacherfn();
		break;
	case '3':
		exit(0);
		break;
	default:
		system("cls");
		system("color 0a");
	system("color 4");
		cout << "\n\n\n\t\t\tyou enter wrong choice !!!" <<endl;
		_getch();
	}
}
void studentfn()
{	
	char ch;
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\t\t\tSTUDENT MANAGEMENT SYSTEM\n" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Enter the choice" << endl;
	cout << "1.Create new entry" <<endl;
	cout << "2.Find and Dislpay" << endl;
	cout << "3.Display" << endl;
	cout << "4.Delete" << endl; 
	cout << "5.Jump to Main Screen" << endl;
	cin >> ch;
	switch (ch)
	{
		case '1':
			std_add();
			break;
		case '2':
			std_search();
			break;
		case '3':
			std_display();
			break;
		case '4':
			std_del();
			break;
		case '5':
			main();
			break;
		default:
			cout << "you enter wrong input....." << endl;
			cout<<"press Enter to Back"<<endl;
			_getch();
			studentfn();

	}

	_getch();
}

void teacherfn()
{
	char ch;
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\t\t\tTEACHER MANAGEMENT SYSTEM\n" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Enter the choice" << endl;
	cout << "1.Create new entry" << endl;
	cout << "2.Find and Dislpay" << endl;
	cout << "3.Display" << endl;
	cout << "4.Delete" << endl;
	cout << "5.Jump to Main Screen" << endl;
	cin >> ch;
	switch (ch)
	{
	case '1':
		t_add();
		break;
	case '2':
		t_search();
		break;
	case '3':
		t_display();
		break;
	case '4':
		t_del();
		break;
	case '5':
		main();
		break;
	default:
		cout << "you enter wrong input....." << endl;
		break;

	}

	_getch();
}
void loading(void)
{
	system("cls");
	system("color F");
	cout << "\n\n\n\t\t\t    Please wait while Loading\n" << endl;
	char a1 = 177, b1 = 219;
	cout << "\t\t\t\t";
	for (int z = 0; z <= 15; z++)
	cout << a1;
	cout << "\r";
	cout << "\t\t\t\t"; 
	for (int j = 0; j <=15; j++)
	{
		cout << b1;
		for (int k = 0; k <= 100000000; k++);
	}
	cout << "\n\n\n\t\tAssalam.o.Alaikum\n\n\n\t\t\t";
}
void std_add()
{
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\twelcome to student entry screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
		char ch;
		
	do{
		system("cls");
		cout << "Enter the record of student no. " << i + 1 << endl;
		cout << "enter roll no i.e xxxx (positive 1234)" << endl;
		cin >> s[i].rollno;
		cout << "enter the name" << endl;
		cin >> s[i].name;
		cout << "enter the class" << endl;
		cin >> s[i].class1;
		cout << "enter the age" << endl;
		cin >> s[i].age;
		cout << "enter the blood group" << endl;
		cin >> s[i].blood;
		cout << "press any key to enter next record and press n to back" << endl;
		cin >> ch;
		i = i + 1;
	} while (ch != 'n');
		_getch();
	studentfn();
}
void std_search()
{
	system("cls");
	int rollnos;
	int flag = 0;
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to search screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "enter the roll" << endl;
	cin >> rollnos;
	for (int j = 0; j <= i; j++)
	{
		if (s[j].rollno == rollnos)
		{
			cout << "Record founded!"<<endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << "Roll No." << "\t" << "Name" << "\t" << "Age" << "\t" << "Blood Group" << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << s[j].rollno << "\t\t" << s[j].name << "\t" << s[j].age << "\t" << s[j].blood << endl;
			flag = 1;
			_getch();
		}
	}
		if (flag == 0)
			cout << "Record not found!";
		_getch();
		
		studentfn();
}
void std_display()
{
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to display screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
	cout << "Roll No."<<"\t"<<"Name"<<"\t"<<"Class"<<"\t"<<"Age"<<"\t"<<"Blood Group" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
	for (int j = 0; j <= i-1; j++)
	{	if(s[j].rollno != '\0')
		cout << s[j].rollno<<"\t\t"<<s[j].name<<"\t"<<s[j].class1<<"\t"<<s[j].age<<"\t"<<s[j].blood<<endl;
	}
		cout<<"\npress enter to back"<<endl;
		_getch();
		studentfn();
}
void std_del()
{
	system("cls");
	int rollnos;
	int flag = 0;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to delete screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "enter the roll no that you want to delete!" << endl;
	cin >> rollnos;
	for (int j = 0; j <= i; j++)
	{
		if (s[j].rollno==rollnos)
		{
			s[j].rollno = '\0';
			s[j].age = '\0';
			flag = 1;
		}
	
	}	
		if (flag == 0)
			cout << "Record not found!";
		else
			cout << "Record Deleted!";_getch();
		studentfn();
}

void t_add()
{
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\twelcome to teacher entry screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	char ch;

	do{
		system("cls");
		cout << "Enter the record of teacher no. " << ti + 1 << endl;
		cout << "enter ID No. i.e xxxx (positive 1234)" << endl;
		cin >> t[ti].id;
		cout << "enter the name" << endl;
		cin >> t[ti].name;
		cout << "enter the qualification" << endl;
		cin >> t[ti].qual;
		cout << "enter the experience in years" << endl;
		cin >> t[ti].exp;
		cout << "enter the age" << endl;
		cin >> t[ti].age;
		cout << "enter the blood group" << endl;
		cin >> t[ti].blood;
		cout << "press any key to enter next record and press n to back" << endl;
		cin >> ch;
		ti = ti + 1;
	} while (ch != 'n');
	teacherfn();
}
void t_search()
{
	system("cls");
	int idn;
	int flag = 0;
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to search screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "enter the ID" << endl;
	cin >> idn;
	for (int j = 0; j <= ti; j++)
	{
		if (t[j].id == idn)
		{
			cout << "Record founded!" << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
	cout << "ID No." << "\t" << "Name" << "\t" << "Age" << "\t" << "Blood Group" << "\tQualification" << "\tExperience Years" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
			cout << t[j].id << "\t" << t[j].name << "\t" << t[j].age << "\t"<<t[j].blood<<"\t\t"<< t[j].qual <<"\t\t"<< t[j].exp << endl;
			flag = 1;
			_getch();
		}
	}
	if (flag == 0)
		cout << "Record not found!";
	_getch();
	cout<<"\npress enter to back"<<endl;
	teacherfn();
}
void t_display()
{
	
	system("cls");
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to display screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
	cout << "ID No." << "\t" << "Name" << "\t" << "Age" << "\t" << "Blood Group" << "\tQualification" << "\tExperience Years" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
	for (int j = 0; j <= ti - 1; j++)
	{
	if(t[j].id != '\0'){
		cout << t[j].id << "\t" << t[j].name << "\t" << t[j].age << "\t"<<t[j].blood<<"\t\t"<< t[j].qual <<"\t\t"<< t[j].exp << endl;
		}
		}
		cout<<"\npress enter to back"<<endl;
			_getch();
			teacherfn();
}
void t_del()
{
	system("cls");
	int idn;
	int flag = 0;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "welcome to delete screen" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "enter the ID No. that you want to delete!" << endl;
	cin >> idn;
	for (int j = 0; j <= ti; j++)
	{
		if (t[j].id == idn)
		{
			t[j].id = '\0';
			t[j].name[30]='\0';
			t[j].age = '\0';
			flag = 1;
		}	
	}
	if (flag == 0)
			cout << "Record not found!";
		else
			cout << "Record Deleted!";
		cout<<"\npress enter to back"<<endl;
		_getch();
		teacherfn();

}
