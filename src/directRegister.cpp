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
