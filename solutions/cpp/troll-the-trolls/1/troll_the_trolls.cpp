namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum AccountStatus {
    troll,
    guest,
    user,
    mod
};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum Action {
    read,
    write,
    remove
};

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus poster, AccountStatus viewer) {
    if (poster == AccountStatus::troll) {
        return viewer == AccountStatus::troll;
    }

    return true;
}



// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action action, AccountStatus status) {
    switch (action) {
        case Action::read:
            return true;

        case Action::write:
            return status == AccountStatus::user ||
                   status == AccountStatus::troll ||
                   status == AccountStatus::mod;

        case Action::remove:
            return status == AccountStatus::mod;
    }

    return false;
}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
    if (player1 == AccountStatus::guest || player2 == AccountStatus::guest) {
        return false;
    }

    return (player1 == AccountStatus::troll) == 
           (player2 == AccountStatus::troll);
}


// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.

bool has_priority(AccountStatus first, AccountStatus second) {
    auto priority = [](AccountStatus status) {
        switch (status) {
            case AccountStatus::troll:
                return 0;
            case AccountStatus::guest:
                return 1;
            case AccountStatus::user:
                return 2;
            case AccountStatus::mod:
                return 3;
        }

        return 0;
    };

    return priority(first) > priority(second);
}

}  // namespace hellmath
