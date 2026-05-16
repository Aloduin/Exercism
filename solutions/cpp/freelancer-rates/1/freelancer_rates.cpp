// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    return 8.0 * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return (1.0 - discount / 100.0) * before_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
// 1. 定义常量
    const int hours_per_day = 8;
    const int days_per_month = 22;
    
    // 2. 计算未打折的月总薪资
    double base_monthly = hourly_rate * hours_per_day * days_per_month;
    
    // 3. 计算打折后的金额
    // 折扣是百分比，所以要除以 100.0
    double discounted_monthly = base_monthly * (1.0 - discount / 100.0);
    
    // 4. 使用 std::ceil 向上取整，并转回 int
    return static_cast<int>(std::ceil(discounted_monthly));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
// 1. 计算打折后的实际时薪
    double discounted_hourly_rate = hourly_rate * (1.0 - discount / 100.0);
    
    // 2. 计算一天的成本 (一天 8 小时)
    double cost_per_day = discounted_hourly_rate * 8.0;
    
    // 3. 计算预算可以支撑的天数
    double total_days = budget / cost_per_day;
    
    // 4. 向下取整并返回整数
    // 可以使用 std::floor，也可以直接用 static_cast<int>，因为正数强制转 int 就是向下取整
    return static_cast<int>(std::floor(total_days));
}
