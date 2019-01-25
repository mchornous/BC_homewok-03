
#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
public:
//  friend functions
   friend std::ostream& operator<<(std::ostream&,const Date&);
   friend std::istream& operator>>(std::istream&,Date&);
   friend Date operator+(const Date&,int);
   friend Date operator+(int,const Date&);
//  constructors
   Date() :  month(1), day(1), year(2000) { }
   Date(int mm,int dd,int yy=2000) : month(mm), day(dd), year(yy) { }
   Date(const Date &old) : month(old.month), day(old.day),
                                             year(old.year) { }
//  mutators
   void setDate(int mm,int dd,int yy=2003) { month = mm; day = dd;
                                             year = yy; }
//  accessors
   void print() const;
   bool end_of_month(int) const;
//  comparison operators (accessors)
   bool operator==(const Date &) const;
   bool operator!=(const Date &) const;
   bool operator<(const Date &) const;
   bool operator<=(const Date &) const;
   bool operator>(const Date &) const;
   bool operator>=(const Date &) const;
private:
   int month;
   int day;
   int year;
   static int days[];
   void increment();
};

#endif

