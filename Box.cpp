#include "Box.h"

// Implement setters and getters

// Implemenet the calcVolume() unction
//int Box::calcVolume() {
void setLength(int l){
  length=l;
}
void setWidth(int w){
  width=w;
}
void setHeight(int h){
  height=h;
}
int getLength(){
  return length;
}
int getWidth(){
  return width;
}
int getHeight(){
  return height;
}
int calcVolume(){
  return length*width*height;
}
