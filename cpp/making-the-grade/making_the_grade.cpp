#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
   std::vector<int> round_down;
    for (auto it = student_scores.begin(); it < student_scores.end(); ++it) {
        round_down.push_back(static_cast<int>(*it));
    }

    return round_down;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count = 0;

    for (auto it = student_scores.begin(); it < student_scores.end(); ++it) {
        if(*it <= 40) count++;
    }


    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> best;
    std::copy_if(
            begin(student_scores), end(student_scores),
            std::back_inserter(best),
            [=](int score) { return score >= threshold; });
    return best;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {

    int failing_threshhold = 40;
    int threshold_gap = (highest_score - failing_threshhold)/4;
    std::cout << "gap: " << threshold_gap << std::endl;
    std::array<int, 4>thresholds = {
        highest_score - (threshold_gap * 4),
        highest_score - (threshold_gap * 3),
        highest_score - (threshold_gap * 2),
        highest_score - (threshold_gap * 1),
    };

    return thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    return {};
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    return "";
}
