//
//  main.cpp
//  Language detection
//
//  Created by Tina Tsai on 2017/8/1.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
/*
 Sample Input
 HELLO
 HOLA
 HALLO
 BONJOUR
 CIAO
 ZDRAVSTVUJTE
 #
 
 Sample Output
 Case 1: ENGLISH
 Case 2: SPANISH
 Case 3: GERMAN
 Case 4: FRENCH
 Case 5: ITALIAN
 Case 6: RUSSIAN
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    int count=0 ;
    string c;
       while(cin >> c){
                count ++;
                if(c == "#")
                    break ;
           
                else if(c== "HELLO")
                printf("Case %d: ENGLISH\n",count);
                
                else if(c== "HOLA")
                printf("Case %d: SPANISH\n",count);
                
                else if(c== "HALLO")
                printf("Case %d: GERMAN\n",count);

                else if(c== "BONJOUR")
                printf("Case %d: FRENCH\n",count);
        
                else if(c== "CIAO")
                printf("Case %d: ITALIAN\n",count);
        
                else if(c== "ZDRAVSTVUJTE")
                printf("Case %d: RUSSIAN\n",count);
        
                else
                printf("Case %d: UNKNOWN\n",count);
        }
    return 0;
}
