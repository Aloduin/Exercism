#pragma once

#ifndef ALLERGIES_HPP
#define ALLERGIES_HPP

#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {

// 过敏源列表声明
extern const std::vector<std::string> ALLERGENS;

class allergy_test {
public:
    explicit allergy_test(int score);

    // 检查是否对特定物品过敏
    bool is_allergic_to(const std::string& item) const;

    // 获取所有过敏项列表
    std::unordered_set<std::string> get_allergies() const;

private:
    int score_;
};

} // namespace allergies

#endif // ALLERGIES_HPP // namespace allergies
