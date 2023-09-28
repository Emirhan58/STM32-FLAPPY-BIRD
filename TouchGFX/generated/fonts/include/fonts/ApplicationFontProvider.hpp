/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId LARGE = 1;
    static const touchgfx::FontId SMALL = 2;
    static const touchgfx::FontId OZEL = 3;
    static const touchgfx::FontId OZEL2 = 4;
    static const touchgfx::FontId OZEL3 = 5;
    static const touchgfx::FontId TYPOGRAPHY_00 = 6;
    static const touchgfx::FontId SS = 7;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;       // verdana_20_4bpp
    static const touchgfx::FontId LARGE = 1;         // VIVALDII_TTF_30_4bpp
    static const touchgfx::FontId SMALL = 2;         // verdana_10_4bpp
    static const touchgfx::FontId OZEL = 3;          // verdanab_20_4bpp
    static const touchgfx::FontId OZEL2 = 4;         // verdanab_13_4bpp
    static const touchgfx::FontId OZEL3 = 5;         // verdanab_9_4bpp
    static const touchgfx::FontId TYPOGRAPHY_00 = 6; // verdanab_7_4bpp
    static const touchgfx::FontId SS = 7;            // verdana_7_4bpp
    static const uint16_t NUMBER_OF_FONTS = 8;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /*flashReader*/)
    {
    }

    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
