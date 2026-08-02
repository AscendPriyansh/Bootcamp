#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int marks;
};

bool compareStudents(const Student &a, const Student &b) {
    if (a.marks != b.marks) {
        return a.marks > b.marks; 
    }
    return a.name < b.name;       
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].marks;
    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].marks << "\n";
    }

    return 0;
}