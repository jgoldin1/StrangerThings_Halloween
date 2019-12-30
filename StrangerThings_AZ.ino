#define ALPHA_H (2)
#define ALPHA_A (3)
#define ALPHA_P (4)
#define ALPHA_Y (5)
#define ALPHA_L (6)
#define ALPHA_O (7)
#define ALPHA_W (8)
#define ALPHA_E (9)
#define ALPHA_N (10)


char happyH[] = "happy halloween  ";
int i = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pins as an outputs.
  pinMode(ALPHA_H, OUTPUT);
  pinMode(ALPHA_A, OUTPUT);
  pinMode(ALPHA_P, OUTPUT);
  pinMode(ALPHA_Y, OUTPUT);
  pinMode(ALPHA_L, OUTPUT);
  pinMode(ALPHA_O, OUTPUT);
  pinMode(ALPHA_W, OUTPUT);
  pinMode(ALPHA_E, OUTPUT);
  pinMode(ALPHA_N, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int pin; 
  

  
  switch(happyH[i])
  {
    case 'h':
    {
      pin = ALPHA_H;
      break;
    }
    case 'a':
    {
      pin = ALPHA_A;
      break;
    }
    case 'p':
    {
      pin = ALPHA_P;
      break;
    }
    case 'y':
    {
      pin = ALPHA_Y;
      break;
    }
    case 'l':
    {
      pin = ALPHA_L;
      break;
    }
    case 'o':
    {
      pin = ALPHA_O;
      break;
    }
    case 'w':
    {
      pin = ALPHA_W;
      break;
    }
    case 'e':
    {
      pin = ALPHA_E;
      break;
    }
    case 'n':
    {
      pin = ALPHA_N;
      break;
    }
    case ' ':
    default:
    {
      pin = 0;
      break;
    }
  };
  
  //display
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(300);              // wait for a second

  Serial.print("switch:");
  Serial.print(happyH[i]);
  Serial.print(" | i: ");
  Serial.print(i);
  Serial.print(" | pin: ");
  Serial.print(pin);
  Serial.print("\n");
  
  i++;
  if(i>=(sizeof(happyH)-1))
  {
    i=0;
  }

  
  
}
