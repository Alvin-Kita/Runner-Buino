// ------------------
// PALETTE ET SPRITES
// ------------------
// transcodées avec https://gamebuino.com/fr/creations/image-transcoder

const Color PALETTE[] = {

    (Color) 0x0000, // 0x0
    (Color) 0x9cf3, // 0x1
    (Color) 0xffff, // 0x2
    (Color) 0xb926, // 0x3
    (Color) 0xe371, // 0x4
    (Color) 0x49e5, // 0x5
    (Color) 0xa324, // 0x6
    (Color) 0xec46, // 0x7
    (Color) 0xf70d, // 0x8
    (Color) 0x2a49, // 0x9
    (Color) 0x4443, // 0xa
    (Color) 0xa664, // 0xb
    (Color) 0x1926, // 0xc
    (Color) 0x02b0, // 0xd
    (Color) 0x351e, // 0xe
    (Color) 0xb6fd  // 0xf

};

// SPRITES HERO

const uint8_t IMAGE_DATA_HERO1[] = {
    
    // metadata

    8,    // frame width
    16,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x0a, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xea,
    0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0x00, 0x00, 0xaa,
    0xaa, 0x00, 0x00, 0x00,
    0xaa, 0xaa, 0x00, 0x00,
    0xaa, 0xaa, 0xa0, 0x00,
    0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0x0a,
    0xaa, 0xaa, 0xaa, 0x00,
    0xaa, 0x0a, 0x0a, 0x00,
    0xaa, 0x00, 0x0a, 0xa0,
    0xaa, 0xa0, 0x0a, 0xaa

};

const uint8_t IMAGE_DATA_HERO2[] = {
  
    // metadata

    8,    // frame width
    16,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x0a, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xea,
    0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0x00, 0x00, 0xaa,
    0xaa, 0x00, 0x00, 0x00,
    0xaa, 0x00, 0x00, 0x00,
    0xaa, 0xaa, 0x00, 0x00,
    0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0x0a,
    0xaa, 0xaa, 0xaa, 0x00,
    0xaa, 0xaa, 0xa0, 0x00,
    0x0a, 0xaa, 0xaa, 0x0a,
    0x0a, 0xa0, 0x0a, 0xaa,
    0x0a, 0xaa, 0xa0, 0xa0

};

// SPRITES DECOR

const uint8_t IMAGE_DATA_SKY[] = {

    // metadata

    8,    // frame width
    24,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88,
    0x78, 0x88, 0x78, 0x78,
    0x88, 0x88, 0x88, 0x88,
    0x78, 0x78, 0x78, 0x78,
    0x87, 0x88, 0x88, 0x88,
    0x78, 0x78, 0x78, 0x78,
    0x88, 0x87, 0x88, 0x87,
    0x78, 0x78, 0x78, 0x78,
    0x87, 0x87, 0x87, 0x87,
    0x78, 0x78, 0x78, 0x78,
    0x87, 0x87, 0x87, 0x87,
    0x78, 0x77, 0x78, 0x78,
    0x87, 0x87, 0x87, 0x87,
    0x77, 0x77, 0x77, 0x77,
    0x87, 0x87, 0x87, 0x87,
    0x77, 0x77, 0x77, 0x77,
    0x87, 0x87, 0x77, 0x87,
    0x77, 0x77, 0x77, 0x77,
    0x87, 0x77, 0x87, 0x77,
    0x77, 0x77, 0x77, 0x77,
    0x77, 0x77, 0x77, 0x77,
    0x77, 0x77, 0x77, 0x77

};

const uint8_t IMAGE_DATA_FOREGROUND[] = {

    // metadata

    16,   // frame width
    8,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x76, 0x66, 0x67, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x66, 0x66, 0x66, 0x77, 0x76, 0x66, 0x77,
    0x76, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x67,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66

};

// SPRITES OBSTACLES

const uint8_t IMAGE_DATA_HOLE[] = {

    // metadata

    16,   // frame width
    8,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00,
    0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
    0x0c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0x0c, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,
    0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00,
    0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};

const uint8_t IMAGE_DATA_CACTUS_LG[] = {

    // metadata

    8,    // frame width
    16,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x09, 0x00, 0x00,
    0x00, 0x09, 0x50, 0x00,
    0x99, 0x09, 0x50, 0x00,
    0x95, 0x09, 0x50, 0x95,
    0x95, 0x09, 0x50, 0x95,
    0x95, 0x09, 0x50, 0x95,
    0x95, 0x09, 0x55, 0x95,
    0x95, 0x59, 0x55, 0x50,
    0x09, 0x99, 0x50, 0x00,
    0x00, 0x09, 0x50, 0x00,
    0x00, 0x09, 0x50, 0x00,
    0x00, 0x09, 0x50, 0x00,
    0x00, 0x09, 0x5c, 0xc0,
    0x00, 0x09, 0x5c, 0xcc,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00

};

const uint8_t IMAGE_DATA_CACTUS_SM[] = {

    // metadata

    8,    // frame width
    8,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x99, 0x00, 0x00,
    0x09, 0x95, 0x50, 0x00,
    0x09, 0x55, 0x50, 0x00,
    0x09, 0x55, 0x50, 0x00,
    0x09, 0x95, 0xc0, 0x00,
    0x00, 0x95, 0xcc, 0xc0,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00

};

// SPRITES UI

const uint8_t IMAGE_DATA_HEART[] = {

    // metadata

    8,    // frame width
    8,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x00, 0x00, 0x00,
    0x03, 0x30, 0x33, 0x00,
    0x33, 0x33, 0x33, 0x30,
    0x33, 0x33, 0x33, 0x30,
    0x03, 0x33, 0x33, 0x00,
    0x00, 0x33, 0x30, 0x00,
    0x00, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00

};