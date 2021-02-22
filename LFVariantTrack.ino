#define sensor1 11 //sensor paling kiri
#define sensor2 2
#define sensor3 3
#define sensor4 4 //sensor paling kanan

#define Motor11 7 //forward motor kiri
#define Motor12 6 //reverse motor kiri
#define Motor21 9 //forward motor kanan
#define Motor22 8 //reverse motor kanan
#define PWMMotor1 5 //pwm motor kiri
#define PWMMotor2 10 //pwm motor kanan

int valuePWM1 = 120;
int valuePWM2 = 150;

//const int digitalPin = 5;
int digitalState1 = 0;
int digitalState2 = 0;
int digitalState3 = 0;
int digitalState4 = 0;

//Sensor Ultrasonic
int triggerPin = 12;
int echoPin = 13;
int time;
int jarak;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(digitalPin, INPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);

  pinMode(Motor11, OUTPUT);
  pinMode(Motor12, OUTPUT);
  pinMode(Motor21, OUTPUT);
  pinMode(Motor22, OUTPUT);
  pinMode(PWMMotor1, OUTPUT);
  pinMode(PWMMotor2, OUTPUT);

  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalState = digitalRead(digitalPin);
  digitalState1 = digitalRead(sensor1);
  digitalState2 = digitalRead(sensor2);
  digitalState3 = digitalRead(sensor3);
  digitalState4 = digitalRead(sensor4);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds (10);
  digitalWrite(triggerPin, LOW);
  time = pulseIn(echoPin, HIGH);
  jarak = (time * 0.034)/ 2;

//Menanjak
if(jarak < 11){
       if(digitalState1 == HIGH && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 120);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 110);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 100);
      } 
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 120);
      }
      
        //MAJU
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 90);
        analogWrite(PWMMotor2, 90);
        delay(1200);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 85);
        analogWrite(PWMMotor2, 85);
        delay(1200);
      }
    
     
    
      //BELOK KANAN
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 120);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 110);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 100);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 110);
        analogWrite(PWMMotor2, 0);
      }
    
      //BERHENTI
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 0);
      }
  }
   //Datar
   else if(jarak >= 11 || jarak <= 15){
     if(digitalState1 == HIGH && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 80);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 70);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 60);
      } 
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 80);
      }
      
        //MAJU
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 60);
        analogWrite(PWMMotor2, 60);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 50);
        analogWrite(PWMMotor2, 50);
      }
    
     
    
      //BELOK KANAN
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 80);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 70);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 60);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 70);
        analogWrite(PWMMotor2, 0);
      }
    
      //BERHENTI
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 0);
      }
   }
   //Menurun
   else {
    if(digitalState1 == HIGH && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 70);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 60);
      }
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 50);
      } 
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 70);
      }
      
        //MAJU
      else if(digitalState1 == HIGH && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 60);
        analogWrite(PWMMotor2, 60);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, HIGH);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 50);
        analogWrite(PWMMotor2, 50);
      }
      
      //BELOK KANAN
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 70);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 60);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == HIGH && digitalState3 == HIGH && digitalState4 == HIGH){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 50);
        analogWrite(PWMMotor2, 0);
      }
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == HIGH && digitalState4 == LOW){
        digitalWrite(Motor11, HIGH);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 60);
        analogWrite(PWMMotor2, 0);
      }
    
      //BERHENTI
      else if(digitalState1 == LOW && digitalState2 == LOW && digitalState3 == LOW && digitalState4 == LOW){
        digitalWrite(Motor11, LOW);
        digitalWrite(Motor12, LOW);
        digitalWrite(Motor21, LOW);
        digitalWrite(Motor22, LOW);
    
        analogWrite(PWMMotor1, 0);
        analogWrite(PWMMotor2, 0);
      }
   }
  
  Serial.println(jarak);
  
}
