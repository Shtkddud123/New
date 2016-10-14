#ifndef __LINE__
#define __LINE__

class Line {
public:
   Line(); // This is the constructor 
  ~Line(); // This is the constructor 
  void setLength (double len);
  double getLength (void);
private:
  double length;
};

#endif
