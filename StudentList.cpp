#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

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
  student* temp = new student;
  
}
void remove(vector<student*>* studentList){
  
}
void print(vector<student*>* lsstudentList){
  
}  
