#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int main() {
    int juryCount;
    std::cin >> juryCount;
    std::cin.ignore(); 

    double totalGradeSum = 0.0;
    int totalPresentations = 0;

    std::string presentationName;
    while (std::getline(std::cin, presentationName) && presentationName != "Finish") {
        totalPresentations++;
        double presentationGradeSum = 0.0;
        for (int i = 0; i < juryCount; ++i) {
            double grade;
            std::cin >> grade;
            presentationGradeSum += grade;
        }
        std::cin.ignore(); 

        double presentationAverageGrade = presentationGradeSum / juryCount;
        std::cout << presentationName << " - " << std::fixed << std::setprecision(2) << presentationAverageGrade << "." << std::endl;
        totalGradeSum += presentationAverageGrade;
    }

    double finalAssessment = totalGradeSum / totalPresentations;
    std::cout << "Student's final assessment is " << std::fixed << std::setprecision(2) << finalAssessment << "." << std::endl;

    return 0;
}
