#ifndef GARRETLAB_ARDUINO_LED_MATRIX_H
#define GARRETLAB_ARDUINO_LED_MATRIX_H

#include <Arduino_LED_Matrix.h>
#include <garretlab_ArduinoGraphics.h>

#define COLOR_R(color) (uint8_t(color >> 16))
#define COLOR_G(color) (uint8_t(color >> 8))
#define COLOR_B(color) (uint8_t(color >> 0))

// Font structure for Misaki font.
extern const struct garretlab_Font Font_Misaki;

class garretlab_LEDMatrix : public ArduinoLEDMatrix, public garretlab_ArduinoGraphics {
 public:
  garretlab_LEDMatrix();                                          // Constructor.
  int begin();                                                    // Begin matrix.
  void beginDraw();                                               // Begin matrix.
  void endDraw();                                                 // End draw.
  void clear();                                                   // Clear display.
  void stroke(uint8_t r, uint8_t g, uint8_t b);                   // Stroke.
  void stroke(uint32_t color);                                    // Stroke.
  void circle(int x, int y, int diameter);                        // Circle.
  void ellipse(int x, int y, int width, int height);              // Ellipse.
  void line(int x1, int y1, int x2, int y2);                      // Line.
  void point(int x, int y);                                       // Point.
  void rect(int x, int y, int width, int height);                 // Draw a rectangle.
  void text(const String& str, int x = 0, int y = 0);             // Display text.
  void textFont(const Font& which);                               // Set text font.
  void textFont(const garretlab_Font& which);                     // Set text font.
  void set(int x, int y, uint8_t r, uint8_t g, uint8_t b);        // Set pixel.
  size_t write(uint8_t c);                                        // Write for Print class.
  void beginText(int x = 0, int y = 0);                           // Begin text.
  void beginText(int x, int y, uint8_t r, uint8_t g, uint8_t b);  // Begin text.
  void beginText(int x, int y, uint32_t color);                   // Begin text.
  void endText(int scrollDirection = NO_SCROLL);                  // Display text.
  void textScrollSpeed(unsigned long scrollSpeed);                // Set text scroll speed.
  size_t println(void);                                           // Print.
  size_t println(const char* s);                                  // Print.

 protected:
  String textBuffer;                  // Buffer to hold text.
  int textBufferLength;               // Text buffer length, not the memory size.
  int textX;                          // X position of text.
  int textY;                          // Y position of text.
  struct garretlab_Font font;         // Font name.
  static const int canvasWidth = 12;  // Canvas width.
  static const int canvasHeight = 8;  // Canvas height.

  virtual void bitmap(const uint8_t* data, int x, int y, int width, int height);  // Bitmap.
};

#endif /* GARRETLAB_ARDUINO_LED_MATRIX_H */