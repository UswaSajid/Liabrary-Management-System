#include<iostream>//this header file include
#include<stdlib.h>
#include<string.h>
using namespace std;
//*LIBRARY MANAGEMENT SYSTEM*//
class Classstudent//class student structure
{
	public:
	int bookID;
	char title[30]; //array size is 30
	char authorofbook[30]; //also 30 size
	int costofbook; //variable declared costofbook
};
const int books=5;//Maximum 5 book Enter in the record
int arr;//array declared
Classstudent Classstudentobj[books];
void Add_Book()//ENTER THE BOOK RECORD
{
	if(arr<books)
	{
		cout<<"---Enter the Details of Books---"<<endl;
		cout<<"Enter the book id"<<endl;
		cin>>Classstudentobj[arr].bookID;
		cout<<"Enter book title"<<endl;
		cin>>Classstudentobj[arr].title;
		cout<<"Enter name of author"<<endl;
		cin>>Classstudentobj[arr].authorofbook;
		cout<<"Enter the cost of book"<<endl;
		cin>>Classstudentobj[arr].costofbook;
		arr++;
		
	}
	else{
		cout<<"No more space in system for another"<<endl;
		
	}
}
void Display_Books() //DISPLAY THE BOOK RECORD
{
	for(int i=0; i<arr; i++)
	{
		cout<<"---Details of all books in library---";
		cout<<"Book ID"<<Classstudentobj[i].bookID<<endl;
		cout<<"Book Title is"<<Classstudentobj[i].title<<endl;
		cout<<"Author Name"<<Classstudentobj[i].authorofbook<<endl;
		cout<<"cost of book"<<Classstudentobj[i].costofbook<<endl;
		
	}
}
void Book_Author() //SEARCH OF BOOK AUTHOR
{
	char search_book[30];
	cout<<"Enter the name of Author"<<endl;//Book By SEARCH BY AUTHOR
	cin>>search_book;
	int i=0;
if(search_book!=Classstudentobj[i].authorofbook){
		cout<<"Book ID:"<<Classstudentobj[i].bookID<<endl;
		cout<<"Book Title is:"<<Classstudentobj[i].title<<endl;
		cout<<"Author Name:"<<Classstudentobj[i].authorofbook<<endl;
		cout<<"cost of book:"<<Classstudentobj[i].costofbook<<endl;
		i++;
	}else
	{
		cout<<"no record found";
	}
	
	
}
int main()//MAIN BODY START
{
	int choice;
	char input;
	do{
		cout<<"---Library Book Record System---"<<endl;
		cout<<"press 1 to enter the book record:"<<endl;
		cout<<"press 2 to Display all Records of books:"<<endl;
		cout<<"press 3 to search book by author name:"<<endl;
		cout<<"press 4 to count total books in library:"<<endl;
		cout<<"press 5 to Exit from the system:"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;
		switch(choice) //switch statement used
		{
			case 1://case 1 Add Book
			Add_Book();
			break;
			case 2://case 2 Display Book
			Display_Books();
			break;
			case 3://case 3 Search By Book Author
			Book_Author();
			break;
			case 4://case  Count The Total Book
			cout<<"Total number of books in library are:"<<arr<<endl;
			break;
			case 5://case 5 exit
			exit(0);
			default:
				cout<<"invalid choice please try again";


		}
		cout<<"Do you want to continue,please press y or Y"<<endl;
		cin>>input;
	}
	while(input=='y'||input=='Y');
}
//**END OF PROJECT*//
