#include<iostream>
#include<string>
using namespace std;
struct Student{
	string s_name;
	int s_id;
	float s_gpa;
};
struct Class
{
	string cl_name;
	Student *s;
};
struct Dept{
	string dp_name;
	Class c;
	
};
void Enter(Class *,int &);
void Search(Class *,int &);
void Update(Class *,int &);
void Delete(Class *, int &);
void Add(Class *, int &);
void View(Class *, int &);
int main()

{

	int size;
Dept cs;
int choice;
do{
system("clear");
cout<<"\n\t\t===============================\n";
cout<<"\t\tSTUDENT MANAGEMENT SYSTEM  v1.0\n";
cout<<"\t\t================================\n\n";
cout<<"What Operation would you like to perform?\n";
cout<<" Enter 1 for Entering \n Enter 2 for viewing\n Enter 3 for searching \n Enter 4 for updating \n Enter 5 for adding \n Enter 6 for deleting \n Enter 0 for exiting \n>> ";
cin>>choice;
switch(choice)
{
case 1:
Enter(&cs.c,size);
	break;
case 2:
	View(&cs.c,size);
	break;
	case 3:
	Search(&cs.c,size);
	break;
case 4:
Update(&cs.c, size);	 
break;
case 5:
		Add(&cs.c, size);
		break;
case 6:
	Delete(&cs.c, size);
break;
case 0:
	break;
default:
	cout<<"\nInvalid Choice\n";

}}
while(choice!=0);

delete[] cs.c.s;
}


		void Enter(Class *p,int &size)
		{ 
		
		cout<<"How many students' Data do you have? : ";
		cin>>size;
			p->s =new Student[size];
			
		cout<<"\t\tEnter Data for Student \n";
		for(int i=0;i<size;i++)
	{
		cout<<"\nEnter ID for student"<<i+1<<"  : ";
		cin>>(*p).s[i].s_id; 
		cout<<"\nEnter name for student"<<i+1<<" : ";
		cin>>((p->s)+i)->s_name;
		cout<<"\nEnter CGPA for student "<<i+1<<" : ";
		cin>>((p->s)+i)->s_gpa;
		
		}
		
		
	}
		
		void Search(Class *p ,int &size)
			{
				
				
				
				bool tst=false;
				int choice,sid;
				string sname;
				float sgpa;
				cout<<"1) Press 1 for searching with ID\n2) Press 2 for searching with name \n3) Press 3 for searching with CGPA";
				cout<<"\n>> ";
				cin>>choice;
				switch(choice)
				{
					case 1:
				cout<<"\nEnter the ID to search  : ";
				cin>>sid;
				
			for(int i=0;i<size;i++)
				{
					
					if(sid==((p->s)+i)->s_id)
						{ 
						tst=true;
						cout<<"\nUser Exists in Database. Here are the result \n";
						cout<<((p->s)+i)->s_id<<" "<<((p->s)+i)->s_name<<" "<<((p->s)+i)->s_gpa<<endl;
						break;
						}
						else
						tst=false;
					}
					if(tst==false)
					cout<<"\nSorry No Records found\n";
					system("pause");
					break;
					
					
					case 2: 
					cout<<"\nEnter the name to search  : ";
				cin>>sname;
			for(int i=0;i<size;i++)
				{
					if(sname==((p->s)+i)->s_name)
						{ tst=true;
						cout<<"\nUser Exists in Database. Here are the result \n";
						cout<<((p->s)+i)->s_id<<" "<<((p->s)+i)->s_name<<" "<<((p->s)+i)->s_gpa;
						break;
						}
						else
						tst=false;
					}
					if(tst==false)
					cout<<"\nSorry No Records found\n";
					system("pause");
					break;
					
					case 3:
					cout<<"\nEnter the CGPA to search  : ";
				cin>>sgpa;
			for(int i=0;i<size;i++)
				{
					if(sgpa==((p->s)+i)->s_gpa)
						{ tst=true;
						cout<<"\nUser Exists in Database. Here are the result \n";
						cout<<((p->s)+i)->s_id<<" "<<((p->s)+i)->s_name<<" "<<((p->s)+i)->s_gpa;
						break;
						}
						else
						tst=false;
					}
					if(tst==false)
					cout<<"\nSorry No Records found\n";
					system("pause");
					break;
					default:
						cout<<"\nInvalid Options";
						cout<<"\nSearch Ended\n\n";
						system("pause");
			}
			}
				void Update(Class *p,int &size )
				{
					int u_choice,u_id;
					
				cout<<endl<<" ID   |   Name     |    GPA   \n";
					for(int i=0;i<size;i++)
					{
						
						cout<<endl<<((p->s)+i)->s_id<<' '<<((p->s)+i)->s_name<<' '<<((p->s)+i)->s_gpa<<endl;
					}
					cout<<"\n\nSelect the user ID to update data : ";
					cin>>u_id;
					cout<<"\nWhich thing would you like to update \n1) ID \n2) Name \n3) CGPA \n>> ";
					cin>>u_choice;
					switch(u_choice)
					{
					case 1:
					for(int i=0;i<size;i++)
					{
					if(u_id==((p->s)+i)->s_id)
					
					{
							cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						cout<<"\nEnter new value : ";
						cin>>((p->s)+i)->s_id;
						cout<<"\nUpdated Successfully!";
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						break;}
					}
					break;
					case 2:
						for(int i=0;i<size;i++)
					{
					if(u_id==((p->s)+i)->s_id)
{
							cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						cout<<"\nEnter new value : ";
						cin>>((p->s)+i)->s_name;
						cout<<"\nUpdated Successfully!";
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						break;}
					}
					break;
					case 3:
						for(int i=0;i<size;i++)
					{
					if(u_id==((p->s)+i)->s_id)
					{
							cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						cout<<"\nEnter new value : ";
						cin>>((p->s)+i)->s_gpa;
						cout<<"\nUpdated Successfully!";
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
						break;}
					}
					break;
					}
				 
				}
				
				void Delete(Class *p, int &size)
				{
					
					int d_id,d_ind;
					cout<<endl<<" ID   |   Name     |    GPA   \n";
					for(int i=0;i<size;i++)
					{
						
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
					}
					cout<<"\nEnter the ID of the user you want to delete : ";
					cin>>d_id;
					for(int i=0;i<4;i++)
						{
						if(d_id==((p->s)+i)->s_id)
						{	
						d_ind=i;
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
//						(p+i)->s_id=(p+i+1)->s_id;
//						(p+i)->s_name=(p+i+1)->s_name;
//						(p+i)->s_gpa=(p+i+1)->s_gpa;
//						
					
				}
				}
				if(d_ind!=-1)
				{
					for(int i=d_id;i<size-1;i++){
            ((p->s) + i)->s_id = ((p->s) + i + 1)->s_id;
            ((p->s) + i)->s_name = ((p->s) + i + 1)->s_name;
            ((p->s) + i)->s_gpa = ((p->s) + i + 1)->s_gpa;
        }

        // Decrease the size of the array
        size--;

        cout << endl;
				}
				cout<<endl<<"Deleted Successfully";
				for(int i=0;i<(size-1);i++)
					{
						
						cout<<endl<<((p->s)+i)->s_id<<"  |  "<<((p->s)+i)->s_name<<"   |   "<<((p->s)+i)->s_gpa;
					}
			
			}
			
		void Add(Class* p, int& size) {
    int add;
    cout << "\nHow many users do you want to add: ";
    cin >> add;


    Student* newStudents = new Student[size + add];


    for (int i = 0; i < size; ++i) {
        newStudents[i] = p->s[i];
    }


    for (int j = size; j < (size + add); ++j) {
        cout << "\nEnter Student ID: ";
        cin >> newStudents[j].s_id;

        cout << "\nEnter the name of student: ";
        cin >> newStudents[j].s_name;

        cout << "\nEnter CGPA: ";
        cin >> newStudents[j].s_gpa;
    }


    delete[] p->s;


    p->s = newStudents;


    size += add;

    cout << "\nUpdated Students:\n";
    for (int i = 0; i < size; ++i) {
        cout << endl << p->s[i].s_id << "  |  " << p->s[i].s_name << "   |   " << p->s[i].s_gpa;
    }
}

				
			void View(Class *p, int &size)
			{
				
				cout<<endl<<"\nID      |        Name     |      GPA    \n";
				for(int i=0;i<size;i++)
				{
					
					cout<<endl<<p->s[i].s_id<<" | "<<p->s[i].s_name<<" | "<<p->s[i].s_gpa;
				}
				cout<<endl;
				system("pause");
			}

