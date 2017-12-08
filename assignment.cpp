#include <string>
#include "assignment.h"

void Assignment::setSubject(string s)
{
subject=s; 
}
void Assignment::setTitle(string t)
{
title=t;; 
}
void Assignment::setDueDate(int mm, int dd, int yy)
{
month=mm; 
day=dd;
year=yy;
}
//implement the get functions
string Assignment::getSubject()
{
return subject;
}
void Assignment::getTitle(string &t)
{
t=title;
}
void Assignment::getDueDate (int &mm, int &dd, int &yy)
{
mm=month;
dd=day;
yy=year;
}
