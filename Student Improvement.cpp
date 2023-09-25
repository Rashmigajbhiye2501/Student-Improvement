#include <iostream>
#include <string>

using namespace std;

// Function to calculate the overall performance based on average marks
char calculatePerformance(double average) {
    if (average >= 90.0) {
        return 'A';
    } else if (average >= 80.0) {
        return 'B';
    } else if (average >= 70.0) {
        return 'C';
    } else if (average >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to suggest improvements based on performance
string suggestImprovement(char performance) {
    switch (performance) {
        case 'A':
            return "Keep up the excellent work!";
        case 'B':
            return "Good job, aim for even higher next time.";
        case 'C':
            return "You're doing well, but there's room for improvement.";
        case 'D':
            return "Consider studying more to improve your grades.";
        default:
            return "You should seek additional help and study more.";
    }
}

int main() {
    const int numSemesters = 6;
    double marks[numSemesters];
    
    cout << "Student Improvement Tracker" << endl;

    for (int i = 0; i < numSemesters; i++) {
        cout << "Enter marks for Semester " << i + 1 << ": ";
        cin >> marks[i];
        
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks. Marks should be between 0 and 100." << endl;
            return 1;  // Exit with an error code
        }
    }

    // Calculate the average marks
    double sum = 0;
    for (int i = 0; i < numSemesters; i++) {
        sum += marks[i];
    }
    double average = sum / numSemesters;

    // Calculate overall performance and suggest improvement
    char performance = calculatePerformance(average);
    string improvement = suggestImprovement(performance);

    // Display results
    cout << "Average Marks: " << average << endl;
    cout << "Overall Performance: " << performance << endl;
    cout << "Improvement Suggestion: " << improvement << endl;

    return 0;
}


