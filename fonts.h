#ifndef FONTS_H_
#define FONTS_H_

#include <stdint.h>

// This structure describes a single character's display information
typedef struct
{
	const uint8_t widthBits;			// width, in bits (or pixels), of the character
	const uint8_t heightBits;			// height, in bits (or pixels), of the character
	const uint16_t offset;				// offset of the character's bitmap, in bytes, into the the FONT_INFO's data array
	
} FONT_CHAR_INFO;	

// Describes a single font
typedef struct
{
	const uint8_t 			heightPixels;// height, in pixels of the font's characters
	const uint8_t 			startChar;	// the first character in the font (e.g. in charInfo and data)
	const uint8_t 			endChar;		// the last character in the font
	const uint8_t				spacePixels;// number of pixels that a space character takes up
	const FONT_CHAR_INFO*	charInfo;	// pointer to array of char information
	const uint8_t*			data;				// pointer to generated array of character visual representation
		
} FONT_INFO;	

/* Font data for Verdana 9pt */
extern const uint8_t verdana_9ptBitmaps[];
extern const FONT_INFO verdana_9ptFontInfo;
extern const FONT_CHAR_INFO verdana_9ptDescriptors[];

/* Font data for Verdana 18pt */
extern const uint8_t verdana_18ptBitmaps[];
extern const FONT_INFO verdana_18ptFontInfo;
extern const FONT_CHAR_INFO verdana_18ptDescriptors[];


#endif /* FONTS_H_ */

