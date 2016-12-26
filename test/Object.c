//
//  Object.c
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#include "Object.h"
#include <stdlib.h>

void objectRetain(Object *obj) {
    obj -> retainCount += 1;
}

void objectRelease(Object *obj) {
    obj -> retainCount -= 1;
    if (obj -> retainCount <= 0) {
        free(obj);
    }
}

int getRetainCount(Object *obj) {
    return obj -> retainCount;
}
