//
//  String.c
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#include "String.h"
#include <stdlib.h>
#include "Object.h"

String* newString(char* value) {
    String *str = malloc(sizeof(String));
    objectRetain((Object *)str);
    str -> value = value;
    return str;
}

char* getStringValue(String* ins) {
    return ins -> value;
}
