//
//  Students.cpp
//  Student
//
//  Created by AIMI ROSS on 10/19/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#include <stdio.h>
#include <cstring>
#include "Student.h"
#include "myDate.h"
#include <time.h>
#include <iomanip>

void populate(Student **ptr){
    srand( static_cast<unsigned int>(time(NULL)));
    
    ptr[0] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Long Beach, CA"};
    ptr[1] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Seal Beach, CA"};
    ptr[2] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Garden Grove, CA"};
    ptr[3] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Torrance, CA"};
    ptr[4] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Gardena, CA"};
    ptr[5] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Carson, CA"};
    ptr[6] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "San Pedro, CA"};
    ptr[7] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Lakewood, CA"};
    ptr[8] = new Student{genRandID()," ", genRandGrade(), genRandDate(), "Huntington, CA"};
    
    strcpy(ptr[0]->name, "Aimi Ross");
    strcpy(ptr[1]->name, "Travis Ross");
    strcpy(ptr[2]->name, "Pam Ross");
    strcpy(ptr[3]->name, "Bob Ross");
    strcpy(ptr[4]->name, "Snugglez Ross");
    strcpy(ptr[5]->name, "Nyt Nyt Ross");
    strcpy(ptr[6]->name, "Hiromi Touyama");
    strcpy(ptr[7]->name, "Minami Furugen");
    strcpy(ptr[8]->name, "Nanami Furugen");
    
}

int genRandID(){
    int ID = 0;
    ID = rand() % 900000 + 100000;
    return ID;
}

char genRandGrade(){
    char g = '@';
    int randNum = (rand() % 6)+1;
    g += randNum;
    return g;
}

myDate genRandDate(){
    int num = (rand() %(2453006 - 2451180 + 1)) + 2451180;
    myDate a(num);
    return a;
}

void displayOriginal(Student **s){
    cout << left << setw(20) << "StudentID" << left << setw(20) << "Name" << left <<  setw(20) << "Grade" << left <<  setw(20) << "Birthday" << left << setw(20) << "Home Town" << endl;
    cout << left << setw(20) << "---------" << left << setw(20) << "----" << left <<  setw(20) << "-----" << left <<  setw(20) << "--------" << left << setw(20) << "---------" << endl;
    for (int i = 0; i< 9; i++){
        cout << left << setw(20) << s[i]->studentID  << setw(20) << s[i]->name << setw(20) << s[i]->grade << setw(20);
        s[i]->bday.getBday();
        cout << setw(20) << left <<  s[i]->homeTown << endl;
    }
}

void sortByID(Student **s){
    cout << left << setw(20) << "StudentID" << left << setw(20) << "Name" << left <<  setw(20) << "Grade" << left <<  setw(20) << "Birthday" << left << setw(20) << "Home Town" << endl;
    cout << left << setw(20) << "---------" << left << setw(20) << "----" << left <<  setw(20) << "-----" << left <<  setw(20) << "--------" << left << setw(20) << "---------" << endl;
    
    int i, j;
    for( i = 0; i < 9; i++ ){
        for( j = 9 - 1; j > i; j-- ){
            if( s[j]->studentID < s[j - 1]->studentID ){
                Student *temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    for (int i = 0; i< 9; i++){
        cout << left << setw(20) << s[i]->studentID  << setw(20) << s[i]->name << setw(20) << s[i]->grade << setw(20);
        s[i]->bday.getBday();
        cout << setw(20) << left <<  s[i]->homeTown << endl;
    }
}


void sortByGrade(Student **s){ //
    cout << left << setw(20) << "Grade" << left << setw(20) << "Name" << left <<  setw(20) << "StudentID" << left <<  setw(20) << "Birthday" << left << setw(20) << "Home Town" << endl;
    cout << left << setw(20) << "-----" << left << setw(20) << "----" << left <<  setw(20) << "---------" << left <<  setw(20) << "--------" << left << setw(20) << "---------" << endl;
    
    int i, j;
    for( i = 0; i < 9; i++ ){
        for( j = 9 - 1; j > i; j-- ){
            if( s[j]->grade < s[j - 1]->grade ){
                Student *temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    for (int i = 0; i< 9; i++){
        cout << left << setw(20) << s[i]->grade  << setw(20) << s[i]->name << setw(20) << s[i]->studentID << setw(20);
        s[i]->bday.getBday();
        cout << setw(20) << left <<  s[i]->homeTown << endl;
    }
}

void sortByName(Student **s){ //
    cout << left << setw(20) << "Name" << left << setw(20) << "Grade" << left <<  setw(20) << "StudentID" << left <<  setw(20) << "Birthday" << left << setw(20) << "Home Town" << endl;
    cout << left << setw(20) << "----" << left << setw(20) << "-----" << left <<  setw(20) << "---------" << left <<  setw(20) << "--------" << left << setw(20) << "---------" << endl;
    
    int i, j;
    for( i = 0; i < 9; i++ ){
        for( j = 9 - 1; j > i; j-- ){
            if( strcmp (s[j]->name, s[j-1]->name) < 0){
                Student *temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    for (int i = 0; i< 9; i++){
        cout << left << setw(20) << s[i]->name  << setw(20) << s[i]->grade << setw(20) << s[i]->studentID << setw(20);
        s[i]->bday.getBday();
        cout << setw(20) << left <<  s[i]->homeTown << endl;
    }
}

void sortByHomeTown(Student **s){ //
    cout << left << setw(20) << "Home Town" << left << setw(20) << "Name" << left <<  setw(20) << "StudentID" << left <<  setw(20) << "Birthday" << left << setw(20) << "Grade" << endl;
    cout << left << setw(20) << "---------" << left << setw(20) << "----" << left <<  setw(20) << "---------" << left <<  setw(20) << "--------" << left << setw(20) << "-----" << endl;
    
    int i, j;
    for( i = 0; i < 9; i++ ){
        for( j = 9 - 1; j > i; j-- ){
            if( s[j]->homeTown < s[j - 1]->homeTown ){
                Student *temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    for (int i = 0; i< 9; i++){
        cout << left << setw(20) << s[i]->homeTown << setw(20) << s[i]->name << setw(20) << s[i]->studentID << setw(20);
        s[i]->bday.getBday();
        cout << setw(20) << left <<  s[i]->grade << endl;
    }
}

void sortByBday(Student **s){ //
    cout << left << setw(20) << "Birthday" << left << setw(20) << "Name" << left <<  setw(20) << "StudentID" << left <<  setw(20) << "Home Town" << left << setw(20) << "Grade" << endl;
    cout << left << setw(20) << "--------" << left << setw(20) << "----" << left <<  setw(20) << "---------" << left <<  setw(20) << "---------" << left << setw(20) << "-----" << endl;
    
    int i, j;
    for( i = 0; i < 9; i++ ){
        for( j = 9 - 1; j > i; j-- ){
            if( s[j]->bday.daysBetween(s[j-1]->bday) > 0){
                Student *temp = s[j];
                s[j] = s[j-1];
                s[j-1] = temp;
            }
        }
    }
    for (int i = 0; i< 9; i++){
        cout << left << setw(20);
        s[i]->bday.getBday();
        cout << left << setw(20) << s[i]->name << setw(20) << s[i]->studentID << setw(20) << s[i]->homeTown << setw(20) << s[i]->grade << endl;
    }
}
