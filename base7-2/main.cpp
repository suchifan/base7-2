//
//  main.cpp
//  base7-2
//
//  Created by suchao on 5/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input 3 numbers:\n";
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int max = a[0];
    int min = a[0];
    for(int i=0; i<3; i++){
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
    }
    
    cout << a[0] + a[1] + a[2] - max - min << endl;
    
    return 0;
}
