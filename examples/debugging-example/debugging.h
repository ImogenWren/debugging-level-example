/* debugging -> Simple implementation of debugging message levels using preproccessor

- Useful for inclusion into libaries that may wish to include debugging messages without always including additional memory intensive cstrings

  Imogen Wren
  07/08/2025

*/


#pragma once

#ifndef debugging_h
#define debugging_h


// Simple method for directing pre-processor to enable and disable different levels of debugging message


#define DEBUG_NONE 0   // changed these names to avoid conflict with existing programmes
#define DEBUG_FATAL 1
#define DEBUG_ERROR 2
#define DEBUG_WARNING 3
#define DEBUG_INFO 4



// Debug level defines the lowest level of debug messages that will be printed
// #define DEBUG_LEVEL FATAL    // Define this in the header file


/*  Example for how to define a debug message at a specific level

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


*/






#endif
