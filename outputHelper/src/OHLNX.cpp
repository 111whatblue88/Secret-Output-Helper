#include <ctime>
#include <string>
#include <iostream>
#include <format>
#include <chrono>

#include "OH.hpp"

using namespace secret;
 
void OH::EnableConsoleProcessing() {

}

const std::string OH::ColorString(std::string text, Color color) {
  switch (color) {
    case Color::RED: {
      return std::format("{}{}{}", ResolveColor(Color::RED), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::GREEN: {
      return std::format("{}{}{}", ResolveColor(Color::GREEN), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::YELLOW: {
      return std::format("{}{}{}", ResolveColor(Color::YELLOW), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::WHITE: {
      return std::format("{}{}{}", ResolveColor(Color::WHITE), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::RESET: {
      return std::format("{}{}{}", ResolveColor(Color::RESET), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::GRAY: {
      return std::format("{}{}{}", ResolveColor(Color::GRAY), text, ResolveColor(Color::RESET));
      break;
    }
    default: {
      return std::format("{}{}{}", ResolveColor(Color::RESET), text, ResolveColor(Color::RESET));
      break;
    }
  }
}

const std::string OH::ResolveColor(Color color) {
  switch (color) {
    case Color::RED: {
      return "\e[0;31m";
      break;
    }
    case Color::GREEN: {
      return "\e[0;32m";
      break;
    }
    case Color::YELLOW: {
      return "\e[0;33m";
      break;
    }
    case Color::WHITE: {
      return "\e[0;37m";
      break;
    }
    case Color::RESET: {
      return "\e[0m";
      break;
    }
    case Color::GRAY: {
      return "\e[38;2;80;80;80m";
      break;
    }
    default: {
      return "\e[0m";
      break;
    }
  }
}

void OH::OutputLog(std::string header, std::string text, Color color) {
  auto now = std::chrono::system_clock::now();
  std::cout << std::format("{}[{}] ({}): ({}){}", ResolveColor(color), header, std::format("{:%H:%M}", now), text, ResolveColor(Color::RESET)) << "\n";
}
void OH::OutputLog(std::string header, std::string text, Color color, const char* file, const int line) {
  auto now = std::chrono::system_clock::now();
  std::cout << std::format("{}[{}] ({}): ({}) (FILE:{}) (LINE:{}){}", 
      ResolveColor(color), 
      header, 
      std::format("{:%H:%M}", now), 
      file,
      line,
      text, ResolveColor(Color::RESET)) << "\n";
}
void OH::OutputLog(std::string header, std::string text) {
  std::cout << std::format("{}[{}]: ({}){}", ResolveColor(Color::WHITE), header, text, ResolveColor(Color::RESET)) << "\n";
}

void OH::OutputColor(std::string text, Color color) {

  switch (color) {
    case Color::RED: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::RED), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::GREEN: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::GREEN), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::YELLOW: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::YELLOW), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::WHITE: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::WHITE), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::RESET: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::RESET), text, ResolveColor(Color::RESET));
      break;
    }
    case Color::GRAY: {
      std::cout << std::format("{}{}{}", ResolveColor(Color::GRAY), text, ResolveColor(Color::RESET));
      break;
    }
  }
}







