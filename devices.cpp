#include <iostream>
#include "stdio.h"
#include "devices.hpp"



bool Radio::isEnabled(){
        return on;
    }

void Radio::enable() {
        on = true;
    }

void Radio::disable() {
        on = false;
    }

int Radio::getVolume() {
  return volume;
}

void Radio::setVolume(int volume) {
        if (volume > 150) {
            this->volume = 150;
        } else if (volume < 0) {
            this->volume = 0;
        } else {
            this->volume = volume;
        }
    }

int Radio::getChannel() {
  return channel;
}

void Radio::setChannel(int channel) {
  this->channel = channel;
}

void Radio::printStatus() {
        std::cout<<"------------------------------------"<<std::endl;
        std::cout<<"| I'm radio."<<std::endl;
        std::cout<<"| I'm " << (on ? "enabled" : "disabled") <<std::endl;
        std::cout<<"| Current volume is " << volume << "%"<<std::endl;
        std::cout<<"| Current channel is " << channel <<std::endl;
        std::cout<<"------------------------------------\n"<<std::endl;
    }



bool TV::isEnabled(){
            return on;
        }


void TV::enable() {
            on = true;
        }

void TV::disable() {
            on = false;
        }

int TV::getVolume() {
      return volume;
    }

void TV::setVolume(int volume) {
            if (volume > 100) {
                this->volume = 100;
            } else if (volume < 0) {
                this->volume = 0;
            } else {
                this->volume = volume;
            }
        }

    int TV::getChannel() {
      return channel;
    }

    void TV::setChannel(int channel) {
      this->channel = channel;
    }

    void TV::printStatus() {
            std::cout<<"------------------------------------"<<std::endl;
            std::cout<<"| I'm sony TV set."<<std::endl;
            std::cout<<"| I'm " << (on ? "enabled" : "disabled") <<std::endl;
            std::cout<<"| Current volume is " << volume << "%"<<std::endl;
            std::cout<<"| Current channel is " << channel <<std::endl;
            std::cout<<"------------------------------------\n"<<std::endl;
        }

Device::Device(){};
