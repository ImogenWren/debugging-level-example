# debugging-level-example
Example of debugging message level implementation using preprocessor C++


```
// Define the debugging levels
#define NONE 0                  
#define FATAL 1
#define ERROR 2
#define WARNING 3
#define INFO 4


// Debug level defines the lowest level of debug messages that will be printed
#define DEBUG_LEVEL FATAL
```


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

- Typical operation would have debugging set to ERROR or FATAL
- INFO useful for adding additional context to operation during development 
