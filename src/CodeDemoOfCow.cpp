#include <string>
#include <iostream>

enum class cow_purpose { meat, dairy, hide, pet };

class cow {
    private: 
        std::string name;
        int age;
        cow_purpose purpose;

    public:
        cow(std::string name_i,int age_i, cow_purpose purpose_i) {
            name = name_i;
            age = age_i;
            purpose = purpose_i;
        }
        std::string getName() const {
            return name;
        }
        int getAge() const {
            return age;
        }
        cow_purpose getPurpose() const {
            return purpose;
        }
};

int main() {
    cow mycow("Hilly",7,cow_purpose::pet);
    std::cout <<"Name: "  << mycow.getName() << "\nAge: " << mycow.getAge() << "\nPurpose: " << (int) mycow.getPurpose() << std::endl;
    return 0;
}