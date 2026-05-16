// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    if (balance < 0.0) {
        return 3.213f;
    }
    else if (balance >= 0.0 && balance < 1000.0) {
        return 0.5f;
    }
    else if (balance >= 1000.0 && balance < 5000) {
        return 1.621f;
    }
    
    return 2.475f;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    double rate = interest_rate(balance);
    
    return balance * rate / 100.0;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    double rate = interest_rate(balance);
    
    return balance * (1 + rate / 100.0);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int i = 0;
    double current_balance = balance;
    while (current_balance < target_balance) {
        current_balance = annual_balance_update(current_balance);
        i++;
    }
    return i;
}
