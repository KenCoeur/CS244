class Rectangle
{
private:
  double width;
  double length;
public:
Rectangle(double l, double w){
  length = l;
  width = w;
}
  void setWidth(double);
  void setLength(double);

  double getWidth() const;
  double getLength() const;
  double getArea() const;

};
void Rectangle::setWidth(double w)
{
  width = w;
}

void Rectangle::setLength(double l)
{
  length = l;
}

double Rectangle:: getWidth() const{
  return width;
}
double Rectangle:: getLength()const{
return length;
}
double Rectangle:: getArea()const{
  return length * width;
}
