#include "Header.h"

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.familyIncome < 2 * MINIMUM_SALARY && s2.familyIncome >= 2 * MINIMUM_SALARY) {
        return true;
    }
    else if (s1.familyIncome >= 2 * MINIMUM_SALARY && s2.familyIncome < 2 * MINIMUM_SALARY) {
        return false;
    }
    else {
        return s1.averageGrade > s2.averageGrade;
    }
}