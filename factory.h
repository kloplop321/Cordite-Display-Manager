#ifndef FACTORY_H
#define FACTORY_H
namespace cordite {
  namespace dm {
    class screen;
    class process;
    class factory{
    public:
      static screen* createScreen();
    };
  };
};
#endif // FACTORY_H
