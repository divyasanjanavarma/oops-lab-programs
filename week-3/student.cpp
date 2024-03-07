#include<iostream>
using namespace std;
class Student
{
public:
string fullName;
int rollNum;
double semPercentage;
string collegeName;
int collegeCode;
Student()
{
cout<<"Student class initialized!!\nIam a student\n";
}
~Student(){
  
}
int main()
{
Student sanjana;
cout<<"Enter your name : ";
getline(cin,sanjana.fullName);
cout<<"Enter your roll number : ";
cin>>sanjana.rollNum;
cout<<"Enter your sem percentage : ";
cin>>sanjana.semPerentage;
cout<<"Enter your college name : ";
cin>>sanjana.collegeName;
cout<<"Enter your college code : ";
cin>>sanjana.collegeCode;
cout<<"Name : "<<sanjana.fullName<<endl;
cout<<"RollNum : "<<sanjana.rollNum<<endl;
cout<<"SemPercentage : "<<sanjana.semPercentage<<endl;
cout<<"CollegeName : "<<sanjana.collegeName<<endl;
cout<<"CollegeCode : "<<sanjana.collegeCode<<endl;
return 0;
}
