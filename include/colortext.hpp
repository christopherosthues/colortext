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

#pragma once

#include <string>
#include <utility>

namespace colortext {

enum MODIFIER {
    NO_MODIFIER = 0,
    BOLD = 1,
    UNDERLINE = 4,
    INVERSE = 7,
    BOLD_OFF = 21,
    UNDERLINE_OFF = 24,
    INVERSE_OFF = 27
};

enum FG_COLOR {
    BLACK = 30,
    RED = 31,
    GREEN = 32,
    YELLOW = 33,
    BLUE = 34,
    MAGENTA = 35,
    CYAN = 36,
    WHITE = 37,
    DEFAULT = 39,
    BRIGHT_BLACK = 90,
    BRIGHT_RED = 91,
    BRIGHT_GREEN = 92,
    BRIGHT_YELLOW = 93,
    BRIGHT_BLUE = 94,
    BRIGHT_MAGENTA = 95,
    BRIGHT_CYAN = 96,
    BRIGHT_WHITE = 97
};

enum BG_COLOR {
    BG_BLACK = 40,
    BG_RED = 41,
    BG_GREEN = 42,
    BG_YELLOW = 43,
    BG_BLUE = 44,
    BG_MAGENTA = 45,
    BG_CYAN = 46,
    BG_WHITE = 47,
    BG_DEFAULT = 49,
    BG_BRIGHT_BLACK = 100,
    BG_BRIGHT_RED = 101,
    BG_BRIGHT_GREEN = 102,
    BG_BRIGHT_YELLOW = 103,
    BG_BRIGHT_BLUE = 104,
    BG_BRIGHT_MAGENTA = 105,
    BG_BRIGHT_CYAN = 106,
    BG_BRIGHT_WHITE = 107
};

const std::string ESC = "\033[";

const std::string bold = ESC + std::to_string(MODIFIER::BOLD) + "m";
const std::string underline = ESC + std::to_string(MODIFIER::UNDERLINE) + "m";
const std::string inverse = ESC + std::to_string(MODIFIER::INVERSE) + "m";
const std::string bold_off = ESC + std::to_string(MODIFIER::BOLD_OFF) + "m";
const std::string underline_off = ESC + std::to_string(MODIFIER::UNDERLINE_OFF) + "m";
const std::string inverse_off = ESC + std::to_string(MODIFIER::INVERSE_OFF) + "m";
const std::string reset = ESC + std::to_string(MODIFIER::NO_MODIFIER) + "m";

const std::string black = ESC + std::to_string(FG_COLOR::BLACK) + "m";
const std::string red = ESC + std::to_string(FG_COLOR::RED) + "m";
const std::string green = ESC + std::to_string(FG_COLOR::GREEN) + "m";
const std::string yellow = ESC + std::to_string(FG_COLOR::YELLOW) + "m";
const std::string blue = ESC + std::to_string(FG_COLOR::BLUE) + "m";
const std::string magenta = ESC + std::to_string(FG_COLOR::MAGENTA) + "m";
const std::string cyan = ESC + std::to_string(FG_COLOR::CYAN) + "m";
const std::string white = ESC + std::to_string(FG_COLOR::WHITE) + "m";
const std::string default_fg = ESC + std::to_string(FG_COLOR::DEFAULT) + "m";
const std::string bright_black = ESC + std::to_string(FG_COLOR::BRIGHT_BLACK) + "m";
const std::string bright_red = ESC + std::to_string(FG_COLOR::BRIGHT_RED) + "m";
const std::string bright_green = ESC + std::to_string(FG_COLOR::BRIGHT_GREEN) + "m";
const std::string bright_yellow = ESC + std::to_string(FG_COLOR::BRIGHT_YELLOW) + "m";
const std::string bright_blue = ESC + std::to_string(FG_COLOR::BRIGHT_BLUE) + "m";
const std::string bright_magenta = ESC + std::to_string(FG_COLOR::BRIGHT_MAGENTA) + "m";
const std::string bright_cyan = ESC + std::to_string(FG_COLOR::BRIGHT_CYAN) + "m";
const std::string bright_white = ESC + std::to_string(FG_COLOR::BRIGHT_WHITE) + "m";

const std::string black_bg = ESC + std::to_string(BG_COLOR::BG_BLACK) + "m";
const std::string red_bg = ESC + std::to_string(BG_COLOR::BG_RED) + "m";
const std::string green_bg = ESC + std::to_string(BG_COLOR::BG_GREEN) + "m";
const std::string yellow_bg = ESC + std::to_string(BG_COLOR::BG_YELLOW) + "m";
const std::string blue_bg = ESC + std::to_string(BG_COLOR::BG_BLUE) + "m";
const std::string magenta_bg = ESC + std::to_string(BG_COLOR::BG_MAGENTA) + "m";
const std::string cyan_bg = ESC + std::to_string(BG_COLOR::BG_CYAN) + "m";
const std::string white_bg = ESC + std::to_string(BG_COLOR::BG_WHITE) + "m";
const std::string default_bg = ESC + std::to_string(BG_COLOR::BG_DEFAULT) + "m";
const std::string bright_black_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_BLACK) + "m";
const std::string bright_red_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_RED) + "m";
const std::string bright_green_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_GREEN) + "m";
const std::string bright_yellow_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_YELLOW) + "m";
const std::string bright_blue_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_BLUE) + "m";
const std::string bright_magenta_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_MAGENTA) + "m";
const std::string bright_cyan_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_CYAN) + "m";
const std::string bright_white_bg = ESC + std::to_string(BG_COLOR::BG_BRIGHT_WHITE) + "m";

/**
 * @brief Decorates the text with the specified colors and modifiers if @code(color_text) is @code(true).
 *
 * @param text The text to modify
 * @param color The color of the foreground
 * @param bg_color The color of the background
 * @param modifier The text modifier
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string color(const std::string &text,
                  const FG_COLOR color,
                  const BG_COLOR bg_color,
                  const MODIFIER modifier,
                  bool color_text = true);

/**
 * @brief Decorates the text with the specified colors and modifiers if @code(color_text) is @code(true).
 *
 * Note that the background color will not be modified.
 *
 * @param text The text to modify
 * @param color The color of the foreground
 * @param modifier The text modifier
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string color(const std::string &text,
                  const FG_COLOR color,
                  const MODIFIER modifier,
                  bool color_text = true);

/**
 * @brief Decorates the text with the specified colors if @code(color_text) is @code(true).
 *
 * Note that the text modifier will not be changed.
 *
 * @param text The text to modify
 * @param color The color of the foreground
 * @param bg_color The color of the background
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string color(const std::string &text,
                  const FG_COLOR color,
                  const BG_COLOR bg_color,
                  bool color_text = true);

/**
 * @brief Decorates the text with the specified colors if @code(color_text) is @code(true).
 *
 * Note that the background color and the text modifier will not be changed.
 *
 * @param text The text to modify
 * @param color The color of the foreground
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string color(const std::string &text,
                  const FG_COLOR color,
                  bool color_text = true);

/**
 * @brief Decorates the text with the specified background color and text modifier if @code(color_text) is @code(true).
 *
 * Note that the foreground color will not be modified.
 *
 * @param text The text to modify
 * @param bg_color The color of the background
 * @param modifier The text modifier
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string colorBG(const std::string &text,
                    const BG_COLOR bg_color,
                    const MODIFIER modifier,
                    bool color_text = true);

/**
 * @brief Decorates the text with the specified background color if @code(color_text) is @code(true).
 *
 * Note that the foreground color and the text modifier will not be changed.
 *
 * @param text The text to modify
 * @param color The color of the background
 * @param color_text @code(true) if the text should be colored
 *
 * @return The modified text
 */
std::string colorBG(const std::string &text,
                    const BG_COLOR bg_color,
                    bool color_text = true);

/**
 * @brief Decorates the text with the specified text modifier if @code(modify_text) is @code(true).
 *
 * Note that the foreground and the background color will not be modified.
 *
 * @param text The text to modify
 * @param modifier The text modifier
 * @param modify_text @code(true) if the text should be modified
 *
 * @return The modified text
 */
std::string decorate(const std::string &text,
                     const MODIFIER modifier,
                     bool modify_text = true);

}  // namespace colortext
