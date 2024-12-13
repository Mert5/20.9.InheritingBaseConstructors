#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"


// Engineer will do private inheritance
class Engineer : public Person{
    using Person::Person;   //  Inheriting constructors

    friend std::ostream& operator <<(std::ostream& , const Engineer& operand);

    public :
        /*
        Engineer(); 
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
        Engineer(const Engineer& source);
        */
        ~Engineer();
        
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count); // we are using this 
                                                                                // because of contract_count parameter
                                                                                // if you do not use this constructor, contract_count will
                                                                                // be 0 by default and you won't be able to change it.

        void build_something(){
            m_full_name = "Aziz Sancar";    // OK
            m_age = 65;     // OK   
            //m_address = "Bulmazsa getir str"; // Compiler Error! Because it is private to base class
        }

        int get_contract_count() const{
            return contract_count;
        }
    
    private :
        int contract_count{0};
};

#endif // ENGINEER_H