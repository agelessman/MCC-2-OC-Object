//
//  Object.h
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include "Object.h"
// 定义Object对象
typedef struct Object {
    int retainCount;
}Object;

//宏定义方法 方便书写
#define OBJECTRETAIN(obj) objectRetain((Object*)obj)
#define OBJECTRELEASE(obj) objectRelease((Object*)obj)
#define GETRETAINCOUNT(obj) getRetainCount((Object*)obj)

void objectRetain(Object *obj);
void objectRelease(Object *obj);
int getRetainCount(Object *obj);

#endif /* Object_h */
