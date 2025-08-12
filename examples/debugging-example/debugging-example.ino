
#define DEBUG_LEVEL FATAL    // Define this in the header or .ino file

void setup() {
  Serial.begin(115200);
  delay(2000);



#if DEBUG_LEVEL >= DEBUG_FATAL
  Serial.println("DEBUG FATAL");
#endif
#if DEBUG_LEVEL >= DEBUG_ERROR
  Serial.println("DEBUG ERROR");
#endif
#if DEBUG_LEVEL >= DEBUG_WARNING
  Serial.println("DEBUG WARNING");
#endif
#if DEBUG_LEVEL >= DEBUG_INFO
  Serial.println("DEBUG INFO");
#endif

delay(5000);

// This will always print a debug even if they are off, but still gives means for globally disabling by setting debug level to 5
#if DEBUG_LEVEL >= DEBUG_NONE
  Serial.println("DEBUG NONE");
#endif

}


void loop(){

}