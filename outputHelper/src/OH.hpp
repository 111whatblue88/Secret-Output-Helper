#pragma once

#include <ctime>
#include <string>
#include <iostream>

#include "export.hpp"

namespace secret {

  
SOHAPI class OH {
public: 

  enum class Color {
    RED, GREEN, WHITE, GRAY, RESET, YELLOW
  };

  static const std::string ColorString(std::string, Color color);

  static const std::string ResolveColor(Color color);

  static const void OutputLog(std::string header, std::string text, Color color);
  static const void OutputLog(std::string header, std::string text);

  static const void OutputColor(std::string text, Color color);

};


}






