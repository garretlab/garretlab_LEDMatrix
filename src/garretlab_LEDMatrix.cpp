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
}

// Stroke.
void garretlab_LEDMatrix::stroke(uint8_t r, uint8_t g, uint8_t b) {
  ArduinoLEDMatrix::stroke(r, g, b);
}

// Stroke.
void garretlab_LEDMatrix::stroke(uint32_t color) {
  ArduinoLEDMatrix::stroke(color);
}

// Circle.
void garretlab_LEDMatrix::circle(int x, int y, int diameter) {
  ArduinoLEDMatrix::circle(x, y, diameter);
}

// Ellipse.
void garretlab_LEDMatrix::ellipse(int x, int y, int width, int height) {
  ArduinoLEDMatrix::ellipse(x, y, width, height);
}

// Line.
void garretlab_LEDMatrix::line(int x1, int y1, int x2, int y2) {
  ArduinoLEDMatrix::line(x1, y1, x2, y2);
}

// Point.
void garretlab_LEDMatrix::point(int x, int y) {
  ArduinoLEDMatrix::point(x, y);
}

// Draw a rectangle.
void garretlab_LEDMatrix::rect(int x, int y, int width, int height) {
  ArduinoLEDMatrix::rect(x, y, width, height);
}

// Display text.
void garretlab_LEDMatrix::text(const String &str, int x, int y) {
  garretlab_ArduinoGraphics::text(str, x, y);
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
  garretlab_ArduinoGraphics::textScrollSpeed(scrollSpeed);
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