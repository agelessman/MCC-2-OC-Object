//
//  Integer.h
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#ifndef Integer_h
#define Integer_h

#include <stdio.h>

typedef struct Integer{
    int retainCount;
    int value;
    
}Integer;

Integer* newInteger(int value);
int getIntegerValue(Integer* ins);
#endif /* Integer_h */
