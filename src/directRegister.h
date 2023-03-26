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
  void settupInterrupt(int);
  bool readFlag();
  void resetFlag();
}

namespace PCI{
  void enableInterrupt(int);
  void disableInterrupt(int);
  void addPin(int);
  void removePin(int);
  bool readFlag(int);
  void resetFlag(int);
}
