/*
  Copyright (c) 2018 Christopher Osthues
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 */

#include "colortext.hpp"

#include <iostream>

namespace colortext {

std::string color(const std::string &text,
                  const FG_COLOR color,
                  const BG_COLOR bg_color,
                  const MODIFIER modifier,
                  bool color_text) {
    if (color_text) {
        return ESC + std::to_string(modifier) + ";" + std::to_string(color) + ";" + std::to_string(bg_color) + "m" +
               text + reset;
    } else {
        return text;
    }
}

std::string color(const std::string &text,
                  const FG_COLOR color,
                  const MODIFIER modifier,
                  bool color_text) {
    return colortext::color(text, color, BG_COLOR::BG_DEFAULT, modifier, color_text);
}

std::string color(const std::string &text,
                  const FG_COLOR color,
                  const BG_COLOR bg_color,
                  bool color_text) {
    return colortext::color(text, color, bg_color, MODIFIER::NO_MODIFIER, color_text);
}

std::string color(const std::string &text,
                  const FG_COLOR color,
                  bool color_text) {
    return colortext::color(text, color, BG_COLOR::BG_DEFAULT, MODIFIER::NO_MODIFIER, color_text);
}

std::string colorBG(const std::string &text,
                    const BG_COLOR bg_color,
                    const MODIFIER modifier,
                    bool color_text) {
    return colortext::color(text, FG_COLOR::DEFAULT, bg_color, modifier, color_text);
}

std::string colorBG(const std::string &text,
                    const BG_COLOR bg_color,
                    bool color_text) {
    return colortext::color(text, FG_COLOR::DEFAULT, bg_color, MODIFIER::NO_MODIFIER, color_text);
}

std::string decorate(const std::string &text,
                     const MODIFIER modifier,
                     bool modify_text) {
    return colortext::color(text, FG_COLOR::DEFAULT, BG_COLOR::BG_DEFAULT, modifier, modify_text);
}

}  // namespace colortext
