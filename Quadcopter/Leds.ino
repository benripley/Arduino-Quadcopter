
void leds_initialize(){
 pinMode(PIN_LED, OUTPUT);
 digitalWrite(PIN_LED, LOW); 
}

void leds_status(byte stat){
 digitalWrite(PIN_LED, stat);  
}

