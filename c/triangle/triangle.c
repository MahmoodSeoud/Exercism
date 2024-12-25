#include "triangle.h"

bool is_triangle(triangle_t t) {
  if (t.a == 0 || t.b == 0 || t.c == 0)
    return false;

  if (t.a + t.b < t.c || t.a + t.c < t.b || t.b + t.c < t.a)
    return false;

  return true;
}
bool is_equilateral(triangle_t t) {
  return is_triangle(t) && (t.a == t.b && t.b == t.c);
}

bool is_isosceles(triangle_t t) {
  return is_triangle(t) && (t.a == t.b || t.a == t.c || t.b == t.c);
}
bool is_scalene(triangle_t t) {
  return is_triangle(t) && (t.a != t.b && t.a != t.c && t.b != t.c);
}
