#include <iostream>

class TypeCar {
private:
  std::string name;
};

class Car {
private:
  std::string model;
  TypeCar type;
public:
  class Builder {
  private:
    std::string model;
    TypeCar type;
    Builder() {
      Builder model(std::string model) {
        this.model = model;
      }
      Builder type(TypeCar type) {
        this.type = type;
      }
    }
  }
};
