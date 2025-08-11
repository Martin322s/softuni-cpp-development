#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string surname;
    double average;

public:
    Student(string n, string s, double a)
        : name(n), surname(s), average(a) {}

    double getAverage() const {
        return average;
    }

    void print() const {
        cout << name << " " << surname << " " << average << endl;
    }
};

double calculateTotalAverage(const vector<Student>& students) {
    double sum = 0;
    for (const auto& st : students) {
        sum += st.getAverage();
    }
    return sum / students.size();
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    vector<Student> students;
    students.reserve(n);

    for (int i = 0; i < n; i++) {
        string name, surname;
        double avg;
        cin >> name >> surname >> avg;
        students.emplace_back(name, surname, avg);
    }

    for (const auto& st : students) {
        st.print();
    }

    cout << calculateTotalAverage(students);
    return 0;
}
