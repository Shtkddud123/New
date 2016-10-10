#ifndef __CONS__H
#define __CONS__H

class Line 
{
public:
  void setLength (double len);
  double getLength (void);
  Line(); // This is the constructor 
private:
  double length;
};


template<class T, class U>
class hello {
public:
  auto add(T t, U u) -> decltype(t + u); 
  auto get_fun (int arg) -> double (*)(double); // the same as 
};

#endif 
