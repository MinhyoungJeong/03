//
//  main.c
//  week3
//
//  Created by 정민형 on 9/18/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    char c, d;
    
    printf("enter a character :");
    scanf("%c",&c);
    
    d = c + 1;
    printf("The next character of %c (%i) is %c (%i)\n", c, c, d, d);
    
    return 0;
}
