#ifndef _CORE_H_
#define _CORE_H_

typedef enum valueType {
    SEVEN = 0,
    EIGHT = 1,
    NINE  = 2,
    JACK  = 3,
    QUEEN = 4,
    KING  = 5,
    TEN   = 6,
    ACE   = 7
} valueType;

typedef enum colorType {
    SPADE    = 0,
    HEART    = 1,
    DIAMOND  = 2,
    CLOVER   = 3,
    ALLTRUMP = 4,
    NOTRUMP  = 5
} colorType;

typedef struct cardType {
    valueType value;
    colorType color;
} cardType;

const int CARD_POINTS_TABLE[4][8];

#endif