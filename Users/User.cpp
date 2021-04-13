//
// Created by Artem Murashko on 13.04.2021.
//

#include "User.h"

User::User(std::string name, double rating) {
    this -> name = name;
    this -> rating = rating;
}

std::string User::getName() {
    return name;
}

double User::getRating() {
    return rating;
}

void User::changeRating(double rate) {
    rating += rate;
}
