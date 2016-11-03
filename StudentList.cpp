#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

struct student{
  double GPA;
  char* firstName;
  char* lastName;
  int id;
};

void add(vector<student*>* studentList);
void remove(vector<student*>* studentList);
void print(vector<student*>* studentList);

int main(){
  bool stillPlaying = true;
  char input[30];
  vector<student*> studentList;

  while (stillPlaying == true){
    cout<<"Please Input a Command. Valid commands are EXIT, ADD, PRINT and REMOVE"<<endl;
    cin.get(input,30);
    cin.ignore();
   
    if (strcmp(input,"ADD")==0){
      add(&studentList);
    }
    else if (strcmp(input,"REMOVE")==0){
      remove(&studentList);
    }
    else if(strcmp(input,"EXIT")==0){
      bool stillPlaying = false;
    }
    else if(strcmp(input,"PRINT")==0){
      print(&studentList);
    }
    else{
      cout<<"Please Input a Valid Command. Valid Commands are ADD, REMOVE, PRINT and EXIT"<<endl;
    }
    
  }
  return 0;  
}

void add(vector<student*>* studentList){
  student* newStudent = new student;
  int newId;
  double newGPA;
  char newFirstName[250];
  char newLastName[250];
  
  

  cout<<"Input ID:"<<endl;
  cin>>newId;
  cin.ignore();
  
  cout<<"Input GPA:"<<endl;
  cin>>newGPA;
  cin.ignore();
  
  cout<<"Input First Name:"<<endl;
  cin.get(newFirstName,250);
  cin.ignore();
  
  cout<<"Input Last Name:"<<endl;
  cin.get(newLastName,250);
  cin.ignore();

  newStudent->lastName = newLastName;
  newStudent->firstName = newFirstName;
  newStudent->GPA = newGPA;
  newStudent->id = newId;
  

  studentList->push_back(newStudent);
  
}
void remove(vector<student*>* studentList){
  
  
}
void print(vector<student*>* studentList){
  
}  
