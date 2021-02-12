<img align="right" src="https://raw.githubusercontent.com/yaduvanshi777/Comment-Remover-in-C/main/temp/c-logo.png">

## Comment-Remover-In
<br>![C/C++ CI](https://github.com/yaduvanshi777/Comment-Remover-in-C/workflows/C/C++%20CI/badge.svg) &nbsp;&nbsp;&nbsp;&nbsp;![C/C++ CI](https://github.com/yaduvanshi777/Comment-Remover-in-C/workflows/C/C++%20CI/badge.svg?branch=main&event=issues)
<br>![C/C++ CI](https://github.com/yaduvanshi777/Comment-Remover-in-C/workflows/C/C++%20CI/badge.svg?branch=main&event=release)




### C/C++ and Java comment eliminator

## How to run in linux/MacOS
```
gcc comment_wiper.c
./a.out
```
 
 ## Input 
 ### in.c
```cpp 
    /// this is c program to remove the comment
    #include<stdio.h>
    /* start of main() func
       this is m.. com
    */
    int main(){	// start
	      cout<<"Hello World\n";
	      return 0;
	      // done 
    }
    // thank you
```    
    
  ## Output
  ### out.c
  
```cpp  
#include<stdio.h>
int main(){
    cout<<"Hello World\n";
    return 0;
}
```
