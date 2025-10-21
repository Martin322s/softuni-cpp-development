#ifndef BASESTUDENT_H
#define BASESTUDENT_H

class BaseStudent {
    protected:
        std::string name;
        int grade;

    public:

        BaseStudent() : name(), grade(0) {}

        virtual void init(std::istream & iS) = 0;
        
        int getGrade(void) const { return grade;};
        const std::string & getName(void) const { return name; }

        friend class Student;
};

#endif
