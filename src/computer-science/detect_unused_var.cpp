#include <iostream>
#include "clang/AST/DeclCXX.h"
#include "clang/AST/DeclFriend.h"

class ObjectClass {
private:
  int privateData;
protected:
  int protectedData;
public:
    ObjectClass() : privateData(0), protectedData() {}

    friend class FriendClass;
};

class FriendClass {
public:
  void getAccessToObjectClass(ObjectClass& obj){
    obj.privateData = 100;
    obj.protectedData = 200;

    std::cout << obj.privateData;
    std::cout << obj.protectedData;
  }

};

int main(){
  ObjectClass obj_class;
  FriendClass friend_class;
  
  friend_class.getAccessToObjectClass(obj_class);
}
