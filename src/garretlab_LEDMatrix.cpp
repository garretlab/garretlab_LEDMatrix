#include <garretlab_LEDMatrix.h>

// Constructor.
garretlab_LEDMatrix::garretlab_LEDMatrix()
    : ArduinoLEDMatrix(), garretlab_ArduinoGraphics(canvasWidth, canvasHeight) {
}

// Begin matrix.
int garretlab_LEDMatrix::begin() {
  ArduinoLEDMatrix::begin();

  return 1;
}

// Begin draw.
void garretlab_LEDMatrix::beginDraw() {
  ArduinoLEDMatrix::beginDraw();
}

// End draw.
void garretlab_LEDMatrix::endDraw() {
  ArduinoLEDMatrix::endDraw();
}

// Clear display.
void garretlab_LEDMatrix::clear() {
  garretlab_ArduinoGraphics::clear();
  ArduinoLEDMatrix::clear();
}

// Stroke.
void garretlab_LEDMatrix::stroke(uint8_t r, uint8_t g, uint8_t b) {
  ArduinoLEDMatrix::stroke(r, g, b);
}

// Stroke.
void garretlab_LEDMatrix::stroke(uint32_t color) {
  ArduinoLEDMatrix::stroke(color);
}

// Draw a rectangle.
void garretlab_LEDMatrix::rect(int x, int y, int width, int height) {
  ArduinoLEDMatrix::rect(x, y, width, height);
}

// Display text.
void garretlab_LEDMatrix::text(const String &str, int x, int y) {
  garretlab_ArduinoGraphics::text(str, x, y);
  return;
}

// Set text font.
void garretlab_LEDMatrix::textFont(const Font &which) {
  garretlab_ArduinoGraphics::textFont(which);
}

// Set text font.
void garretlab_LEDMatrix::textFont(const garretlab_Font &which) {
  garretlab_ArduinoGraphics::textFont(which);
}

// Set pixel.
void garretlab_LEDMatrix::set(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
  ArduinoLEDMatrix::set(x, y, r, g, b);
}

// Write for Print class.
size_t garretlab_LEDMatrix::write(uint8_t c) {
  garretlab_ArduinoGraphics::write(c);
  return 1;
}

// Begin text.
void garretlab_LEDMatrix::beginText(int x, int y) {
  garretlab_ArduinoGraphics::beginText(x, y);
}

// Begin text.
void garretlab_LEDMatrix::beginText(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
  beginText(x, y);
}

// Begin text.
void garretlab_LEDMatrix::beginText(int x, int y, uint32_t color) {
  beginText(x, y, COLOR_R(color), COLOR_G(color), COLOR_B(color));
}

// Display text.
void garretlab_LEDMatrix::endText(int scrollDirection) {
  garretlab_ArduinoGraphics::endText(scrollDirection);
}

// Set text scroll speed.
void garretlab_LEDMatrix::textScrollSpeed(unsigned long scrollSpeed) {
  ArduinoLEDMatrix::textScrollSpeed(scrollSpeed);
}

// Print.
size_t garretlab_LEDMatrix::println(void) {
  ArduinoLEDMatrix::println();
}

// Print.
size_t garretlab_LEDMatrix::println(const char *s) {
  ArduinoLEDMatrix::println(s);
}

// Bitmap.
void garretlab_LEDMatrix::bitmap(const uint8_t *data, int x, int y, int width, int height) {
  ArduinoLEDMatrix::bitmap(data, x, y, width, height);
}