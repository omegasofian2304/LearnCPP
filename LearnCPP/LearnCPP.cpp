#include <iostream>
#include <vector>

double calculateAverage(std::vector<double>& allNotes) {
    double avg = 0;
    double sum = 0;
    for (int i = 0; i < allNotes.size(); i++) {
        sum += allNotes[i];
    }
    avg = sum / allNotes.size();

    return avg;
}

double verifyNote() {
    double note = 0;
    std::cout << "Enter your note : " << std::endl;
    std::cin >> note;
    while (note < 1 || note > 6) {
        std::cout << "Your note must be greater than 1 and lower than 6" << std::endl;
        std::cout << "Enter your note again : " << std::endl;
        std::cin >> note;
    }
    return note;
}


int main() {
    std::vector<double> notes;
    double average = 0;

    for (int i = 0; i < 5; i++) {
        double note;
        note = verifyNote();
        notes.push_back(note);
    }

    average = calculateAverage(notes);

    std::cout << "Your average is : " << average << std::endl;

    if (average >= 4) {
        std::cout << "Pass" << std::endl;
    }
    else {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}
