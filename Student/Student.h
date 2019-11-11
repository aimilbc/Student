//
//  Student.h
//  Student
//
//  Created by AIMI ROSS on 10/19/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#ifndef STUDENT_H
#define STUDENT_H
#include "myDate.h"
#include <iostream>
using namespace std;

struct Student {
    int studentID;
    char name[20];
    char grade;
    myDate bday;
    string homeTown;
};

void populate(Student **s);
int genRandID();
char genRandGrade();
myDate genRandDate();
void sortByID(Student **s);
void sortByName(Student **s);
void sortByGrade(Student **s);
void sortByHomeTown(Student **s);
void sortByBday(Student **s);
void displayOriginal(Student **s);



#endif /* STUDENT_H */
