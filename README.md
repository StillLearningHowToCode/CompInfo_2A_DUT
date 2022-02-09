# CompInfo
TD et Projet :sparkles: :rocket:

## Compiler un fichier

Compile a CPP file to generate executable target file: 

```
g++ -o main.exe hello.cpp
```

# Standard Header Files And Their Uses: 
 

#include<stdio.h>: It is used to perform input and output operations using functions scanf() and printf().

#include<iostream>: It is used as a stream of Input and Output using cin and cout.
  
#include<string.h>: It is used to perform various functionalities related to string manipulation like strlen(), strcmp(), strcpy(), size(), etc.
  
#include<math.h>: It is used to perform mathematical operations like sqrt(), log2(), pow(), etc.
  
#include<iomanip.h>: It is used to access set() and setprecision() function to limit the decimal places in variables.
  
#include<signal.h>: It is used to perform signal handling functions like signal() and raise().
  
#include<stdarg.h>:It is used to perform standard argument functions like va_start() and va_arg(). It is also used to indicate start of the variable-length argument list and to fetch the arguments from the variable-length argument list in the program respectively.
  
#include<errno.h>: It is used to perform error handling operations like errno(), strerror(), perror(), etc.
  
#include<fstream.h>: It is used to control the data to read from a file as an input and data to write into the file as an output.
  
#include<time.h>: It is used to perform functions related to date() and time() like setdate() and getdate(). It is also used to modify the system date and get the CPU time respectively.
  
#include<float.h>: It contains a set of various platform-dependent constants related to floating point values. These constants are proposed by ANSI C. They allow making programs more portable. Some examples of constants included in this header file are- e(exponent), b(base/radix), etc.
  
#include<limits.h>: It determines various properties of the various variable types. The macros defined in this header, limits the values of various variable types like char, int, and long. These limits specify that a variable cannot store any value beyond these limits, for example an unsigned character can store up to a maximum value of 255.
