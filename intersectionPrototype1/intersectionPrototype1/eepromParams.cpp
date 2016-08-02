// 
// 
// 

#include "eepromParams.h"

namespace eepromParams {
	uint8_t TF_KP = 8;
	uint8_t TF_KD = 12;
	uint16_t TF_thresh = 150;



	uint16_t* KP_SAVE_ADDRESS = (uint16_t*) 0;
	uint16_t* KD_SAVE_ADDRESS = (uint16_t*) 2;
	uint16_t *THRESH_SAVE_ADDRESS	 = (uint16_t*)4;

	//recall that uint16_t is 16 bits, therefore 2 bytes
	void saveVal(uint16_t* address, uint8_t val) {
		eeprom_write_word(address, val);
	}

	 uint16_t readVal(uint16_t *address){
		return eeprom_read_word(address);
	}
}
