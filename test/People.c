//
//  People.c
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#include "People.h"
#include <stdlib.h>
#include "Object.h"

People* newPeople(String *name,Integer *age){
    People *newP = malloc(sizeof(People));
    OBJECTRETAIN(newP);
    newP->age = age;
    newP->name = name;
    return newP;
}
String* getName(People* people){
    return people->name;
}
Integer* getAge(People* people){
    return people->age;
}
