#pragma once

#ifndef COW_H
#define COW_H
#include <string>

enum class cow_purpose { meat, dairy, hide, pet };

class cow {
    public:
        cow(std::string name_i,int age_i, cow_purpose purpose_i);
        std::string getName() const;
        int getAge() const;
        cow_purpose getPurpose() const;
    private: 
        std::string name;
        int age;
        cow_purpose purpose;
};

#endif // COW_H
