/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x77, 0x65, 0x62, 0x73, 0x69, 0x74, 0x65, 0x20, 0x74, 0x68, 0x61, 0x74, 0x20, 0x49, 0x20, 0x64, 0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70, 0x65, 0x64, 0xa, 0x20, 0x61, 0x73, 0x20, 0x61, 0x20, 0x66, 0x72, 0x65, 0x65, 0x6c, 0x61, 0x6e, 0x63, 0x65, 0x72, 0x2e, 0x0, // @0 "website that I developed\n as a freelancer."
    0x53, 0x65, 0x6c, 0x6c, 0x69, 0x78, 0x2c, 0x20, 0x53, 0x74, 0x72, 0x69, 0x70, 0x74, 0x65, 0x2c, 0x20, 0x42, 0x54, 0x43, 0x50, 0x61, 0x79, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x0, // @43 "Sellix, Stripte, BTCPayserver"
    0x53, 0x74, 0x6f, 0x72, 0x65, 0x2c, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2c, 0x63, 0x61, 0x74, 0x65, 0x67, 0x6f, 0x72, 0x79, 0x20, 0x70, 0x61, 0x6e, 0x65, 0x6c, 0x0, // @73 "Store,product,category panel"
    0x6c, 0x69, 0x6e, 0x6b, 0x65, 0x64, 0x69, 0x6e, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x69, 0x6e, 0x2f, 0x65, 0x6d, 0x69, 0x72, 0x68, 0x61, 0x6e, 0x6b, 0x61, 0x79, 0x61, 0x2f, 0x0, // @102 "linkedin.com/in/emirhankaya/"
    0x65, 0x6d, 0x69, 0x72, 0x68, 0x61, 0x6e, 0x2e, 0x6b, 0x61, 0x79, 0x61, 0x5f, 0x35, 0x38, 0x40, 0x68, 0x6f, 0x74, 0x6d, 0x61, 0x69, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x0, // @131 "emirhan.kaya_58@hotmail.com"
    0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x45, 0x6d, 0x69, 0x72, 0x68, 0x61, 0x6e, 0x35, 0x38, 0x0, // @159 "github.com/Emirhan58"
    0x43, 0x6f, 0x6e, 0x74, 0x61, 0x63, 0x74, 0x20, 0x49, 0x6e, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0, // @180 "Contact Information"
    0x4d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x2c, 0x20, 0x63, 0x61, 0x72, 0x74, 0x20, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x0, // @200 "Market, cart system"
    0x54, 0x6f, 0x70, 0x20, 0x53, 0x63, 0x6f, 0x72, 0x65, 0x3a, 0x20, 0x2, 0x0, // @220 "Top Score: <>"
    0x42, 0x61, 0x63, 0x6b, 0x65, 0x6e, 0x64, 0x20, 0x44, 0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70, 0x65, 0x72, 0x0, // @233 "Backend Developer"
    0x2b, 0x39, 0x30, 0x20, 0x35, 0x35, 0x33, 0x2d, 0x30, 0x35, 0x35, 0x2d, 0x38, 0x32, 0x35, 0x38, 0x0, // @251 "+90 553-055-8258"
    0x43, 0x6f, 0x6d, 0x70, 0x75, 0x74, 0x65, 0x72, 0x20, 0x53, 0x63, 0x69, 0x65, 0x6e, 0x63, 0x65, 0x0, // @268 "Computer Science"
    0x57, 0x6f, 0x72, 0x6b, 0x20, 0x45, 0x78, 0x70, 0x65, 0x72, 0x69, 0x65, 0x6e, 0x63, 0x65, 0x0, // @285 "Work Experience"
    0x77, 0x77, 0x77, 0x2e, 0x7a, 0x61, 0x70, 0x74, 0x69, 0x6e, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x0, // @301 "www.zaptine.com"
    0x52, 0x65, 0x6c, 0x61, 0x74, 0x65, 0x64, 0x20, 0x53, 0x6b, 0x69, 0x6c, 0x6c, 0x73, 0x0, // @317 "Related Skills"
    0x45, 0x6d, 0x69, 0x72, 0x68, 0x61, 0x6e, 0x20, 0x4b, 0x61, 0x79, 0x61, 0x0, // @332 "Emirhan Kaya"
    0x5a, 0x61, 0x70, 0x74, 0x69, 0x6e, 0x65, 0x2c, 0x20, 0x74, 0x68, 0x65, 0x0, // @345 "Zaptine, the"
    0x46, 0x6c, 0x61, 0x70, 0x70, 0x79, 0x20, 0x42, 0x69, 0x72, 0x64, 0x0, // @358 "Flappy Bird"
    0x4a, 0x61, 0x76, 0x61, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x0, // @370 "Javascript"
    0x4d, 0x79, 0x20, 0x52, 0x65, 0x73, 0x75, 0x6d, 0x65, 0x0, // @381 "My Resume"
    0x57, 0x65, 0x62, 0x20, 0x70, 0x61, 0x6e, 0x65, 0x6c, 0x0, // @391 "Web panel"
    0x48, 0x54, 0x4d, 0x4c, 0x2f, 0x43, 0x53, 0x53, 0x0, // @401 "HTML/CSS"
    0x54, 0x6f, 0x75, 0x63, 0x68, 0x47, 0x46, 0x58, 0x0, // @410 "TouchGFX"
    0x5a, 0x61, 0x70, 0x74, 0x69, 0x6e, 0x65, 0x2c, 0x0, // @419 "Zaptine,"
    0x50, 0x79, 0x74, 0x68, 0x6f, 0x6e, 0x0, // @428 "Python"
    0x2e, 0x4e, 0x45, 0x54, 0x0, // @435 ".NET"
    0x43, 0x2b, 0x2b, 0x0, // @440 "C++"
    0x50, 0x48, 0x50, 0x0, // @444 "PHP"
    0x30, 0x0, // @448 "0"
    0x31, 0x0, // @450 "1"
    0x32, 0x0, // @452 "2"
    0x43, 0x0 // @454 "C"
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const uint32_t indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
