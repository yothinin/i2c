#include <avr/io.h>
#include "i2c.h"
#include "LCD_I2C.h"
#include <util/delay.h>

int main(void){
  i2c_init();
  i2c_start();
  i2c_write(0x70);
  lcd_init();
  while(1){
    lcd_cmd(0x80);
    lcd_msg("CFromZero");
    lcd_cmd(0xC3);
    lcd_msg("I2C");
  }
}
