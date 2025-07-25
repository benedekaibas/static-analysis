#include <iostream>
#include "clang/AST/DeclCXX.h"

class ObjectClass {
private:
  int privateData;
protected:
  int protectedData;
public:
    ObjectClass() : privateData(), protectedData() {}

    friend class FriendClass;
};

class FriendClass {
public:
  void getAccessToObjectClass(ObjectClass& obj){
    obj.privateData = 100;
    obj.protectedData = 200;

    std::cout << obj.privateData;
  }

};

int main(){
 FriendClass obj;
 obj.getAccessToObjectClass();
}
