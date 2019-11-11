//
//  myDate.h
//  Student
//
//  Created by AIMI ROSS on 10/19/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#ifndef MYDATE_H
#define MYDATE_H
#include <iostream>
using namespace std;

class myDate {
    int month;
    int day;
    int year;
public:
    myDate();
    myDate(int, int, int);
    myDate(int);
    void constructor();
    void display();
    void increaseDate(int);
    void decreaseDate(int);
    int daysBetween(myDate D);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    string dayName();
    void getBday();
};

#endif /* myDate_h */

