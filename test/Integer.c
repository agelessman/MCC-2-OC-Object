//
//  Integer.c
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#include "Integer.h"
#include <stdlib.h>
#include "Object.h"

Integer *newInteger(int value) {
    Integer *new = malloc(sizeof(Integer));
    OBJECTRETAIN(new);
    new->value = value;
    return new;
}

int getIntegerValue(Integer* ins) {
    return ins->value;
}
