#include <iostream>
#include "devices.hpp"



void BasicRemote::power() {
       std::cout<<"Remote: power toggle"<<std::endl;
       if (device->isEnabled()) {
           device->disable();
       } else {
           device->enable();
       }
   }


void BasicRemote::volumeDown() {
       std::cout<<"Remote: volume down"<<std::endl;
       device->setVolume(device->getVolume() - 10);
   }

void BasicRemote::volumeUp() {
       std::cout<<"Remote: volume up"<<std::endl;
       device->setVolume(device->getVolume() + 10);
   }

void BasicRemote::channelDown() {
       std::cout<<"Remote: channel down"<<std::endl;
       device->setChannel(device->getChannel() - 1);
   }

void BasicRemote::channelUp() {
       std::cout<<"Remote: channel up"<<std::endl;
       device->setChannel(device->getChannel() + 1);
   }

BasicRemote::BasicRemote(Device *device){
     this->device = device;
   }

BasicRemote::BasicRemote(){};

void AdvancedRemote::mute(){
  std::cout<<"Remote: mute"<<std::endl;
  device->setVolume(0);
}

AdvancedRemote::AdvancedRemote(Device *device){
  this->device = device;
}
