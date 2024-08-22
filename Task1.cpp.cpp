#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(){};
    Person(string name , int age)
    {
        this->name = name;
        this->age = age;
    }
    virtual void Display()const
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};
class Patient : public Person
{
private:
    string Patient_ID;
    string diagnosis;
public:
    Patient():Person(){};
    Patient(string name , int age , string Patient_ID , string diagnosis):Person(name , age)
    {
        this->Patient_ID = Patient_ID;
        this->diagnosis = diagnosis;
    }
    void Display()const override
    {
        Person::Display();
        cout<<"Patient ID : "<< Patient_ID << endl;
        cout<<"Diagnosis : "<<diagnosis << endl;
    }
    string get_patientID()
    {
        return Patient_ID;
    }
};
class Doctor : public Person
{
private:
    string Doctor_ID;
    string Specialization;
public:
    Doctor():Person(){};
    Doctor(string name , int age ,string Doctor_ID , string Specialization):Person(name , age)
    {
        this->Doctor_ID = Doctor_ID;
        this->Specialization = Specialization;
    }
    void Display()const override
    {
        Person::Display();
        cout<<"Doctor ID : "<<Doctor_ID << endl;
        cout<<"Specialization : "<< Specialization << endl;
    }
    string get_doctorID()
    {
        return Doctor_ID;
    }
};
int main()
{
    Patient obj1("Mariam",25,"A12B345","Heart disease");
    Doctor obj2("DR.Ahmed Salem",35,"T176G32","Surgery");
    cout<<"  ------------"<<endl;
    cout<<" |Patiant Info|"<< endl;
    cout<<"  ------------"<<endl;
    obj1.Display();
    cout<<endl<<"---------------------------------------"<<endl<<endl;
    cout<<"  -----------"<<endl;
    cout<<" |Doctor Info|"<< endl;
    cout<<"  -----------"<<endl;
    obj2.Display();


    return 0;
}
