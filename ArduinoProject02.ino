//Declare an array of ten alements, whitout initialize it.
int seq[10];

//Declare some variables for the for every pin
int redCount;
int blueCount;
int greenCount;
int yellowCount;
int whiteCount;



void setup() {
  //Open the serial port.
  Serial.begin(9600);

  //Use the pin mode for define if the pin 
  //is going to be an outpu or an input
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  //Fill the seq array with numbers, sizeof is a particular 
  //it will return the size of the array, the returned value from that
  //unction is returned in byte, but the array is defined in intso we
  //need to reduce the dimension of every shell of the array.
  for(int i=0;i<sizeof(seq)/sizeof(int);i++){
    //When the loop iterate trough the elements of the array we are going to 
    //assing to them a random value using the function random.
    //The last value we pass to the funnction will never be used.
    seq[i]=random(2,7);
    //This will only print the value inside the console.
    Serial.println(seq[i]);
  }
}

void loop() {
  //we are using the same loop
   for(int i=0;i<sizeof(seq)/sizeof(int);i++){
    //first of all we just keep low every element.
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);


   digitalWrite(seq[i],HIGH);
    if(seq[i]==2){
      redCount++;
      Serial.print("The red has been used: "); 
      Serial.print(redCount);
      Serial.println(" Times");
    }else if(seq[i]==3){
      blueCount++;
      Serial.print("The blue has been used: ");
      Serial.print(blueCount);
      Serial.println(" Times");
    }else if(seq[i]==4){
      greenCount++;
      Serial.print("The green has been used: ");
      Serial.print(greenCount);
      Serial.println(" Times");
    }else if(seq[i]==5){
      yellowCount++;
      Serial.print("The yellow has been used: ");
      Serial.print(yellowCount);
      Serial.println(" Times");
    }else if(seq[i]==6){
      whiteCount++;
      Serial.print("The white has been used: ");
      Serial.print(whiteCount);
      Serial.println(" Times");
      }
    delay(500);
     digitalWrite(seq[i],LOW);
    delay(500);
    }
      
   
}
   
