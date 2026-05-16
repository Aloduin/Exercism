#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(double x, double y) {
        x = std::abs(x);
        y = std::abs(y);
        int score = 0;
        double r = std::sqrt(x * x + y * y);
        if (r <= 1) {
            score = 10;
        }
        else if (r > 1 && r <= 5) {
            score = 5;
        }
        else if (r > 5 && r <= 10) {
            score = 1;
        }
        else {
            score = 0;
        }
        return score;
        
    }

}  // namespace darts
