#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> student_round_down_scores;
    for (double x : student_scores) {
        student_round_down_scores.push_back(static_cast<int>(x));
    }
    return student_round_down_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int x : student_scores) {
        if (x <= 40) {
            count++;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> letter;
    double step = (highest_score - 40) / 4.0;
    for (int i = 0; i < 4; i++) {
        letter[i] = (int)(40 + 1 + (i * step));
    }
    return letter;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranks;
    for (int i = 0; i < student_names.size(); i++) {
        ranks.push_back(
            std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i])
        );
    }
    return ranks;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (size_t i = 0; i < student_scores.size(); ++i) {
        // 检查当前分数是否为 100
        if (student_scores[i] == 100) {
            // 返回对应索引的姓名
            return student_names[i];
        }
    }
    
    // 如果循环结束都没有找到 100 分，返回空字符串
    return "";
}
