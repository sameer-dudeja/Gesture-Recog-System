#include <Adafruit_GFX.h>    // Core graphics library
#include <MCUFRIEND_kbv.h>   // Hardware-specific library
MCUFRIEND_kbv tft;

#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans24pt7b.h>
#include <Fonts/FreeSerif12pt7b.h>

#include <FreeDefaultFonts.h>

#define BLACK   0x0000
#define RED     0xF800
#define GREEN   0x07E0
#define WHITE   0xFFFF
#define GREY    0x8410
char mystr[10];
void setup(void)
{
    Serial.begin(19200);
    Serial1.begin(9600);
    uint16_t ID = tft.readID();
    if (ID == 0xD3) ID = 0x9481;
    tft.begin(ID);
    tft.setRotation(0);
}

void loop(void)
{
    Serial1.readBytes(mystr,10); 
    Serial1.println(mystr);
    tft.fillScreen(BLACK);
    showmsgXY(20, 50, 1, &FreeSans24pt7b,mystr);
    /*
    showmsgXY(60, 80, 1, &FreeSans12pt7b, "System")3;
    
    showmsgXY(5, 150, 1, &FreeSevenSegNumFont, "0123456789");
    showmsgXY(20, 250, 1, &FreeSans12pt7b, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    */
    delay(1000);
}

void showmsgXY(int x, int y, int sz, const GFXfont *f, const char *msg)
{
    int16_t x1, y1;
    uint16_t wid, ht;
    
    tft.setFont(f);
    tft.setCursor(x, y);
    tft.setTextColor(GREEN);
    tft.setTextSize(sz);
    tft.print(msg);
    delay(100);
}
