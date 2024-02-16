#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();
TFT_eSprite img = TFT_eSprite(&tft);


void setup() {
  // put your setup code here, to run once:
  tft.init();
  tft.setRotation(1);
  img.createSprite(240,135);
  //set screen Back Light brightness
  pinMode(TFT_BL, OUTPUT);
  ledcSetup(0, 5000, 8); // 0-15, 5000, 8
  ledcAttachPin(TFT_BL, 0); // TFT_BL, 0 - 15
  ledcWrite(0, 25); // 0-15, 0-255 (with 8 bit resolution); 0=totally dark;255=totally shiny 
}

int x1 = 0;
int x2 = 50;
int x3 = 100;
int x4 = 125;
int x5 = 150;
unsigned int colors[5] = {TFT_WHITE, TFT_PINK, TFT_PURPLE, TFT_RED, TFT_MAGENTA};


void loop() {
  // put your main code here, to run repeatedly:
  //figure out how to make custom colors

  //circle 1
  img.fillCircle(x1, 36, 10, TFT_BLACK);
  x1 = x1+1;
  if (x1>240)
    x1=0;
  img.fillCircle(x1,36,10,colors[random(0,5)]);

  //circle 2
  img.fillCircle(x2, 56, 20, TFT_BLACK);
  x2 = x2+1;
  if (x2>240)
    x2=0;
  img.fillCircle(x2,56,20,colors[random(0,5)]);

  //circle 3
  img.fillCircle(x3, 96, 15, TFT_BLACK);
  x3 = x3+1;
  if (x3>240)
    x3=0;
  img.fillCircle(x3,96,15,colors[random(0,5)]);

  img.fillCircle(x4, 15, 12, TFT_BLACK);
  x4 = x4+1;
  if (x4>240)
    x4=0;
  img.fillCircle(x4,15,12,colors[random(0,5)]);

  img.fillCircle(x5, 102, 8, TFT_BLACK);
  x5 = x5+1;
  if (53>240)
    x5=0;
  img.fillCircle(x5,102,8,colors[random(0,5)]);


  //img.fillRect(18,70,100,100,TFT_PINK);

  img.setTextColor(TFT_WHITE, TFT_BLACK);
  img.drawString("I <3 U", 20, 74, 2);
  img.drawString("x", 20, 90, 2);
  int num = random(0,100000);
  img.drawString(String(num), 27, 90, 2);
  delay(100);

  img.pushSprite(0,0);
}
