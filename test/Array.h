//
//  Array.h
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>
#include "People.h"
#include "Object.h"
typedef Object* AnyObject;

typedef struct Array{
    int length;
    int capacity;
    AnyObject *value;
    
}Array;

Array* newArray();

//增加数组元素
void addElement(Array *array,AnyObject value);

//删除
Array* removeIndexAt(Array *arry,int index);

//插入
Array* insertIndexAt(Array *array,AnyObject value,int index);

//查找
AnyObject getValueIndexAt(Array *array,int index);

//获取数组长度
int getArrayLength(Array *array);

//销毁
void destroyArray(Array *array);

//打印
void printArray(Array *arr);

#endif /* Array_h */
