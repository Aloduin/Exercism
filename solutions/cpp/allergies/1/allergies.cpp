#include "allergies.h"

namespace allergies {

const std::vector<std::string> ALLERGENS = {
    "eggs",
    "peanuts",
    "shellfish",
    "strawberries",
    "tomatoes",
    "chocolate",
    "pollen",
    "cats"
};

allergy_test::allergy_test(int score) : score_(score) {}

bool allergy_test::is_allergic_to(const std::string& item) const {
    for (size_t i = 0; i < ALLERGENS.size(); ++i) {
        if (ALLERGENS[i] == item) {
            return (score_ & (1 << i)) != 0;
        }
    }
    return false;
}

std::unordered_set<std::string> allergy_test::get_allergies() const {
    std::unordered_set<std::string> result;

    for (size_t i = 0; i < ALLERGENS.size(); ++i) {
        if (score_ & (1 << i)) {
            result.emplace(ALLERGENS[i]);
        }
    }

    return result;
}

} // namespace allergies