# API Core

## Features Summary for D51

Feature            | 51P (128 pin)                         | 51N (100 pin)                         | 51J (64 pin)                          | 51G (48 pin)
-------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------
Board Variants     | Generic 51P                           | Generic 51N                           | MattairTech Xeno, Generic 51J         | Xeno Mini, Generic 51G
Processor          | 120 MHz 32-bit ARM Cortex M4F         | 120 MHz 32-bit ARM Cortex M4F         | 120 MHz 32-bit ARM Cortex M4F         | 120 MHz 32-bit ARM Cortex M4F
Processor Features | FPU, DSP, MPU                         | FPU, DSP, MPU                         | FPU, DSP, MPU                         | FPU, DSP, MPU
Flash Memory       | Up to 1MB with RWW support and cache  | Up to 1MB with RWW support and cache  | Up to 1MB with RWW support and cache  | Up to 512KB with RWW support and cache
SRAM               | Up to 256KB (8KB backup SRAM), ECC    | Up to 256KB (8KB backup SRAM), ECC    | Up to 256KB (8KB backup SRAM), ECC    | Up to 192KB (8KB backup SRAM), ECC
Digital Pins       | 99                                    | 81                                    | 51                                    | 37
Analog Inputs      | 2 ADCs, 16/16 channels, 12-bit, 1MSPS | 2 ADCs, 16/12 channels, 12-bit, 1MSPS | 2 ADCs, 16/8 channels, 12-bit, 1MSPS  | 2 ADCs, 16/4 channels, 12-bit, 1MSPS
Analog Outputs     | Two 12-bit, 1MSPS                     | Two 12-bit, 1MSPS                     | Two 12-bit, 1MSPS                     | Two 12-bit, 1MSPS
PWM Outputs        | 17 TCC channels, 16 TC channels       | 17 TCC channels, 16 TC channels       | 17 TCC channels, 12 TC channels       | 13 TCC channels, 8 TC channels
Interrupts         | 16                                    | 16                                    | 16                                    | 16
USB                | Full Speed Device and Host            | Full Speed Device and Host            | Full Speed Device and Host (not C21)  | Full Speed Device and Host
SERCOM             | 8 (UART/SPI/I2C)                      | 8 (UART/SPI/I2C)                      | 6 (UART/SPI/I2C)                      | 6 (UART/SPI/I2C)
QSPI / SDHC        | 1 QSPI / 2 SDHC                       | 1 QSPI / 2 SDHC                       | 1 QSPI / 1 SDHC                       | 1 QSPI / 1 SDHC
I2S                | One RX, one TX, two clocks            | One RX, one TX, two clocks            | One RX, one TX, two clocks            | One RX, one TX, two clocks
Voltage            | 1.71V - 3.63V                         | 1.71V - 3.63V                         | 1.71V - 3.63V                         | 1.71V - 3.63V
I/O Pin Current    | 8mA sink/source @ 3.3V                | 8mA sink/source @ 3.3V                | 8mA sink/source @ 3.3V                | 8mA sink/source @ 3.3V


## Features Summary for D21/L21/C21/D11

Feature		| 21J (64 pin)		        	| 21G (48 pin)	        		| 21E (32 pin)				| D11 (24, 20, or 14 pin)
----------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------
Board Variants	| MattairTech Xeno, Generic 21J	        | Xeno Mini, Arduino Zero, Generic 21G	| MT-D21E, Generic 21E			| MT-D11, Generic D11D14AM, Generic D11D14AS, Generic D11C14A
Processor	| 48 MHz 32-bit ARM Cortex M0+		| 48 MHz 32-bit ARM Cortex M0+		| 48 MHz 32-bit ARM Cortex M0+		| 48 MHz 32-bit ARM Cortex M0+
Flash Memory	| Up to 256KB (L21/C21 have RWW)	| Up to 256KB (L21/C21 have RWW)	| Up to 256KB (L21/C21 have RWW)	| 16 KB (4KB used by bootloader)
SRAM		| Up to 32KB (plus <=8KB LPSRAM on L21)	| Up to 32KB (plus <=8KB LPSRAM on L21)	| Up to 32KB (plus <=8KB LPSRAM on L21)	| 4 KB
Digital Pins	| 52 (51 for L21)			| 38 (37 for L21)			| 26 (25 for L21)			| 24-pin: 21, 20-pin: 17, 14-pin: 11
Analog Inputs	| 18 channels, 12-bit			| 14 channels, 12-bit			| 10 channels, 12-bit			| 24-pin: 10, 20-pin: 8, 14-pin: 5 (12-bit)
Analog Outputs	| One 10-bit (two 12-bit on L21)	| One 10-bit (two 12-bit on L21)	| One 10-bit (two 12-bit on L21)	| One 10-bit
PWM Outputs	| 18					| 14					| 14					| 8 (6 for 14-pin)
Interrupts	| 16					| 16					| 16					| 8 (7 for 14-pin)
USB		| Full Speed Device and Host (not C21)	| Full Speed Device and Host (not C21)	| Full Speed Device and Host (not C21)	| Full Speed Device
SERCOM*		| 6					| 6					| 4 (6 for L21)				| 3 (2 for 14-pin)
UART (Serial)*	| Up to 3 (will add more later)		| Up to 6				| Up to 4 (up to 6 for L21)		| Up to 2
SPI*		| Up to 2 (will add more later)		| Up to 2				| Up to 2				| Up to 1
I2C (WIRE)*	| Up to 2 (will add more later)		| Up to 2				| Up to 2				| Up to 1
I2S		| Present on the D21 only		| Present on the D21 only		| Present on the D21 only		| Not present
Voltage		| 1.62V-3.63V (2.7V-5.5V for the C21)	| 1.62V-3.63V (2.7V-5.5V for the C21)	| 1.62V-3.63V (2.7V-5.5V for the C21)	| 1.62V-3.63V
I/O Pin	Current	| D21: 7mA, L21: 5mA, C21: 6mA@5V	| D21: 7mA, L21: 5mA, C21: 6mA@5V	| D21: 7mA, L21: 5mA, C21: 6mA@5V	| 7 mA

*Note that the maximum number of UART/SPI/I2C is the number of SERCOM. The number listed above for UART/SPI/I2C indicated how many are currently configurable through the Arduino IDE menu.*


## Tools Menu Additions

Depending on the board variant, different menu options will appear in the Tools menu. 


### Microcontroller Menu

This menu will appear with boards that have multiple microcontroller options.


### Clock Source Menu

There are up to four clock source choices, depending on board variant and microcontroller. They are:

* 32KHZ_CRYSTAL (default)
* HIGH_SPEED_CRYSTAL
* INTERNAL_OSCILLATOR
* INTERNAL_USB_CALIBRATED_OSCILLATOR

See Clock Source section for more information.


### Bootloader Size Menu

With the D51, D21, L21, and C21, the bootloader size can be configured as:

* 8KB_BOOTLOADER (default)
* 16KB_BOOTLOADER
* NO_BOOTLOADER

With the D11, the bootloader size can be configured as:

* 4KB_BOOTLOADER (default)
* NO_BOOTLOADER

Choose NO_BOOTLOADER if not using a bootloader (an external programmer will be used for sketch upload).


### Serial Config Menu

This menu is used to select different combinations of serial peripherals. It adds additional UART, SPI,
and WIRE instances. This is also useful for the D11, which has a reduced pin count and number of SERCOMs.
It can also be used to reduce FLASH and SRAM usage by selecting fewer UART peripherals, which are
instantiated in the core, rather than only when including a library (like SPI and WIRE). Note that with
options where there is more than one SPI or WIRE, the additional instances will consume a small amount
of RAM, but neither the peripheral nor the pins are configured until begin() method is called (thus, the
pins can be used for other purposes).

Use the ASCII art rendering at the top of the README.md file of the board variant used in order to
determine the mapping of instances to pins. When USB CDC is enabled, Serial refers to SerialUSB,
otherwise it refers to Serial1 (TX1/RX1).


### USB Config Menu

This menu will appear with all microcontrollers except the C21, which does not have USB. The options are:

* CDC_ONLY (default)
* CDC_HID
* WITH_CDC
* HID_ONLY
* WITHOUT_CDC
* USB_DISABLED

Choose an option that best matches your code and library usage. Each option results in a different USB PID.
Choose an option with CDC if you want auto-reset to function, or the serial monitor over USB. If CDC is
not enabled, Serial will refer to Serial1 instead of SerialUSB. These options can be used to optimize FLASH
and SRAM usage by allowing CDC to be disabled (or USB completely disabled).


### Timer PWM Frequency

This menu will appear with all microcontrollers. It allows selection of the PWM frequency used by all timers.
When using a timer in 16-bit mode, calls to analogWrite() are made with 8-bit resolution by default. For 16-bit
writes, call analogWriteResolution(16) first. Because of the faster timer clock used with the D51, the 1465Hz
setting is 16-bit. Older cores used the 187500Hz (8-bit) setting, which is now available in the menu. Note that
some motor controllers can be inefficient or overheat with higher PWM frequencies, however, using a higher
frequency can quiet down noisy ceramic capacitors or reduce flicker with LED lighting applications.
The menu options are:

* 732.4Hz (16-bit)
* 366.2Hz (16-bit)
* 244.1Hz (16-bit)
* 183.1Hz (16-bit)
* 146.5Hz (16-bit)
* 122.1Hz (16-bit)
* 104.6Hz (16-bit)
* 81.38Hz (16-bit)
* 61.04Hz (16-bit)
* 30.52Hz (16-bit)
* 187500Hz (8-bit)
* 93750Hz (8-bit)
* 62500Hz (8-bit)
* 37500Hz (8-bit)
* 20833Hz (8-bit)
* 12500Hz (8-bit)
* 7500Hz (8-bit)
* 4166Hz (8-bit)
* 2930Hz (8-bit)
* 1465Hz (8-bit, 16-bit for D51)


### Floating Point

By default, when using the Print or String classes to print or convert floating point numbers to character arrays, singles are automatically promoted
to doubles. This consumes a lot of code space. Use the options in this menu to make use of single floating point versions of Print and String, which
will reduce code space, increase performance, and also allow the D51 to make use of the hardware FPU (in the case of Print). See Floating Point Notes.

* Print & String use auto-promoted doubles only
* Print uses separate singles and doubles
* String uses separate singles and doubles
* Print & String use separate singles and doubles


### Build Options (config.h)

This menu will appear with all microcontrollers. It is currently used to enable or disable including config.h,
which contains several defines that are used primarily to reduce code space. config.h should be edited first.
Please see [config.h](https://github.com/ElectronicCats/ArduinoCore-samd/tree/master/config.h) for documentation on the defines. The menu options are:

* config.h disabled
* config.h enabled (mostly code size reductions)

#### Current Build Options

* PIN_DESCRIPTION_TABLE_SIMPLE
* PIN_PERIPHERAL_CHECKS_DISABLED
* ADC_NO_INIT_IF_UNUSED
* DAC_NO_INIT_IF_UNUSED
* DISABLE_ADC_CALIBRATION
* TRUST_RESET_DEFAULTS
* NO_ADDITIONAL_GCLKS
* NO_OSC_HS_GCLK
* NO_DELAY_HIGH_WORD
* LONG_LONG_PRINT_FLOAT



## Clock Source

There are up to four clock source choices, depending on board features and microcontroller. Since currently
the cpu runs at 48MHz (or 120MHz with the D51), the PLL or DFLL must be used (the SAMC can use OSC48M).

#### 32KHZ_CRYSTAL (default)
* Uses both XOSC32K and FDPLL96M (FDPLL200M with the D51)
* High long-term accuracy, slow startup, medium current (PLL)

#### HIGH_SPEED_CRYSTAL
* Uses both XOSC and FDPLL96M (FDPLL200M with the D51)
* High accuracy, medium startup, high current (XOSC and PLL)

#### INTERNAL_OSCILLATOR
* Uses DFLL48M in open-loop mode (SAMC uses OSC48M)
* Low accuracy, fast startup, medium-low current (low current with SAMC)

#### INTERNAL_USB_CALIBRATED_OSCILLATOR (not available with SAMC)
* Uses DFLL48M in closed-loop mode
* High accuracy, medium-fast startup, medium current

### SAMD21 / SAMD11

Source          | Frequency Range                       | Supply Current (max.) | Startup Time typ. (max.)      | Notes, jitter, accuracy, other differences
----------------|---------------------------------------|-----------------------|-------------------------------|--------------------------------------------------------
XOSC            | 0.4MHz-32MHz crystal                  | 307uA (552uA) AGC on  | 5K-14K cycles (10K-48K)       | up to 32MHz digital clock input, Supply current based on 16MHz crystal
XOSC32K         | 32.768KHz typical crystal             | 1.22uA (2.19uA)       | 28K cycles (30K)              | 32.768KHz typical digital clock input
OSC32K          | 32.27-33.26KHz (28.50-34.74KHz)       | 0.67uA (1.32uA)       | 1 cycle (2 cycles)            | 
OSCULP32K       | 31.29-34.57KHz (25.55-38.01KHz)       | 0.125uA max.          | 10 cycles                     | 
OSC8M           | 7.94-8.06MHz (7.80-8.16MHz)           | 64uA                  | 2.1us (3us)                   | 
FDPLL96M        | 32KHz-2MHz in, 48MHz-96MHz out        | 500uA (700uA)         | Lock: 25us (50us) @ 2MHz in   | 1.5% (2%) period jitter (32KHz in, 48MHz out), Lock: 1.3ms (2ms) @ 32KHz in
DFLL48M open    | 47MHz-49MHz out                       | 403uA (453uA)         | 8us (9us)                     | 
DFLL48M closed  | 0.73-33KHz in, 47.96-47.98MHz out     | 425uA (482uA)         | Lock: 200us (500us)           | 0.42ns max. jitter

### SAMD51

Source          | Frequency Range                       | Supply Current (max.)  | Startup Time typ. (max.)      | Notes, jitter, accuracy, other differences
----------------|---------------------------------------|------------------------|-------------------------------|--------------------------------------------------------
XOSC (x2)       | 8MHz-48MHz crystal                    | 250uA (810uA) ENALC on | 37K cycles (62K)              | Up to 48MHz digital clock input, supply current based on 16MHz crystal
XOSC32K         | 32.768KHz crystal                     | 1.9uA (3uA)            | 9K cycles (23K)               | Use high gain setting
OSCULP32K       | 32.10-33.42KHz                        | Not Specified.         | Not Specified                 | 27.12-37.68KHz across temperature
FDPLL200M (x2)  | 32KHz-3.2MHz in, 96MHz-200MHz out     | 0.9mA (1.3mA) @ 96MHz  | Lock: 54us (95us) @ 3.2MHz in | 1.9% (2.7%) period jitter (32KHz in, 96MHz out), Datasheet lock time in ms.
DFLL48M open    | 47.2MHz-48.8MHz                       | 400uA (850uA)          | 4.3us (7us)                   | 45.8MHz-49.3MHz across temperature
DFLL48M closed  | 47.972MHz typical                     | 400uA (850uA)          | Lock: 429us (1145us)          | 0.42ns max. jitter, 0.73-33KHz input

### SAML21

Source          | Frequency Range                       | Supply Current (max.) | Startup Time typ. (max.)      | Notes, jitter, accuracy, other differences
----------------|---------------------------------------|-----------------------|-------------------------------|--------------------------------------------------------
XOSC            | 0.4MHz-32MHz crystal                  | 293uA (393uA) AGC on  | 5K-14K cycles (10K-48K)       | up to 24MHz digital clock input, Supply current based on 16MHz crystal
XOSC32K         | 32.768KHz typical crystal             | 0.311uA (2.19uA)      | 25K cycles (82K)              | 32.768KHz typical digital clock input (1MHz max.)
OSC32K          | 32.57-33.05KHz (28.58-34.72KHz)       | 0.54uA (1.10uA)       | 1 cycle (2 cycles)            | 
OSCULP32K       | 31.77-34.03KHz (26.29-38.39KHz)       | Not Specified.        | Not Specified                 | 
OSC16M          | 15.75-16.24MHz                        | 141uA (169uA)         | 1.4us (3.1us)                 | Wake up time: 0.12us (0.25us)
FDPLL96M        | 32KHz-2MHz in, 48MHz-96MHz out        | 454uA (548uA)         | Lock: 25us (35us) @ 2MHz in   | 1.9% (4%) period jitter (32KHz in, 48MHz out), Lock: 1ms (2ms) @ 32KHz in
DFLL48M open    | 46.6MHz-49MHz out                     | 286uA                 | 8.3us (9.1us)                 | 
DFLL48M closed  | 0.73-33KHz in, 47.96-47.98MHz out     | 362uA                 | Lock: 200us (700us)           | 0.51ns max. jitter

### SAMC21

Source          | Frequency Range                       | Supply Current (max.) | Startup Time typ. (max.)      | Notes, jitter, accuracy, other differences
----------------|---------------------------------------|-----------------------|-------------------------------|--------------------------------------------------------
XOSC            | 0.4MHz-32MHz crystal                  | 429uA (699uA) AGC on  | 6K-12K cycles (20K-48K)       | up to 48MHz digital clock input, Supply current based on 16MHz crystal
XOSC32K         | 32.768KHz typical crystal             | 1.53uA (2.84uA)       | 16K cycles (24K)              | 32.768KHz typical digital clock input
OSC32K          | 32.11-33.43KHz (25.55-37.36KHz)       | 0.864uA (1.08uA)      | 1 cycle (2 cycles)            | 
OSCULP32K       | 30.96-34.57KHz (22.93-38.99KHz)       | Not Specified.        | Not Specified                 | 
OSC48M          | 47.04-48.96MHz                        | 87uA (174uA)          | 22.5us (25.5us)               | 
FDPLL96M        | 32KHz-2MHz in, 48MHz-96MHz out        | 536uA (612uA)         | Not Yet Specified             | 


### External 32.768KHz Crystal

The PLL will be used with the 32.768KHz crystal. PLL_FRACTIONAL_ENABLED can be defined,
which will result in a more accurate 48MHz output frequency at the expense of increased
jitter.

### External High-Speed Crystal

HS_CRYSTAL_FREQUENCY_HERTZ must be defined with the external crystal frequency in Hertz.
The crystal frequency must be between 400000Hz and 32000000Hz (800000Hz and 48000000Hz
with the D51). The PLL will be used. PLL_FRACTIONAL_ENABLED can be defined, which will
result in a more accurate 48MHz output frequency at the expense of increased jitter. If
PLL_FAST_STARTUP is defined, the crystal will be divided down to 1MHz - 2MHz, rather
than 32KHz - 64KHz, before being multiplied by the PLL. This will result in a faster
lock time for the PLL, however, it will also result in a less accurate PLL output
frequency if the crystal is not divisible (without remainder) by 1MHz. In this case,
define PLL_FRACTIONAL_ENABLED as well. By default, PLL_FAST_STARTUP is disabled.
PLL_FAST_STARTUP is also useful for USB host mode applications. See datasheet USB
electrical characteristics. The crystal frequency must be at least 1000000Hz when
PLL_FAST_STARTUP is defined.

### Internal Oscillator

The DFLL will be used in open-loop mode, except with the C21 which lacks a DFLL, so the
internal 48MHz RC oscillator is used instead. NVM_SW_CALIB_DFLL48M_FINE_VAL is the fine
calibration value for DFLL open-loop mode. The coarse calibration value is loaded from
NVM OTP (factory calibration values).

### Internal Oscillator with USB Calibration

This is available for the D51, D21, D11, or L21. It will also use the DFLL in open-loop
mode, except when connected to a USB port with data lines (and not suspended), then it
will calibrate against the USB SOF signal. NVM_SW_CALIB_DFLL48M_FINE_VAL is the fine
calibration value for DFLL open-loop mode. The coarse calibration value is loaded from
NVM OTP (factory calibration values).

### Clock Generators Currently Used

The D51 has 12 generators and all others have 9 generators. Unused generators are automatically stopped to reduce power consumption.

0. MAIN - Used for the CPU/APB clocks. With the D51, it runs at either 96MHz (divided by 2 in MCLK) or 120MHz undivided. Otherwise, it runs at 48MHz.
1. XOSC - The high speed crystal is connected to GCLK1 in order to use the 16-bit prescaler.
2. OSCULP32K - Initialized at reset for WDT (D21 and D11 only). Not used by core.
3. OSC_HS - 8MHz from internal RC oscillator (D21, D11, and L21 only). Setup by core but not used.
4. 48MHz - Used for USB or any peripheral that has a 48MHz (60MHz for D51) maximum peripheral clock. GCLK0 is now only 96MHz or 120MHz with the D51.
5. TIMERS - Used by the timers for controlling PWM frequency. Can be up to 48MHz (up to 96MHz with the D51).
6. 192MHz - Used only by D51 for any peripheral that has a 200MHz maximum peripheral clock (note that GCLK8 - GCLK11 must be <= 100MHz).
7. I2S - Used by D51 and D21 for I2S peripheral. This define is not currently used. The generator is defined in each variant.h.
8. I2S1 - Used by D51 and D21 for I2S peripheral. This define is not currently used. The generator is defined in each variant.h.
9. DFLL - Used only by D51 (only when the cpu is 120MHz) with CLOCKCONFIG_INTERNAL or CLOCKCONFIG_INTERNAL_USB to generate 2MHz output for the PLL input.
10. 96MHz - Used only by D51 for any peripheral that has a 100MHz maximum peripheral clock.
11. UNUSED11 - Unused for now. D51 only.


## Analog Reference

### D21 / D11
* AR_DEFAULT uses 1/2X gain on each input and a Vcc/2 (1.65V) reference supporting measurements up to Vcc.
* The external reference should be between 1.0V and VDDANA-0.6V.

### D51
* AR_DEFAULT = AR_INTERNAL_INTVCC2 (Vcc)
* Both AR_INTREF and AR_INTERNAL1V0 has the same effect as AR_INTREF_1V0.
* The external reference should be between 1v and VDDANA-0.4v=2.9v.
* INTVCC1 and INTVCC2 as used in Arduino are actually INTVCC0 and INTVCC1 in the datasheet.
* DAC cannot use VDDANA due to errata. Using unbuffered external reference (REFA, connected externally to VDDANA) instead.

### L21
* AR_DEFAULT = AR_INTERNAL_INTVCC2 (Vcc)
* Both AR_INTREF and AR_INTERNAL1V0 has the same effect as AR_INTREF_1V0.
* The external reference should be between 1v and VDDANA-0.6v=2.7v.

### C21
* AR_DEFAULT = AR_INTERNAL_INTVCC2 (Vcc)
* Both AR_INTREF and AR_INTERNAL1V0 has the same effect as AR_INTREF_1V024.
* The external reference should be between 1v and VDDANA-0.6v=2.7v.

**Warning : The maximum IO voltage is Vcc (up to 3.6 volts for the D51/D21/D11/L21, 5V for the C21)**

### Reference Selection Table

D21 / D11               | Volts      | D51                   | Volts     | L21                   | Volts     | C21                   | Volts
------------------------|------------|-----------------------|-----------|-----------------------|-----------|-----------------------|--------
AR_DEFAULT              | 1/2 VCC*   | AR_DEFAULT            | VCC       | AR_DEFAULT            | VCC       | AR_DEFAULT            | VCC
AR_INTERNAL1V0          | 1.00V      | AR_INTREF             | 1.00V     | AR_INTREF             | 1.00V     | AR_INTREF             | 1.024V
AR_INTERNAL_INTVCC0     | 1/1.48 VCC | AR_INTREF_1V0         | 1.00V     | AR_INTREF_1V0         | 1.00V     | AR_INTREF_1V024       | 1.024V
AR_INTERNAL_INTVCC1     | 1/2 VCC    | AR_INTREF_1V1         | 1.10V     | AR_INTREF_1V1         | 1.10V     | AR_INTREF_2V048       | 2.048V
AR_EXTERNAL_REFA        | REFA       | AR_INTREF_1V2         | 1.20V     | AR_INTREF_1V2         | 1.20V     | AR_INTREF_4V096       | 4.096V
AR_EXTERNAL_REFB        | REFB       | AR_INTREF_1V25        | 1.25V     | AR_INTREF_1V25        | 1.25V     | AR_INTERNAL1V0        | 1.024V
---                     |            | AR_INTREF_2V0         | 2.00V     | AR_INTREF_2V0         | 2.00V     | AR_INTERNAL_INTVCC0   | 1/1.6 VCC
---                     |            | AR_INTREF_2V2         | 2.20V     | AR_INTREF_2V2         | 2.20V     | AR_INTERNAL_INTVCC1   | 1/2 VCC
---                     |            | AR_INTREF_2V4         | 2.40V     | AR_INTREF_2V4         | 2.40V     | AR_INTERNAL_INTVCC2   | VCC
---                     |            | AR_INTREF_2V5         | 2.50V     | AR_INTREF_2V5         | 2.50V     | AR_EXTERNAL_REFA      | REFA
---                     |            | AR_INTERNAL1V0        | 1.00V     | AR_INTERNAL1V0        | 1.00V     | AR_EXTERNAL_DAC       | DAC
---                     |            | AR_INTERNAL_INTVCC1   | 1/2 VCC   | AR_INTERNAL_INTVCC0   | 1/1.6 VCC |                       |
---                     |            | AR_INTERNAL_INTVCC2   | VCC       | AR_INTERNAL_INTVCC1   | 1/2 VCC   |                       |
---                     |            | AR_EXTERNAL_REFA      | REFA      | AR_INTERNAL_INTVCC2   | VCC       |                       |
---                     |            | AR_EXTERNAL_REFB      | REFB      | AR_EXTERNAL_REFA      | REFA      |                       |
---                     |            | AR_EXTERNAL_REFC      | REFC      | AR_EXTERNAL_REFB      | REFB      |                       |

### Common Settings

* AR_INTERNAL = AR_INTERNAL_INTVCC0 (AR_INTERNAL_INTVCC1 with D51)
* AR_INTERNAL2V23 = AR_INTERNAL_INTVCC0 (2.23V only when Vcc = 3.3V and only with the D21/D11)
* AR_INTERNAL2V06 = AR_INTERNAL_INTVCC0 (2.06V only when Vcc = 3.3V and only with the L21/C21)
* AR_INTERNAL1V65 = AR_INTERNAL_INTVCC1 (1.65V only when Vcc = 3.3V)
* AR_EXTERNAL = AR_EXTERNAL_REFA

*Note that with the D51, INTVCC1 and INTVCC2 as used in Arduino are actually INTVCC0 and INTVCC1 in the datasheet.*
*AR_DEFAULT uses 1/2X gain on each input and a Vcc/2 (1.65V) reference supporting measurements up to Vcc.*


## Floating Point Notes

### Floating Point Changes

* Added support for the hardware FPU of the D51
  * Added -mfloat-abi=softfp (this will use hardware fpu with soft-float calling conventions) and -mfpu=fpv4-sp-d16 compiler flags for the D51 only.
  * Fixed build.mathlib build flag (arm_cortexM4lf_math or -arm_cortexM0l_math), added -DARM_MATH_CM0PLUS or -DARM_MATH_CM4
* Added optional support for single precision floating point numbers (in addition to the existing support for doubles) in both the Print and String classes,
  configurable from the Tools menu. This can save a great deal of code space. Thanks to Soren Kuula and Dmitry Xmelkov for their previous work.
  * Print::print and Print::println now have separate overloaded methods for float and doubles (previously, floats were promoted to doubles).
    Additionally, to support this, Print::printDouble() has been added (Print::printFloat() used to promote to double, but now uses floats).
  * Added Stream::parseDouble() to Stream.cpp, and pgm_read_double(), pgm_read_double_near(), and pgm_read_double_far() to avr/pgmspace.h.
  * Added avr/ftostrf.c and avr/ftostrf.h to support single precision floats (avr/dtostrf.c is still double precision). It is similar to avr-libc version.
    Additionally, to support this, added avr/dtoa_conv.h, avr/dtoa_prf.c. Copyright (c) 2005, Dmitry Xmelkov.
    Additionally, added avr/ftoa_engine.h, and avr/ftoa_engine.c. Copyright (c) 2005, Dmitry Xmelkov. Rewritten in C by Soren Kuula (from Ardupilot project).
    These are used by String::String and String::concat, which are overloaded, so ftostrf.c or dtostrf.c is selected automatically based on the value argument.
  * Added -fsingle-precision-constant and -Wdouble-promotion compiler flags
* Added support for 64-bit integer types to the Print class (long long and unsigned long long)
* Added optional support for printing floating point numbers using the Print class with values greater/less than +/-4,294,967,295. It now supports +/-18,446,744,073,709,551,615.

### Hints for Using Floating Point Numbers

* Single and double floats are 32bit and 64bit respectively. To save code space and increase performance, use single precision when possible, especially when printing.
* Use the "Print & String use separate singles and doubles" setting in the Tools->Floating Point menu.
* Use single precision in order to use the hardware FPU of the D51. When using double precision, the FPU will not be used (it will be done in software).
* The Print class uses floating point math (with four operators: *, /, +, and -) when printing the number. The single precision version, if enabled, will use the FPU of the D51.
* The String class uses either sprintf() when using double precision (using asm(".global _printf_float") to enable the floating point version, which is large), or
  uses the new ftoa_engine.c to directly convert the IEEE single precision number format to a printable form in base10, when using single precision. The ftoa_engine was used in
  [AVR Libc](https://www.nongnu.org/avr-libc/), written in assembly by Dmitry Xmelkov. It was rewritten in C by Soren Kuula (from the [Ardupilot project](https://github.com/ArduPilot/ardupilot/blob/master/libraries/AP_HAL/utility/ftoa_engine.cpp)).
* Because the compiler flag -fsingle-precision-constant is now set, all constants and literals will be single precision. If double precision is required, append a 'd' after
  the number (ie: 1.2345678d). If this does not work, you may need to remove the -fsingle-precision-constant flag. Consider using the -Wfloat-conversion flag.
* When using math.h functions, be sure to use the single precision versions when using single-precision math. They are appended by an 'f' (ie: sinf()).

### Floating Point Size Comparison Table

Configuration and MCU             | TEST_SINGLE_PRINT | TEST_DOUBLE_PRINT | TEST_SINGLE_STRING | TEST_DOUBLE_STRING
----------------------------------|-------------------|-------------------|--------------------|-------------------
FLOAT_BOTH_DOUBLES_ONLY - D21     |       9504        |       8144        |       16848        |       16688
FLOAT_BOTH_SINGLES_DOUBLES - D21  |       4176        |       8144        |       4016         |       16688
FLOAT_BOTH_DOUBLES_ONLY - D51     |       2968        |       2952        |       11144        |       11152
FLOAT_BOTH_SINGLES_DOUBLES - D51  |       544         |       2952        |       3264         |       11152

*Values indicate additional size of option in bytes. The base test sketch was 864 bytes larger with the D51 when no floating point was used.*


## Chip Specific Notes

### SAMD21

* When USB is disabled, pullups will be enabled on PA24 and PA24 to avoid excessive current consumption (<1mA) due to floating pins.
  Note that it is not necessary to enable pull resistors on any other pins that are floating.
  Errata: Disable pull resistors on PA24 and PA25 manually before switching to a peripheral.

### SAMD51

* The D51 cpu can operate at 120MHz or 48MHz, which is selectable in the Tools->Microcontroller menu. When operating at 120MHz, both
  48MHz and 96MHz clock generators are set up. The timers, ADC, DAC, and USB peripherals are clocked at 48MHz, while the SERCOMs and
  external interrupt controller are clocked at 96MHz. A future timer library will use faster clocks speeds.
* The ARM Cortex M4/M4F architecture supports more interrupts, with lower latency than the M0/M0+. Most peripherals have more than one
  interrupt mapped to the NVIC. When compiling for the D51, this core will use seperate NVIC interrupts for each external interrupt,
  as well as for every other peripheral that has multiple NVIC interrupts (USB device and host, UART, I2C, etc.).
* There are two DACs, DAC0 and DAC1. Both are supported. Because changing the configuration of one DAC requires disabling both,
  there will be a short period when the second DAC is disabled. The L21 DACs have a refresh setting which are enabled in this core.
* The DACs cannot use the VDDANA reference due to errata. This core uses the external reference REFA instead (unbuffered). The REFA pin
  (A3) must be connected externally to VDDANA.
* There are two SAR ADCs. Both are supported. The PinDescription table determines the peripheral instance and pin mapping.
* The analog reference has additional options on the D51. See Analog Reference section.
* The SAMD51 has double-buffered TCs, which is supported in the core.
* INTVCC1 and INTVCC2 as used in Arduino are actually INTVCC0 and INTVCC1 in the datasheet.
* pinPeripheral now handles disabling the DACs (if active). Note that on the L21, the DAC output would
  interfere with other peripherals if left enabled, even if the anaolog peripheral is not selected.
* Five Flash Wait States are inserted automatically (NVMCTRL_CTRLA_AUTOWS) at 120MHz (or one wait state at 48MHz).
* The D51 has a 4KB code/data cache which is enabled by default in this core by using CORTEX_M_CACHE_ENABLED define in the boards variant.h.
* The D51 and C21 use the minimum sampling time so that rail-to-rail and offset compensation works. The D21, D11, and L21 use the
  maximum sampling time.
* Hardware errata: Do not use AR_INTREF_* with the ADC or DAC below 0C. It is OK to use AR_INTERNAL_*, AR_EXTERNAL_*, or AR_DEFAULT.
* Hardware errata: VBAT mode is not functional.
* Hardware errata: Do not alter BOD33 Disable fuse bit (use register instead).
* Consult the SAM_D5x_E5x_Family_Errata document from Microchip for details and for more information on other errata.

### SAML21

* There are two DACs, DAC0 and DAC1. Both are supported. Because changing the configuration of one DAC requires disabling both,
  there will be about a 40us period when the second DAC is disabled. Most of this time is due to an errata that requires a delay of
  at least 30us when turning off the DAC while refresh is on. The L21 DACs have a refresh setting which are enabled in this core.
* The analog reference has additional options on the L21 and C21. See Analog Reference section.
* On the L21, SERCOM5 is in a low power domain. The Fm+ and HS modes of I2C (wire) are not supported.
* The SAML and SAMC have double-buffered TCs, which are supported in the core.
* The CHANGE and RISING interrupt modes on pin A31 do not seem to work properly on the L21.
* The L21 has two performance levels that affect power consumption. During powerup, the L21 starts at the lowest performance level (PL0).
  The startup code changes to the highest performance level (PL2) in order to support 48MHz and USB (among other things).
* Two Flash Wait States are inserted for the L21 and C21 (the D21/D11 use one wait state).
* pinPeripheral now handles disabling the DAC (if active). Note that on the L21, the DAC output would
  interfere with other peripherals if left enabled, even if the anaolog peripheral is not selected.

### SAMC21

* There are two SAR ADCs. Both are supported. The PinDescription table determines the peripheral instance and pin mapping.
* The analog reference has additional options on the L21 and C21. See Analog Reference section.
* The SAML and SAMC have double-buffered TCs, which are supported in the core.
* Two Flash Wait States are inserted for the L21 and C21 (the D21/D11 use one wait state).
* The C21 requires internal pull resistors to be activated on floating pins to minimize power consumption (not needed on D21/D11 or L21).
* The C21 uses the minimum sampling time so that rail-to-rail and offset compensation works. Offset compensation adds 3 ADC clock cycles,
  so the total is 4 clock cycles. The D21, D11, and L21 use the maximum sampling time.

### SAMD11

* The D11D has three SERCOM. The D11C has two sercom (no sercom2).
* TONE: TC5 does not exist on the D11. Using TC2 instead (TC1 on the D11C14 as TC2 is not routed to pins). It will conflict with the 2 associated TC analogWrite() pins.
* When USB is disabled, pullups will be enabled on PA24 and PA24 to avoid excessive current consumption (<1mA) due to floating pins.
  Note that it is not necessary to enable pull resistors on any other pins that are floating.
  Errata: Disable pull resistors on PA24 and PA25 manually before switching to a peripheral.
* See below for tips on reducing code space.



## Reducing SRAM/FLASH Usage

TODO: Disable usb, disable serial, enable config.h, use PIN_DESCRIPTION_TABLE_SIMPLE and PIN_MAP_COMPACT with the D11, don't use double precision (see above), use no bootloader
Most of this can be done from the Tools menu, and by editing config.h.

### Code Size and RAM Usage (1.6.5-mt2)

TODO: This is old. Update this, maybe just for D11.

Sketch and Configuration    | MT-D21E (Flash + RAM) | MT-D11 (Flash + RAM)
----------------------------|-----------------------|-----------------------
Blink (CDC + HID + UART)    |     7564 + 1524       |     7452 + 1424
Blink (CDC + UART)          |     6588 + 1496       |     6484 + 1396
Blink (CDC Only)            |     5248 + 1304       |     5192 + 1300
Blink (UART Only)           |     3828 + 336        |     3716 + 236
Blink (No USB or UART)      |     2472 + 144        |     2416 + 140
Datalogger (No USB or UART) |     10340 + 948       |     10260 + 944

* 180 bytes of flash can be saved on the MT-D11 by using PIN_MAP_COMPACT (see 'New PinDescription Table' below).
* Datalogger compiled without USB or UART support, but with SPI and SD (with FAT filesystem) support. Serial output was disabled.
* Note that USB CDC is required for auto-reset into the bootloader to work (otherwise, manually press reset twice in quick succession).
* USB uses primarily 3 buffers totaling 1024 bytes. The UART uses a 96 byte buffer. The banzai() function (used for auto-reset) resides in RAM and uses 72 bytes.
* Any combination of CDC, HID, or UART can be used (or no combination), by using the Tools->Communication menu.


### Detailed Memory Usage Output After Compilation

The flash used message at the end of compilation is not correct. The number shown
represents the .text segment only. However, Flash usage = .text + .data segments
(RAM usage = .data + .bss segments). In this release, two programs are run at the
end of compilation to provide more detailed memory usage. To enable this output, go
to File->Preferences and beside "Show verbose output during:", check "compilation".

Just above the normal flash usage message, is the output from the size utility.
However, this output is also incorrect, as it shows .text+.data in the .text field,
but 0 in the .data field. However, the .text field does show the total flash used.
The .data field can be determined by subtracting the value from the normal flash
usage message (.text) from the value in the .text field (.text+.data). The .bss
field is correct.

Above the size utility output is the output from the nm utility. The values on the
left are in bytes. The letters stand for: T(t)=.text, D(d)=.data, B(b)=.bss, and
everything else (ie: W) resides in flash (in most cases).


## Serial Monitor

To print to the Serial Monitor over USB, use 'Serial'. Serial refers to SerialUSB (Serial1 and Serial2 are UARTs).
Unlike most Arduino boards (ie. Uno), SAMD boards do not automatically reset when the serial monitor is opened.
To see what your sketch outputs to the serial monitor from the beginning, the sketch must wait for the SerialUSB
port to open first. Add the following to setup():

```
while (!Serial) ;
```

Remember that if the sketch needs to run without SerialUSB connected, another approach must be used.
You can also reset the board manually with the Reset button if you wish to restart your sketch. However, pressing
the Reset button will reset the chip, which in turn will reset USB communication. This interruption means
that if the serial monitor is open, it will be necessary to close and re-open it to restart communication.

When USB CDC is not enabled, Serial will instead refer to Serial1, which is the first UART.

## New PinDescription Table

Technical information on the new PinDescription table format is now in the README.md
that accompanies each board variant. See board variants above.

### Note that in 1.6.18-beta-b1 a new compact table format was added.
The standard PinDescription table uses 12 bytes per pin. Define PIN_DESCRIPTION_TABLE_SIMPLE
to use a more compact format that uses only 4 bytes per pin (currently only available
for the D11 chips). In this case, the PinType, PinAttribute, and GCLKCCL columns are not used
(they are not required). Additionally, the SetPortPin() and SetExtIntADC() macros are used to
pack Port and Pin into the PortPin column, and ExtInt and ADCChannelNumber into the ExtIntADC
column. Note that external libraries that reference the PinDescription table directly (uncommon)
will no longer work. This define can be combined with the PIN_MAP_COMPACT define, which
is available in variant.h of the D11 variants. This can save from 10's to over 200 bytes.

### Note that a new column (GCLKCCL) was added for 1.6.8-beta-b0.
MATTAIRTECH_ARDUINO_SAMD_VARIANT_COMPLIANCE in variant.h is used to track versions.
If using board variant files with the old format, the new core will still read the
table the old way, losing any new features introduced by the new column. Additionally,
new definitions have been added for D51, L21, and C21 support.

### Each pin can have multiple functions.
The PinDescription table describes how each of the pins can be used by the Arduino
core. Each pin can have multiple functions (ie: ADC input, digital output, PWM,
communications, etc.), and the PinDescription table configures which functions can
be used for each pin. This table is mainly accessed by the pinPeripheral function in
wiring_private.c, which is used to attach a pin to a particular peripheral function.
The communications drivers (ie: SPI, I2C, and UART), analogRead(), analogWrite(),
analogReference(), attachInterrupt(), and pinMode() all call pinPeripheral() to
verify that the pin can perform the function requested, and to configure the pin for
that function. Most of the contents of pinMode() are now in pinPeripheral().

### Pin Mapping
There are different ways that pins can be mapped. Typically, there is no relation
between the arduino pin number used, and the actual port pin designator. Thus, the 
pcb must be printed with the arduino numbering, otherwise, if the port pin is printed,
a cross reference table is needed to find the arduino pin number. However, this results
in the least amount of space used by the table. Another method, used by default by the
MT-D21E and MT-D11, maps Arduino pin numbers to the actual port pin number (ie: Arduino
pin 28 = Port A28). This works well when there is only one port (or if the PORTB pins
are used for onboard functions and not broken out). PIO_NOT_A_PIN entries must be added
for pins that are used for other purposes or for pins that do not exist (especially the
D11), so some FLASH space may be wasted. For an example of both types, see variant.cpp
from the MT-D11 variant. The Xeno combines both methods, using the actual port pin 
designators from both PORTA and PORTB for arduino numbers 0-31 (ie: B1=1, A2=2), then
using arduino numbering only above 31. For 0-31 only one pin from PORTA or PORTB can be
used, leaving the other pin for some number above 31.

**See Board Variants above for more technical information on the PinDescription table.**

**See [WVariant.h](https://github.com/ElectronicCats/ArduinoCore-samd/tree/master/cores/arduino/WVariant.h) for the definitions used in the table.**
