#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const float MINIMUM_SALARY = 10000.0;
struct Student {
    string name;
    string group;
    float averageGrade;
    float familyIncome;
};
bool compareStudents(const Student& s1, const Student& s2);
