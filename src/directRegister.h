namespace INT0{
  void enableInterrupt();
  void disableInterrupt();
  void settupInterrupt(int);
  bool readFlag();
  void resetFlag();
}

namespace INT1{
  void enableInterrupt();
  void disableInterrupt();
  void settupInterrupt(int state);
  bool readFlag();
  void resetFlag();
}
