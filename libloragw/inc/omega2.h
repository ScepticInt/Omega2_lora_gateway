/*
 * omega2.h
 *
 *  Created on: Mar 17, 2017
 *      Author: TLubkowitz
 */

#ifndef _OMEGA2_H_
#define _OMEGA2_H_

/* Human readable platform definition */
#define DISPLAY_PLATFORM "Lorank"

/* parameters for native spi */
#define SPI_SPEED		8000000
#define SPI_DEV_PATH	"/dev/spidev32766.1"
#define SPI_CS_CHANGE   1

/* parameters for a FT2232H */
#define VID		        0x0403
#define PID		        0x6014

#endif /* _OMEGA2_H_ */
