#include<string>
#ifndef INTERESTLEVEL_H
#define INTERESTLEVEL_H


enum
Interest_level{
  Very,
  Somewhat,
  Not_interested,
  NOTATALL
};
static std::string Interest_output[]={"very interested"," somewhat interested", "not interested, never call again"};
#endif // INTERESTLEVEL_H
