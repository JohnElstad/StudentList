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
    cin.clear();
    cin.ignore();
   
    if (strcmp(input,"ADD")==0){
      add(&studentList);
    }
    else if (strcmp(input,"REMOVE")==0){
      remove(&studentList);
    }
    else if(strcmp(input,"EXIT")==0){
      stillPlaying = false;
    }
    else if(strcmp(input,"PRINT")==0){
      print(&studentList);
    }
    else{
      cout<<"That is not considered a valid command."<<endl;
    }
    
  }
  return 0;  
}
//method adds a student
void add(vector<student*>* studentList){
  student* newStudent = new student;
  int newId;
  double newGPA;
  char newFirstName[250];
  char newLastName[250];
  
  
  //gets the info
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

  //sets the info
  newStudent->firstName = strdup(newFirstName);
  newStudent->lastName = strdup(newLastName);
  newStudent->GPA = newGPA;
  newStudent->id = newId;
  
  //adds the info stored in the student to the vector
  studentList->push_back(newStudent);
  
}
//method removes a student from the list
void remove(vector<student*>* vec){
  int input;
  //as long as there is a student
  if(!vec->empty()){
    cout<<"Input the students id. Input an invalid ID to go back to the menu."<<endl;
    cin>>input;
    cin.ignore();
    //goes through the students and deletes if the id matches. Replaces the spot being deleted with the last element of the vector. Then deletes the last
    //element.
    for(vector<student*> ::iterator it = vec->begin(); it != vec->end(); it++){
      if((*it)->id == input){
	*it = vec->back();
	vec->pop_back();
	break;
      } 
    }
  }
  else{
    cout<<"There is no student to remove"<<endl;
  }
}
//method prints out the students
void print(vector<student*>* studentList){
  for(vector<student*> ::iterator it = studentList->begin(); it != studentList->end(); it++){
    cout<<"First Name:" <<(*it)->firstName<<endl;
    cout<<"Last Name:" << (*it)->lastName<<endl;
    cout<<"Id:" << (*it)->id<<endl;
    cout<<setprecision(2);
    cout<<fixed;
    cout<<"GPA:" << (*it)->GPA<<endl;
    cout<<endl;
  }
}  
