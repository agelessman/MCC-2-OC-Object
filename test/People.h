//
//  People.h
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#ifndef People_h
#define People_h

#include <stdio.h>
#include "Integer.h"
#include "String.h"

typedef struct People{
    int retainCount;
    String* name;
    Integer* age;
    
}People;

People* newPeople(String *name,Integer *age);
String* getName(People* people);
Integer* getAge(People* people);
#endif /* People_h */
