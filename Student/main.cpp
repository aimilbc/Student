//
//  main.cpp
//  Student
//
//  Created by AIMI ROSS on 10/19/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#include "myDate.h"
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
const int STUDENT_NUM = 9;
int mainMenu();
void populate(Student **sptr);

int main() {
    Student *original[STUDENT_NUM];
    populate(original);

    Student *second[STUDENT_NUM];
    for(int i = 0; i < STUDENT_NUM; i++){
        second[i] = original[i];
    }
    
    int menuAction = mainMenu();
    while (menuAction<1 || menuAction>7)
        menuAction = mainMenu();
    while(menuAction>0 && menuAction<7){
        if(menuAction == 1){
            cout << "\n1) Display original list" << endl;
            displayOriginal(original);
        }else if (menuAction==2){
            cout << "\n2) Display list sorted by Student ID" << endl;
            sortByID(second);
        }else if (menuAction==3){
            cout << "\n3) Display list sorted by Name" << endl;
            sortByName(second);
        }else if (menuAction==4){
            cout << "\n4) Display list sorted by Grade" << endl;
            sortByGrade(second);
        }else if (menuAction==5){
            cout << "\n5) Display list sorted by Birthday" << endl;
            sortByBday(second);
        }else{
            cout << "\n6) Display list sorted by Home Town" << endl;
            sortByHomeTown(second);
        }
        menuAction = mainMenu();
    }
    return 0;
}

int mainMenu(){
    int pickedAction;
    cout << "\n========================= Main Menu ========================================" << endl;
    cout << "\t\t\t\t1) Display original list" << endl;
    cout << "\t\t\t\t2) Display list sorted by Student ID" << endl;
    cout << "\t\t\t\t3) Display list sorted by Name" << endl;
    cout << "\t\t\t\t4) Display list sorted by Grade" << endl;
    cout << "\t\t\t\t5) Display list sorted by Birthday" << endl;
    cout << "\t\t\t\t6) Display list sorted by Home Town" << endl;
    cout << "\t\t\t\t7) Exit" << endl;
    cout << "\t\t\t\tEnter an integer between 1-7: ";
    cin >> pickedAction;
    
    return pickedAction;
}











