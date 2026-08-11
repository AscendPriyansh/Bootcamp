#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int totalMarks;
    int physicsMarks;
    int chemMarks;
    int mathsMarks;
};

bool compareStudents(const Student &a, const Student &b) {
    if (a.totalMarks != b.totalMarks)
        return a.totalMarks > b.totalMarks;
    if (a.mathsMarks != b.mathsMarks)
        return a.mathsMarks > b.mathsMarks;
    if (a.physicsMarks != b.physicsMarks)
        return a.physicsMarks > b.physicsMarks;
    return a.name < b.name;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name 
            >> students[i].totalMarks 
            >> students[i].physicsMarks 
            >> students[i].chemMarks 
            >> students[i].mathsMarks;
    }

    sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " 
             << students[i].totalMarks << " " 
             << students[i].physicsMarks << " " 
             << students[i].chemMarks << " " 
             << students[i].mathsMarks << "\n";
    }

    return 0;
}