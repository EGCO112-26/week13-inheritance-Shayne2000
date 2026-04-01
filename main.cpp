#include <iostream>
using namespace std;
#include "student.h"

int main(int argc,char **argv){
// MU_person m;
int N = (argc -1) / 3 ;

LL link ;
 
	// student m1(12,3.0,"Vivi");
  // LL link(&m1);

  // student m2(120,3.1,"test");
  // link.addNode(&m2);
  Node *t;
  // cout<<N;
  for (int i = 0 ; i < N ; i ++) {
    t=new student(atoi(argv[3*i+1]),atof(argv[3*i+2]),argv[3*i+3]);
    link.addNode(t);
  }


  cout<<endl;

  link.displayLL();

  cout<<endl;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa
