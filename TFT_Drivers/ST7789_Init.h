
// This is the command sequence that initialises the ST7789 driver

// Configure ST7789 display

{
static const uint8_t PROGMEM
  st7789[] = {
    9,
    TFT_SWRST, TFT_INIT_DELAY, 150,
    TFT_SLPOUT, TFT_INIT_DELAY, 255,
    TFT_COLMOD, 1+TFT_INIT_DELAY, 0x55, 10,
    TFT_MADCTL, 1, TFT_MAD_RGB,
    TFT_CASET, 4, 0x00, 0x00, 0x00, 0xF0,
    TFT_PASET, 4, 0x00, 0x00, 0x00, 0xF0,
    TFT_INVON, TFT_INIT_DELAY, 10,
    TFT_NORON, TFT_INIT_DELAY, 10,
    TFT_DISPON, TFT_INIT_DELAY, 255
    };

    commandList(st7789);
}
// End of ST7789 display configuration

