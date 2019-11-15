
class Car{

private:
  int yearModel;
  int speed;
  std:: string (make);

public:
  Car (){yearModel= 0,speed = 0; make = "";}
  Car(int s, std::string m) {yearModel = s; make = m; speed = 0;}

  void brake();

  void accelerate();

  void setSpeed(int sp);

  int getSpeed();

  void setMake(std::string makee);

  std::string getMake();

  void getYearModel(int year);

  int getYearModel();

};
