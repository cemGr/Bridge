#include <iostream>
#include "devices.hpp"


void testdevice(Device* test){
  BasicRemote *parasonic= new BasicRemote(test);
  parasonic->power();
  test->printStatus();

  std::cout<<"\n"<<"AdvancedRemote"<<"------------------------\n"<<std::endl;
  AdvancedRemote *sony= new AdvancedRemote(test);
  sony->power();
  sony->mute();
  test->printStatus();
}

int main(){

  testdevice(new Radio());
  testdevice(new TV());
  return 0;

}
