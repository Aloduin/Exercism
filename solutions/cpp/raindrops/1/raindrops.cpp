#include "raindrops.h"
#include <string>

namespace raindrops {

    std::string convert(int number) {
        std::string drops = "";
        
        if (number % 3 == 0) {
            drops += "Pling"; // 使用 += 更简洁
        }
        if (number % 5 == 0) {
            drops += "Plang";
        } 
        if (number % 7 == 0) {
            drops += "Plong"; // 修正：加上了分号
        }
        
        if (drops.empty()) {
            return std::to_string(number);
        }
        
        return drops;
    }

}  // namespace raindrops