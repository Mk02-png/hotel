#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date() = default;
   Date(int years, int month, int day);
   int years();
   int month();
   int day();

  void  afficher();
private:
   int month_;
   int day_;
   int years_;
};


#endif
