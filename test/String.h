//
//  String.h
//  test
//
//  Created by M.C on 16/12/26.
//  Copyright © 2016年 c. All rights reserved.
//

#ifndef String_h
#define String_h

#include <stdio.h>

typedef struct String {
    int retainCount;
    char *value;
}String;

String* newString(char* value);
char* getStringValue(String* ins);


#endif /* String_h */
