#include "cow.h"
cow::cow(std::string name_i,int age_i, cow_purpose purpose_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}

std::string cow::getName() const {
    return name;
}
int cow::getAge() const {
    return age;
}
cow_purpose cow::getPurpose() const {
    return purpose;
}