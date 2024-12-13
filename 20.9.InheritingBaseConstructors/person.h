# ifndef PERSON_H
# define PERSON_H

# include <string>
# include <string_view> // protect us from copies
# include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& , const Person& person);

    public : 
    Person() ;  // this time we want to have a body
    Person(std::string_view fullname, int age, std::string_view address);
    Person(const Person& source);   // the syntax to setup copy constructor
                                    // copy constructors are not inheritable
    ~Person();

    // Getters
    std::string get_full_name()const{
        return m_full_name;
    }

    int get_age() const{
        return m_age;
    }

    std::string get_address()const{
        return m_address;
    }


    int add(int a, int b) const{
        return a + b;
    }

    int add(int a, int b, int c) const{
        return a + b + c;
    }

    void doit_something() const;

    public :
    std::string m_full_name{"None"};

    protected :
    int m_age{0};

    private :
    std::string m_address{"None"};
};

#endif  // PERSON_H