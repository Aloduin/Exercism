#pragma once // 或者使用 #ifndef 守护
#include <string>

namespace raindrops {
    // 告诉编译器：在 raindrops 命名空间里有一个叫 convert 的函数
    std::string convert(int number);
}