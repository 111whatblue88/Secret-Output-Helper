#pragma once

#include <ctime>
#include <string>
#include <iostream>

#include "export.hpp"

namespace secret {

  
class OH {
public: 

  enum class SOHAPI Color {
    RED, GREEN, WHITE, GRAY, RESET, YELLOW
  };

  SOHAPI static const std::string ColorString(std::string, Color color);

  SOHAPI static const std::string ResolveColor(Color color);

  SOHAPI static const void OutputLog(std::string header, std::string text, Color color);
  SOHAPI static const void OutputLog(std::string header, std::string text);

  SOHAPI static const void OutputColor(std::string text, Color color);

};


}






