#include<"arduino.h">
#include<"directRegister.h">


INT0::enableInterrupt(){
  EIMSK |= 1;
}

INT0::disableInterrupt(){
  EIMSK &= 154;
}

INT0::settupInterrupt(int state){
  EICRA |= state;
}

INTO::readFlag(){
  return EIFR & 1;
}

INT0::resetFlag(){
  EIFR |= 1
}


INT1::enableInterrupt(){
  EIMSK |= 2;
}

INT1::disableInterrupt(){
  EIMSK &= 153;
}

INT1::settupInterrupt(int state){
  EICRA |= state;
}

INT1::readFlag(){
  return EIFR & 2;
}

INT1::resetFlag(){
  EIFR |= 2;
}

PCI::enableInterrupt(int interruptNumber){
  PCICR |= 1<<interruptNumber;
}

PCI::disableInterrupt(int interruptNumber){
  PCICR &= ~(1<<interruptNumber);
}

PCI::addPin(int pin){
  switch(pin){
    case 8..13:
      PCMSK0 |= 1<<(pin-8);
      break;
    case 0..7:
      PCMSK2 |= 1<<pin;
      break;
  }
}

PCI::removePin(int pin){
  switch(pin){
    case 0..7:
      PCMSK2 &= ~(1<<pin);
      break;
    case 8..13:
      PCMSK0 &= ~(1<<(pin-8));
      break;
  }
}

PCI::readFlag(int interruptNumber){
  return PCIFR&(1<<interruptNumber);
}
