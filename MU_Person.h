
#include "node.h"
class MU_person : public Node{
protected: long id;
	string name;
protected:

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  // cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n):Node(x){
   	  // Set up all MU_Person values
  id = x;
  name = n;
  // display_person();
  std::cout<<"MU person constructor "<<id<<std::endl;
}

void MU_person::display_person(){
  
    std::cout<<"MU person constructor "<<id<<std::endl;

}
