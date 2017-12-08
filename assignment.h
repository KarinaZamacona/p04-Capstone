#ifndef _ASSIGNMENT_H_
#define _ASSIGNMENT_H_
#include <string>
#include <iostream>
using namespace std;

class Assignment
{
private://variables
string subject;
string title;
int day;
int month;
int year;

public://prototypes
void setSubject (string);
void setTitle (string);
void setDueDate (int, int, int);
string getSubject();
void getTitle (string &);
void getDueDate (int &, int &, int &);
};
#endif
