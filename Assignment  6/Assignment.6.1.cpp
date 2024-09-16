// Q1. Create a class Date with data memebrs day,month and year. 
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of 
// type Date. 
// Implement above classes. Test all functionalities in main().

#include <iostream>
using namespace std;


//date class
class Date{

int day, month, year; //data members

public: //to get accessed by other classes

//setter
void acceptDate(int a,int b,int c){
    day=a;
    month=b;
    year=c;
}


//getters
int getday(){
    return day;
}
int getmonth(){
    return month;
}
int getyear(){
    return year;
}

};


//person class
class Person{

//data members;
public:
string name;
string address;
Date birthdate; //creating data member of type Date

public:
void acceptDetails(){
    cout<<"Enter name"<<endl;
    getline(cin,name);// getline showing error in my compiler but code is executed.
    cout<<"Enter address"<<endl;
    getline(cin,address);

    int d,m,y;
    cout<<"Enter bithdate DD MM YY"<<endl;
    cin>>d>>m>>y;
    birthdate.acceptDate(d,m,y);

}


void printDetails(){
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<birthdate.getday()<<"/"<<birthdate.getmonth()<<"/"<<birthdate.getyear()<<endl; //accessing datamembers from date class
}
};



class Employee:Person{ //Inheritance

int id;
float sal;
string dept;
Date joiningDate;


public:
void acceptDetails(){
    cout<<"Enter name"<<endl;
    getline(cin,name);

    cout<<"Enter address"<<endl;
    getline(cin,address);
    
    cout<<"Enter id"<<endl;
    cin>>id;

    cout<<"Enter salary"<<endl;
    cin>>sal;

    cout<<"Enter department"<<endl;
    cin>>dept;

    int d,m,y;
    cout<<"Enter bithdate DD MM YY"<<endl;
    cin>>d>>m>>y;
    birthdate.acceptDate(d,m,y);

    cout<<"Enter joining date DD MM YY"<<endl;
    cin>>d>>m>>y;
    joiningDate.acceptDate(d,m,y);

}



void printDetails(){
    cout<<name<<endl;
    cout<<dept<<endl;
    cout<<id<<endl;
    cout<<sal<<endl;
    cout<<address<<endl;
    cout<<birthdate.getday()<<"/"<<birthdate.getmonth()<<"/"<<birthdate.getyear()<<endl; //accessing datamembers from date class
    cout<<joiningDate.getday()<<"/"<<joiningDate.getmonth()<<"/"<<joiningDate.getyear()<<endl; //accessing datamembers from date class

}


};


int main(){

Person p; //object of class person
p.acceptDetails();
p.printDetails();

Employee e;
e.acceptDetails();
e.printDetails();

}