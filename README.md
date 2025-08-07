# debugging
Example of debugging message level implementation using preprocessor C++
- Useful for inclusion into libaries that may wish to include debugging messages without always including additional memory intensive cstrings



## debugging.h header
```
// Define the debugging levels
#define NONE 0                  
#define FATAL 1
#define ERROR 2
#define WARNING 3
#define INFO 4

```

## Include in your library headers to use
```
#include <debugging.h>

// Debug level defines the lowest level of debug messages that will be printed
#define DEBUG_LEVEL FATAL
```

## Defining debug level for individual messages using pre-processor directives
```

#if DEBUG_LEVEL >= NONE                // This will always print a debug even if they are off
  Serial.println("DEBUG NONE");
#endif

#if DEBUG_LEVEL >= FATAL                 // only Prints if debugging level is FATAL or higher 
  Serial.println("DEBUG FATAL");
#endif

#if DEBUG_LEVEL >= ERROR                   // only Prints if debugging level is ERROR or higher 
  Serial.println("DEBUG ERROR");
#endif

#if DEBUG_LEVEL >= WARNING                // only Prints if debugging level is WARNING or higher   
  Serial.println("DEBUG WARNING");
#endif

#if DEBUG_LEVEL >= INFO                 // only Prints if debugging level is INFO or higher     
  Serial.println("DEBUG INFO");
#endif

```

## Usage
- Typical operation would have debugging set to ERROR or FATAL
- INFO useful for adding additional context to operation during development
- WARNING for less memory intensive tasks that may wish to have greater understanding of program
- NONE useful for situations where any excess memory useage is deletarious
