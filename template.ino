
void setup(){
  Serial.begin(9600);
  Serial.println("BEGIN");
  time = micros();
  sum = solve(LIMIT);
  time = micros() - time;
  Serial.print("RESULT:  ");
  Serial.print(sum);
  Serial.print("\n");
  Serial.print("ELAPSED:  ");
  Serial.print(time);
  Serial.print("\n");
}

void loop(){
}

long solve(long param){
	//TODO Implement this :-)  
}
