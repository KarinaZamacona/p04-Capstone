#include <iostream>
#include <string>
#include "assignment.h"
#include <fstream>
#include<vector>
using namespace std;

int main()
{
vector<Assignment> assignment;
cout<<"Welcome to the Assignment List Creater!\n";
string q, title, subject, file;
int m, d, y;
cout<<"Enter 's' to create an Assignment (Enter q to quit)"<<endl;
cin>>q;
while(q!="q")
{
cin.ignore();
Assignment assign;
cout<<"Enter the Subject of your Assignment: "<<endl;
getline(cin, subject);
cout<<"Enter the Title of your Assignment: "<<endl;
getline(cin, title);
cout<<"Enter the month your Assignment is due(example: January=1): "<<endl;
cin>> m;
cout<<"Enter the day your Assignment is due: "<<endl;
cin>>d;
cout<<"Enter the year your Assignment is due: "<<endl;
cin>>y;
assign.setSubject(subject);
assign.setTitle(title);
assign.setDueDate(m,d,y);
assignment.push_back(assign);
cout<<"Enter 's' to create an Assignment (Enter q to quit)"<<endl;
cin>>q;
}
if(assignment.size()!=0)
{
cout<<"Enter the file you would like to output your Assignments to:"<<endl;
cin>>file;
ofstream output;
output.open(file);
for(int i=0; i<assignment.size(); i++)
{
assignment[i].getDueDate(m,d,y);
assignment[i].getTitle(title);
//output to file
output<<"Due Date: "<<m<<"/"<<d<<"/"<<y<<endl;
output<<"Subject: "<<assignment[i].getSubject()<<endl;
output<<"Title: "<<title<<endl<<endl;
}
output.close();
}
cout<<"Thanks for creating your Assignment List"<<endl;

return 0;
}
