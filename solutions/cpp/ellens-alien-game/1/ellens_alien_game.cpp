namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
    public:
    int x_coordinate;
    int y_coordinate;
    Alien(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
    }

    int get_health() {
        return health;
    }
    bool hit() {
        if (get_health() > 0) {
            health -= 1;
        }
        return true;
    }
    bool is_alive() {
        if (get_health() > 0) {
            return true;
        }
        return false;
    }

    bool teleport(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
        return true;
    }

    bool collision_detection(Alien other_alien) {
        if (x_coordinate == other_alien.x_coordinate && y_coordinate == other_alien.y_coordinate) {
            return true;
        }
        return false;
    }
    
    private:
    int health = 3;
    };

}  // namespace targets
