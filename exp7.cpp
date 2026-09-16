/*
Write C++ programs that illustrate how the following forms of inheritance are supported:
a. Single inheritance
b. Multiple inheritance
c. Multilevel inheritance
d. Hierarchical inheritance.
*/

#include <iostream>
using namespace std;

class Patient {          //single inheritance
public:
    void patientInfo() {
        cout << "Patient: Rahul" << endl;
    }
};

class Doctor : public Patient {   
public:
    void doctorInfo() {
        cout << "Doctor: Dr. Sharma" << endl;
    }
};

class Nurse {     //multiple inheritance 
public:
    void nurseInfo() {
        cout << "Nurse: Priya" << endl;
    }
};

class Hospital : public Patient, public Nurse {
public:
    void hospitalInfo() {
        cout << "Hospital: City Hospital" << endl;
    }
};

class Surgeon : public Doctor {      //multilevel inheritance
public:
    void surgeryInfo() {
        cout << "Surgeon: Dr. Amit" << endl;
    }
};


class Receptionist : public Hospital {     //hierarchical inheritance
public:
    void receptionistInfo() {
        cout << "Receptionist: Neha" << endl;
    }
};

class Pharmacist : public Hospital {
public:
    void pharmacistInfo() {
        cout << "Pharmacist: Ravi" << endl;
    }
};

int main() {

    cout << "===== SINGLE INHERITANCE =====" << endl;

    Doctor d;
    d.patientInfo();
    d.doctorInfo();


    cout << "\n===== MULTIPLE INHERITANCE =====" << endl;

    Hospital h;
    h.patientInfo();
    h.nurseInfo();
    h.hospitalInfo();


    cout << "\n===== MULTILEVEL INHERITANCE =====" << endl;

    Surgeon s;
    s.patientInfo();
    s.doctorInfo();
    s.surgeryInfo();


    cout << "\n===== HIERARCHICAL INHERITANCE =====" << endl;

    Receptionist r;
    r.hospitalInfo();
    r.receptionistInfo();

    Pharmacist p;
    p.hospitalInfo();
    p.pharmacistInfo();

    return 0;
}

