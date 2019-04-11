//
//  main.cpp
//  homework9
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std ;

int main (int argc , char**argv)
{
    int multiplier, faciend ;
    for (faciend=1; faciend<=9 ; faciend++ )
    {
        for(multiplier=2;multiplier<=9;multiplier++)
        {
            cout << multiplier <<'*';
            cout << faciend << '=' ;
            cout << setw(2) ;
            cout << multiplier*faciend << '\t' ;
        }
        cout << endl ;
    }
    system ("PAUSE");
    return 0 ;
    
}
