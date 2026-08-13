#pragma once

#include <ctime>
#include <string>
#include <iostream>

namespace secret {

  
class OH {
public: 

  enum class Color {
    RED, GREEN, WHITE, GRAY, RESET, YELLOW
  };

  static const std::string ColorString(std::string, Color color);

  static const std::string ResolveColor(Color color);

  static const void OutputLog(std::string header, std::string text, Color color);
  static const void OutputLog(std::string header, std::string text, Color color, std::time_t* time);
  static const void OutputLog(std::string header, std::string text);

  static const void OutputColor(std::string text, Color color);

};


}






