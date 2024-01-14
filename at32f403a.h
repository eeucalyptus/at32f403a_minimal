#ifndef AT32F403A_H_
#define AT32F403A_H_
#include <stdint.h>

#define ACC_BASE             0x40015800 /* 0x40015800-0x40015bff: 1kB HICK Auto Clock Calibration */
#define ADC1_BASE            0x40012400 /* 0x40012400-0x400127ff: 1kB Analog to digital converter */
#define ADC2_BASE            0x40012800 /* 0x40012800-0x40012bff: 1kB Analog to digital converter */
#define ADC3_BASE            0x40013c00 /* 0x40013c00-0x40013fff: 1kB Analog to digital converter */
#define BPR_BASE             0x40006c04 /* 0x40006c04-0x40006fff: 1kB Battery powered register */
#define CAN1_BASE            0x40006400 /* 0x40006400-0x400067ff: 1kB Can controller area network */
#define CAN2_BASE            0x40006800 /* 0x40006800-0x40006bff: 1kB CAN2 */
#define CRC_BASE             0x40023000 /* 0x40023000-0x400233ff: 1kB CRC calculation unit */
#define CRM_BASE             0x40021000 /* 0x40021000-0x400213ff: 1kB Clock and reset management */
#define DAC_BASE             0x40007400 /* 0x40007400-0x400077ff: 1kB Digital to analog converter */
#define DEBUG_BASE           0xe0042000 /* 0xe0042000-0xe00423ff: 1kB Debug support */
#define DMA1_BASE            0x40020000 /* 0x40020000-0x400203ff: 1kB DMA controller */
#define DMA2_BASE            0x40020400 /* 0x40020400-0x400207ff: 1kB DMA2 */
#define EXINT_BASE           0x40010400 /* 0x40010400-0x400107ff: 1kB EXINT */
#define FLASH_BASE           0x40022000 /* 0x40022000-0x400223ff: 1kB Flash memory controler */
#define GPIOA_BASE           0x40010800 /* 0x40010800-0x40010bff: 1kB General purpose IO */
#define GPIOB_BASE           0x40010c00 /* 0x40010c00-0x40010fff: 1kB GPIOB */
#define GPIOC_BASE           0x40011000 /* 0x40011000-0x400113ff: 1kB GPIOC */
#define GPIOD_BASE           0x40011400 /* 0x40011400-0x400117ff: 1kB GPIOD */
#define GPIOE_BASE           0x40011800 /* 0x40011800-0x40011bff: 1kB GPIOE */
#define I2C1_BASE            0x40005400 /* 0x40005400-0x400057ff: 1kB Inter integrated circuit */
#define I2C2_BASE            0x40005800 /* 0x40005800-0x40005bff: 1kB I2C2 */
#define I2C3_BASE            0x40015c00 /* 0x40015c00-0x40015fff: 1kB I2C3 */
// #define I2S2_EXT_BASE        0x40016c00 /* 0x40016c00-0x40016fff: 1kB I2S2_EXT */
// #define I2S3_EXT_BASE        0x40017000 /* 0x40017000-0x400173ff: 1kB I2S3_EXT */
#define IOMUX_BASE           0x40010000 /* 0x40010000-0x400103ff: 1kB IO MUX function */
#define PWC_BASE             0x40007000 /* 0x40007000-0x400073ff: 1kB Power control */
#define RTC_BASE             0x40002800 /* 0x40002800-0x40002bff: 1kB Real time clock */
#define SDIO1_BASE           0x40018000 /* 0x40018000-0x400183ff: 1kB Secure digital input/output interface */
#define SDIO2_BASE           0x40023400 /* 0x40023400-0x400237ff: 1kB SDIO2 */
#define SPI1_BASE            0x40013000 /* 0x40013000-0x400133ff: 1kB Serial peripheral interface */
#define SPI2_BASE            0x40003800 /* 0x40003800-0x40003bff: 1kB SPI2 */
#define SPI3_BASE            0x40003c00 /* 0x40003c00-0x40003fff: 1kB SPI3 */
#define SPI4_BASE            0x40004000 /* 0x40004000-0x400043ff: 1kB SPI4 */
#define TMR10_BASE           0x40015000 /* 0x40015000-0x400153ff: 1kB General purpose timer */
#define TMR11_BASE           0x40015400 /* 0x40015400-0x400157ff: 1kB TMR11 */
#define TMR12_BASE           0x40001800 /* 0x40001800-0x40001bff: 1kB TMR12 */
#define TMR13_BASE           0x40001c00 /* 0x40001c00-0x40001fff: 1kB TMR13 */
#define TMR14_BASE           0x40002000 /* 0x40002000-0x400023ff: 1kB TMR14 */
#define TMR1_BASE            0x40012c00 /* 0x40012c00-0x40012fff: 1kB Advanced timer */
#define TMR2_BASE            0x40000000 /* 0x40000000-0x400003ff: 1kB General purpose timer */
#define TMR3_BASE            0x40000400 /* 0x40000400-0x400007ff: 1kB General purpose timer */
#define TMR4_BASE            0x40000800 /* 0x40000800-0x40000bff: 1kB TMR4 */
#define TMR5_BASE            0x40000c00 /* 0x40000c00-0x40000fff: 1kB TMR5 */
#define TMR6_BASE            0x40001000 /* 0x40001000-0x400013ff: 1kB Basic timer */
#define TMR7_BASE            0x40001400 /* 0x40001400-0x400017ff: 1kB TMR7 */
#define TMR8_BASE            0x40013400 /* 0x40013400-0x400137ff: 1kB TMR8 */
#define TMR9_BASE            0x40014c00 /* 0x40014c00-0x40014fff: 1kB General purpose timer */
#define UART4_BASE           0x40004c00 /* 0x40004c00-0x40004fff: 1kB Universal asynchronous receiver transmitter */
#define UART5_BASE           0x40005000 /* 0x40005000-0x400053ff: 1kB Universal asynchronous receiver transmitter */
#define UART7_BASE           0x40016400 /* 0x40016400-0x400167ff: 1kB Universal asynchronous receiver transmitter */
#define UART8_BASE           0x40016800 /* 0x40016800-0x40016bff: 1kB Universal asynchronous receiver transmitter */
#define USART1_BASE          0x40013800 /* 0x40013800-0x40013bff: 1kB Universal synchronous asynchronous receiver transmitter */
#define USART2_BASE          0x40004400 /* 0x40004400-0x400047ff: 1kB USART2 */
#define USART3_BASE          0x40004800 /* 0x40004800-0x40004bff: 1kB USART3 */
#define USART6_BASE          0x40016000 /* 0x40016000-0x400163ff: 1kB USART6 */
// #define USBFS_BASE           0x40005c00 /* 0x40005c00-0x40005fff: 1kB Universal serial bus full-speed device interface */
#define WDT_BASE             0x40003000 /* 0x40003000-0x400033ff: 1kB Watchdog */
#define WWDT_BASE            0x40002c00 /* 0x40002c00-0x40002fff: 1kB Window watchdog */
#define XMC_BASE             0xa0000000 /* 0xa0000000-0xa0000fff: 4kB Flexible static memory controller */

#define ACC	        ((ACC_TypeDef *) ACC_BASE)
#define ADC1	    ((ADC_TypeDef *) ADC1_BASE)
#define ADC2	    ((ADC_TypeDef *) ADC2_BASE)
#define ADC3	    ((ADC_TypeDef *) ADC3_BASE)
#define BPR	        ((BPR_TypeDef *) BPR_BASE)
#define CAN1	    ((CAN_TypeDef *) CAN1_BASE)
#define CAN2	    ((CAN_TypeDef *) CAN2_BASE)
#define CRC	        ((CRC_TypeDef *) CRC_BASE)
#define CRM	        ((CRM_TypeDef *) CRM_BASE)
#define DAC	        ((DAC_TypeDef *) DAC_BASE)
#define DEBUG	    ((DEBUG_TypeDef *) DEBUG_BASE)
#define DMA1	    ((DMA_TypeDef *) DMA1_BASE)
#define DMA2	    ((DMA_TypeDef *) DMA2_BASE)
#define EXINT	    ((EXINT_TypeDef *) EXINT_BASE)
#define FLASH	    ((FLASH_TypeDef *) FLASH_BASE)
#define GPIOA	    ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB	    ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC	    ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD	    ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE	    ((GPIO_TypeDef *) GPIOE_BASE)
#define I2C1	    ((I2C_TypeDef *) I2C1_BASE)
#define I2C2	    ((I2C_TypeDef *) I2C2_BASE)
#define I2C3	    ((I2C_TypeDef *) I2C3_BASE)
#define I2S2_EXT	((I2S_TypeDef *) I2S2_EXT_BASE)
#define I2S3_EXT	((I2S_TypeDef *) I2S3_EXT_BASE)
#define IOMUX	    ((IOMUX_TypeDef *) IOMUX_BASE)
#define PWC	        ((PWC_TypeDef *) PWC_BASE)
#define RTC	        ((RTC_TypeDef *) RTC_BASE)
#define SDIO1	    ((SDIO_TypeDef *) SDIO1_BASE)
#define SDIO2	    ((SDIO_TypeDef *) SDIO2_BASE)
#define SPI1	    ((SPI_TypeDef *) SPI1_BASE)
#define SPI2	    ((SPI_TypeDef *) SPI2_BASE)
#define SPI3	    ((SPI_TypeDef *) SPI3_BASE)
#define SPI4	    ((SPI_TypeDef *) SPI4_BASE)
#define TMR10	    ((TMR_TypeDef *) TMR10_BASE)
#define TMR11	    ((TMR_TypeDef *) TMR11_BASE)
#define TMR12	    ((TMR_TypeDef *) TMR12_BASE)
#define TMR13	    ((TMR_TypeDef *) TMR13_BASE)
#define TMR14	    ((TMR_TypeDef *) TMR14_BASE)
#define TMR1	    ((TMR_TypeDef *) TMR1_BASE)
#define TMR2	    ((TMR_TypeDef *) TMR2_BASE)
#define TMR3	    ((TMR_TypeDef *) TMR3_BASE)
#define TMR4	    ((TMR_TypeDef *) TMR4_BASE)
#define TMR5	    ((TMR_TypeDef *) TMR5_BASE)
#define TMR6	    ((TMR_TypeDef *) TMR6_BASE)
#define TMR7	    ((TMR_TypeDef *) TMR7_BASE)
#define TMR8	    ((TMR_TypeDef *) TMR8_BASE)
#define TMR9	    ((TMR_TypeDef *) TMR9_BASE)
#define UART4	    ((UART_TypeDef *) UART4_BASE)
#define UART5	    ((UART_TypeDef *) UART5_BASE)
#define UART7	    ((UART_TypeDef *) UART7_BASE)
#define UART8	    ((UART_TypeDef *) UART8_BASE)
#define USART1	    ((USART_TypeDef *) USART1_BASE)
#define USART2	    ((USART_TypeDef *) USART2_BASE)
#define USART3	    ((USART_TypeDef *) USART3_BASE)
#define USART6	    ((USART_TypeDef *) USART6_BASE)
#define USBFS	    ((USBFS_TypeDef *) USBFS_BASE)
#define WDT	        ((WDT_TypeDef *) WDT_BASE)
#define WWDT	    ((WWDT_TypeDef *) WWDT_BASE)
#define XMC	        ((XMC_TypeDef *) XMC_BASE)

typedef struct {
   volatile  uint32_t STS;
   volatile  uint32_t CTRL1;
   volatile  uint32_t CTRL2;
   volatile  uint32_t C1;
   volatile  uint32_t C2;
   volatile  uint32_t C3;
} ACC_TypeDef;

typedef struct {
   volatile  uint32_t STS;
   volatile  uint32_t CTRL1;
   volatile  uint32_t CTRL2;
   volatile  uint32_t SPT1;
   volatile  uint32_t SPT2;
   volatile  uint32_t PCDTO1;
   volatile  uint32_t PCDTO2;
   volatile  uint32_t PCDTO3;
   volatile  uint32_t PCDTO4;
   volatile  uint32_t VMHB;
   volatile  uint32_t VMLB;
   volatile  uint32_t OSQ1;
   volatile  uint32_t OSQ2;
   volatile  uint32_t OSQ3;
   volatile  uint32_t PSQ;
   volatile  uint32_t PDT1;
   volatile  uint32_t PDT2;
   volatile  uint32_t PDT3;
   volatile  uint32_t PDT4;
   volatile  uint32_t ODT; 
} ADC_TypeDef;

typedef struct
{
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t DT1;
   volatile  uint32_t DT2;
   volatile  uint32_t DT3;
   volatile  uint32_t DT4;
   volatile  uint32_t DT5;
   volatile  uint32_t DT6;
   volatile  uint32_t DT7;
   volatile  uint32_t DT8;
   volatile  uint32_t DT9;
   volatile  uint32_t DT10;
   volatile  uint32_t RTCCAL;
   volatile  uint32_t CTRL;
   volatile  uint32_t CTRLSTS;
   volatile  uint32_t RESERVED1[2];
   volatile  uint32_t DT11;
   volatile  uint32_t DT12;
   volatile  uint32_t DT13;
   volatile  uint32_t DT14;
   volatile  uint32_t DT15;
   volatile  uint32_t DT16;
   volatile  uint32_t DT17;
   volatile  uint32_t DT18;
   volatile  uint32_t DT19;
   volatile  uint32_t DT20;
   volatile  uint32_t DT21;
   volatile  uint32_t DT22;
   volatile  uint32_t DT23;
   volatile  uint32_t DT24;
   volatile  uint32_t DT25;
   volatile  uint32_t DT26;
   volatile  uint32_t DT27;
   volatile  uint32_t DT28;
   volatile  uint32_t DT29;
   volatile  uint32_t DT30;
   volatile  uint32_t DT31;
   volatile  uint32_t DT32;
   volatile  uint32_t DT33;
   volatile  uint32_t DT34;
   volatile  uint32_t DT35;
   volatile  uint32_t DT36;
   volatile  uint32_t DT37;
   volatile  uint32_t DT38;
   volatile  uint32_t DT39;
   volatile  uint32_t DT40;
   volatile  uint32_t DT41;
   volatile  uint32_t DT42;
} BPR_TypeDef;

typedef struct {
   volatile  uint32_t MCTRL;
   volatile  uint32_t MSTS;
   volatile  uint32_t TSTS;
   volatile  uint32_t RF0;
   volatile  uint32_t FR1;
   volatile  uint32_t INTEN;
   volatile  uint32_t ESTS;
   volatile  uint32_t BTMG;
   volatile  uint32_t RESERVED0[88];
   volatile  uint32_t TMI0;
   volatile  uint32_t TMC0;
   volatile  uint32_t TMDTL0;
   volatile  uint32_t TMDTH0;
   volatile  uint32_t TMI1;
   volatile  uint32_t TMC1;
   volatile  uint32_t TMDTL1;
   volatile  uint32_t TMDTH1;
   volatile  uint32_t TMI2;
   volatile  uint32_t TMC2;
   volatile  uint32_t TMDTL2;
   volatile  uint32_t TMDTH2;
   volatile  uint32_t RFI0;
   volatile  uint32_t RFC0;
   volatile  uint32_t RFDTL0;
   volatile  uint32_t RFDTH0;
   volatile  uint32_t RFI1;
   volatile  uint32_t RFC1;
   volatile  uint32_t RFDTL1;
   volatile  uint32_t RFDTH1;
   volatile  uint32_t RESERVED1[12];
   volatile  uint32_t FCTRL;
   volatile  uint32_t FMCFG;
   volatile  uint32_t RESERVED2;
   volatile  uint32_t FSCFG;
   volatile  uint32_t RESERVED3;
   volatile  uint32_t FRF;
   volatile  uint32_t RESERVED4;
   volatile  uint32_t FACFG;
   volatile  uint32_t RESERVED5[8];
   volatile  uint32_t FB0F1;
   volatile  uint32_t FB0F2;
   volatile  uint32_t FB1F1;
   volatile  uint32_t FB1F2;
   volatile  uint32_t FB2F1;
   volatile  uint32_t FB2F2;
   volatile  uint32_t FB3F1;
   volatile  uint32_t FB3F2;
   volatile  uint32_t FB4F1;
   volatile  uint32_t FB4F2;
   volatile  uint32_t FB5F1;
   volatile  uint32_t FB5F2;
   volatile  uint32_t FB6F1;
   volatile  uint32_t FB6F2;
   volatile  uint32_t FB7F1;
   volatile  uint32_t FB7F2;
   volatile  uint32_t FB8F1;
   volatile  uint32_t FB8F2;
   volatile  uint32_t FB9F1;
   volatile  uint32_t FB9F2;
   volatile  uint32_t FB10F1;
   volatile  uint32_t FB10F2;
   volatile  uint32_t FB11F1;
   volatile  uint32_t FB11F2;
   volatile  uint32_t FB12F1;
   volatile  uint32_t FB12F2;
   volatile  uint32_t FB13F1;
   volatile  uint32_t FB13F2; 
} CAN_TypeDef;

typedef struct 
{
   volatile  uint32_t DT;
   volatile  uint32_t CDT;
   volatile  uint32_t CTRL;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t IDT;
} CRC_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL;
   volatile  uint32_t CFG;
   volatile  uint32_t CLKINT;
   volatile  uint32_t APB2RST;
   volatile  uint32_t APB1RST;
   volatile  uint32_t AHBEN;
   volatile  uint32_t APB2EN;
   volatile  uint32_t APB1EN;
   volatile  uint32_t BPDC;
   volatile  uint32_t CTRLSTS;
   volatile  uint32_t AHBRST;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t MISC1;
   volatile  uint32_t RESERVED1[7];
   volatile  uint32_t MISC3;
   volatile  uint32_t MISC2;
   volatile  uint32_t RESERVED2[1];
   volatile  uint32_t INTMAP; 
    
} CRM_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL;
   volatile  uint32_t SWTRG;
   volatile  uint32_t D1DTH12R;
   volatile  uint32_t D1DTH12L;
   volatile  uint32_t D1DTH8R;
   volatile  uint32_t D2DTH12R;
   volatile  uint32_t D2DTH12L;
   volatile  uint32_t D2DTH8R;
   volatile  uint32_t DDTH12R;
   volatile  uint32_t DDTH12L;
   volatile  uint32_t DDTH8R;
   volatile  uint32_t D1ODT;
   volatile  uint32_t D2ODT;
} DAC_TypeDef;



typedef struct 
{
   volatile  uint32_t DEBUG_IDCODE;
   volatile  uint32_t DEBUG_CTRL;
} DEBUG_TypeDef;



typedef struct 
{
   volatile  uint32_t STS;
   volatile  uint32_t CLR;
   volatile  uint32_t C1CCTRL;
   volatile  uint32_t C1DTCNT;
   volatile  uint32_t C1PADDR;
   volatile  uint32_t C1MADDR;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t C2CTRL;
   volatile  uint32_t C2DTCNT;
   volatile  uint32_t C2PADDR;
   volatile  uint32_t C2MADDR;
   volatile  uint32_t RESERVED1[1];
   volatile  uint32_t C3CTRL;
   volatile  uint32_t C3DTCNT;
   volatile  uint32_t C3PADDR;
   volatile  uint32_t C3MADDR;
   volatile  uint32_t RESERVED2[1];
   volatile  uint32_t C4CTRL;
   volatile  uint32_t C4DTCNT;
   volatile  uint32_t C4PADDR;
   volatile  uint32_t C4MADDR;
   volatile  uint32_t RESERVED3[1];
   volatile  uint32_t C5CTRL;
   volatile  uint32_t C5DTCNT;
   volatile  uint32_t C5PADDR;
   volatile  uint32_t C5MADDR;
   volatile  uint32_t RESERVED4[1];
   volatile  uint32_t C6CTRL;
   volatile  uint32_t C6DTCNT;
   volatile  uint32_t C6PADDR;
   volatile  uint32_t C6MADDR;
   volatile  uint32_t RESERVED5[1];
   volatile  uint32_t C7CTRL;
   volatile  uint32_t C7DTCNT;
   volatile  uint32_t C7PADDR;
   volatile  uint32_t C7MADDR;
   volatile  uint32_t RESERVED6[4];
   volatile  uint32_t SRC_SEL0;
   volatile  uint32_t SRC_SEL1;
} DMA_TypeDef;

typedef struct 
{
   volatile  uint32_t INTEN;
   volatile  uint32_t EVTEN;
   volatile  uint32_t POLCFG1;
   volatile  uint32_t POLCFG2;
   volatile  uint32_t SWTRG;
   volatile  uint32_t INTSTS;
} EXINT_TypeDef;



typedef struct 
{
   volatile  uint32_t PSR;
   volatile  uint32_t UNLOCK;
   volatile  uint32_t USD_UNLOCK;
   volatile  uint32_t STS;
   volatile  uint32_t CTRL;
   volatile  uint32_t ADDR;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t USD;
   volatile  uint32_t EPPS;
   volatile  uint32_t RESERVED1[8];
   volatile  uint32_t UNLOCK2;
   volatile  uint32_t RESERVED2[1];
   volatile  uint32_t STS2;
   volatile  uint32_t CTRL2;
   volatile  uint32_t ADDR2;
   volatile  uint32_t RESERVED3[11];
   volatile  uint32_t UNLOCK3;
   volatile  uint32_t SELECT;
   volatile  uint32_t STS3;
   volatile  uint32_t CTRL3;
   volatile  uint32_t ADDR3;
   volatile  uint32_t DA;
   volatile  uint32_t RESERVED4[12];
   volatile  uint32_t SLIB_STS0;
   volatile  uint32_t SLIB_STS1;
   volatile  uint32_t SLIB_PWD_CLR;
   volatile  uint32_t SLIB_MISC_STS;
   volatile  uint32_t SLIB_SET_PWD;
   volatile  uint32_t SLIB_SET_RANGE;
   volatile  uint32_t RESERVED5[3];
   volatile  uint32_t SLIB_UNLOCK;
   volatile  uint32_t CRC_CTRL;
   volatile  uint32_t CRC_CHKR;
} FLASH_TypeDef;

typedef struct 
{
   volatile  uint32_t CFGLR;
   volatile  uint32_t CFGHR;
   volatile  uint32_t IDT;
   volatile  uint32_t ODT;
   volatile  uint32_t SCR;
   volatile  uint32_t CLR;
   volatile  uint32_t WPR;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t SRCTR;
   volatile  uint32_t RESERVED1[6];
   volatile  uint32_t HDRV;
} GPIO_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL1;
   volatile  uint32_t CTRL2;
   volatile  uint32_t OADDR1;
   volatile  uint32_t OADDR2;
   volatile  uint32_t DT;
   volatile  uint32_t STS1;
   volatile  uint32_t STS2;
   volatile  uint32_t CLKCTRL;
   volatile  uint32_t TMRISE;
} I2C_TypeDef;

// typedef struct 
// {

// } I2S_TypeDef;

typedef struct 
{
   volatile  uint32_t EVTOUT;
   volatile  uint32_t REMAP;
   volatile  uint32_t EXINTC1;
   volatile  uint32_t EXINTC2;
   volatile  uint32_t EXINTC3;
   volatile  uint32_t EXINTC4;
   volatile  uint32_t RESERVED0[1];
   volatile  uint32_t REMAP2;
   volatile  uint32_t REMAP3;
   volatile  uint32_t REMAP4;
   volatile  uint32_t REMAP5;
   volatile  uint32_t REMAP6;
   volatile  uint32_t REMAP7;
   volatile  uint32_t REMAP8;
} IOMUX_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL;
   volatile  uint32_t CTRLSTS;
} PWC_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRLH;
   volatile  uint32_t CTRLL;
   volatile  uint32_t DIVH;
   volatile  uint32_t DIVL;
   volatile  uint32_t DIVCNTH;
   volatile  uint32_t DIVCNTL;
   volatile  uint32_t CNTH;
   volatile  uint32_t CNTL;
   volatile  uint32_t TAH;
   volatile  uint32_t TAL;
} RTC_TypeDef;

typedef struct 
{
   volatile  uint32_t PWRCTRL;
   volatile  uint32_t CLKCTRL;
   volatile  uint32_t ARG;
   volatile  uint32_t CMD;
   volatile  uint32_t RSPCMD;
   volatile  uint32_t RSP1;
   volatile  uint32_t RSP2;
   volatile  uint32_t RSP3;
   volatile  uint32_t RSP4;
   volatile  uint32_t DTTMR;
   volatile  uint32_t DTLEN;
   volatile  uint32_t DTCTRL;
   volatile  uint32_t DTCNTR;
   volatile  uint32_t STS;
   volatile  uint32_t INTCLR;
   volatile  uint32_t INTEN;
   volatile  uint32_t RESERVED0[2];
   volatile  uint32_t BUFCNTR;
   volatile  uint32_t RESERVED1[13];
   volatile  uint32_t BUF;
} SDIO_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL1;
   volatile  uint32_t CTRL2;
   volatile  uint32_t STS;
   volatile  uint32_t DT;
   volatile  uint32_t CPOLY;
   volatile  uint32_t RCRC;
   volatile  uint32_t TCRC;
   volatile  uint32_t I2SCTRL;
   volatile  uint32_t I2SCLKP;
} SPI_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL1;
   volatile  uint32_t CTRL2;
   volatile  uint32_t STCTRL;
   volatile  uint32_t IDEN;
   volatile  uint32_t ISTS;
   volatile  uint32_t SWEVT;
   volatile  uint32_t CM1;
   volatile  uint32_t CM2;
   volatile  uint32_t CCTRL;
   volatile  uint32_t CVAL;
   volatile  uint32_t DIV;
   volatile  uint32_t PR;
   volatile  uint32_t RPR;
   volatile  uint32_t C1DT;
   volatile  uint32_t C2DT;
   volatile  uint32_t C3DT;
   volatile  uint32_t C4DT;
   volatile  uint32_t BRK;
   volatile  uint32_t DMACTRL;
   volatile  uint32_t DMADT;
} TMR_TypeDef;

typedef struct 
{
   volatile  uint32_t USART_STS;
   volatile  uint32_t USART_DT;
   volatile  uint32_t USART_BAUDR;
   volatile  uint32_t USART_CTRL1;
   volatile  uint32_t USART_CTRL2;
   volatile  uint32_t USART_CTRL3;
   volatile  uint32_t USART_GTP;
} UART_TypeDef;

// typedef struct 
// {

// } USBFS_TypeDef;

typedef struct 
{
   volatile  uint32_t WDT_CMD;
   volatile  uint32_t WDT_DIV;
   volatile  uint32_t WDT_RLD;
   volatile  uint32_t WDT_STS;
} WDT_TypeDef;

typedef struct 
{
   volatile  uint32_t CTRL;
   volatile  uint32_t CFG;
   volatile  uint32_t STS;
} WWDT_TypeDef;

typedef struct 
{
   volatile  uint32_t BK1CTRL1; 
   volatile  uint32_t BK1TMG1;
   volatile  uint32_t RESERVED0[4];
   volatile  uint32_t BK1CTRL4;
   volatile  uint32_t BK1TMG4;
   volatile  uint32_t RESERVED1[16];
   volatile  uint32_t BK2CTRL;
   volatile  uint32_t BK2IS;
   volatile  uint32_t BK2TMGRG;
   volatile  uint32_t BK2TMGSP;
   volatile  uint32_t RESERVED2[1];
   volatile  uint32_t BK2ECC;
   volatile  uint32_t RESERVED3[35];
   volatile  uint32_t BK1TMGWR1;
   volatile  uint32_t RESERVED4[5];
   volatile  uint32_t BK1TMGWR4;
   volatile  uint32_t RESERVED5[64];
   volatile  uint32_t EXT1;
   volatile  uint32_t RESERVED6[2];
   volatile  uint32_t EXT4;
} XMC_TypeDef;


/* XMC - Flexible static memory controller */
#define XMC_BK1CTRL1_MWMC_MASK            (0x01 << 19)
#define XMC_BK1CTRL1_MWMC_SHIFT           (19)
#define XMC_BK1CTRL1_MWMC(x)              (x << 19)
#define XMC_BK1CTRL1_CRPGS_MASK           (0x07 << 16)
#define XMC_BK1CTRL1_CRPGS_SHIFT          (16)
#define XMC_BK1CTRL1_CRPGS(x)             (x << 16)
#define XMC_BK1CTRL1_NWASEN_MASK          (0x01 << 15)
#define XMC_BK1CTRL1_NWASEN_SHIFT         (15)
#define XMC_BK1CTRL1_NWASEN(x)            (x << 15)
#define XMC_BK1CTRL1_RWTD_MASK            (0x01 << 14)
#define XMC_BK1CTRL1_RWTD_SHIFT           (14)
#define XMC_BK1CTRL1_RWTD(x)              (x << 14)
#define XMC_BK1CTRL1_NWSEN_MASK           (0x01 << 13)
#define XMC_BK1CTRL1_NWSEN_SHIFT          (13)
#define XMC_BK1CTRL1_NWSEN(x)             (x << 13)
#define XMC_BK1CTRL1_WEN_MASK             (0x01 << 12)
#define XMC_BK1CTRL1_WEN_SHIFT            (12)
#define XMC_BK1CTRL1_WEN(x)               (x << 12)
#define XMC_BK1CTRL1_NWTCFG_MASK          (0x01 << 11)
#define XMC_BK1CTRL1_NWTCFG_SHIFT         (11)
#define XMC_BK1CTRL1_NWTCFG(x)            (x << 11)
#define XMC_BK1CTRL1_WRAPEN_MASK          (0x01 << 10)
#define XMC_BK1CTRL1_WRAPEN_SHIFT         (10)
#define XMC_BK1CTRL1_WRAPEN(x)            (x << 10)
#define XMC_BK1CTRL1_NWPOL_MASK           (0x01 << 9)
#define XMC_BK1CTRL1_NWPOL_SHIFT          (9)
#define XMC_BK1CTRL1_NWPOL(x)             (x << 9)
#define XMC_BK1CTRL1_SYNCBEN_MASK         (0x01 << 8)
#define XMC_BK1CTRL1_SYNCBEN_SHIFT        (8)
#define XMC_BK1CTRL1_SYNCBEN(x)           (x << 8)
#define XMC_BK1CTRL1_NOREN_MASK           (0x01 << 6)
#define XMC_BK1CTRL1_NOREN_SHIFT          (6)
#define XMC_BK1CTRL1_NOREN(x)             (x << 6)
#define XMC_BK1CTRL1_EXTMDBW_MASK         (0x03 << 4)
#define XMC_BK1CTRL1_EXTMDBW_SHIFT        (4)
#define XMC_BK1CTRL1_EXTMDBW(x)           (x << 4)
#define XMC_BK1CTRL1_DEV_MASK             (0x03 << 2)
#define XMC_BK1CTRL1_DEV_SHIFT            (2)
#define XMC_BK1CTRL1_DEV(x)               (x << 2)
#define XMC_BK1CTRL1_ADMUXEN_MASK         (0x01 << 1)
#define XMC_BK1CTRL1_ADMUXEN_SHIFT        (1)
#define XMC_BK1CTRL1_ADMUXEN(x)           (x << 1)
#define XMC_BK1CTRL1_EN_MASK              (0x01 << 0)
#define XMC_BK1CTRL1_EN_SHIFT             (0)
#define XMC_BK1CTRL1_EN(x)                (x << 0)
#define XMC_BK1TMG1_ASYNCM_MASK           (0x03 << 28)
#define XMC_BK1TMG1_ASYNCM_SHIFT          (28)
#define XMC_BK1TMG1_ASYNCM(x)             (x << 28)
#define XMC_BK1TMG1_DTLAT_MASK            (0x0f << 24)
#define XMC_BK1TMG1_DTLAT_SHIFT           (24)
#define XMC_BK1TMG1_DTLAT(x)              (x << 24)
#define XMC_BK1TMG1_CLKPSC_MASK           (0x0f << 20)
#define XMC_BK1TMG1_CLKPSC_SHIFT          (20)
#define XMC_BK1TMG1_CLKPSC(x)             (x << 20)
#define XMC_BK1TMG1_BUSLAT_MASK           (0x0f << 16)
#define XMC_BK1TMG1_BUSLAT_SHIFT          (16)
#define XMC_BK1TMG1_BUSLAT(x)             (x << 16)
#define XMC_BK1TMG1_DTST_MASK             (0xff << 8)
#define XMC_BK1TMG1_DTST_SHIFT            (8)
#define XMC_BK1TMG1_DTST(x)               (x << 8)
#define XMC_BK1TMG1_ADDRHT_MASK           (0x0f << 4)
#define XMC_BK1TMG1_ADDRHT_SHIFT          (4)
#define XMC_BK1TMG1_ADDRHT(x)             (x << 4)
#define XMC_BK1TMG1_ADDRST_MASK           (0x0f << 0)
#define XMC_BK1TMG1_ADDRST_SHIFT          (0)
#define XMC_BK1TMG1_ADDRST(x)             (x << 0)
#define XMC_BK1CTRL4_MWMC_MASK            (0x01 << 19)
#define XMC_BK1CTRL4_MWMC_SHIFT           (19)
#define XMC_BK1CTRL4_MWMC(x)              (x << 19)
#define XMC_BK1CTRL4_CRPGS_MASK           (0x07 << 16)
#define XMC_BK1CTRL4_CRPGS_SHIFT          (16)
#define XMC_BK1CTRL4_CRPGS(x)             (x << 16)
#define XMC_BK1CTRL4_NWASEN_MASK          (0x01 << 15)
#define XMC_BK1CTRL4_NWASEN_SHIFT         (15)
#define XMC_BK1CTRL4_NWASEN(x)            (x << 15)
#define XMC_BK1CTRL4_RWTD_MASK            (0x01 << 14)
#define XMC_BK1CTRL4_RWTD_SHIFT           (14)
#define XMC_BK1CTRL4_RWTD(x)              (x << 14)
#define XMC_BK1CTRL4_NWSEN_MASK           (0x01 << 13)
#define XMC_BK1CTRL4_NWSEN_SHIFT          (13)
#define XMC_BK1CTRL4_NWSEN(x)             (x << 13)
#define XMC_BK1CTRL4_WEN_MASK             (0x01 << 12)
#define XMC_BK1CTRL4_WEN_SHIFT            (12)
#define XMC_BK1CTRL4_WEN(x)               (x << 12)
#define XMC_BK1CTRL4_NWTCFG_MASK          (0x01 << 11)
#define XMC_BK1CTRL4_NWTCFG_SHIFT         (11)
#define XMC_BK1CTRL4_NWTCFG(x)            (x << 11)
#define XMC_BK1CTRL4_WRAPEN_MASK          (0x01 << 10)
#define XMC_BK1CTRL4_WRAPEN_SHIFT         (10)
#define XMC_BK1CTRL4_WRAPEN(x)            (x << 10)
#define XMC_BK1CTRL4_NWPOL_MASK           (0x01 << 9)
#define XMC_BK1CTRL4_NWPOL_SHIFT          (9)
#define XMC_BK1CTRL4_NWPOL(x)             (x << 9)
#define XMC_BK1CTRL4_SYNCBEN_MASK         (0x01 << 8)
#define XMC_BK1CTRL4_SYNCBEN_SHIFT        (8)
#define XMC_BK1CTRL4_SYNCBEN(x)           (x << 8)
#define XMC_BK1CTRL4_NOREN_MASK           (0x01 << 6)
#define XMC_BK1CTRL4_NOREN_SHIFT          (6)
#define XMC_BK1CTRL4_NOREN(x)             (x << 6)
#define XMC_BK1CTRL4_EXTMDBW_MASK         (0x03 << 4)
#define XMC_BK1CTRL4_EXTMDBW_SHIFT        (4)
#define XMC_BK1CTRL4_EXTMDBW(x)           (x << 4)
#define XMC_BK1CTRL4_DEV_MASK             (0x03 << 2)
#define XMC_BK1CTRL4_DEV_SHIFT            (2)
#define XMC_BK1CTRL4_DEV(x)               (x << 2)
#define XMC_BK1CTRL4_ADMUXEN_MASK         (0x01 << 1)
#define XMC_BK1CTRL4_ADMUXEN_SHIFT        (1)
#define XMC_BK1CTRL4_ADMUXEN(x)           (x << 1)
#define XMC_BK1CTRL4_EN_MASK              (0x01 << 0)
#define XMC_BK1CTRL4_EN_SHIFT             (0)
#define XMC_BK1CTRL4_EN(x)                (x << 0)
#define XMC_BK1TMG4_ASYNCM_MASK           (0x03 << 28)
#define XMC_BK1TMG4_ASYNCM_SHIFT          (28)
#define XMC_BK1TMG4_ASYNCM(x)             (x << 28)
#define XMC_BK1TMG4_DTLAT_MASK            (0x0f << 24)
#define XMC_BK1TMG4_DTLAT_SHIFT           (24)
#define XMC_BK1TMG4_DTLAT(x)              (x << 24)
#define XMC_BK1TMG4_CLKPSC_MASK           (0x0f << 20)
#define XMC_BK1TMG4_CLKPSC_SHIFT          (20)
#define XMC_BK1TMG4_CLKPSC(x)             (x << 20)
#define XMC_BK1TMG4_BUSLAT_MASK           (0x0f << 16)
#define XMC_BK1TMG4_BUSLAT_SHIFT          (16)
#define XMC_BK1TMG4_BUSLAT(x)             (x << 16)
#define XMC_BK1TMG4_DTST_MASK             (0xff << 8)
#define XMC_BK1TMG4_DTST_SHIFT            (8)
#define XMC_BK1TMG4_DTST(x)               (x << 8)
#define XMC_BK1TMG4_ADDRHT_MASK           (0x0f << 4)
#define XMC_BK1TMG4_ADDRHT_SHIFT          (4)
#define XMC_BK1TMG4_ADDRHT(x)             (x << 4)
#define XMC_BK1TMG4_ADDRST_MASK           (0x0f << 0)
#define XMC_BK1TMG4_ADDRST_SHIFT          (0)
#define XMC_BK1TMG4_ADDRST(x)             (x << 0)
#define XMC_BK2CTRL_ECCPGS_MASK           (0x07 << 17)
#define XMC_BK2CTRL_ECCPGS_SHIFT          (17)
#define XMC_BK2CTRL_ECCPGS(x)             (x << 17)
#define XMC_BK2CTRL_TAR_MASK              (0x0f << 13)
#define XMC_BK2CTRL_TAR_SHIFT             (13)
#define XMC_BK2CTRL_TAR(x)                (x << 13)
#define XMC_BK2CTRL_TCR_MASK              (0x0f << 9)
#define XMC_BK2CTRL_TCR_SHIFT             (9)
#define XMC_BK2CTRL_TCR(x)                (x << 9)
#define XMC_BK2CTRL_ECCEN_MASK            (0x01 << 6)
#define XMC_BK2CTRL_ECCEN_SHIFT           (6)
#define XMC_BK2CTRL_ECCEN(x)              (x << 6)
#define XMC_BK2CTRL_EXTMDBW_MASK          (0x03 << 4)
#define XMC_BK2CTRL_EXTMDBW_SHIFT         (4)
#define XMC_BK2CTRL_EXTMDBW(x)            (x << 4)
#define XMC_BK2CTRL_DEV_MASK              (0x01 << 3)
#define XMC_BK2CTRL_DEV_SHIFT             (3)
#define XMC_BK2CTRL_DEV(x)                (x << 3)
#define XMC_BK2CTRL_EN_MASK               (0x01 << 2)
#define XMC_BK2CTRL_EN_SHIFT              (2)
#define XMC_BK2CTRL_EN(x)                 (x << 2)
#define XMC_BK2CTRL_NWEN_MASK             (0x01 << 1)
#define XMC_BK2CTRL_NWEN_SHIFT            (1)
#define XMC_BK2CTRL_NWEN(x)               (x << 1)
#define XMC_BK2IS_FIFOE_MASK              (0x01 << 6)
#define XMC_BK2IS_FIFOE_SHIFT             (6)
#define XMC_BK2IS_FIFOE(x)                (x << 6)
#define XMC_BK2IS_FEIEN_MASK              (0x01 << 5)
#define XMC_BK2IS_FEIEN_SHIFT             (5)
#define XMC_BK2IS_FEIEN(x)                (x << 5)
#define XMC_BK2IS_HLIEN_MASK              (0x01 << 4)
#define XMC_BK2IS_HLIEN_SHIFT             (4)
#define XMC_BK2IS_HLIEN(x)                (x << 4)
#define XMC_BK2IS_REIEN_MASK              (0x01 << 3)
#define XMC_BK2IS_REIEN_SHIFT             (3)
#define XMC_BK2IS_REIEN(x)                (x << 3)
#define XMC_BK2IS_FES_MASK                (0x01 << 2)
#define XMC_BK2IS_FES_SHIFT               (2)
#define XMC_BK2IS_FES(x)                  (x << 2)
#define XMC_BK2IS_HLS_MASK                (0x01 << 1)
#define XMC_BK2IS_HLS_SHIFT               (1)
#define XMC_BK2IS_HLS(x)                  (x << 1)
#define XMC_BK2IS_RES_MASK                (0x01 << 0)
#define XMC_BK2IS_RES_SHIFT               (0)
#define XMC_BK2IS_RES(x)                  (x << 0)
#define XMC_BK2TMGMEM_RGDHIZT_MASK        (0xff << 24)
#define XMC_BK2TMGMEM_RGDHIZT_SHIFT       (24)
#define XMC_BK2TMGMEM_RGDHIZT(x)          (x << 24)
#define XMC_BK2TMGMEM_RGHT_MASK           (0xff << 16)
#define XMC_BK2TMGMEM_RGHT_SHIFT          (16)
#define XMC_BK2TMGMEM_RGHT(x)             (x << 16)
#define XMC_BK2TMGMEM_RGWT_MASK           (0xff << 8)
#define XMC_BK2TMGMEM_RGWT_SHIFT          (8)
#define XMC_BK2TMGMEM_RGWT(x)             (x << 8)
#define XMC_BK2TMGMEM_RGST_MASK           (0xff << 0)
#define XMC_BK2TMGMEM_RGST_SHIFT          (0)
#define XMC_BK2TMGMEM_RGST(x)             (x << 0)
#define XMC_BK2TMGATT_SPDHIZT_MASK        (0xff << 24)
#define XMC_BK2TMGATT_SPDHIZT_SHIFT       (24)
#define XMC_BK2TMGATT_SPDHIZT(x)          (x << 24)
#define XMC_BK2TMGATT_SPHT_MASK           (0xff << 16)
#define XMC_BK2TMGATT_SPHT_SHIFT          (16)
#define XMC_BK2TMGATT_SPHT(x)             (x << 16)
#define XMC_BK2TMGATT_SPWT_MASK           (0xff << 8)
#define XMC_BK2TMGATT_SPWT_SHIFT          (8)
#define XMC_BK2TMGATT_SPWT(x)             (x << 8)
#define XMC_BK2TMGATT_SPST_MASK           (0xff << 0)
#define XMC_BK2TMGATT_SPST_SHIFT          (0)
#define XMC_BK2TMGATT_SPST(x)             (x << 0)
#define XMC_BK2ECC_ECC_MASK               (0xffffffff << 0)
#define XMC_BK2ECC_ECC_SHIFT              (0)
#define XMC_BK2ECC_ECC(x)                 (x << 0)
#define XMC_BK1TMGWR1_ASYNCM_MASK         (0x03 << 28)
#define XMC_BK1TMGWR1_ASYNCM_SHIFT        (28)
#define XMC_BK1TMGWR1_ASYNCM(x)           (x << 28)
#define XMC_BK1TMGWR1_BUSLAT_MASK         (0x0f << 16)
#define XMC_BK1TMGWR1_BUSLAT_SHIFT        (16)
#define XMC_BK1TMGWR1_BUSLAT(x)           (x << 16)
#define XMC_BK1TMGWR1_DTST_MASK           (0xff << 8)
#define XMC_BK1TMGWR1_DTST_SHIFT          (8)
#define XMC_BK1TMGWR1_DTST(x)             (x << 8)
#define XMC_BK1TMGWR1_ADDRHT_MASK         (0x0f << 4)
#define XMC_BK1TMGWR1_ADDRHT_SHIFT        (4)
#define XMC_BK1TMGWR1_ADDRHT(x)           (x << 4)
#define XMC_BK1TMGWR1_ADDRST_MASK         (0x0f << 0)
#define XMC_BK1TMGWR1_ADDRST_SHIFT        (0)
#define XMC_BK1TMGWR1_ADDRST(x)           (x << 0)
#define XMC_BK1TMGWR4_ASYNCM_MASK         (0x03 << 28)
#define XMC_BK1TMGWR4_ASYNCM_SHIFT        (28)
#define XMC_BK1TMGWR4_ASYNCM(x)           (x << 28)
#define XMC_BK1TMGWR4_BUSLAT_MASK         (0x0f << 16)
#define XMC_BK1TMGWR4_BUSLAT_SHIFT        (16)
#define XMC_BK1TMGWR4_BUSLAT(x)           (x << 16)
#define XMC_BK1TMGWR4_DTST_MASK           (0xff << 8)
#define XMC_BK1TMGWR4_DTST_SHIFT          (8)
#define XMC_BK1TMGWR4_DTST(x)             (x << 8)
#define XMC_BK1TMGWR4_ADDRHT_MASK         (0x0f << 4)
#define XMC_BK1TMGWR4_ADDRHT_SHIFT        (4)
#define XMC_BK1TMGWR4_ADDRHT(x)           (x << 4)
#define XMC_BK1TMGWR4_ADDRST_MASK         (0x0f << 0)
#define XMC_BK1TMGWR4_ADDRST_SHIFT        (0)
#define XMC_BK1TMGWR4_ADDRST(x)           (x << 0)
#define XMC_EXT1_BUSLATW2W_MASK           (0xff << 0)
#define XMC_EXT1_BUSLATW2W_SHIFT          (0)
#define XMC_EXT1_BUSLATW2W(x)             (x << 0)
#define XMC_EXT1_BUSLATR2R_MASK           (0xff << 8)
#define XMC_EXT1_BUSLATR2R_SHIFT          (8)
#define XMC_EXT1_BUSLATR2R(x)             (x << 8)
#define XMC_EXT4_BUSLATW2W_MASK           (0xff << 0)
#define XMC_EXT4_BUSLATW2W_SHIFT          (0)
#define XMC_EXT4_BUSLATW2W(x)             (x << 0)
#define XMC_EXT4_BUSLATR2R_MASK           (0xff << 8)
#define XMC_EXT4_BUSLATR2R_SHIFT          (8)
#define XMC_EXT4_BUSLATR2R(x)             (x << 8)

/* PWC - Power control */
#define PWC_CTRL_VRSEL_MASK               (0x01 << 0)
#define PWC_CTRL_VRSEL_SHIFT              (0)
#define PWC_CTRL_VRSEL(x)                 (x << 0)
#define PWC_CTRL_LPSEL_MASK               (0x01 << 1)
#define PWC_CTRL_LPSEL_SHIFT              (1)
#define PWC_CTRL_LPSEL(x)                 (x << 1)
#define PWC_CTRL_CLSWEF_MASK              (0x01 << 2)
#define PWC_CTRL_CLSWEF_SHIFT             (2)
#define PWC_CTRL_CLSWEF(x)                (x << 2)
#define PWC_CTRL_CLSEF_MASK               (0x01 << 3)
#define PWC_CTRL_CLSEF_SHIFT              (3)
#define PWC_CTRL_CLSEF(x)                 (x << 3)
#define PWC_CTRL_PVMEN_MASK               (0x01 << 4)
#define PWC_CTRL_PVMEN_SHIFT              (4)
#define PWC_CTRL_PVMEN(x)                 (x << 4)
#define PWC_CTRL_PVMSEL_MASK              (0x07 << 5)
#define PWC_CTRL_PVMSEL_SHIFT             (5)
#define PWC_CTRL_PVMSEL(x)                (x << 5)
#define PWC_CTRL_BPWEN_MASK               (0x01 << 8)
#define PWC_CTRL_BPWEN_SHIFT              (8)
#define PWC_CTRL_BPWEN(x)                 (x << 8)
#define PWC_CTRLSTS_SWEF_MASK             (0x01 << 0)
#define PWC_CTRLSTS_SWEF_SHIFT            (0)
#define PWC_CTRLSTS_SWEF(x)               (x << 0)
#define PWC_CTRLSTS_SEF_MASK              (0x01 << 1)
#define PWC_CTRLSTS_SEF_SHIFT             (1)
#define PWC_CTRLSTS_SEF(x)                (x << 1)
#define PWC_CTRLSTS_PVMOF_MASK            (0x01 << 2)
#define PWC_CTRLSTS_PVMOF_SHIFT           (2)
#define PWC_CTRLSTS_PVMOF(x)              (x << 2)
#define PWC_CTRLSTS_SWPEN_MASK            (0x01 << 8)
#define PWC_CTRLSTS_SWPEN_SHIFT           (8)
#define PWC_CTRLSTS_SWPEN(x)              (x << 8)

/* CRM - Clock and reset management */
#define CRM_CTRL_HICKEN_MASK              (0x01 << 0)
#define CRM_CTRL_HICKEN_SHIFT             (0)
#define CRM_CTRL_HICKEN(x)                (x << 0)
#define CRM_CTRL_HICKSTBL_MASK            (0x01 << 1)
#define CRM_CTRL_HICKSTBL_SHIFT           (1)
#define CRM_CTRL_HICKSTBL(x)              (x << 1)
#define CRM_CTRL_HICKTRIM_MASK            (0x3f << 2)
#define CRM_CTRL_HICKTRIM_SHIFT           (2)
#define CRM_CTRL_HICKTRIM(x)              (x << 2)
#define CRM_CTRL_HICKCAL_MASK             (0xff << 8)
#define CRM_CTRL_HICKCAL_SHIFT            (8)
#define CRM_CTRL_HICKCAL(x)               (x << 8)
#define CRM_CTRL_HEXTEN_MASK              (0x01 << 16)
#define CRM_CTRL_HEXTEN_SHIFT             (16)
#define CRM_CTRL_HEXTEN(x)                (x << 16)
#define CRM_CTRL_HEXTSTBL_MASK            (0x01 << 17)
#define CRM_CTRL_HEXTSTBL_SHIFT           (17)
#define CRM_CTRL_HEXTSTBL(x)              (x << 17)
#define CRM_CTRL_HEXTBYPS_MASK            (0x01 << 18)
#define CRM_CTRL_HEXTBYPS_SHIFT           (18)
#define CRM_CTRL_HEXTBYPS(x)              (x << 18)
#define CRM_CTRL_CFDEN_MASK               (0x01 << 19)
#define CRM_CTRL_CFDEN_SHIFT              (19)
#define CRM_CTRL_CFDEN(x)                 (x << 19)
#define CRM_CTRL_PLLEN_MASK               (0x01 << 24)
#define CRM_CTRL_PLLEN_SHIFT              (24)
#define CRM_CTRL_PLLEN(x)                 (x << 24)
#define CRM_CTRL_PLLSTBL_MASK             (0x01 << 25)
#define CRM_CTRL_PLLSTBL_SHIFT            (25)
#define CRM_CTRL_PLLSTBL(x)               (x << 25)
#define CRM_CFG_SCLKSEL_MASK              (0x03 << 0)
#define CRM_CFG_SCLKSEL_SHIFT             (0)
#define CRM_CFG_SCLKSEL(x)                (x << 0)
#define CRM_CFG_SCLKSTS_MASK              (0x03 << 2)
#define CRM_CFG_SCLKSTS_SHIFT             (2)
#define CRM_CFG_SCLKSTS(x)                (x << 2)
#define CRM_CFG_AHBDIV_MASK               (0x0f << 4)
#define CRM_CFG_AHBDIV_SHIFT              (4)
#define CRM_CFG_AHBDIV(x)                 (x << 4)
#define CRM_CFG_APB1DIV_MASK              (0x07 << 8)
#define CRM_CFG_APB1DIV_SHIFT             (8)
#define CRM_CFG_APB1DIV(x)                (x << 8)
#define CRM_CFG_APB2DIV_MASK              (0x07 << 11)
#define CRM_CFG_APB2DIV_SHIFT             (11)
#define CRM_CFG_APB2DIV(x)                (x << 11)
#define CRM_CFG_ADCDIV1_0_MASK            (0x03 << 14)
#define CRM_CFG_ADCDIV1_0_SHIFT           (14)
#define CRM_CFG_ADCDIV1_0(x)              (x << 14)
#define CRM_CFG_PLLRCS_MASK               (0x01 << 16)
#define CRM_CFG_PLLRCS_SHIFT              (16)
#define CRM_CFG_PLLRCS(x)                 (x << 16)
#define CRM_CFG_PLLHEXTDIV_MASK           (0x01 << 17)
#define CRM_CFG_PLLHEXTDIV_SHIFT          (17)
#define CRM_CFG_PLLHEXTDIV(x)             (x << 17)
#define CRM_CFG_PLLMULT3_0_MASK           (0x0f << 18)
#define CRM_CFG_PLLMULT3_0_SHIFT          (18)
#define CRM_CFG_PLLMULT3_0(x)             (x << 18)
#define CRM_CFG_USBDIV1_0_MASK            (0x03 << 22)
#define CRM_CFG_USBDIV1_0_SHIFT           (22)
#define CRM_CFG_USBDIV1_0(x)              (x << 22)
#define CRM_CFG_CLKOUT_SEL_MASK           (0x07 << 24)
#define CRM_CFG_CLKOUT_SEL_SHIFT          (24)
#define CRM_CFG_CLKOUT_SEL(x)             (x << 24)
#define CRM_CFG_USBDIV2_MASK              (0x01 << 27)
#define CRM_CFG_USBDIV2_SHIFT             (27)
#define CRM_CFG_USBDIV2(x)                (x << 27)
#define CRM_CFG_ADCDIV2_MASK              (0x01 << 28)
#define CRM_CFG_ADCDIV2_SHIFT             (28)
#define CRM_CFG_ADCDIV2(x)                (x << 28)
#define CRM_CFG_PLLMULT5_4_MASK           (0x03 << 29)
#define CRM_CFG_PLLMULT5_4_SHIFT          (29)
#define CRM_CFG_PLLMULT5_4(x)             (x << 29)
#define CRM_CFG_PLLRANGE_MASK             (0x01 << 31)
#define CRM_CFG_PLLRANGE_SHIFT            (31)
#define CRM_CFG_PLLRANGE(x)               (x << 31)
#define CRM_CLKINT_LICKSTBLF_MASK         (0x01 << 0)
#define CRM_CLKINT_LICKSTBLF_SHIFT        (0)
#define CRM_CLKINT_LICKSTBLF(x)           (x << 0)
#define CRM_CLKINT_LEXTSTBLF_MASK         (0x01 << 1)
#define CRM_CLKINT_LEXTSTBLF_SHIFT        (1)
#define CRM_CLKINT_LEXTSTBLF(x)           (x << 1)
#define CRM_CLKINT_HICKSTBLF_MASK         (0x01 << 2)
#define CRM_CLKINT_HICKSTBLF_SHIFT        (2)
#define CRM_CLKINT_HICKSTBLF(x)           (x << 2)
#define CRM_CLKINT_HEXTSTBLF_MASK         (0x01 << 3)
#define CRM_CLKINT_HEXTSTBLF_SHIFT        (3)
#define CRM_CLKINT_HEXTSTBLF(x)           (x << 3)
#define CRM_CLKINT_PLLSTBLF_MASK          (0x01 << 4)
#define CRM_CLKINT_PLLSTBLF_SHIFT         (4)
#define CRM_CLKINT_PLLSTBLF(x)            (x << 4)
#define CRM_CLKINT_CFDF_MASK              (0x01 << 7)
#define CRM_CLKINT_CFDF_SHIFT             (7)
#define CRM_CLKINT_CFDF(x)                (x << 7)
#define CRM_CLKINT_LICKSTBLIEN_MASK       (0x01 << 8)
#define CRM_CLKINT_LICKSTBLIEN_SHIFT      (8)
#define CRM_CLKINT_LICKSTBLIEN(x)         (x << 8)
#define CRM_CLKINT_LEXTSTBLIEN_MASK       (0x01 << 9)
#define CRM_CLKINT_LEXTSTBLIEN_SHIFT      (9)
#define CRM_CLKINT_LEXTSTBLIEN(x)         (x << 9)
#define CRM_CLKINT_HICKSTBLIEN_MASK       (0x01 << 10)
#define CRM_CLKINT_HICKSTBLIEN_SHIFT      (10)
#define CRM_CLKINT_HICKSTBLIEN(x)         (x << 10)
#define CRM_CLKINT_HEXTSTBLIEN_MASK       (0x01 << 11)
#define CRM_CLKINT_HEXTSTBLIEN_SHIFT      (11)
#define CRM_CLKINT_HEXTSTBLIEN(x)         (x << 11)
#define CRM_CLKINT_PLLSTBLIEN_MASK        (0x01 << 12)
#define CRM_CLKINT_PLLSTBLIEN_SHIFT       (12)
#define CRM_CLKINT_PLLSTBLIEN(x)          (x << 12)
#define CRM_CLKINT_LICKSTBLFC_MASK        (0x01 << 16)
#define CRM_CLKINT_LICKSTBLFC_SHIFT       (16)
#define CRM_CLKINT_LICKSTBLFC(x)          (x << 16)
#define CRM_CLKINT_LEXTSTBLFC_MASK        (0x01 << 17)
#define CRM_CLKINT_LEXTSTBLFC_SHIFT       (17)
#define CRM_CLKINT_LEXTSTBLFC(x)          (x << 17)
#define CRM_CLKINT_HICKSTBLFC_MASK        (0x01 << 18)
#define CRM_CLKINT_HICKSTBLFC_SHIFT       (18)
#define CRM_CLKINT_HICKSTBLFC(x)          (x << 18)
#define CRM_CLKINT_HEXTSTBLFC_MASK        (0x01 << 19)
#define CRM_CLKINT_HEXTSTBLFC_SHIFT       (19)
#define CRM_CLKINT_HEXTSTBLFC(x)          (x << 19)
#define CRM_CLKINT_PLLSTBLFC_MASK         (0x01 << 20)
#define CRM_CLKINT_PLLSTBLFC_SHIFT        (20)
#define CRM_CLKINT_PLLSTBLFC(x)           (x << 20)
#define CRM_CLKINT_CFDFC_MASK             (0x01 << 23)
#define CRM_CLKINT_CFDFC_SHIFT            (23)
#define CRM_CLKINT_CFDFC(x)               (x << 23)
#define CRM_APB2RST_IOMUXRST_MASK         (0x01 << 0)
#define CRM_APB2RST_IOMUXRST_SHIFT        (0)
#define CRM_APB2RST_IOMUXRST(x)           (x << 0)
#define CRM_APB2RST_EXINTRST_MASK         (0x01 << 1)
#define CRM_APB2RST_EXINTRST_SHIFT        (1)
#define CRM_APB2RST_EXINTRST(x)           (x << 1)
#define CRM_APB2RST_GPIOARST_MASK         (0x01 << 2)
#define CRM_APB2RST_GPIOARST_SHIFT        (2)
#define CRM_APB2RST_GPIOARST(x)           (x << 2)
#define CRM_APB2RST_GPIOBRST_MASK         (0x01 << 3)
#define CRM_APB2RST_GPIOBRST_SHIFT        (3)
#define CRM_APB2RST_GPIOBRST(x)           (x << 3)
#define CRM_APB2RST_GPIOCRST_MASK         (0x01 << 4)
#define CRM_APB2RST_GPIOCRST_SHIFT        (4)
#define CRM_APB2RST_GPIOCRST(x)           (x << 4)
#define CRM_APB2RST_GPIODRST_MASK         (0x01 << 5)
#define CRM_APB2RST_GPIODRST_SHIFT        (5)
#define CRM_APB2RST_GPIODRST(x)           (x << 5)
#define CRM_APB2RST_GPIOERST_MASK         (0x01 << 6)
#define CRM_APB2RST_GPIOERST_SHIFT        (6)
#define CRM_APB2RST_GPIOERST(x)           (x << 6)
#define CRM_APB2RST_ADC1RST_MASK          (0x01 << 9)
#define CRM_APB2RST_ADC1RST_SHIFT         (9)
#define CRM_APB2RST_ADC1RST(x)            (x << 9)
#define CRM_APB2RST_ADC2RST_MASK          (0x01 << 10)
#define CRM_APB2RST_ADC2RST_SHIFT         (10)
#define CRM_APB2RST_ADC2RST(x)            (x << 10)
#define CRM_APB2RST_TMR1RST_MASK          (0x01 << 11)
#define CRM_APB2RST_TMR1RST_SHIFT         (11)
#define CRM_APB2RST_TMR1RST(x)            (x << 11)
#define CRM_APB2RST_SPI1RST_MASK          (0x01 << 12)
#define CRM_APB2RST_SPI1RST_SHIFT         (12)
#define CRM_APB2RST_SPI1RST(x)            (x << 12)
#define CRM_APB2RST_TMR8RST_MASK          (0x01 << 13)
#define CRM_APB2RST_TMR8RST_SHIFT         (13)
#define CRM_APB2RST_TMR8RST(x)            (x << 13)
#define CRM_APB2RST_USART1RST_MASK        (0x01 << 14)
#define CRM_APB2RST_USART1RST_SHIFT       (14)
#define CRM_APB2RST_USART1RST(x)          (x << 14)
#define CRM_APB2RST_ADC3RST_MASK          (0x01 << 15)
#define CRM_APB2RST_ADC3RST_SHIFT         (15)
#define CRM_APB2RST_ADC3RST(x)            (x << 15)
#define CRM_APB2RST_TMR9RST_MASK          (0x01 << 19)
#define CRM_APB2RST_TMR9RST_SHIFT         (19)
#define CRM_APB2RST_TMR9RST(x)            (x << 19)
#define CRM_APB2RST_TMR10RST_MASK         (0x01 << 20)
#define CRM_APB2RST_TMR10RST_SHIFT        (20)
#define CRM_APB2RST_TMR10RST(x)           (x << 20)
#define CRM_APB2RST_TMR11RST_MASK         (0x01 << 21)
#define CRM_APB2RST_TMR11RST_SHIFT        (21)
#define CRM_APB2RST_TMR11RST(x)           (x << 21)
#define CRM_APB2RST_ACCRST_MASK           (0x01 << 22)
#define CRM_APB2RST_ACCRST_SHIFT          (22)
#define CRM_APB2RST_ACCRST(x)             (x << 22)
#define CRM_APB2RST_I2C3RST_MASK          (0x01 << 23)
#define CRM_APB2RST_I2C3RST_SHIFT         (23)
#define CRM_APB2RST_I2C3RST(x)            (x << 23)
#define CRM_APB2RST_USART6RST_MASK        (0x01 << 24)
#define CRM_APB2RST_USART6RST_SHIFT       (24)
#define CRM_APB2RST_USART6RST(x)          (x << 24)
#define CRM_APB2RST_UART7RST_MASK         (0x01 << 25)
#define CRM_APB2RST_UART7RST_SHIFT        (25)
#define CRM_APB2RST_UART7RST(x)           (x << 25)
#define CRM_APB2RST_UART8RST_MASK         (0x01 << 26)
#define CRM_APB2RST_UART8RST_SHIFT        (26)
#define CRM_APB2RST_UART8RST(x)           (x << 26)
#define CRM_APB1RST_TMR2RST_MASK          (0x01 << 0)
#define CRM_APB1RST_TMR2RST_SHIFT         (0)
#define CRM_APB1RST_TMR2RST(x)            (x << 0)
#define CRM_APB1RST_TMR3RST_MASK          (0x01 << 1)
#define CRM_APB1RST_TMR3RST_SHIFT         (1)
#define CRM_APB1RST_TMR3RST(x)            (x << 1)
#define CRM_APB1RST_TMR4RST_MASK          (0x01 << 2)
#define CRM_APB1RST_TMR4RST_SHIFT         (2)
#define CRM_APB1RST_TMR4RST(x)            (x << 2)
#define CRM_APB1RST_TMR5RST_MASK          (0x01 << 3)
#define CRM_APB1RST_TMR5RST_SHIFT         (3)
#define CRM_APB1RST_TMR5RST(x)            (x << 3)
#define CRM_APB1RST_TMR6RST_MASK          (0x01 << 4)
#define CRM_APB1RST_TMR6RST_SHIFT         (4)
#define CRM_APB1RST_TMR6RST(x)            (x << 4)
#define CRM_APB1RST_TMR7RST_MASK          (0x01 << 5)
#define CRM_APB1RST_TMR7RST_SHIFT         (5)
#define CRM_APB1RST_TMR7RST(x)            (x << 5)
#define CRM_APB1RST_TMR12RST_MASK         (0x01 << 6)
#define CRM_APB1RST_TMR12RST_SHIFT        (6)
#define CRM_APB1RST_TMR12RST(x)           (x << 6)
#define CRM_APB1RST_TMR13RST_MASK         (0x01 << 7)
#define CRM_APB1RST_TMR13RST_SHIFT        (7)
#define CRM_APB1RST_TMR13RST(x)           (x << 7)
#define CRM_APB1RST_TMR14RST_MASK         (0x01 << 8)
#define CRM_APB1RST_TMR14RST_SHIFT        (8)
#define CRM_APB1RST_TMR14RST(x)           (x << 8)
#define CRM_APB1RST_WWDTRST_MASK          (0x01 << 11)
#define CRM_APB1RST_WWDTRST_SHIFT         (11)
#define CRM_APB1RST_WWDTRST(x)            (x << 11)
#define CRM_APB1RST_SPI2RST_MASK          (0x01 << 14)
#define CRM_APB1RST_SPI2RST_SHIFT         (14)
#define CRM_APB1RST_SPI2RST(x)            (x << 14)
#define CRM_APB1RST_SPI3RST_MASK          (0x01 << 15)
#define CRM_APB1RST_SPI3RST_SHIFT         (15)
#define CRM_APB1RST_SPI3RST(x)            (x << 15)
#define CRM_APB1RST_SPI4RST_MASK          (0x01 << 16)
#define CRM_APB1RST_SPI4RST_SHIFT         (16)
#define CRM_APB1RST_SPI4RST(x)            (x << 16)
#define CRM_APB1RST_USART2RST_MASK        (0x01 << 17)
#define CRM_APB1RST_USART2RST_SHIFT       (17)
#define CRM_APB1RST_USART2RST(x)          (x << 17)
#define CRM_APB1RST_USART3RST_MASK        (0x01 << 18)
#define CRM_APB1RST_USART3RST_SHIFT       (18)
#define CRM_APB1RST_USART3RST(x)          (x << 18)
#define CRM_APB1RST_UART4RST_MASK         (0x01 << 19)
#define CRM_APB1RST_UART4RST_SHIFT        (19)
#define CRM_APB1RST_UART4RST(x)           (x << 19)
#define CRM_APB1RST_UART5RST_MASK         (0x01 << 20)
#define CRM_APB1RST_UART5RST_SHIFT        (20)
#define CRM_APB1RST_UART5RST(x)           (x << 20)
#define CRM_APB1RST_I2C1RST_MASK          (0x01 << 21)
#define CRM_APB1RST_I2C1RST_SHIFT         (21)
#define CRM_APB1RST_I2C1RST(x)            (x << 21)
#define CRM_APB1RST_I2C2RST_MASK          (0x01 << 22)
#define CRM_APB1RST_I2C2RST_SHIFT         (22)
#define CRM_APB1RST_I2C2RST(x)            (x << 22)
#define CRM_APB1RST_USBRST_MASK           (0x01 << 23)
#define CRM_APB1RST_USBRST_SHIFT          (23)
#define CRM_APB1RST_USBRST(x)             (x << 23)
#define CRM_APB1RST_CAN1RST_MASK          (0x01 << 25)
#define CRM_APB1RST_CAN1RST_SHIFT         (25)
#define CRM_APB1RST_CAN1RST(x)            (x << 25)
#define CRM_APB1RST_CAN2RST_MASK          (0x01 << 26)
#define CRM_APB1RST_CAN2RST_SHIFT         (26)
#define CRM_APB1RST_CAN2RST(x)            (x << 26)
#define CRM_APB1RST_BPRRST_MASK           (0x01 << 27)
#define CRM_APB1RST_BPRRST_SHIFT          (27)
#define CRM_APB1RST_BPRRST(x)             (x << 27)
#define CRM_APB1RST_PWCRST_MASK           (0x01 << 28)
#define CRM_APB1RST_PWCRST_SHIFT          (28)
#define CRM_APB1RST_PWCRST(x)             (x << 28)
#define CRM_APB1RST_DACRST_MASK           (0x01 << 29)
#define CRM_APB1RST_DACRST_SHIFT          (29)
#define CRM_APB1RST_DACRST(x)             (x << 29)
#define CRM_AHBEN_DMA1EN_MASK             (0x01 << 0)
#define CRM_AHBEN_DMA1EN_SHIFT            (0)
#define CRM_AHBEN_DMA1EN(x)               (x << 0)
#define CRM_AHBEN_DMA2EN_MASK             (0x01 << 1)
#define CRM_AHBEN_DMA2EN_SHIFT            (1)
#define CRM_AHBEN_DMA2EN(x)               (x << 1)
#define CRM_AHBEN_SRAMEN_MASK             (0x01 << 2)
#define CRM_AHBEN_SRAMEN_SHIFT            (2)
#define CRM_AHBEN_SRAMEN(x)               (x << 2)
#define CRM_AHBEN_FLASHEN_MASK            (0x01 << 4)
#define CRM_AHBEN_FLASHEN_SHIFT           (4)
#define CRM_AHBEN_FLASHEN(x)              (x << 4)
#define CRM_AHBEN_CRCEN_MASK              (0x01 << 6)
#define CRM_AHBEN_CRCEN_SHIFT             (6)
#define CRM_AHBEN_CRCEN(x)                (x << 6)
#define CRM_AHBEN_XMCEN_MASK              (0x01 << 8)
#define CRM_AHBEN_XMCEN_SHIFT             (8)
#define CRM_AHBEN_XMCEN(x)                (x << 8)
#define CRM_AHBEN_SDIO1EN_MASK            (0x01 << 10)
#define CRM_AHBEN_SDIO1EN_SHIFT           (10)
#define CRM_AHBEN_SDIO1EN(x)              (x << 10)
#define CRM_AHBEN_SDIO2EN_MASK            (0x01 << 11)
#define CRM_AHBEN_SDIO2EN_SHIFT           (11)
#define CRM_AHBEN_SDIO2EN(x)              (x << 11)
#define CRM_AHBEN_EMACEN_MASK             (0x01 << 14)
#define CRM_AHBEN_EMACEN_SHIFT            (14)
#define CRM_AHBEN_EMACEN(x)               (x << 14)
#define CRM_AHBEN_EMACTXEN_MASK           (0x01 << 15)
#define CRM_AHBEN_EMACTXEN_SHIFT          (15)
#define CRM_AHBEN_EMACTXEN(x)             (x << 15)
#define CRM_AHBEN_EMACRXEN_MASK           (0x01 << 16)
#define CRM_AHBEN_EMACRXEN_SHIFT          (16)
#define CRM_AHBEN_EMACRXEN(x)             (x << 16)
#define CRM_AHBEN_EMACPTPEN_MASK          (0x01 << 28)
#define CRM_AHBEN_EMACPTPEN_SHIFT         (28)
#define CRM_AHBEN_EMACPTPEN(x)            (x << 28)
#define CRM_APB2EN_IOMUXEN_MASK           (0x01 << 0)
#define CRM_APB2EN_IOMUXEN_SHIFT          (0)
#define CRM_APB2EN_IOMUXEN(x)             (x << 0)
#define CRM_APB2EN_GPIOAEN_MASK           (0x01 << 2)
#define CRM_APB2EN_GPIOAEN_SHIFT          (2)
#define CRM_APB2EN_GPIOAEN(x)             (x << 2)
#define CRM_APB2EN_GPIOBEN_MASK           (0x01 << 3)
#define CRM_APB2EN_GPIOBEN_SHIFT          (3)
#define CRM_APB2EN_GPIOBEN(x)             (x << 3)
#define CRM_APB2EN_GPIOCEN_MASK           (0x01 << 4)
#define CRM_APB2EN_GPIOCEN_SHIFT          (4)
#define CRM_APB2EN_GPIOCEN(x)             (x << 4)
#define CRM_APB2EN_GPIODEN_MASK           (0x01 << 5)
#define CRM_APB2EN_GPIODEN_SHIFT          (5)
#define CRM_APB2EN_GPIODEN(x)             (x << 5)
#define CRM_APB2EN_GPIOEEN_MASK           (0x01 << 6)
#define CRM_APB2EN_GPIOEEN_SHIFT          (6)
#define CRM_APB2EN_GPIOEEN(x)             (x << 6)
#define CRM_APB2EN_ADC1EN_MASK            (0x01 << 9)
#define CRM_APB2EN_ADC1EN_SHIFT           (9)
#define CRM_APB2EN_ADC1EN(x)              (x << 9)
#define CRM_APB2EN_ADC2EN_MASK            (0x01 << 10)
#define CRM_APB2EN_ADC2EN_SHIFT           (10)
#define CRM_APB2EN_ADC2EN(x)              (x << 10)
#define CRM_APB2EN_TMR1EN_MASK            (0x01 << 11)
#define CRM_APB2EN_TMR1EN_SHIFT           (11)
#define CRM_APB2EN_TMR1EN(x)              (x << 11)
#define CRM_APB2EN_SPI1EN_MASK            (0x01 << 12)
#define CRM_APB2EN_SPI1EN_SHIFT           (12)
#define CRM_APB2EN_SPI1EN(x)              (x << 12)
#define CRM_APB2EN_TMR8EN_MASK            (0x01 << 13)
#define CRM_APB2EN_TMR8EN_SHIFT           (13)
#define CRM_APB2EN_TMR8EN(x)              (x << 13)
#define CRM_APB2EN_USART1EN_MASK          (0x01 << 14)
#define CRM_APB2EN_USART1EN_SHIFT         (14)
#define CRM_APB2EN_USART1EN(x)            (x << 14)
#define CRM_APB2EN_ADC3EN_MASK            (0x01 << 15)
#define CRM_APB2EN_ADC3EN_SHIFT           (15)
#define CRM_APB2EN_ADC3EN(x)              (x << 15)
#define CRM_APB2EN_TMR9EN_MASK            (0x01 << 19)
#define CRM_APB2EN_TMR9EN_SHIFT           (19)
#define CRM_APB2EN_TMR9EN(x)              (x << 19)
#define CRM_APB2EN_TMR10EN_MASK           (0x01 << 20)
#define CRM_APB2EN_TMR10EN_SHIFT          (20)
#define CRM_APB2EN_TMR10EN(x)             (x << 20)
#define CRM_APB2EN_TMR11EN_MASK           (0x01 << 21)
#define CRM_APB2EN_TMR11EN_SHIFT          (21)
#define CRM_APB2EN_TMR11EN(x)             (x << 21)
#define CRM_APB2EN_ACCEN_MASK             (0x01 << 22)
#define CRM_APB2EN_ACCEN_SHIFT            (22)
#define CRM_APB2EN_ACCEN(x)               (x << 22)
#define CRM_APB2EN_I2C3EN_MASK            (0x01 << 23)
#define CRM_APB2EN_I2C3EN_SHIFT           (23)
#define CRM_APB2EN_I2C3EN(x)              (x << 23)
#define CRM_APB2EN_USART6EN_MASK          (0x01 << 24)
#define CRM_APB2EN_USART6EN_SHIFT         (24)
#define CRM_APB2EN_USART6EN(x)            (x << 24)
#define CRM_APB2EN_UART7EN_MASK           (0x01 << 25)
#define CRM_APB2EN_UART7EN_SHIFT          (25)
#define CRM_APB2EN_UART7EN(x)             (x << 25)
#define CRM_APB2EN_UART8EN_MASK           (0x01 << 26)
#define CRM_APB2EN_UART8EN_SHIFT          (26)
#define CRM_APB2EN_UART8EN(x)             (x << 26)
#define CRM_APB1EN_TMR2EN_MASK            (0x01 << 0)
#define CRM_APB1EN_TMR2EN_SHIFT           (0)
#define CRM_APB1EN_TMR2EN(x)              (x << 0)
#define CRM_APB1EN_TMR3EN_MASK            (0x01 << 1)
#define CRM_APB1EN_TMR3EN_SHIFT           (1)
#define CRM_APB1EN_TMR3EN(x)              (x << 1)
#define CRM_APB1EN_TMR4EN_MASK            (0x01 << 2)
#define CRM_APB1EN_TMR4EN_SHIFT           (2)
#define CRM_APB1EN_TMR4EN(x)              (x << 2)
#define CRM_APB1EN_TMR5EN_MASK            (0x01 << 3)
#define CRM_APB1EN_TMR5EN_SHIFT           (3)
#define CRM_APB1EN_TMR5EN(x)              (x << 3)
#define CRM_APB1EN_TMR6EN_MASK            (0x01 << 4)
#define CRM_APB1EN_TMR6EN_SHIFT           (4)
#define CRM_APB1EN_TMR6EN(x)              (x << 4)
#define CRM_APB1EN_TMR7EN_MASK            (0x01 << 5)
#define CRM_APB1EN_TMR7EN_SHIFT           (5)
#define CRM_APB1EN_TMR7EN(x)              (x << 5)
#define CRM_APB1EN_TMR12EN_MASK           (0x01 << 6)
#define CRM_APB1EN_TMR12EN_SHIFT          (6)
#define CRM_APB1EN_TMR12EN(x)             (x << 6)
#define CRM_APB1EN_TMR13EN_MASK           (0x01 << 7)
#define CRM_APB1EN_TMR13EN_SHIFT          (7)
#define CRM_APB1EN_TMR13EN(x)             (x << 7)
#define CRM_APB1EN_TMR14EN_MASK           (0x01 << 8)
#define CRM_APB1EN_TMR14EN_SHIFT          (8)
#define CRM_APB1EN_TMR14EN(x)             (x << 8)
#define CRM_APB1EN_WWDTEN_MASK            (0x01 << 11)
#define CRM_APB1EN_WWDTEN_SHIFT           (11)
#define CRM_APB1EN_WWDTEN(x)              (x << 11)
#define CRM_APB1EN_SPI2EN_MASK            (0x01 << 14)
#define CRM_APB1EN_SPI2EN_SHIFT           (14)
#define CRM_APB1EN_SPI2EN(x)              (x << 14)
#define CRM_APB1EN_SPI3EN_MASK            (0x01 << 15)
#define CRM_APB1EN_SPI3EN_SHIFT           (15)
#define CRM_APB1EN_SPI3EN(x)              (x << 15)
#define CRM_APB1EN_SPI4EN_MASK            (0x01 << 16)
#define CRM_APB1EN_SPI4EN_SHIFT           (16)
#define CRM_APB1EN_SPI4EN(x)              (x << 16)
#define CRM_APB1EN_USART2EN_MASK          (0x01 << 17)
#define CRM_APB1EN_USART2EN_SHIFT         (17)
#define CRM_APB1EN_USART2EN(x)            (x << 17)
#define CRM_APB1EN_USART3EN_MASK          (0x01 << 18)
#define CRM_APB1EN_USART3EN_SHIFT         (18)
#define CRM_APB1EN_USART3EN(x)            (x << 18)
#define CRM_APB1EN_UART4EN_MASK           (0x01 << 19)
#define CRM_APB1EN_UART4EN_SHIFT          (19)
#define CRM_APB1EN_UART4EN(x)             (x << 19)
#define CRM_APB1EN_UART5EN_MASK           (0x01 << 20)
#define CRM_APB1EN_UART5EN_SHIFT          (20)
#define CRM_APB1EN_UART5EN(x)             (x << 20)
#define CRM_APB1EN_I2C1EN_MASK            (0x01 << 21)
#define CRM_APB1EN_I2C1EN_SHIFT           (21)
#define CRM_APB1EN_I2C1EN(x)              (x << 21)
#define CRM_APB1EN_I2C2EN_MASK            (0x01 << 22)
#define CRM_APB1EN_I2C2EN_SHIFT           (22)
#define CRM_APB1EN_I2C2EN(x)              (x << 22)
#define CRM_APB1EN_USBEN_MASK             (0x01 << 23)
#define CRM_APB1EN_USBEN_SHIFT            (23)
#define CRM_APB1EN_USBEN(x)               (x << 23)
#define CRM_APB1EN_CAN1EN_MASK            (0x01 << 25)
#define CRM_APB1EN_CAN1EN_SHIFT           (25)
#define CRM_APB1EN_CAN1EN(x)              (x << 25)
#define CRM_APB1EN_CAN2EN_MASK            (0x01 << 26)
#define CRM_APB1EN_CAN2EN_SHIFT           (26)
#define CRM_APB1EN_CAN2EN(x)              (x << 26)
#define CRM_APB1EN_BPREN_MASK             (0x01 << 27)
#define CRM_APB1EN_BPREN_SHIFT            (27)
#define CRM_APB1EN_BPREN(x)               (x << 27)
#define CRM_APB1EN_PWCEN_MASK             (0x01 << 28)
#define CRM_APB1EN_PWCEN_SHIFT            (28)
#define CRM_APB1EN_PWCEN(x)               (x << 28)
#define CRM_APB1EN_DACEN_MASK             (0x01 << 29)
#define CRM_APB1EN_DACEN_SHIFT            (29)
#define CRM_APB1EN_DACEN(x)               (x << 29)
#define CRM_BPDC_LEXTEN_MASK              (0x01 << 0)
#define CRM_BPDC_LEXTEN_SHIFT             (0)
#define CRM_BPDC_LEXTEN(x)                (x << 0)
#define CRM_BPDC_LEXTSTBL_MASK            (0x01 << 1)
#define CRM_BPDC_LEXTSTBL_SHIFT           (1)
#define CRM_BPDC_LEXTSTBL(x)              (x << 1)
#define CRM_BPDC_LEXTBYPS_MASK            (0x01 << 2)
#define CRM_BPDC_LEXTBYPS_SHIFT           (2)
#define CRM_BPDC_LEXTBYPS(x)              (x << 2)
#define CRM_BPDC_RTCSEL_MASK              (0x03 << 8)
#define CRM_BPDC_RTCSEL_SHIFT             (8)
#define CRM_BPDC_RTCSEL(x)                (x << 8)
#define CRM_BPDC_RTCEN_MASK               (0x01 << 15)
#define CRM_BPDC_RTCEN_SHIFT              (15)
#define CRM_BPDC_RTCEN(x)                 (x << 15)
#define CRM_BPDC_BPDRST_MASK              (0x01 << 16)
#define CRM_BPDC_BPDRST_SHIFT             (16)
#define CRM_BPDC_BPDRST(x)                (x << 16)
#define CRM_CTRLSTS_LICKEN_MASK           (0x01 << 0)
#define CRM_CTRLSTS_LICKEN_SHIFT          (0)
#define CRM_CTRLSTS_LICKEN(x)             (x << 0)
#define CRM_CTRLSTS_LICKSTBL_MASK         (0x01 << 1)
#define CRM_CTRLSTS_LICKSTBL_SHIFT        (1)
#define CRM_CTRLSTS_LICKSTBL(x)           (x << 1)
#define CRM_CTRLSTS_RSTFC_MASK            (0x01 << 24)
#define CRM_CTRLSTS_RSTFC_SHIFT           (24)
#define CRM_CTRLSTS_RSTFC(x)              (x << 24)
#define CRM_CTRLSTS_NRSTF_MASK            (0x01 << 26)
#define CRM_CTRLSTS_NRSTF_SHIFT           (26)
#define CRM_CTRLSTS_NRSTF(x)              (x << 26)
#define CRM_CTRLSTS_PORRSTF_MASK          (0x01 << 27)
#define CRM_CTRLSTS_PORRSTF_SHIFT         (27)
#define CRM_CTRLSTS_PORRSTF(x)            (x << 27)
#define CRM_CTRLSTS_SWRSTF_MASK           (0x01 << 28)
#define CRM_CTRLSTS_SWRSTF_SHIFT          (28)
#define CRM_CTRLSTS_SWRSTF(x)             (x << 28)
#define CRM_CTRLSTS_WDTRSTF_MASK          (0x01 << 29)
#define CRM_CTRLSTS_WDTRSTF_SHIFT         (29)
#define CRM_CTRLSTS_WDTRSTF(x)            (x << 29)
#define CRM_CTRLSTS_WWDTRSTF_MASK         (0x01 << 30)
#define CRM_CTRLSTS_WWDTRSTF_SHIFT        (30)
#define CRM_CTRLSTS_WWDTRSTF(x)           (x << 30)
#define CRM_CTRLSTS_LPRSTF_MASK           (0x01 << 31)
#define CRM_CTRLSTS_LPRSTF_SHIFT          (31)
#define CRM_CTRLSTS_LPRSTF(x)             (x << 31)
#define CRM_AHBRST_EMACRST_MASK           (0x01 << 14)
#define CRM_AHBRST_EMACRST_SHIFT          (14)
#define CRM_AHBRST_EMACRST(x)             (x << 14)
#define CRM_MISC1_HICKCAL_KEY_MASK        (0xff << 0)
#define CRM_MISC1_HICKCAL_KEY_SHIFT       (0)
#define CRM_MISC1_HICKCAL_KEY(x)          (x << 0)
#define CRM_MISC1_CLKOUT_SEL3_MASK        (0x01 << 16)
#define CRM_MISC1_CLKOUT_SEL3_SHIFT       (16)
#define CRM_MISC1_CLKOUT_SEL3(x)          (x << 16)
#define CRM_MISC1_USBBUFS_MASK            (0x01 << 24)
#define CRM_MISC1_USBBUFS_SHIFT           (24)
#define CRM_MISC1_USBBUFS(x)              (x << 24)
#define CRM_MISC1_HICKDIV_MASK            (0x01 << 25)
#define CRM_MISC1_HICKDIV_SHIFT           (25)
#define CRM_MISC1_HICKDIV(x)              (x << 25)
#define CRM_MISC1_CLKOUTDIV_MASK          (0x0f << 28)
#define CRM_MISC1_CLKOUTDIV_SHIFT         (28)
#define CRM_MISC1_CLKOUTDIV(x)            (x << 28)
#define CRM_MISC2_CLK_TO_TMR_MASK         (0x01 << 16)
#define CRM_MISC2_CLK_TO_TMR_SHIFT        (16)
#define CRM_MISC2_CLK_TO_TMR(x)           (x << 16)
#define CRM_MISC3_AUTO_STEP_EN_MASK       (0x03 << 4)
#define CRM_MISC3_AUTO_STEP_EN_SHIFT      (4)
#define CRM_MISC3_AUTO_STEP_EN(x)         (x << 4)
#define CRM_MISC3_HICK_TO_USB_MASK        (0x01 << 8)
#define CRM_MISC3_HICK_TO_USB_SHIFT       (8)
#define CRM_MISC3_HICK_TO_USB(x)          (x << 8)
#define CRM_MISC3_HICK_TO_SCLK_MASK       (0x01 << 9)
#define CRM_MISC3_HICK_TO_SCLK_SHIFT      (9)
#define CRM_MISC3_HICK_TO_SCLK(x)         (x << 9)
#define CRM_MISC3_HEXTDIV_MASK            (0x03 << 12)
#define CRM_MISC3_HEXTDIV_SHIFT           (12)
#define CRM_MISC3_HEXTDIV(x)              (x << 12)
#define CRM_MISC3_EMAC_PPS_SEL_MASK       (0x01 << 15)
#define CRM_MISC3_EMAC_PPS_SEL_SHIFT      (15)
#define CRM_MISC3_EMAC_PPS_SEL(x)         (x << 15)
#define CRM_INTMAP_USB_INT_MAP_MASK       (0x01 << 0)
#define CRM_INTMAP_USB_INT_MAP_SHIFT      (0)
#define CRM_INTMAP_USB_INT_MAP(x)         (x << 0)

/* GPIOA - General purpose IO */
#define GPIO_CFGLR_IOMC0_MASK             (0x03 << 0)
#define GPIO_CFGLR_IOMC0_SHIFT            (0)
#define GPIO_CFGLR_IOMC0(x)               (x << 0)
#define GPIO_CFGLR_IOFC0_MASK             (0x03 << 2)
#define GPIO_CFGLR_IOFC0_SHIFT            (2)
#define GPIO_CFGLR_IOFC0(x)               (x << 2)
#define GPIO_CFGLR_IOMC1_MASK             (0x03 << 4)
#define GPIO_CFGLR_IOMC1_SHIFT            (4)
#define GPIO_CFGLR_IOMC1(x)               (x << 4)
#define GPIO_CFGLR_IOFC1_MASK             (0x03 << 6)
#define GPIO_CFGLR_IOFC1_SHIFT            (6)
#define GPIO_CFGLR_IOFC1(x)               (x << 6)
#define GPIO_CFGLR_IOMC2_MASK             (0x03 << 8)
#define GPIO_CFGLR_IOMC2_SHIFT            (8)
#define GPIO_CFGLR_IOMC2(x)               (x << 8)
#define GPIO_CFGLR_IOFC2_MASK             (0x03 << 10)
#define GPIO_CFGLR_IOFC2_SHIFT            (10)
#define GPIO_CFGLR_IOFC2(x)               (x << 10)
#define GPIO_CFGLR_IOMC3_MASK             (0x03 << 12)
#define GPIO_CFGLR_IOMC3_SHIFT            (12)
#define GPIO_CFGLR_IOMC3(x)               (x << 12)
#define GPIO_CFGLR_IOFC3_MASK             (0x03 << 14)
#define GPIO_CFGLR_IOFC3_SHIFT            (14)
#define GPIO_CFGLR_IOFC3(x)               (x << 14)
#define GPIO_CFGLR_IOMC4_MASK             (0x03 << 16)
#define GPIO_CFGLR_IOMC4_SHIFT            (16)
#define GPIO_CFGLR_IOMC4(x)               (x << 16)
#define GPIO_CFGLR_IOFC4_MASK             (0x03 << 18)
#define GPIO_CFGLR_IOFC4_SHIFT            (18)
#define GPIO_CFGLR_IOFC4(x)               (x << 18)
#define GPIO_CFGLR_IOMC5_MASK             (0x03 << 20)
#define GPIO_CFGLR_IOMC5_SHIFT            (20)
#define GPIO_CFGLR_IOMC5(x)               (x << 20)
#define GPIO_CFGLR_IOFC5_MASK             (0x03 << 22)
#define GPIO_CFGLR_IOFC5_SHIFT            (22)
#define GPIO_CFGLR_IOFC5(x)               (x << 22)
#define GPIO_CFGLR_IOMC6_MASK             (0x03 << 24)
#define GPIO_CFGLR_IOMC6_SHIFT            (24)
#define GPIO_CFGLR_IOMC6(x)               (x << 24)
#define GPIO_CFGLR_IOFC6_MASK             (0x03 << 26)
#define GPIO_CFGLR_IOFC6_SHIFT            (26)
#define GPIO_CFGLR_IOFC6(x)               (x << 26)
#define GPIO_CFGLR_IOMC7_MASK             (0x03 << 28)
#define GPIO_CFGLR_IOMC7_SHIFT            (28)
#define GPIO_CFGLR_IOMC7(x)               (x << 28)
#define GPIO_CFGLR_IOFC7_MASK             (0x03 << 30)
#define GPIO_CFGLR_IOFC7_SHIFT            (30)
#define GPIO_CFGLR_IOFC7(x)               (x << 30)
#define GPIO_CFGHR_IOMC8_MASK             (0x03 << 0)
#define GPIO_CFGHR_IOMC8_SHIFT            (0)
#define GPIO_CFGHR_IOMC8(x)               (x << 0)
#define GPIO_CFGHR_IOFC8_MASK             (0x03 << 2)
#define GPIO_CFGHR_IOFC8_SHIFT            (2)
#define GPIO_CFGHR_IOFC8(x)               (x << 2)
#define GPIO_CFGHR_IOMC9_MASK             (0x03 << 4)
#define GPIO_CFGHR_IOMC9_SHIFT            (4)
#define GPIO_CFGHR_IOMC9(x)               (x << 4)
#define GPIO_CFGHR_IOFC9_MASK             (0x03 << 6)
#define GPIO_CFGHR_IOFC9_SHIFT            (6)
#define GPIO_CFGHR_IOFC9(x)               (x << 6)
#define GPIO_CFGHR_IOMC10_MASK            (0x03 << 8)
#define GPIO_CFGHR_IOMC10_SHIFT           (8)
#define GPIO_CFGHR_IOMC10(x)              (x << 8)
#define GPIO_CFGHR_IOFC10_MASK            (0x03 << 10)
#define GPIO_CFGHR_IOFC10_SHIFT           (10)
#define GPIO_CFGHR_IOFC10(x)              (x << 10)
#define GPIO_CFGHR_IOMC11_MASK            (0x03 << 12)
#define GPIO_CFGHR_IOMC11_SHIFT           (12)
#define GPIO_CFGHR_IOMC11(x)              (x << 12)
#define GPIO_CFGHR_IOFC11_MASK            (0x03 << 14)
#define GPIO_CFGHR_IOFC11_SHIFT           (14)
#define GPIO_CFGHR_IOFC11(x)              (x << 14)
#define GPIO_CFGHR_IOMC12_MASK            (0x03 << 16)
#define GPIO_CFGHR_IOMC12_SHIFT           (16)
#define GPIO_CFGHR_IOMC12(x)              (x << 16)
#define GPIO_CFGHR_IOFC12_MASK            (0x03 << 18)
#define GPIO_CFGHR_IOFC12_SHIFT           (18)
#define GPIO_CFGHR_IOFC12(x)              (x << 18)
#define GPIO_CFGHR_IOMC13_MASK            (0x03 << 20)
#define GPIO_CFGHR_IOMC13_SHIFT           (20)
#define GPIO_CFGHR_IOMC13(x)              (x << 20)
#define GPIO_CFGHR_IOFC13_MASK            (0x03 << 22)
#define GPIO_CFGHR_IOFC13_SHIFT           (22)
#define GPIO_CFGHR_IOFC13(x)              (x << 22)
#define GPIO_CFGHR_IOMC14_MASK            (0x03 << 24)
#define GPIO_CFGHR_IOMC14_SHIFT           (24)
#define GPIO_CFGHR_IOMC14(x)              (x << 24)
#define GPIO_CFGHR_IOFC14_MASK            (0x03 << 26)
#define GPIO_CFGHR_IOFC14_SHIFT           (26)
#define GPIO_CFGHR_IOFC14(x)              (x << 26)
#define GPIO_CFGHR_IOMC15_MASK            (0x03 << 28)
#define GPIO_CFGHR_IOMC15_SHIFT           (28)
#define GPIO_CFGHR_IOMC15(x)              (x << 28)
#define GPIO_CFGHR_IOFC15_MASK            (0x03 << 30)
#define GPIO_CFGHR_IOFC15_SHIFT           (30)
#define GPIO_CFGHR_IOFC15(x)              (x << 30)
#define GPIO_IDT_IDT0_MASK                (0x01 << 0)
#define GPIO_IDT_IDT0_SHIFT               (0)
#define GPIO_IDT_IDT0(x)                  (x << 0)
#define GPIO_IDT_IDT1_MASK                (0x01 << 1)
#define GPIO_IDT_IDT1_SHIFT               (1)
#define GPIO_IDT_IDT1(x)                  (x << 1)
#define GPIO_IDT_IDT2_MASK                (0x01 << 2)
#define GPIO_IDT_IDT2_SHIFT               (2)
#define GPIO_IDT_IDT2(x)                  (x << 2)
#define GPIO_IDT_IDT3_MASK                (0x01 << 3)
#define GPIO_IDT_IDT3_SHIFT               (3)
#define GPIO_IDT_IDT3(x)                  (x << 3)
#define GPIO_IDT_IDT4_MASK                (0x01 << 4)
#define GPIO_IDT_IDT4_SHIFT               (4)
#define GPIO_IDT_IDT4(x)                  (x << 4)
#define GPIO_IDT_IDT5_MASK                (0x01 << 5)
#define GPIO_IDT_IDT5_SHIFT               (5)
#define GPIO_IDT_IDT5(x)                  (x << 5)
#define GPIO_IDT_IDT6_MASK                (0x01 << 6)
#define GPIO_IDT_IDT6_SHIFT               (6)
#define GPIO_IDT_IDT6(x)                  (x << 6)
#define GPIO_IDT_IDT7_MASK                (0x01 << 7)
#define GPIO_IDT_IDT7_SHIFT               (7)
#define GPIO_IDT_IDT7(x)                  (x << 7)
#define GPIO_IDT_IDT8_MASK                (0x01 << 8)
#define GPIO_IDT_IDT8_SHIFT               (8)
#define GPIO_IDT_IDT8(x)                  (x << 8)
#define GPIO_IDT_IDT9_MASK                (0x01 << 9)
#define GPIO_IDT_IDT9_SHIFT               (9)
#define GPIO_IDT_IDT9(x)                  (x << 9)
#define GPIO_IDT_IDT10_MASK               (0x01 << 10)
#define GPIO_IDT_IDT10_SHIFT              (10)
#define GPIO_IDT_IDT10(x)                 (x << 10)
#define GPIO_IDT_IDT11_MASK               (0x01 << 11)
#define GPIO_IDT_IDT11_SHIFT              (11)
#define GPIO_IDT_IDT11(x)                 (x << 11)
#define GPIO_IDT_IDT12_MASK               (0x01 << 12)
#define GPIO_IDT_IDT12_SHIFT              (12)
#define GPIO_IDT_IDT12(x)                 (x << 12)
#define GPIO_IDT_IDT13_MASK               (0x01 << 13)
#define GPIO_IDT_IDT13_SHIFT              (13)
#define GPIO_IDT_IDT13(x)                 (x << 13)
#define GPIO_IDT_IDT14_MASK               (0x01 << 14)
#define GPIO_IDT_IDT14_SHIFT              (14)
#define GPIO_IDT_IDT14(x)                 (x << 14)
#define GPIO_IDT_IDT15_MASK               (0x01 << 15)
#define GPIO_IDT_IDT15_SHIFT              (15)
#define GPIO_IDT_IDT15(x)                 (x << 15)
#define GPIO_ODT_ODT0_MASK                (0x01 << 0)
#define GPIO_ODT_ODT0_SHIFT               (0)
#define GPIO_ODT_ODT0(x)                  (x << 0)
#define GPIO_ODT_ODT1_MASK                (0x01 << 1)
#define GPIO_ODT_ODT1_SHIFT               (1)
#define GPIO_ODT_ODT1(x)                  (x << 1)
#define GPIO_ODT_ODT2_MASK                (0x01 << 2)
#define GPIO_ODT_ODT2_SHIFT               (2)
#define GPIO_ODT_ODT2(x)                  (x << 2)
#define GPIO_ODT_ODT3_MASK                (0x01 << 3)
#define GPIO_ODT_ODT3_SHIFT               (3)
#define GPIO_ODT_ODT3(x)                  (x << 3)
#define GPIO_ODT_ODT4_MASK                (0x01 << 4)
#define GPIO_ODT_ODT4_SHIFT               (4)
#define GPIO_ODT_ODT4(x)                  (x << 4)
#define GPIO_ODT_ODT5_MASK                (0x01 << 5)
#define GPIO_ODT_ODT5_SHIFT               (5)
#define GPIO_ODT_ODT5(x)                  (x << 5)
#define GPIO_ODT_ODT6_MASK                (0x01 << 6)
#define GPIO_ODT_ODT6_SHIFT               (6)
#define GPIO_ODT_ODT6(x)                  (x << 6)
#define GPIO_ODT_ODT7_MASK                (0x01 << 7)
#define GPIO_ODT_ODT7_SHIFT               (7)
#define GPIO_ODT_ODT7(x)                  (x << 7)
#define GPIO_ODT_ODT8_MASK                (0x01 << 8)
#define GPIO_ODT_ODT8_SHIFT               (8)
#define GPIO_ODT_ODT8(x)                  (x << 8)
#define GPIO_ODT_ODT9_MASK                (0x01 << 9)
#define GPIO_ODT_ODT9_SHIFT               (9)
#define GPIO_ODT_ODT9(x)                  (x << 9)
#define GPIO_ODT_ODT10_MASK               (0x01 << 10)
#define GPIO_ODT_ODT10_SHIFT              (10)
#define GPIO_ODT_ODT10(x)                 (x << 10)
#define GPIO_ODT_ODT11_MASK               (0x01 << 11)
#define GPIO_ODT_ODT11_SHIFT              (11)
#define GPIO_ODT_ODT11(x)                 (x << 11)
#define GPIO_ODT_ODT12_MASK               (0x01 << 12)
#define GPIO_ODT_ODT12_SHIFT              (12)
#define GPIO_ODT_ODT12(x)                 (x << 12)
#define GPIO_ODT_ODT13_MASK               (0x01 << 13)
#define GPIO_ODT_ODT13_SHIFT              (13)
#define GPIO_ODT_ODT13(x)                 (x << 13)
#define GPIO_ODT_ODT14_MASK               (0x01 << 14)
#define GPIO_ODT_ODT14_SHIFT              (14)
#define GPIO_ODT_ODT14(x)                 (x << 14)
#define GPIO_ODT_ODT15_MASK               (0x01 << 15)
#define GPIO_ODT_ODT15_SHIFT              (15)
#define GPIO_ODT_ODT15(x)                 (x << 15)
#define GPIO_SCR_IOSB0_MASK               (0x01 << 0)
#define GPIO_SCR_IOSB0_SHIFT              (0)
#define GPIO_SCR_IOSB0(x)                 (x << 0)
#define GPIO_SCR_IOSB1_MASK               (0x01 << 1)
#define GPIO_SCR_IOSB1_SHIFT              (1)
#define GPIO_SCR_IOSB1(x)                 (x << 1)
#define GPIO_SCR_IOSB2_MASK               (0x01 << 2)
#define GPIO_SCR_IOSB2_SHIFT              (2)
#define GPIO_SCR_IOSB2(x)                 (x << 2)
#define GPIO_SCR_IOSB3_MASK               (0x01 << 3)
#define GPIO_SCR_IOSB3_SHIFT              (3)
#define GPIO_SCR_IOSB3(x)                 (x << 3)
#define GPIO_SCR_IOSB4_MASK               (0x01 << 4)
#define GPIO_SCR_IOSB4_SHIFT              (4)
#define GPIO_SCR_IOSB4(x)                 (x << 4)
#define GPIO_SCR_IOSB5_MASK               (0x01 << 5)
#define GPIO_SCR_IOSB5_SHIFT              (5)
#define GPIO_SCR_IOSB5(x)                 (x << 5)
#define GPIO_SCR_IOSB6_MASK               (0x01 << 6)
#define GPIO_SCR_IOSB6_SHIFT              (6)
#define GPIO_SCR_IOSB6(x)                 (x << 6)
#define GPIO_SCR_IOSB7_MASK               (0x01 << 7)
#define GPIO_SCR_IOSB7_SHIFT              (7)
#define GPIO_SCR_IOSB7(x)                 (x << 7)
#define GPIO_SCR_IOSB8_MASK               (0x01 << 8)
#define GPIO_SCR_IOSB8_SHIFT              (8)
#define GPIO_SCR_IOSB8(x)                 (x << 8)
#define GPIO_SCR_IOSB9_MASK               (0x01 << 9)
#define GPIO_SCR_IOSB9_SHIFT              (9)
#define GPIO_SCR_IOSB9(x)                 (x << 9)
#define GPIO_SCR_IOSB10_MASK              (0x01 << 10)
#define GPIO_SCR_IOSB10_SHIFT             (10)
#define GPIO_SCR_IOSB10(x)                (x << 10)
#define GPIO_SCR_IOSB11_MASK              (0x01 << 11)
#define GPIO_SCR_IOSB11_SHIFT             (11)
#define GPIO_SCR_IOSB11(x)                (x << 11)
#define GPIO_SCR_IOSB12_MASK              (0x01 << 12)
#define GPIO_SCR_IOSB12_SHIFT             (12)
#define GPIO_SCR_IOSB12(x)                (x << 12)
#define GPIO_SCR_IOSB13_MASK              (0x01 << 13)
#define GPIO_SCR_IOSB13_SHIFT             (13)
#define GPIO_SCR_IOSB13(x)                (x << 13)
#define GPIO_SCR_IOSB14_MASK              (0x01 << 14)
#define GPIO_SCR_IOSB14_SHIFT             (14)
#define GPIO_SCR_IOSB14(x)                (x << 14)
#define GPIO_SCR_IOSB15_MASK              (0x01 << 15)
#define GPIO_SCR_IOSB15_SHIFT             (15)
#define GPIO_SCR_IOSB15(x)                (x << 15)
#define GPIO_SCR_IOCB0_MASK               (0x01 << 16)
#define GPIO_SCR_IOCB0_SHIFT              (16)
#define GPIO_SCR_IOCB0(x)                 (x << 16)
#define GPIO_SCR_IOCB1_MASK               (0x01 << 17)
#define GPIO_SCR_IOCB1_SHIFT              (17)
#define GPIO_SCR_IOCB1(x)                 (x << 17)
#define GPIO_SCR_IOCB2_MASK               (0x01 << 18)
#define GPIO_SCR_IOCB2_SHIFT              (18)
#define GPIO_SCR_IOCB2(x)                 (x << 18)
#define GPIO_SCR_IOCB3_MASK               (0x01 << 19)
#define GPIO_SCR_IOCB3_SHIFT              (19)
#define GPIO_SCR_IOCB3(x)                 (x << 19)
#define GPIO_SCR_IOCB4_MASK               (0x01 << 20)
#define GPIO_SCR_IOCB4_SHIFT              (20)
#define GPIO_SCR_IOCB4(x)                 (x << 20)
#define GPIO_SCR_IOCB5_MASK               (0x01 << 21)
#define GPIO_SCR_IOCB5_SHIFT              (21)
#define GPIO_SCR_IOCB5(x)                 (x << 21)
#define GPIO_SCR_IOCB6_MASK               (0x01 << 22)
#define GPIO_SCR_IOCB6_SHIFT              (22)
#define GPIO_SCR_IOCB6(x)                 (x << 22)
#define GPIO_SCR_IOCB7_MASK               (0x01 << 23)
#define GPIO_SCR_IOCB7_SHIFT              (23)
#define GPIO_SCR_IOCB7(x)                 (x << 23)
#define GPIO_SCR_IOCB8_MASK               (0x01 << 24)
#define GPIO_SCR_IOCB8_SHIFT              (24)
#define GPIO_SCR_IOCB8(x)                 (x << 24)
#define GPIO_SCR_IOCB9_MASK               (0x01 << 25)
#define GPIO_SCR_IOCB9_SHIFT              (25)
#define GPIO_SCR_IOCB9(x)                 (x << 25)
#define GPIO_SCR_IOCB10_MASK              (0x01 << 26)
#define GPIO_SCR_IOCB10_SHIFT             (26)
#define GPIO_SCR_IOCB10(x)                (x << 26)
#define GPIO_SCR_IOCB11_MASK              (0x01 << 27)
#define GPIO_SCR_IOCB11_SHIFT             (27)
#define GPIO_SCR_IOCB11(x)                (x << 27)
#define GPIO_SCR_IOCB12_MASK              (0x01 << 28)
#define GPIO_SCR_IOCB12_SHIFT             (28)
#define GPIO_SCR_IOCB12(x)                (x << 28)
#define GPIO_SCR_IOCB13_MASK              (0x01 << 29)
#define GPIO_SCR_IOCB13_SHIFT             (29)
#define GPIO_SCR_IOCB13(x)                (x << 29)
#define GPIO_SCR_IOCB14_MASK              (0x01 << 30)
#define GPIO_SCR_IOCB14_SHIFT             (30)
#define GPIO_SCR_IOCB14(x)                (x << 30)
#define GPIO_SCR_IOCB15_MASK              (0x01 << 31)
#define GPIO_SCR_IOCB15_SHIFT             (31)
#define GPIO_SCR_IOCB15(x)                (x << 31)
#define GPIO_CLR_IOCB0_MASK               (0x01 << 0)
#define GPIO_CLR_IOCB0_SHIFT              (0)
#define GPIO_CLR_IOCB0(x)                 (x << 0)
#define GPIO_CLR_IOCB1_MASK               (0x01 << 1)
#define GPIO_CLR_IOCB1_SHIFT              (1)
#define GPIO_CLR_IOCB1(x)                 (x << 1)
#define GPIO_CLR_IOCB2_MASK               (0x01 << 2)
#define GPIO_CLR_IOCB2_SHIFT              (2)
#define GPIO_CLR_IOCB2(x)                 (x << 2)
#define GPIO_CLR_IOCB3_MASK               (0x01 << 3)
#define GPIO_CLR_IOCB3_SHIFT              (3)
#define GPIO_CLR_IOCB3(x)                 (x << 3)
#define GPIO_CLR_IOCB4_MASK               (0x01 << 4)
#define GPIO_CLR_IOCB4_SHIFT              (4)
#define GPIO_CLR_IOCB4(x)                 (x << 4)
#define GPIO_CLR_IOCB5_MASK               (0x01 << 5)
#define GPIO_CLR_IOCB5_SHIFT              (5)
#define GPIO_CLR_IOCB5(x)                 (x << 5)
#define GPIO_CLR_IOCB6_MASK               (0x01 << 6)
#define GPIO_CLR_IOCB6_SHIFT              (6)
#define GPIO_CLR_IOCB6(x)                 (x << 6)
#define GPIO_CLR_IOCB7_MASK               (0x01 << 7)
#define GPIO_CLR_IOCB7_SHIFT              (7)
#define GPIO_CLR_IOCB7(x)                 (x << 7)
#define GPIO_CLR_IOCB8_MASK               (0x01 << 8)
#define GPIO_CLR_IOCB8_SHIFT              (8)
#define GPIO_CLR_IOCB8(x)                 (x << 8)
#define GPIO_CLR_IOCB9_MASK               (0x01 << 9)
#define GPIO_CLR_IOCB9_SHIFT              (9)
#define GPIO_CLR_IOCB9(x)                 (x << 9)
#define GPIO_CLR_IOCB10_MASK              (0x01 << 10)
#define GPIO_CLR_IOCB10_SHIFT             (10)
#define GPIO_CLR_IOCB10(x)                (x << 10)
#define GPIO_CLR_IOCB11_MASK              (0x01 << 11)
#define GPIO_CLR_IOCB11_SHIFT             (11)
#define GPIO_CLR_IOCB11(x)                (x << 11)
#define GPIO_CLR_IOCB12_MASK              (0x01 << 12)
#define GPIO_CLR_IOCB12_SHIFT             (12)
#define GPIO_CLR_IOCB12(x)                (x << 12)
#define GPIO_CLR_IOCB13_MASK              (0x01 << 13)
#define GPIO_CLR_IOCB13_SHIFT             (13)
#define GPIO_CLR_IOCB13(x)                (x << 13)
#define GPIO_CLR_IOCB14_MASK              (0x01 << 14)
#define GPIO_CLR_IOCB14_SHIFT             (14)
#define GPIO_CLR_IOCB14(x)                (x << 14)
#define GPIO_CLR_IOCB15_MASK              (0x01 << 15)
#define GPIO_CLR_IOCB15_SHIFT             (15)
#define GPIO_CLR_IOCB15(x)                (x << 15)
#define GPIO_WPR_WPEN0_MASK               (0x01 << 0)
#define GPIO_WPR_WPEN0_SHIFT              (0)
#define GPIO_WPR_WPEN0(x)                 (x << 0)
#define GPIO_WPR_WPEN1_MASK               (0x01 << 1)
#define GPIO_WPR_WPEN1_SHIFT              (1)
#define GPIO_WPR_WPEN1(x)                 (x << 1)
#define GPIO_WPR_WPEN2_MASK               (0x01 << 2)
#define GPIO_WPR_WPEN2_SHIFT              (2)
#define GPIO_WPR_WPEN2(x)                 (x << 2)
#define GPIO_WPR_WPEN3_MASK               (0x01 << 3)
#define GPIO_WPR_WPEN3_SHIFT              (3)
#define GPIO_WPR_WPEN3(x)                 (x << 3)
#define GPIO_WPR_WPEN4_MASK               (0x01 << 4)
#define GPIO_WPR_WPEN4_SHIFT              (4)
#define GPIO_WPR_WPEN4(x)                 (x << 4)
#define GPIO_WPR_WPEN5_MASK               (0x01 << 5)
#define GPIO_WPR_WPEN5_SHIFT              (5)
#define GPIO_WPR_WPEN5(x)                 (x << 5)
#define GPIO_WPR_WPEN6_MASK               (0x01 << 6)
#define GPIO_WPR_WPEN6_SHIFT              (6)
#define GPIO_WPR_WPEN6(x)                 (x << 6)
#define GPIO_WPR_WPEN7_MASK               (0x01 << 7)
#define GPIO_WPR_WPEN7_SHIFT              (7)
#define GPIO_WPR_WPEN7(x)                 (x << 7)
#define GPIO_WPR_WPEN8_MASK               (0x01 << 8)
#define GPIO_WPR_WPEN8_SHIFT              (8)
#define GPIO_WPR_WPEN8(x)                 (x << 8)
#define GPIO_WPR_WPEN9_MASK               (0x01 << 9)
#define GPIO_WPR_WPEN9_SHIFT              (9)
#define GPIO_WPR_WPEN9(x)                 (x << 9)
#define GPIO_WPR_WPEN10_MASK              (0x01 << 10)
#define GPIO_WPR_WPEN10_SHIFT             (10)
#define GPIO_WPR_WPEN10(x)                (x << 10)
#define GPIO_WPR_WPEN11_MASK              (0x01 << 11)
#define GPIO_WPR_WPEN11_SHIFT             (11)
#define GPIO_WPR_WPEN11(x)                (x << 11)
#define GPIO_WPR_WPEN12_MASK              (0x01 << 12)
#define GPIO_WPR_WPEN12_SHIFT             (12)
#define GPIO_WPR_WPEN12(x)                (x << 12)
#define GPIO_WPR_WPEN13_MASK              (0x01 << 13)
#define GPIO_WPR_WPEN13_SHIFT             (13)
#define GPIO_WPR_WPEN13(x)                (x << 13)
#define GPIO_WPR_WPEN14_MASK              (0x01 << 14)
#define GPIO_WPR_WPEN14_SHIFT             (14)
#define GPIO_WPR_WPEN14(x)                (x << 14)
#define GPIO_WPR_WPEN15_MASK              (0x01 << 15)
#define GPIO_WPR_WPEN15_SHIFT             (15)
#define GPIO_WPR_WPEN15(x)                (x << 15)
#define GPIO_WPR_WPSEQ_MASK               (0x01 << 16)
#define GPIO_WPR_WPSEQ_SHIFT              (16)
#define GPIO_WPR_WPSEQ(x)                 (x << 16)
#define GPIO_HDRV_HDRV0_MASK              (0x01 << 0)
#define GPIO_HDRV_HDRV0_SHIFT             (0)
#define GPIO_HDRV_HDRV0(x)                (x << 0)
#define GPIO_HDRV_HDRV1_MASK              (0x01 << 1)
#define GPIO_HDRV_HDRV1_SHIFT             (1)
#define GPIO_HDRV_HDRV1(x)                (x << 1)
#define GPIO_HDRV_HDRV2_MASK              (0x01 << 2)
#define GPIO_HDRV_HDRV2_SHIFT             (2)
#define GPIO_HDRV_HDRV2(x)                (x << 2)
#define GPIO_HDRV_HDRV3_MASK              (0x01 << 3)
#define GPIO_HDRV_HDRV3_SHIFT             (3)
#define GPIO_HDRV_HDRV3(x)                (x << 3)
#define GPIO_HDRV_HDRV4_MASK              (0x01 << 4)
#define GPIO_HDRV_HDRV4_SHIFT             (4)
#define GPIO_HDRV_HDRV4(x)                (x << 4)
#define GPIO_HDRV_HDRV5_MASK              (0x01 << 5)
#define GPIO_HDRV_HDRV5_SHIFT             (5)
#define GPIO_HDRV_HDRV5(x)                (x << 5)
#define GPIO_HDRV_HDRV6_MASK              (0x01 << 6)
#define GPIO_HDRV_HDRV6_SHIFT             (6)
#define GPIO_HDRV_HDRV6(x)                (x << 6)
#define GPIO_HDRV_HDRV7_MASK              (0x01 << 7)
#define GPIO_HDRV_HDRV7_SHIFT             (7)
#define GPIO_HDRV_HDRV7(x)                (x << 7)
#define GPIO_HDRV_HDRV8_MASK              (0x01 << 8)
#define GPIO_HDRV_HDRV8_SHIFT             (8)
#define GPIO_HDRV_HDRV8(x)                (x << 8)
#define GPIO_HDRV_HDRV9_MASK              (0x01 << 9)
#define GPIO_HDRV_HDRV9_SHIFT             (9)
#define GPIO_HDRV_HDRV9(x)                (x << 9)
#define GPIO_HDRV_HDRV10_MASK             (0x01 << 10)
#define GPIO_HDRV_HDRV10_SHIFT            (10)
#define GPIO_HDRV_HDRV10(x)               (x << 10)
#define GPIO_HDRV_HDRV11_MASK             (0x01 << 11)
#define GPIO_HDRV_HDRV11_SHIFT            (11)
#define GPIO_HDRV_HDRV11(x)               (x << 11)
#define GPIO_HDRV_HDRV12_MASK             (0x01 << 12)
#define GPIO_HDRV_HDRV12_SHIFT            (12)
#define GPIO_HDRV_HDRV12(x)               (x << 12)
#define GPIO_HDRV_HDRV13_MASK             (0x01 << 13)
#define GPIO_HDRV_HDRV13_SHIFT            (13)
#define GPIO_HDRV_HDRV13(x)               (x << 13)
#define GPIO_HDRV_HDRV14_MASK             (0x01 << 14)
#define GPIO_HDRV_HDRV14_SHIFT            (14)
#define GPIO_HDRV_HDRV14(x)               (x << 14)
#define GPIO_HDRV_HDRV15_MASK             (0x01 << 15)
#define GPIO_HDRV_HDRV15_SHIFT            (15)
#define GPIO_HDRV_HDRV15(x)               (x << 15)

/* IOMUX - IO MUX function */
#define IOMUX_EVTOUT_SELPIN_MASK          (0x0f << 0)
#define IOMUX_EVTOUT_SELPIN_SHIFT         (0)
#define IOMUX_EVTOUT_SELPIN(x)            (x << 0)
#define IOMUX_EVTOUT_SELPORT_MASK         (0x07 << 4)
#define IOMUX_EVTOUT_SELPORT_SHIFT        (4)
#define IOMUX_EVTOUT_SELPORT(x)           (x << 4)
#define IOMUX_EVTOUT_EVOEN_MASK           (0x01 << 7)
#define IOMUX_EVTOUT_EVOEN_SHIFT          (7)
#define IOMUX_EVTOUT_EVOEN(x)             (x << 7)
#define IOMUX_REMAP_SPI1_MUX0_MASK        (0x01 << 0)
#define IOMUX_REMAP_SPI1_MUX0_SHIFT       (0)
#define IOMUX_REMAP_SPI1_MUX0(x)          (x << 0)
#define IOMUX_REMAP_I2C1_MUX_MASK         (0x01 << 1)
#define IOMUX_REMAP_I2C1_MUX_SHIFT        (1)
#define IOMUX_REMAP_I2C1_MUX(x)           (x << 1)
#define IOMUX_REMAP_USART1_MUX_MASK       (0x01 << 2)
#define IOMUX_REMAP_USART1_MUX_SHIFT      (2)
#define IOMUX_REMAP_USART1_MUX(x)         (x << 2)
#define IOMUX_REMAP_USART2_MUX_MASK       (0x01 << 3)
#define IOMUX_REMAP_USART2_MUX_SHIFT      (3)
#define IOMUX_REMAP_USART2_MUX(x)         (x << 3)
#define IOMUX_REMAP_USART3_MUX_MASK       (0x03 << 4)
#define IOMUX_REMAP_USART3_MUX_SHIFT      (4)
#define IOMUX_REMAP_USART3_MUX(x)         (x << 4)
#define IOMUX_REMAP_TMR1_MUX_MASK         (0x03 << 6)
#define IOMUX_REMAP_TMR1_MUX_SHIFT        (6)
#define IOMUX_REMAP_TMR1_MUX(x)           (x << 6)
#define IOMUX_REMAP_TMR2_MUX_MASK         (0x03 << 8)
#define IOMUX_REMAP_TMR2_MUX_SHIFT        (8)
#define IOMUX_REMAP_TMR2_MUX(x)           (x << 8)
#define IOMUX_REMAP_TMR3_MUX_MASK         (0x03 << 10)
#define IOMUX_REMAP_TMR3_MUX_SHIFT        (10)
#define IOMUX_REMAP_TMR3_MUX(x)           (x << 10)
#define IOMUX_REMAP_TMR4_MUX_MASK         (0x01 << 12)
#define IOMUX_REMAP_TMR4_MUX_SHIFT        (12)
#define IOMUX_REMAP_TMR4_MUX(x)           (x << 12)
#define IOMUX_REMAP_CAN_MUX_MASK          (0x03 << 13)
#define IOMUX_REMAP_CAN_MUX_SHIFT         (13)
#define IOMUX_REMAP_CAN_MUX(x)            (x << 13)
#define IOMUX_REMAP_PD01_MUX_MASK         (0x01 << 15)
#define IOMUX_REMAP_PD01_MUX_SHIFT        (15)
#define IOMUX_REMAP_PD01_MUX(x)           (x << 15)
#define IOMUX_REMAP_TMR5CH4_MUX_MASK      (0x01 << 16)
#define IOMUX_REMAP_TMR5CH4_MUX_SHIFT     (16)
#define IOMUX_REMAP_TMR5CH4_MUX(x)        (x << 16)
#define IOMUX_REMAP_ADC1_ETP_MUX_MASK     (0x01 << 17)
#define IOMUX_REMAP_ADC1_ETP_MUX_SHIFT    (17)
#define IOMUX_REMAP_ADC1_ETP_MUX(x)       (x << 17)
#define IOMUX_REMAP_ADC1_ETO_MUX_MASK     (0x01 << 18)
#define IOMUX_REMAP_ADC1_ETO_MUX_SHIFT    (18)
#define IOMUX_REMAP_ADC1_ETO_MUX(x)       (x << 18)
#define IOMUX_REMAP_ADC2_ETP_MUX_MASK     (0x01 << 19)
#define IOMUX_REMAP_ADC2_ETP_MUX_SHIFT    (19)
#define IOMUX_REMAP_ADC2_ETP_MUX(x)       (x << 19)
#define IOMUX_REMAP_ADC2_ETO_MUX_MASK     (0x01 << 20)
#define IOMUX_REMAP_ADC2_ETO_MUX_SHIFT    (20)
#define IOMUX_REMAP_ADC2_ETO_MUX(x)       (x << 20)
#define IOMUX_REMAP_EMAC_MUX_MASK         (0x01 << 21)
#define IOMUX_REMAP_EMAC_MUX_SHIFT        (21)
#define IOMUX_REMAP_EMAC_MUX(x)           (x << 21)
#define IOMUX_REMAP_CAN2_MUX_MASK         (0x01 << 22)
#define IOMUX_REMAP_CAN2_MUX_SHIFT        (22)
#define IOMUX_REMAP_CAN2_MUX(x)           (x << 22)
#define IOMUX_REMAP_MII_RMII_SEL_MUX_MASK (0x01 << 23)
#define IOMUX_REMAP_MII_RMII_SEL_MUX_SHIFT (23)
#define IOMUX_REMAP_MII_RMII_SEL_MUX(x)   (x << 23)
#define IOMUX_REMAP_SWJTAG_MUX_MASK       (0x07 << 24)
#define IOMUX_REMAP_SWJTAG_MUX_SHIFT      (24)
#define IOMUX_REMAP_SWJTAG_MUX(x)         (x << 24)
#define IOMUX_REMAP_SPI3_MUX_MASK         (0x01 << 28)
#define IOMUX_REMAP_SPI3_MUX_SHIFT        (28)
#define IOMUX_REMAP_SPI3_MUX(x)           (x << 28)
#define IOMUX_REMAP_TMR2ITR1_MUX_MASK     (0x01 << 29)
#define IOMUX_REMAP_TMR2ITR1_MUX_SHIFT    (29)
#define IOMUX_REMAP_TMR2ITR1_MUX(x)       (x << 29)
#define IOMUX_REMAP_PTP_PPS_MUX_MASK      (0x01 << 30)
#define IOMUX_REMAP_PTP_PPS_MUX_SHIFT     (30)
#define IOMUX_REMAP_PTP_PPS_MUX(x)        (x << 30)
#define IOMUX_REMAP_SPI1_MUX1_MASK        (0x01 << 31)
#define IOMUX_REMAP_SPI1_MUX1_SHIFT       (31)
#define IOMUX_REMAP_SPI1_MUX1(x)          (x << 31)
#define IOMUX_EXINTC1_EXINT0_MASK         (0x0f << 0)
#define IOMUX_EXINTC1_EXINT0_SHIFT        (0)
#define IOMUX_EXINTC1_EXINT0(x)           (x << 0)
#define IOMUX_EXINTC1_EXINT1_MASK         (0x0f << 4)
#define IOMUX_EXINTC1_EXINT1_SHIFT        (4)
#define IOMUX_EXINTC1_EXINT1(x)           (x << 4)
#define IOMUX_EXINTC1_EXINT2_MASK         (0x0f << 8)
#define IOMUX_EXINTC1_EXINT2_SHIFT        (8)
#define IOMUX_EXINTC1_EXINT2(x)           (x << 8)
#define IOMUX_EXINTC1_EXINT3_MASK         (0x0f << 12)
#define IOMUX_EXINTC1_EXINT3_SHIFT        (12)
#define IOMUX_EXINTC1_EXINT3(x)           (x << 12)
#define IOMUX_EXINTC2_EXINT4_MASK         (0x0f << 0)
#define IOMUX_EXINTC2_EXINT4_SHIFT        (0)
#define IOMUX_EXINTC2_EXINT4(x)           (x << 0)
#define IOMUX_EXINTC2_EXINT5_MASK         (0x0f << 4)
#define IOMUX_EXINTC2_EXINT5_SHIFT        (4)
#define IOMUX_EXINTC2_EXINT5(x)           (x << 4)
#define IOMUX_EXINTC2_EXINT6_MASK         (0x0f << 8)
#define IOMUX_EXINTC2_EXINT6_SHIFT        (8)
#define IOMUX_EXINTC2_EXINT6(x)           (x << 8)
#define IOMUX_EXINTC2_EXINT7_MASK         (0x0f << 12)
#define IOMUX_EXINTC2_EXINT7_SHIFT        (12)
#define IOMUX_EXINTC2_EXINT7(x)           (x << 12)
#define IOMUX_EXINTC3_EXINT8_MASK         (0x0f << 0)
#define IOMUX_EXINTC3_EXINT8_SHIFT        (0)
#define IOMUX_EXINTC3_EXINT8(x)           (x << 0)
#define IOMUX_EXINTC3_EXINT9_MASK         (0x0f << 4)
#define IOMUX_EXINTC3_EXINT9_SHIFT        (4)
#define IOMUX_EXINTC3_EXINT9(x)           (x << 4)
#define IOMUX_EXINTC3_EXINT10_MASK        (0x0f << 8)
#define IOMUX_EXINTC3_EXINT10_SHIFT       (8)
#define IOMUX_EXINTC3_EXINT10(x)          (x << 8)
#define IOMUX_EXINTC3_EXINT11_MASK        (0x0f << 12)
#define IOMUX_EXINTC3_EXINT11_SHIFT       (12)
#define IOMUX_EXINTC3_EXINT11(x)          (x << 12)
#define IOMUX_EXINTC4_EXINT12_MASK        (0x0f << 0)
#define IOMUX_EXINTC4_EXINT12_SHIFT       (0)
#define IOMUX_EXINTC4_EXINT12(x)          (x << 0)
#define IOMUX_EXINTC4_EXINT13_MASK        (0x0f << 4)
#define IOMUX_EXINTC4_EXINT13_SHIFT       (4)
#define IOMUX_EXINTC4_EXINT13(x)          (x << 4)
#define IOMUX_EXINTC4_EXINT14_MASK        (0x0f << 8)
#define IOMUX_EXINTC4_EXINT14_SHIFT       (8)
#define IOMUX_EXINTC4_EXINT14(x)          (x << 8)
#define IOMUX_EXINTC4_EXINT15_MASK        (0x0f << 12)
#define IOMUX_EXINTC4_EXINT15_SHIFT       (12)
#define IOMUX_EXINTC4_EXINT15(x)          (x << 12)
#define IOMUX_REMAP2_TMR9_MUX_MASK        (0x01 << 5)
#define IOMUX_REMAP2_TMR9_MUX_SHIFT       (5)
#define IOMUX_REMAP2_TMR9_MUX(x)          (x << 5)
#define IOMUX_REMAP2_XMC_NADV_MUX_MASK    (0x01 << 10)
#define IOMUX_REMAP2_XMC_NADV_MUX_SHIFT   (10)
#define IOMUX_REMAP2_XMC_NADV_MUX(x)      (x << 10)
#define IOMUX_REMAP2_SPI4_MUX_MASK        (0x01 << 17)
#define IOMUX_REMAP2_SPI4_MUX_SHIFT       (17)
#define IOMUX_REMAP2_SPI4_MUX(x)          (x << 17)
#define IOMUX_REMAP2_I2C3_MUX_MASK        (0x01 << 18)
#define IOMUX_REMAP2_I2C3_MUX_SHIFT       (18)
#define IOMUX_REMAP2_I2C3_MUX(x)          (x << 18)
#define IOMUX_REMAP2_SDIO2_MUX_MASK       (0x03 << 19)
#define IOMUX_REMAP2_SDIO2_MUX_SHIFT      (19)
#define IOMUX_REMAP2_SDIO2_MUX(x)         (x << 19)
#define IOMUX_REMAP2_EXT_SPIM_EN_MUX_MASK (0x01 << 21)
#define IOMUX_REMAP2_EXT_SPIM_EN_MUX_SHIFT (21)
#define IOMUX_REMAP2_EXT_SPIM_EN_MUX(x)   (x << 21)
#define IOMUX_REMAP3_TMR9_GMUX_MASK       (0x0f << 0)
#define IOMUX_REMAP3_TMR9_GMUX_SHIFT      (0)
#define IOMUX_REMAP3_TMR9_GMUX(x)         (x << 0)
#define IOMUX_REMAP4_TMR1_GMUX_MASK       (0x0f << 0)
#define IOMUX_REMAP4_TMR1_GMUX_SHIFT      (0)
#define IOMUX_REMAP4_TMR1_GMUX(x)         (x << 0)
#define IOMUX_REMAP4_TMR2_GMUX_MASK       (0x03 << 4)
#define IOMUX_REMAP4_TMR2_GMUX_SHIFT      (4)
#define IOMUX_REMAP4_TMR2_GMUX(x)         (x << 4)
#define IOMUX_REMAP4_TMR2ITR1_GMUX_MASK   (0x03 << 6)
#define IOMUX_REMAP4_TMR2ITR1_GMUX_SHIFT  (6)
#define IOMUX_REMAP4_TMR2ITR1_GMUX(x)     (x << 6)
#define IOMUX_REMAP4_TMR3_GMUX_MASK       (0x0f << 8)
#define IOMUX_REMAP4_TMR3_GMUX_SHIFT      (8)
#define IOMUX_REMAP4_TMR3_GMUX(x)         (x << 8)
#define IOMUX_REMAP4_TMR4_GMUX_MASK       (0x0f << 12)
#define IOMUX_REMAP4_TMR4_GMUX_SHIFT      (12)
#define IOMUX_REMAP4_TMR4_GMUX(x)         (x << 12)
#define IOMUX_REMAP4_TMR5CH4_GMUX_MASK    (0x01 << 19)
#define IOMUX_REMAP4_TMR5CH4_GMUX_SHIFT   (19)
#define IOMUX_REMAP4_TMR5CH4_GMUX(x)      (x << 19)
#define IOMUX_REMAP5_USART5_GMUX_MASK     (0x0f << 0)
#define IOMUX_REMAP5_USART5_GMUX_SHIFT    (0)
#define IOMUX_REMAP5_USART5_GMUX(x)       (x << 0)
#define IOMUX_REMAP5_I2C1_GMUX_MASK       (0x0f << 4)
#define IOMUX_REMAP5_I2C1_GMUX_SHIFT      (4)
#define IOMUX_REMAP5_I2C1_GMUX(x)         (x << 4)
#define IOMUX_REMAP5_I2C3_GMUX_MASK       (0x0f << 12)
#define IOMUX_REMAP5_I2C3_GMUX_SHIFT      (12)
#define IOMUX_REMAP5_I2C3_GMUX(x)         (x << 12)
#define IOMUX_REMAP5_SPI1_GMUX_MASK       (0x0f << 16)
#define IOMUX_REMAP5_SPI1_GMUX_SHIFT      (16)
#define IOMUX_REMAP5_SPI1_GMUX(x)         (x << 16)
#define IOMUX_REMAP5_SPI2_GMUX_MASK       (0x0f << 20)
#define IOMUX_REMAP5_SPI2_GMUX_SHIFT      (20)
#define IOMUX_REMAP5_SPI2_GMUX(x)         (x << 20)
#define IOMUX_REMAP5_SPI3_GMUX_MASK       (0x0f << 24)
#define IOMUX_REMAP5_SPI3_GMUX_SHIFT      (24)
#define IOMUX_REMAP5_SPI3_GMUX(x)         (x << 24)
#define IOMUX_REMAP5_SPI4_GMUX_MASK       (0x0f << 28)
#define IOMUX_REMAP5_SPI4_GMUX_SHIFT      (28)
#define IOMUX_REMAP5_SPI4_GMUX(x)         (x << 28)
#define IOMUX_REMAP6_CAN1_GMUX_MASK       (0x0f << 0)
#define IOMUX_REMAP6_CAN1_GMUX_SHIFT      (0)
#define IOMUX_REMAP6_CAN1_GMUX(x)         (x << 0)
#define IOMUX_REMAP6_CAN2_GMUX_MASK       (0x0f << 4)
#define IOMUX_REMAP6_CAN2_GMUX_SHIFT      (4)
#define IOMUX_REMAP6_CAN2_GMUX(x)         (x << 4)
#define IOMUX_REMAP6_SDIO2_GMUX_MASK      (0x0f << 12)
#define IOMUX_REMAP6_SDIO2_GMUX_SHIFT     (12)
#define IOMUX_REMAP6_SDIO2_GMUX(x)        (x << 12)
#define IOMUX_REMAP6_USART1_GMUX_MASK     (0x0f << 16)
#define IOMUX_REMAP6_USART1_GMUX_SHIFT    (16)
#define IOMUX_REMAP6_USART1_GMUX(x)       (x << 16)
#define IOMUX_REMAP6_USART2_GMUX_MASK     (0x0f << 20)
#define IOMUX_REMAP6_USART2_GMUX_SHIFT    (20)
#define IOMUX_REMAP6_USART2_GMUX(x)       (x << 20)
#define IOMUX_REMAP6_USART3_GMUX_MASK     (0x0f << 24)
#define IOMUX_REMAP6_USART3_GMUX_SHIFT    (24)
#define IOMUX_REMAP6_USART3_GMUX(x)       (x << 24)
#define IOMUX_REMAP6_UART4_GMUX_MASK      (0x0f << 28)
#define IOMUX_REMAP6_UART4_GMUX_SHIFT     (28)
#define IOMUX_REMAP6_UART4_GMUX(x)        (x << 28)
#define IOMUX_REMAP7_EXT_SPIM_GMUX_MASK   (0x07 << 0)
#define IOMUX_REMAP7_EXT_SPIM_GMUX_SHIFT  (0)
#define IOMUX_REMAP7_EXT_SPIM_GMUX(x)     (x << 0)
#define IOMUX_REMAP7_EXT_SPIM_GEN_MASK    (0x01 << 3)
#define IOMUX_REMAP7_EXT_SPIM_GEN_SHIFT   (3)
#define IOMUX_REMAP7_EXT_SPIM_GEN(x)      (x << 3)
#define IOMUX_REMAP7_ADC1_ETP_GMUX_MASK   (0x01 << 4)
#define IOMUX_REMAP7_ADC1_ETP_GMUX_SHIFT  (4)
#define IOMUX_REMAP7_ADC1_ETP_GMUX(x)     (x << 4)
#define IOMUX_REMAP7_ADC1_ETO_GMUX_MASK   (0x01 << 5)
#define IOMUX_REMAP7_ADC1_ETO_GMUX_SHIFT  (5)
#define IOMUX_REMAP7_ADC1_ETO_GMUX(x)     (x << 5)
#define IOMUX_REMAP7_ADC2_ETP_GMUX_MASK   (0x01 << 8)
#define IOMUX_REMAP7_ADC2_ETP_GMUX_SHIFT  (8)
#define IOMUX_REMAP7_ADC2_ETP_GMUX(x)     (x << 8)
#define IOMUX_REMAP7_ADC2_ETO_GMUX_MASK   (0x01 << 9)
#define IOMUX_REMAP7_ADC2_ETO_GMUX_SHIFT  (9)
#define IOMUX_REMAP7_ADC2_ETO_GMUX(x)     (x << 9)
#define IOMUX_REMAP7_SWJTAG_GMUX_MASK     (0x07 << 16)
#define IOMUX_REMAP7_SWJTAG_GMUX_SHIFT    (16)
#define IOMUX_REMAP7_SWJTAG_GMUX(x)       (x << 16)
#define IOMUX_REMAP7_PD01_GMUX_MASK       (0x01 << 20)
#define IOMUX_REMAP7_PD01_GMUX_SHIFT      (20)
#define IOMUX_REMAP7_PD01_GMUX(x)         (x << 20)
#define IOMUX_REMAP7_XMC_GMUX_MASK        (0x07 << 24)
#define IOMUX_REMAP7_XMC_GMUX_SHIFT       (24)
#define IOMUX_REMAP7_XMC_GMUX(x)          (x << 24)
#define IOMUX_REMAP7_XMC_NADV_GMUX_MASK   (0x01 << 27)
#define IOMUX_REMAP7_XMC_NADV_GMUX_SHIFT  (27)
#define IOMUX_REMAP7_XMC_NADV_GMUX(x)     (x << 27)
#define IOMUX_REMAP8_EMAC_GMUX_MASK       (0x03 << 16)
#define IOMUX_REMAP8_EMAC_GMUX_SHIFT      (16)
#define IOMUX_REMAP8_EMAC_GMUX(x)         (x << 16)
#define IOMUX_REMAP8_MII_RMII_SEL_GMUX_MASK (0x01 << 18)
#define IOMUX_REMAP8_MII_RMII_SEL_GMUX_SHIFT (18)
#define IOMUX_REMAP8_MII_RMII_SEL_GMUX(x) (x << 18)
#define IOMUX_REMAP8_PTP_PPS_GMUX_MASK    (0x01 << 19)
#define IOMUX_REMAP8_PTP_PPS_GMUX_SHIFT   (19)
#define IOMUX_REMAP8_PTP_PPS_GMUX(x)      (x << 19)
#define IOMUX_REMAP8_USART6_GMUX_MASK     (0x0f << 20)
#define IOMUX_REMAP8_USART6_GMUX_SHIFT    (20)
#define IOMUX_REMAP8_USART6_GMUX(x)       (x << 20)
#define IOMUX_REMAP8_UART7_GMUX_MASK      (0x0f << 24)
#define IOMUX_REMAP8_UART7_GMUX_SHIFT     (24)
#define IOMUX_REMAP8_UART7_GMUX(x)        (x << 24)
#define IOMUX_REMAP8_UART8_GMUX_MASK      (0x0f << 28)
#define IOMUX_REMAP8_UART8_GMUX_SHIFT     (28)
#define IOMUX_REMAP8_UART8_GMUX(x)        (x << 28)

/* EXINT - EXINT */
#define EXINT_INTEN_INTEN0_MASK           (0x01 << 0)
#define EXINT_INTEN_INTEN0_SHIFT          (0)
#define EXINT_INTEN_INTEN0(x)             (x << 0)
#define EXINT_INTEN_INTEN1_MASK           (0x01 << 1)
#define EXINT_INTEN_INTEN1_SHIFT          (1)
#define EXINT_INTEN_INTEN1(x)             (x << 1)
#define EXINT_INTEN_INTEN2_MASK           (0x01 << 2)
#define EXINT_INTEN_INTEN2_SHIFT          (2)
#define EXINT_INTEN_INTEN2(x)             (x << 2)
#define EXINT_INTEN_INTEN3_MASK           (0x01 << 3)
#define EXINT_INTEN_INTEN3_SHIFT          (3)
#define EXINT_INTEN_INTEN3(x)             (x << 3)
#define EXINT_INTEN_INTEN4_MASK           (0x01 << 4)
#define EXINT_INTEN_INTEN4_SHIFT          (4)
#define EXINT_INTEN_INTEN4(x)             (x << 4)
#define EXINT_INTEN_INTEN5_MASK           (0x01 << 5)
#define EXINT_INTEN_INTEN5_SHIFT          (5)
#define EXINT_INTEN_INTEN5(x)             (x << 5)
#define EXINT_INTEN_INTEN6_MASK           (0x01 << 6)
#define EXINT_INTEN_INTEN6_SHIFT          (6)
#define EXINT_INTEN_INTEN6(x)             (x << 6)
#define EXINT_INTEN_INTEN7_MASK           (0x01 << 7)
#define EXINT_INTEN_INTEN7_SHIFT          (7)
#define EXINT_INTEN_INTEN7(x)             (x << 7)
#define EXINT_INTEN_INTEN8_MASK           (0x01 << 8)
#define EXINT_INTEN_INTEN8_SHIFT          (8)
#define EXINT_INTEN_INTEN8(x)             (x << 8)
#define EXINT_INTEN_INTEN9_MASK           (0x01 << 9)
#define EXINT_INTEN_INTEN9_SHIFT          (9)
#define EXINT_INTEN_INTEN9(x)             (x << 9)
#define EXINT_INTEN_INTEN10_MASK          (0x01 << 10)
#define EXINT_INTEN_INTEN10_SHIFT         (10)
#define EXINT_INTEN_INTEN10(x)            (x << 10)
#define EXINT_INTEN_INTEN11_MASK          (0x01 << 11)
#define EXINT_INTEN_INTEN11_SHIFT         (11)
#define EXINT_INTEN_INTEN11(x)            (x << 11)
#define EXINT_INTEN_INTEN12_MASK          (0x01 << 12)
#define EXINT_INTEN_INTEN12_SHIFT         (12)
#define EXINT_INTEN_INTEN12(x)            (x << 12)
#define EXINT_INTEN_INTEN13_MASK          (0x01 << 13)
#define EXINT_INTEN_INTEN13_SHIFT         (13)
#define EXINT_INTEN_INTEN13(x)            (x << 13)
#define EXINT_INTEN_INTEN14_MASK          (0x01 << 14)
#define EXINT_INTEN_INTEN14_SHIFT         (14)
#define EXINT_INTEN_INTEN14(x)            (x << 14)
#define EXINT_INTEN_INTEN15_MASK          (0x01 << 15)
#define EXINT_INTEN_INTEN15_SHIFT         (15)
#define EXINT_INTEN_INTEN15(x)            (x << 15)
#define EXINT_INTEN_INTEN16_MASK          (0x01 << 16)
#define EXINT_INTEN_INTEN16_SHIFT         (16)
#define EXINT_INTEN_INTEN16(x)            (x << 16)
#define EXINT_INTEN_INTEN17_MASK          (0x01 << 17)
#define EXINT_INTEN_INTEN17_SHIFT         (17)
#define EXINT_INTEN_INTEN17(x)            (x << 17)
#define EXINT_INTEN_INTEN18_MASK          (0x01 << 18)
#define EXINT_INTEN_INTEN18_SHIFT         (18)
#define EXINT_INTEN_INTEN18(x)            (x << 18)
#define EXINT_INTEN_INTEN19_MASK          (0x01 << 19)
#define EXINT_INTEN_INTEN19_SHIFT         (19)
#define EXINT_INTEN_INTEN19(x)            (x << 19)
#define EXINT_EVTEN_EVTEN0_MASK           (0x01 << 0)
#define EXINT_EVTEN_EVTEN0_SHIFT          (0)
#define EXINT_EVTEN_EVTEN0(x)             (x << 0)
#define EXINT_EVTEN_EVTEN1_MASK           (0x01 << 1)
#define EXINT_EVTEN_EVTEN1_SHIFT          (1)
#define EXINT_EVTEN_EVTEN1(x)             (x << 1)
#define EXINT_EVTEN_EVTEN2_MASK           (0x01 << 2)
#define EXINT_EVTEN_EVTEN2_SHIFT          (2)
#define EXINT_EVTEN_EVTEN2(x)             (x << 2)
#define EXINT_EVTEN_EVTEN3_MASK           (0x01 << 3)
#define EXINT_EVTEN_EVTEN3_SHIFT          (3)
#define EXINT_EVTEN_EVTEN3(x)             (x << 3)
#define EXINT_EVTEN_EVTEN4_MASK           (0x01 << 4)
#define EXINT_EVTEN_EVTEN4_SHIFT          (4)
#define EXINT_EVTEN_EVTEN4(x)             (x << 4)
#define EXINT_EVTEN_EVTEN5_MASK           (0x01 << 5)
#define EXINT_EVTEN_EVTEN5_SHIFT          (5)
#define EXINT_EVTEN_EVTEN5(x)             (x << 5)
#define EXINT_EVTEN_EVTEN6_MASK           (0x01 << 6)
#define EXINT_EVTEN_EVTEN6_SHIFT          (6)
#define EXINT_EVTEN_EVTEN6(x)             (x << 6)
#define EXINT_EVTEN_EVTEN7_MASK           (0x01 << 7)
#define EXINT_EVTEN_EVTEN7_SHIFT          (7)
#define EXINT_EVTEN_EVTEN7(x)             (x << 7)
#define EXINT_EVTEN_EVTEN8_MASK           (0x01 << 8)
#define EXINT_EVTEN_EVTEN8_SHIFT          (8)
#define EXINT_EVTEN_EVTEN8(x)             (x << 8)
#define EXINT_EVTEN_EVTEN9_MASK           (0x01 << 9)
#define EXINT_EVTEN_EVTEN9_SHIFT          (9)
#define EXINT_EVTEN_EVTEN9(x)             (x << 9)
#define EXINT_EVTEN_EVTEN10_MASK          (0x01 << 10)
#define EXINT_EVTEN_EVTEN10_SHIFT         (10)
#define EXINT_EVTEN_EVTEN10(x)            (x << 10)
#define EXINT_EVTEN_EVTEN11_MASK          (0x01 << 11)
#define EXINT_EVTEN_EVTEN11_SHIFT         (11)
#define EXINT_EVTEN_EVTEN11(x)            (x << 11)
#define EXINT_EVTEN_EVTEN12_MASK          (0x01 << 12)
#define EXINT_EVTEN_EVTEN12_SHIFT         (12)
#define EXINT_EVTEN_EVTEN12(x)            (x << 12)
#define EXINT_EVTEN_EVTEN13_MASK          (0x01 << 13)
#define EXINT_EVTEN_EVTEN13_SHIFT         (13)
#define EXINT_EVTEN_EVTEN13(x)            (x << 13)
#define EXINT_EVTEN_EVTEN14_MASK          (0x01 << 14)
#define EXINT_EVTEN_EVTEN14_SHIFT         (14)
#define EXINT_EVTEN_EVTEN14(x)            (x << 14)
#define EXINT_EVTEN_EVTEN15_MASK          (0x01 << 15)
#define EXINT_EVTEN_EVTEN15_SHIFT         (15)
#define EXINT_EVTEN_EVTEN15(x)            (x << 15)
#define EXINT_EVTEN_EVTEN16_MASK          (0x01 << 16)
#define EXINT_EVTEN_EVTEN16_SHIFT         (16)
#define EXINT_EVTEN_EVTEN16(x)            (x << 16)
#define EXINT_EVTEN_EVTEN17_MASK          (0x01 << 17)
#define EXINT_EVTEN_EVTEN17_SHIFT         (17)
#define EXINT_EVTEN_EVTEN17(x)            (x << 17)
#define EXINT_EVTEN_EVTEN18_MASK          (0x01 << 18)
#define EXINT_EVTEN_EVTEN18_SHIFT         (18)
#define EXINT_EVTEN_EVTEN18(x)            (x << 18)
#define EXINT_EVTEN_EVTEN19_MASK          (0x01 << 19)
#define EXINT_EVTEN_EVTEN19_SHIFT         (19)
#define EXINT_EVTEN_EVTEN19(x)            (x << 19)
#define EXINT_POLCFG1_RP0_MASK            (0x01 << 0)
#define EXINT_POLCFG1_RP0_SHIFT           (0)
#define EXINT_POLCFG1_RP0(x)              (x << 0)
#define EXINT_POLCFG1_RP1_MASK            (0x01 << 1)
#define EXINT_POLCFG1_RP1_SHIFT           (1)
#define EXINT_POLCFG1_RP1(x)              (x << 1)
#define EXINT_POLCFG1_RP2_MASK            (0x01 << 2)
#define EXINT_POLCFG1_RP2_SHIFT           (2)
#define EXINT_POLCFG1_RP2(x)              (x << 2)
#define EXINT_POLCFG1_RP3_MASK            (0x01 << 3)
#define EXINT_POLCFG1_RP3_SHIFT           (3)
#define EXINT_POLCFG1_RP3(x)              (x << 3)
#define EXINT_POLCFG1_RP4_MASK            (0x01 << 4)
#define EXINT_POLCFG1_RP4_SHIFT           (4)
#define EXINT_POLCFG1_RP4(x)              (x << 4)
#define EXINT_POLCFG1_RP5_MASK            (0x01 << 5)
#define EXINT_POLCFG1_RP5_SHIFT           (5)
#define EXINT_POLCFG1_RP5(x)              (x << 5)
#define EXINT_POLCFG1_RP6_MASK            (0x01 << 6)
#define EXINT_POLCFG1_RP6_SHIFT           (6)
#define EXINT_POLCFG1_RP6(x)              (x << 6)
#define EXINT_POLCFG1_RP7_MASK            (0x01 << 7)
#define EXINT_POLCFG1_RP7_SHIFT           (7)
#define EXINT_POLCFG1_RP7(x)              (x << 7)
#define EXINT_POLCFG1_RP8_MASK            (0x01 << 8)
#define EXINT_POLCFG1_RP8_SHIFT           (8)
#define EXINT_POLCFG1_RP8(x)              (x << 8)
#define EXINT_POLCFG1_RP9_MASK            (0x01 << 9)
#define EXINT_POLCFG1_RP9_SHIFT           (9)
#define EXINT_POLCFG1_RP9(x)              (x << 9)
#define EXINT_POLCFG1_RP10_MASK           (0x01 << 10)
#define EXINT_POLCFG1_RP10_SHIFT          (10)
#define EXINT_POLCFG1_RP10(x)             (x << 10)
#define EXINT_POLCFG1_RP11_MASK           (0x01 << 11)
#define EXINT_POLCFG1_RP11_SHIFT          (11)
#define EXINT_POLCFG1_RP11(x)             (x << 11)
#define EXINT_POLCFG1_RP12_MASK           (0x01 << 12)
#define EXINT_POLCFG1_RP12_SHIFT          (12)
#define EXINT_POLCFG1_RP12(x)             (x << 12)
#define EXINT_POLCFG1_RP13_MASK           (0x01 << 13)
#define EXINT_POLCFG1_RP13_SHIFT          (13)
#define EXINT_POLCFG1_RP13(x)             (x << 13)
#define EXINT_POLCFG1_RP14_MASK           (0x01 << 14)
#define EXINT_POLCFG1_RP14_SHIFT          (14)
#define EXINT_POLCFG1_RP14(x)             (x << 14)
#define EXINT_POLCFG1_RP15_MASK           (0x01 << 15)
#define EXINT_POLCFG1_RP15_SHIFT          (15)
#define EXINT_POLCFG1_RP15(x)             (x << 15)
#define EXINT_POLCFG1_RP16_MASK           (0x01 << 16)
#define EXINT_POLCFG1_RP16_SHIFT          (16)
#define EXINT_POLCFG1_RP16(x)             (x << 16)
#define EXINT_POLCFG1_RP17_MASK           (0x01 << 17)
#define EXINT_POLCFG1_RP17_SHIFT          (17)
#define EXINT_POLCFG1_RP17(x)             (x << 17)
#define EXINT_POLCFG1_RP18_MASK           (0x01 << 18)
#define EXINT_POLCFG1_RP18_SHIFT          (18)
#define EXINT_POLCFG1_RP18(x)             (x << 18)
#define EXINT_POLCFG1_RP19_MASK           (0x01 << 19)
#define EXINT_POLCFG1_RP19_SHIFT          (19)
#define EXINT_POLCFG1_RP19(x)             (x << 19)
#define EXINT_POLCFG2_FP0_MASK            (0x01 << 0)
#define EXINT_POLCFG2_FP0_SHIFT           (0)
#define EXINT_POLCFG2_FP0(x)              (x << 0)
#define EXINT_POLCFG2_FP1_MASK            (0x01 << 1)
#define EXINT_POLCFG2_FP1_SHIFT           (1)
#define EXINT_POLCFG2_FP1(x)              (x << 1)
#define EXINT_POLCFG2_FP2_MASK            (0x01 << 2)
#define EXINT_POLCFG2_FP2_SHIFT           (2)
#define EXINT_POLCFG2_FP2(x)              (x << 2)
#define EXINT_POLCFG2_FP3_MASK            (0x01 << 3)
#define EXINT_POLCFG2_FP3_SHIFT           (3)
#define EXINT_POLCFG2_FP3(x)              (x << 3)
#define EXINT_POLCFG2_FP4_MASK            (0x01 << 4)
#define EXINT_POLCFG2_FP4_SHIFT           (4)
#define EXINT_POLCFG2_FP4(x)              (x << 4)
#define EXINT_POLCFG2_FP5_MASK            (0x01 << 5)
#define EXINT_POLCFG2_FP5_SHIFT           (5)
#define EXINT_POLCFG2_FP5(x)              (x << 5)
#define EXINT_POLCFG2_FP6_MASK            (0x01 << 6)
#define EXINT_POLCFG2_FP6_SHIFT           (6)
#define EXINT_POLCFG2_FP6(x)              (x << 6)
#define EXINT_POLCFG2_FP7_MASK            (0x01 << 7)
#define EXINT_POLCFG2_FP7_SHIFT           (7)
#define EXINT_POLCFG2_FP7(x)              (x << 7)
#define EXINT_POLCFG2_FP8_MASK            (0x01 << 8)
#define EXINT_POLCFG2_FP8_SHIFT           (8)
#define EXINT_POLCFG2_FP8(x)              (x << 8)
#define EXINT_POLCFG2_FP9_MASK            (0x01 << 9)
#define EXINT_POLCFG2_FP9_SHIFT           (9)
#define EXINT_POLCFG2_FP9(x)              (x << 9)
#define EXINT_POLCFG2_FP10_MASK           (0x01 << 10)
#define EXINT_POLCFG2_FP10_SHIFT          (10)
#define EXINT_POLCFG2_FP10(x)             (x << 10)
#define EXINT_POLCFG2_FP11_MASK           (0x01 << 11)
#define EXINT_POLCFG2_FP11_SHIFT          (11)
#define EXINT_POLCFG2_FP11(x)             (x << 11)
#define EXINT_POLCFG2_FP12_MASK           (0x01 << 12)
#define EXINT_POLCFG2_FP12_SHIFT          (12)
#define EXINT_POLCFG2_FP12(x)             (x << 12)
#define EXINT_POLCFG2_FP13_MASK           (0x01 << 13)
#define EXINT_POLCFG2_FP13_SHIFT          (13)
#define EXINT_POLCFG2_FP13(x)             (x << 13)
#define EXINT_POLCFG2_FP14_MASK           (0x01 << 14)
#define EXINT_POLCFG2_FP14_SHIFT          (14)
#define EXINT_POLCFG2_FP14(x)             (x << 14)
#define EXINT_POLCFG2_FP15_MASK           (0x01 << 15)
#define EXINT_POLCFG2_FP15_SHIFT          (15)
#define EXINT_POLCFG2_FP15(x)             (x << 15)
#define EXINT_POLCFG2_FP16_MASK           (0x01 << 16)
#define EXINT_POLCFG2_FP16_SHIFT          (16)
#define EXINT_POLCFG2_FP16(x)             (x << 16)
#define EXINT_POLCFG2_FP17_MASK           (0x01 << 17)
#define EXINT_POLCFG2_FP17_SHIFT          (17)
#define EXINT_POLCFG2_FP17(x)             (x << 17)
#define EXINT_POLCFG2_FP18_MASK           (0x01 << 18)
#define EXINT_POLCFG2_FP18_SHIFT          (18)
#define EXINT_POLCFG2_FP18(x)             (x << 18)
#define EXINT_POLCFG2_FP19_MASK           (0x01 << 19)
#define EXINT_POLCFG2_FP19_SHIFT          (19)
#define EXINT_POLCFG2_FP19(x)             (x << 19)
#define EXINT_SWTRG_SWT0_MASK             (0x01 << 0)
#define EXINT_SWTRG_SWT0_SHIFT            (0)
#define EXINT_SWTRG_SWT0(x)               (x << 0)
#define EXINT_SWTRG_SWT1_MASK             (0x01 << 1)
#define EXINT_SWTRG_SWT1_SHIFT            (1)
#define EXINT_SWTRG_SWT1(x)               (x << 1)
#define EXINT_SWTRG_SWT2_MASK             (0x01 << 2)
#define EXINT_SWTRG_SWT2_SHIFT            (2)
#define EXINT_SWTRG_SWT2(x)               (x << 2)
#define EXINT_SWTRG_SWT3_MASK             (0x01 << 3)
#define EXINT_SWTRG_SWT3_SHIFT            (3)
#define EXINT_SWTRG_SWT3(x)               (x << 3)
#define EXINT_SWTRG_SWT4_MASK             (0x01 << 4)
#define EXINT_SWTRG_SWT4_SHIFT            (4)
#define EXINT_SWTRG_SWT4(x)               (x << 4)
#define EXINT_SWTRG_SWT5_MASK             (0x01 << 5)
#define EXINT_SWTRG_SWT5_SHIFT            (5)
#define EXINT_SWTRG_SWT5(x)               (x << 5)
#define EXINT_SWTRG_SWT6_MASK             (0x01 << 6)
#define EXINT_SWTRG_SWT6_SHIFT            (6)
#define EXINT_SWTRG_SWT6(x)               (x << 6)
#define EXINT_SWTRG_SWT7_MASK             (0x01 << 7)
#define EXINT_SWTRG_SWT7_SHIFT            (7)
#define EXINT_SWTRG_SWT7(x)               (x << 7)
#define EXINT_SWTRG_SWT8_MASK             (0x01 << 8)
#define EXINT_SWTRG_SWT8_SHIFT            (8)
#define EXINT_SWTRG_SWT8(x)               (x << 8)
#define EXINT_SWTRG_SWT9_MASK             (0x01 << 9)
#define EXINT_SWTRG_SWT9_SHIFT            (9)
#define EXINT_SWTRG_SWT9(x)               (x << 9)
#define EXINT_SWTRG_SWT10_MASK            (0x01 << 10)
#define EXINT_SWTRG_SWT10_SHIFT           (10)
#define EXINT_SWTRG_SWT10(x)              (x << 10)
#define EXINT_SWTRG_SWT11_MASK            (0x01 << 11)
#define EXINT_SWTRG_SWT11_SHIFT           (11)
#define EXINT_SWTRG_SWT11(x)              (x << 11)
#define EXINT_SWTRG_SWT12_MASK            (0x01 << 12)
#define EXINT_SWTRG_SWT12_SHIFT           (12)
#define EXINT_SWTRG_SWT12(x)              (x << 12)
#define EXINT_SWTRG_SWT13_MASK            (0x01 << 13)
#define EXINT_SWTRG_SWT13_SHIFT           (13)
#define EXINT_SWTRG_SWT13(x)              (x << 13)
#define EXINT_SWTRG_SWT14_MASK            (0x01 << 14)
#define EXINT_SWTRG_SWT14_SHIFT           (14)
#define EXINT_SWTRG_SWT14(x)              (x << 14)
#define EXINT_SWTRG_SWT15_MASK            (0x01 << 15)
#define EXINT_SWTRG_SWT15_SHIFT           (15)
#define EXINT_SWTRG_SWT15(x)              (x << 15)
#define EXINT_SWTRG_SWT16_MASK            (0x01 << 16)
#define EXINT_SWTRG_SWT16_SHIFT           (16)
#define EXINT_SWTRG_SWT16(x)              (x << 16)
#define EXINT_SWTRG_SWT17_MASK            (0x01 << 17)
#define EXINT_SWTRG_SWT17_SHIFT           (17)
#define EXINT_SWTRG_SWT17(x)              (x << 17)
#define EXINT_SWTRG_SWT18_MASK            (0x01 << 18)
#define EXINT_SWTRG_SWT18_SHIFT           (18)
#define EXINT_SWTRG_SWT18(x)              (x << 18)
#define EXINT_SWTRG_SWT19_MASK            (0x01 << 19)
#define EXINT_SWTRG_SWT19_SHIFT           (19)
#define EXINT_SWTRG_SWT19(x)              (x << 19)
#define EXINT_INTSTS_LINE0_MASK           (0x01 << 0)
#define EXINT_INTSTS_LINE0_SHIFT          (0)
#define EXINT_INTSTS_LINE0(x)             (x << 0)
#define EXINT_INTSTS_LINE1_MASK           (0x01 << 1)
#define EXINT_INTSTS_LINE1_SHIFT          (1)
#define EXINT_INTSTS_LINE1(x)             (x << 1)
#define EXINT_INTSTS_LINE2_MASK           (0x01 << 2)
#define EXINT_INTSTS_LINE2_SHIFT          (2)
#define EXINT_INTSTS_LINE2(x)             (x << 2)
#define EXINT_INTSTS_LINE3_MASK           (0x01 << 3)
#define EXINT_INTSTS_LINE3_SHIFT          (3)
#define EXINT_INTSTS_LINE3(x)             (x << 3)
#define EXINT_INTSTS_LINE4_MASK           (0x01 << 4)
#define EXINT_INTSTS_LINE4_SHIFT          (4)
#define EXINT_INTSTS_LINE4(x)             (x << 4)
#define EXINT_INTSTS_LINE5_MASK           (0x01 << 5)
#define EXINT_INTSTS_LINE5_SHIFT          (5)
#define EXINT_INTSTS_LINE5(x)             (x << 5)
#define EXINT_INTSTS_LINE6_MASK           (0x01 << 6)
#define EXINT_INTSTS_LINE6_SHIFT          (6)
#define EXINT_INTSTS_LINE6(x)             (x << 6)
#define EXINT_INTSTS_LINE7_MASK           (0x01 << 7)
#define EXINT_INTSTS_LINE7_SHIFT          (7)
#define EXINT_INTSTS_LINE7(x)             (x << 7)
#define EXINT_INTSTS_LINE8_MASK           (0x01 << 8)
#define EXINT_INTSTS_LINE8_SHIFT          (8)
#define EXINT_INTSTS_LINE8(x)             (x << 8)
#define EXINT_INTSTS_LINE9_MASK           (0x01 << 9)
#define EXINT_INTSTS_LINE9_SHIFT          (9)
#define EXINT_INTSTS_LINE9(x)             (x << 9)
#define EXINT_INTSTS_LINE10_MASK          (0x01 << 10)
#define EXINT_INTSTS_LINE10_SHIFT         (10)
#define EXINT_INTSTS_LINE10(x)            (x << 10)
#define EXINT_INTSTS_LINE11_MASK          (0x01 << 11)
#define EXINT_INTSTS_LINE11_SHIFT         (11)
#define EXINT_INTSTS_LINE11(x)            (x << 11)
#define EXINT_INTSTS_LINE12_MASK          (0x01 << 12)
#define EXINT_INTSTS_LINE12_SHIFT         (12)
#define EXINT_INTSTS_LINE12(x)            (x << 12)
#define EXINT_INTSTS_LINE13_MASK          (0x01 << 13)
#define EXINT_INTSTS_LINE13_SHIFT         (13)
#define EXINT_INTSTS_LINE13(x)            (x << 13)
#define EXINT_INTSTS_LINE14_MASK          (0x01 << 14)
#define EXINT_INTSTS_LINE14_SHIFT         (14)
#define EXINT_INTSTS_LINE14(x)            (x << 14)
#define EXINT_INTSTS_LINE15_MASK          (0x01 << 15)
#define EXINT_INTSTS_LINE15_SHIFT         (15)
#define EXINT_INTSTS_LINE15(x)            (x << 15)
#define EXINT_INTSTS_LINE16_MASK          (0x01 << 16)
#define EXINT_INTSTS_LINE16_SHIFT         (16)
#define EXINT_INTSTS_LINE16(x)            (x << 16)
#define EXINT_INTSTS_LINE17_MASK          (0x01 << 17)
#define EXINT_INTSTS_LINE17_SHIFT         (17)
#define EXINT_INTSTS_LINE17(x)            (x << 17)
#define EXINT_INTSTS_LINE18_MASK          (0x01 << 18)
#define EXINT_INTSTS_LINE18_SHIFT         (18)
#define EXINT_INTSTS_LINE18(x)            (x << 18)
#define EXINT_INTSTS_LINE19_MASK          (0x01 << 19)
#define EXINT_INTSTS_LINE19_SHIFT         (19)
#define EXINT_INTSTS_LINE19(x)            (x << 19)

/* DMA1 - DMA controller */
#define DMA_STS_GF1_MASK                  (0x01 << 0)
#define DMA_STS_GF1_SHIFT                 (0)
#define DMA_STS_GF1(x)                    (x << 0)
#define DMA_STS_GF2_MASK                  (0x01 << 4)
#define DMA_STS_GF2_SHIFT                 (4)
#define DMA_STS_GF2(x)                    (x << 4)
#define DMA_STS_GF3_MASK                  (0x01 << 8)
#define DMA_STS_GF3_SHIFT                 (8)
#define DMA_STS_GF3(x)                    (x << 8)
#define DMA_STS_GF4_MASK                  (0x01 << 12)
#define DMA_STS_GF4_SHIFT                 (12)
#define DMA_STS_GF4(x)                    (x << 12)
#define DMA_STS_GF5_MASK                  (0x01 << 16)
#define DMA_STS_GF5_SHIFT                 (16)
#define DMA_STS_GF5(x)                    (x << 16)
#define DMA_STS_GF6_MASK                  (0x01 << 20)
#define DMA_STS_GF6_SHIFT                 (20)
#define DMA_STS_GF6(x)                    (x << 20)
#define DMA_STS_GF7_MASK                  (0x01 << 24)
#define DMA_STS_GF7_SHIFT                 (24)
#define DMA_STS_GF7(x)                    (x << 24)
#define DMA_STS_FDTF1_MASK                (0x01 << 1)
#define DMA_STS_FDTF1_SHIFT               (1)
#define DMA_STS_FDTF1(x)                  (x << 1)
#define DMA_STS_FDTF2_MASK                (0x01 << 5)
#define DMA_STS_FDTF2_SHIFT               (5)
#define DMA_STS_FDTF2(x)                  (x << 5)
#define DMA_STS_FDTF3_MASK                (0x01 << 9)
#define DMA_STS_FDTF3_SHIFT               (9)
#define DMA_STS_FDTF3(x)                  (x << 9)
#define DMA_STS_FDTF4_MASK                (0x01 << 13)
#define DMA_STS_FDTF4_SHIFT               (13)
#define DMA_STS_FDTF4(x)                  (x << 13)
#define DMA_STS_FDTF5_MASK                (0x01 << 17)
#define DMA_STS_FDTF5_SHIFT               (17)
#define DMA_STS_FDTF5(x)                  (x << 17)
#define DMA_STS_FDTF6_MASK                (0x01 << 21)
#define DMA_STS_FDTF6_SHIFT               (21)
#define DMA_STS_FDTF6(x)                  (x << 21)
#define DMA_STS_FDTF7_MASK                (0x01 << 25)
#define DMA_STS_FDTF7_SHIFT               (25)
#define DMA_STS_FDTF7(x)                  (x << 25)
#define DMA_STS_HDTF1_MASK                (0x01 << 2)
#define DMA_STS_HDTF1_SHIFT               (2)
#define DMA_STS_HDTF1(x)                  (x << 2)
#define DMA_STS_HDTF2_MASK                (0x01 << 6)
#define DMA_STS_HDTF2_SHIFT               (6)
#define DMA_STS_HDTF2(x)                  (x << 6)
#define DMA_STS_HDTF3_MASK                (0x01 << 10)
#define DMA_STS_HDTF3_SHIFT               (10)
#define DMA_STS_HDTF3(x)                  (x << 10)
#define DMA_STS_HDTF4_MASK                (0x01 << 14)
#define DMA_STS_HDTF4_SHIFT               (14)
#define DMA_STS_HDTF4(x)                  (x << 14)
#define DMA_STS_HDTF5_MASK                (0x01 << 18)
#define DMA_STS_HDTF5_SHIFT               (18)
#define DMA_STS_HDTF5(x)                  (x << 18)
#define DMA_STS_HDTF6_MASK                (0x01 << 22)
#define DMA_STS_HDTF6_SHIFT               (22)
#define DMA_STS_HDTF6(x)                  (x << 22)
#define DMA_STS_HDTF7_MASK                (0x01 << 26)
#define DMA_STS_HDTF7_SHIFT               (26)
#define DMA_STS_HDTF7(x)                  (x << 26)
#define DMA_STS_DTERRF1_MASK              (0x01 << 3)
#define DMA_STS_DTERRF1_SHIFT             (3)
#define DMA_STS_DTERRF1(x)                (x << 3)
#define DMA_STS_DTERRF2_MASK              (0x01 << 7)
#define DMA_STS_DTERRF2_SHIFT             (7)
#define DMA_STS_DTERRF2(x)                (x << 7)
#define DMA_STS_DTERRF3_MASK              (0x01 << 11)
#define DMA_STS_DTERRF3_SHIFT             (11)
#define DMA_STS_DTERRF3(x)                (x << 11)
#define DMA_STS_DTERRF4_MASK              (0x01 << 15)
#define DMA_STS_DTERRF4_SHIFT             (15)
#define DMA_STS_DTERRF4(x)                (x << 15)
#define DMA_STS_DTERRF5_MASK              (0x01 << 19)
#define DMA_STS_DTERRF5_SHIFT             (19)
#define DMA_STS_DTERRF5(x)                (x << 19)
#define DMA_STS_DTERRF6_MASK              (0x01 << 23)
#define DMA_STS_DTERRF6_SHIFT             (23)
#define DMA_STS_DTERRF6(x)                (x << 23)
#define DMA_STS_DTERRF7_MASK              (0x01 << 27)
#define DMA_STS_DTERRF7_SHIFT             (27)
#define DMA_STS_DTERRF7(x)                (x << 27)
#define DMA_CLR_GFC1_MASK                 (0x01 << 0)
#define DMA_CLR_GFC1_SHIFT                (0)
#define DMA_CLR_GFC1(x)                   (x << 0)
#define DMA_CLR_GFC2_MASK                 (0x01 << 4)
#define DMA_CLR_GFC2_SHIFT                (4)
#define DMA_CLR_GFC2(x)                   (x << 4)
#define DMA_CLR_GFC3_MASK                 (0x01 << 8)
#define DMA_CLR_GFC3_SHIFT                (8)
#define DMA_CLR_GFC3(x)                   (x << 8)
#define DMA_CLR_GFC4_MASK                 (0x01 << 12)
#define DMA_CLR_GFC4_SHIFT                (12)
#define DMA_CLR_GFC4(x)                   (x << 12)
#define DMA_CLR_GFC5_MASK                 (0x01 << 16)
#define DMA_CLR_GFC5_SHIFT                (16)
#define DMA_CLR_GFC5(x)                   (x << 16)
#define DMA_CLR_GFC6_MASK                 (0x01 << 20)
#define DMA_CLR_GFC6_SHIFT                (20)
#define DMA_CLR_GFC6(x)                   (x << 20)
#define DMA_CLR_GFC7_MASK                 (0x01 << 24)
#define DMA_CLR_GFC7_SHIFT                (24)
#define DMA_CLR_GFC7(x)                   (x << 24)
#define DMA_CLR_FDTFC1_MASK               (0x01 << 1)
#define DMA_CLR_FDTFC1_SHIFT              (1)
#define DMA_CLR_FDTFC1(x)                 (x << 1)
#define DMA_CLR_FDTFC2_MASK               (0x01 << 5)
#define DMA_CLR_FDTFC2_SHIFT              (5)
#define DMA_CLR_FDTFC2(x)                 (x << 5)
#define DMA_CLR_FDTFC3_MASK               (0x01 << 9)
#define DMA_CLR_FDTFC3_SHIFT              (9)
#define DMA_CLR_FDTFC3(x)                 (x << 9)
#define DMA_CLR_FDTFC4_MASK               (0x01 << 13)
#define DMA_CLR_FDTFC4_SHIFT              (13)
#define DMA_CLR_FDTFC4(x)                 (x << 13)
#define DMA_CLR_FDTFC5_MASK               (0x01 << 17)
#define DMA_CLR_FDTFC5_SHIFT              (17)
#define DMA_CLR_FDTFC5(x)                 (x << 17)
#define DMA_CLR_FDTFC6_MASK               (0x01 << 21)
#define DMA_CLR_FDTFC6_SHIFT              (21)
#define DMA_CLR_FDTFC6(x)                 (x << 21)
#define DMA_CLR_FDTFC7_MASK               (0x01 << 25)
#define DMA_CLR_FDTFC7_SHIFT              (25)
#define DMA_CLR_FDTFC7(x)                 (x << 25)
#define DMA_CLR_HDTFC1_MASK               (0x01 << 2)
#define DMA_CLR_HDTFC1_SHIFT              (2)
#define DMA_CLR_HDTFC1(x)                 (x << 2)
#define DMA_CLR_HDTFC2_MASK               (0x01 << 6)
#define DMA_CLR_HDTFC2_SHIFT              (6)
#define DMA_CLR_HDTFC2(x)                 (x << 6)
#define DMA_CLR_HDTFC3_MASK               (0x01 << 10)
#define DMA_CLR_HDTFC3_SHIFT              (10)
#define DMA_CLR_HDTFC3(x)                 (x << 10)
#define DMA_CLR_HDTFC4_MASK               (0x01 << 14)
#define DMA_CLR_HDTFC4_SHIFT              (14)
#define DMA_CLR_HDTFC4(x)                 (x << 14)
#define DMA_CLR_HDTFC5_MASK               (0x01 << 18)
#define DMA_CLR_HDTFC5_SHIFT              (18)
#define DMA_CLR_HDTFC5(x)                 (x << 18)
#define DMA_CLR_HDTFC6_MASK               (0x01 << 22)
#define DMA_CLR_HDTFC6_SHIFT              (22)
#define DMA_CLR_HDTFC6(x)                 (x << 22)
#define DMA_CLR_HDTFC7_MASK               (0x01 << 26)
#define DMA_CLR_HDTFC7_SHIFT              (26)
#define DMA_CLR_HDTFC7(x)                 (x << 26)
#define DMA_CLR_DTERRFC1_MASK             (0x01 << 3)
#define DMA_CLR_DTERRFC1_SHIFT            (3)
#define DMA_CLR_DTERRFC1(x)               (x << 3)
#define DMA_CLR_DTERRFC2_MASK             (0x01 << 7)
#define DMA_CLR_DTERRFC2_SHIFT            (7)
#define DMA_CLR_DTERRFC2(x)               (x << 7)
#define DMA_CLR_DTERRFC3_MASK             (0x01 << 11)
#define DMA_CLR_DTERRFC3_SHIFT            (11)
#define DMA_CLR_DTERRFC3(x)               (x << 11)
#define DMA_CLR_DTERRFC4_MASK             (0x01 << 15)
#define DMA_CLR_DTERRFC4_SHIFT            (15)
#define DMA_CLR_DTERRFC4(x)               (x << 15)
#define DMA_CLR_DTERRFC5_MASK             (0x01 << 19)
#define DMA_CLR_DTERRFC5_SHIFT            (19)
#define DMA_CLR_DTERRFC5(x)               (x << 19)
#define DMA_CLR_DTERRFC6_MASK             (0x01 << 23)
#define DMA_CLR_DTERRFC6_SHIFT            (23)
#define DMA_CLR_DTERRFC6(x)               (x << 23)
#define DMA_CLR_DTERRFC7_MASK             (0x01 << 27)
#define DMA_CLR_DTERRFC7_SHIFT            (27)
#define DMA_CLR_DTERRFC7(x)               (x << 27)
#define DMA_C1CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C1CTRL_CHEN_SHIFT             (0)
#define DMA_C1CTRL_CHEN(x)                (x << 0)
#define DMA_C1CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C1CTRL_FDTIEN_SHIFT           (1)
#define DMA_C1CTRL_FDTIEN(x)              (x << 1)
#define DMA_C1CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C1CTRL_HDTIEN_SHIFT           (2)
#define DMA_C1CTRL_HDTIEN(x)              (x << 2)
#define DMA_C1CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C1CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C1CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C1CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C1CTRL_DTD_SHIFT              (4)
#define DMA_C1CTRL_DTD(x)                 (x << 4)
#define DMA_C1CTRL_LM_MASK                (0x01 << 5)
#define DMA_C1CTRL_LM_SHIFT               (5)
#define DMA_C1CTRL_LM(x)                  (x << 5)
#define DMA_C1CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C1CTRL_PINCM_SHIFT            (6)
#define DMA_C1CTRL_PINCM(x)               (x << 6)
#define DMA_C1CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C1CTRL_MINCM_SHIFT            (7)
#define DMA_C1CTRL_MINCM(x)               (x << 7)
#define DMA_C1CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C1CTRL_PWIDTH_SHIFT           (8)
#define DMA_C1CTRL_PWIDTH(x)              (x << 8)
#define DMA_C1CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C1CTRL_MWIDTH_SHIFT           (10)
#define DMA_C1CTRL_MWIDTH(x)              (x << 10)
#define DMA_C1CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C1CTRL_CHPL_SHIFT             (12)
#define DMA_C1CTRL_CHPL(x)                (x << 12)
#define DMA_C1CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C1CTRL_M2M_SHIFT              (14)
#define DMA_C1CTRL_M2M(x)                 (x << 14)
#define DMA_C1DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C1DTCNT_CNT_SHIFT             (0)
#define DMA_C1DTCNT_CNT(x)                (x << 0)
#define DMA_C1PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C1PADDR_PADDR_SHIFT           (0)
#define DMA_C1PADDR_PADDR(x)              (x << 0)
#define DMA_C1MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C1MADDR_MADDR_SHIFT           (0)
#define DMA_C1MADDR_MADDR(x)              (x << 0)
#define DMA_C2CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C2CTRL_CHEN_SHIFT             (0)
#define DMA_C2CTRL_CHEN(x)                (x << 0)
#define DMA_C2CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C2CTRL_FDTIEN_SHIFT           (1)
#define DMA_C2CTRL_FDTIEN(x)              (x << 1)
#define DMA_C2CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C2CTRL_HDTIEN_SHIFT           (2)
#define DMA_C2CTRL_HDTIEN(x)              (x << 2)
#define DMA_C2CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C2CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C2CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C2CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C2CTRL_DTD_SHIFT              (4)
#define DMA_C2CTRL_DTD(x)                 (x << 4)
#define DMA_C2CTRL_LM_MASK                (0x01 << 5)
#define DMA_C2CTRL_LM_SHIFT               (5)
#define DMA_C2CTRL_LM(x)                  (x << 5)
#define DMA_C2CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C2CTRL_PINCM_SHIFT            (6)
#define DMA_C2CTRL_PINCM(x)               (x << 6)
#define DMA_C2CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C2CTRL_MINCM_SHIFT            (7)
#define DMA_C2CTRL_MINCM(x)               (x << 7)
#define DMA_C2CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C2CTRL_PWIDTH_SHIFT           (8)
#define DMA_C2CTRL_PWIDTH(x)              (x << 8)
#define DMA_C2CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C2CTRL_MWIDTH_SHIFT           (10)
#define DMA_C2CTRL_MWIDTH(x)              (x << 10)
#define DMA_C2CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C2CTRL_CHPL_SHIFT             (12)
#define DMA_C2CTRL_CHPL(x)                (x << 12)
#define DMA_C2CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C2CTRL_M2M_SHIFT              (14)
#define DMA_C2CTRL_M2M(x)                 (x << 14)
#define DMA_C2DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C2DTCNT_CNT_SHIFT             (0)
#define DMA_C2DTCNT_CNT(x)                (x << 0)
#define DMA_C2PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C2PADDR_PADDR_SHIFT           (0)
#define DMA_C2PADDR_PADDR(x)              (x << 0)
#define DMA_C2MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C2MADDR_MADDR_SHIFT           (0)
#define DMA_C2MADDR_MADDR(x)              (x << 0)
#define DMA_C3CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C3CTRL_CHEN_SHIFT             (0)
#define DMA_C3CTRL_CHEN(x)                (x << 0)
#define DMA_C3CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C3CTRL_FDTIEN_SHIFT           (1)
#define DMA_C3CTRL_FDTIEN(x)              (x << 1)
#define DMA_C3CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C3CTRL_HDTIEN_SHIFT           (2)
#define DMA_C3CTRL_HDTIEN(x)              (x << 2)
#define DMA_C3CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C3CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C3CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C3CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C3CTRL_DTD_SHIFT              (4)
#define DMA_C3CTRL_DTD(x)                 (x << 4)
#define DMA_C3CTRL_LM_MASK                (0x01 << 5)
#define DMA_C3CTRL_LM_SHIFT               (5)
#define DMA_C3CTRL_LM(x)                  (x << 5)
#define DMA_C3CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C3CTRL_PINCM_SHIFT            (6)
#define DMA_C3CTRL_PINCM(x)               (x << 6)
#define DMA_C3CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C3CTRL_MINCM_SHIFT            (7)
#define DMA_C3CTRL_MINCM(x)               (x << 7)
#define DMA_C3CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C3CTRL_PWIDTH_SHIFT           (8)
#define DMA_C3CTRL_PWIDTH(x)              (x << 8)
#define DMA_C3CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C3CTRL_MWIDTH_SHIFT           (10)
#define DMA_C3CTRL_MWIDTH(x)              (x << 10)
#define DMA_C3CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C3CTRL_CHPL_SHIFT             (12)
#define DMA_C3CTRL_CHPL(x)                (x << 12)
#define DMA_C3CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C3CTRL_M2M_SHIFT              (14)
#define DMA_C3CTRL_M2M(x)                 (x << 14)
#define DMA_C3DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C3DTCNT_CNT_SHIFT             (0)
#define DMA_C3DTCNT_CNT(x)                (x << 0)
#define DMA_C3PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C3PADDR_PADDR_SHIFT           (0)
#define DMA_C3PADDR_PADDR(x)              (x << 0)
#define DMA_C3MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C3MADDR_MADDR_SHIFT           (0)
#define DMA_C3MADDR_MADDR(x)              (x << 0)
#define DMA_C4CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C4CTRL_CHEN_SHIFT             (0)
#define DMA_C4CTRL_CHEN(x)                (x << 0)
#define DMA_C4CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C4CTRL_FDTIEN_SHIFT           (1)
#define DMA_C4CTRL_FDTIEN(x)              (x << 1)
#define DMA_C4CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C4CTRL_HDTIEN_SHIFT           (2)
#define DMA_C4CTRL_HDTIEN(x)              (x << 2)
#define DMA_C4CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C4CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C4CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C4CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C4CTRL_DTD_SHIFT              (4)
#define DMA_C4CTRL_DTD(x)                 (x << 4)
#define DMA_C4CTRL_LM_MASK                (0x01 << 5)
#define DMA_C4CTRL_LM_SHIFT               (5)
#define DMA_C4CTRL_LM(x)                  (x << 5)
#define DMA_C4CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C4CTRL_PINCM_SHIFT            (6)
#define DMA_C4CTRL_PINCM(x)               (x << 6)
#define DMA_C4CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C4CTRL_MINCM_SHIFT            (7)
#define DMA_C4CTRL_MINCM(x)               (x << 7)
#define DMA_C4CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C4CTRL_PWIDTH_SHIFT           (8)
#define DMA_C4CTRL_PWIDTH(x)              (x << 8)
#define DMA_C4CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C4CTRL_MWIDTH_SHIFT           (10)
#define DMA_C4CTRL_MWIDTH(x)              (x << 10)
#define DMA_C4CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C4CTRL_CHPL_SHIFT             (12)
#define DMA_C4CTRL_CHPL(x)                (x << 12)
#define DMA_C4CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C4CTRL_M2M_SHIFT              (14)
#define DMA_C4CTRL_M2M(x)                 (x << 14)
#define DMA_C4DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C4DTCNT_CNT_SHIFT             (0)
#define DMA_C4DTCNT_CNT(x)                (x << 0)
#define DMA_C4PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C4PADDR_PADDR_SHIFT           (0)
#define DMA_C4PADDR_PADDR(x)              (x << 0)
#define DMA_C4MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C4MADDR_MADDR_SHIFT           (0)
#define DMA_C4MADDR_MADDR(x)              (x << 0)
#define DMA_C5CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C5CTRL_CHEN_SHIFT             (0)
#define DMA_C5CTRL_CHEN(x)                (x << 0)
#define DMA_C5CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C5CTRL_FDTIEN_SHIFT           (1)
#define DMA_C5CTRL_FDTIEN(x)              (x << 1)
#define DMA_C5CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C5CTRL_HDTIEN_SHIFT           (2)
#define DMA_C5CTRL_HDTIEN(x)              (x << 2)
#define DMA_C5CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C5CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C5CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C5CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C5CTRL_DTD_SHIFT              (4)
#define DMA_C5CTRL_DTD(x)                 (x << 4)
#define DMA_C5CTRL_LM_MASK                (0x01 << 5)
#define DMA_C5CTRL_LM_SHIFT               (5)
#define DMA_C5CTRL_LM(x)                  (x << 5)
#define DMA_C5CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C5CTRL_PINCM_SHIFT            (6)
#define DMA_C5CTRL_PINCM(x)               (x << 6)
#define DMA_C5CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C5CTRL_MINCM_SHIFT            (7)
#define DMA_C5CTRL_MINCM(x)               (x << 7)
#define DMA_C5CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C5CTRL_PWIDTH_SHIFT           (8)
#define DMA_C5CTRL_PWIDTH(x)              (x << 8)
#define DMA_C5CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C5CTRL_MWIDTH_SHIFT           (10)
#define DMA_C5CTRL_MWIDTH(x)              (x << 10)
#define DMA_C5CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C5CTRL_CHPL_SHIFT             (12)
#define DMA_C5CTRL_CHPL(x)                (x << 12)
#define DMA_C5CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C5CTRL_M2M_SHIFT              (14)
#define DMA_C5CTRL_M2M(x)                 (x << 14)
#define DMA_C5DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C5DTCNT_CNT_SHIFT             (0)
#define DMA_C5DTCNT_CNT(x)                (x << 0)
#define DMA_C5PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C5PADDR_PADDR_SHIFT           (0)
#define DMA_C5PADDR_PADDR(x)              (x << 0)
#define DMA_C5MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C5MADDR_MADDR_SHIFT           (0)
#define DMA_C5MADDR_MADDR(x)              (x << 0)
#define DMA_C6CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C6CTRL_CHEN_SHIFT             (0)
#define DMA_C6CTRL_CHEN(x)                (x << 0)
#define DMA_C6CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C6CTRL_FDTIEN_SHIFT           (1)
#define DMA_C6CTRL_FDTIEN(x)              (x << 1)
#define DMA_C6CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C6CTRL_HDTIEN_SHIFT           (2)
#define DMA_C6CTRL_HDTIEN(x)              (x << 2)
#define DMA_C6CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C6CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C6CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C6CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C6CTRL_DTD_SHIFT              (4)
#define DMA_C6CTRL_DTD(x)                 (x << 4)
#define DMA_C6CTRL_LM_MASK                (0x01 << 5)
#define DMA_C6CTRL_LM_SHIFT               (5)
#define DMA_C6CTRL_LM(x)                  (x << 5)
#define DMA_C6CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C6CTRL_PINCM_SHIFT            (6)
#define DMA_C6CTRL_PINCM(x)               (x << 6)
#define DMA_C6CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C6CTRL_MINCM_SHIFT            (7)
#define DMA_C6CTRL_MINCM(x)               (x << 7)
#define DMA_C6CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C6CTRL_PWIDTH_SHIFT           (8)
#define DMA_C6CTRL_PWIDTH(x)              (x << 8)
#define DMA_C6CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C6CTRL_MWIDTH_SHIFT           (10)
#define DMA_C6CTRL_MWIDTH(x)              (x << 10)
#define DMA_C6CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C6CTRL_CHPL_SHIFT             (12)
#define DMA_C6CTRL_CHPL(x)                (x << 12)
#define DMA_C6CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C6CTRL_M2M_SHIFT              (14)
#define DMA_C6CTRL_M2M(x)                 (x << 14)
#define DMA_C6DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C6DTCNT_CNT_SHIFT             (0)
#define DMA_C6DTCNT_CNT(x)                (x << 0)
#define DMA_C6PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C6PADDR_PADDR_SHIFT           (0)
#define DMA_C6PADDR_PADDR(x)              (x << 0)
#define DMA_C6MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C6MADDR_MADDR_SHIFT           (0)
#define DMA_C6MADDR_MADDR(x)              (x << 0)
#define DMA_C7CTRL_CHEN_MASK              (0x01 << 0)
#define DMA_C7CTRL_CHEN_SHIFT             (0)
#define DMA_C7CTRL_CHEN(x)                (x << 0)
#define DMA_C7CTRL_FDTIEN_MASK            (0x01 << 1)
#define DMA_C7CTRL_FDTIEN_SHIFT           (1)
#define DMA_C7CTRL_FDTIEN(x)              (x << 1)
#define DMA_C7CTRL_HDTIEN_MASK            (0x01 << 2)
#define DMA_C7CTRL_HDTIEN_SHIFT           (2)
#define DMA_C7CTRL_HDTIEN(x)              (x << 2)
#define DMA_C7CTRL_DTERRIEN_MASK          (0x01 << 3)
#define DMA_C7CTRL_DTERRIEN_SHIFT         (3)
#define DMA_C7CTRL_DTERRIEN(x)            (x << 3)
#define DMA_C7CTRL_DTD_MASK               (0x01 << 4)
#define DMA_C7CTRL_DTD_SHIFT              (4)
#define DMA_C7CTRL_DTD(x)                 (x << 4)
#define DMA_C7CTRL_LM_MASK                (0x01 << 5)
#define DMA_C7CTRL_LM_SHIFT               (5)
#define DMA_C7CTRL_LM(x)                  (x << 5)
#define DMA_C7CTRL_PINCM_MASK             (0x01 << 6)
#define DMA_C7CTRL_PINCM_SHIFT            (6)
#define DMA_C7CTRL_PINCM(x)               (x << 6)
#define DMA_C7CTRL_MINCM_MASK             (0x01 << 7)
#define DMA_C7CTRL_MINCM_SHIFT            (7)
#define DMA_C7CTRL_MINCM(x)               (x << 7)
#define DMA_C7CTRL_PWIDTH_MASK            (0x03 << 8)
#define DMA_C7CTRL_PWIDTH_SHIFT           (8)
#define DMA_C7CTRL_PWIDTH(x)              (x << 8)
#define DMA_C7CTRL_MWIDTH_MASK            (0x03 << 10)
#define DMA_C7CTRL_MWIDTH_SHIFT           (10)
#define DMA_C7CTRL_MWIDTH(x)              (x << 10)
#define DMA_C7CTRL_CHPL_MASK              (0x03 << 12)
#define DMA_C7CTRL_CHPL_SHIFT             (12)
#define DMA_C7CTRL_CHPL(x)                (x << 12)
#define DMA_C7CTRL_M2M_MASK               (0x01 << 14)
#define DMA_C7CTRL_M2M_SHIFT              (14)
#define DMA_C7CTRL_M2M(x)                 (x << 14)
#define DMA_C7DTCNT_CNT_MASK              (0xffff << 0)
#define DMA_C7DTCNT_CNT_SHIFT             (0)
#define DMA_C7DTCNT_CNT(x)                (x << 0)
#define DMA_C7PADDR_PADDR_MASK            (0xffffffff << 0)
#define DMA_C7PADDR_PADDR_SHIFT           (0)
#define DMA_C7PADDR_PADDR(x)              (x << 0)
#define DMA_C7MADDR_MADDR_MASK            (0xffffffff << 0)
#define DMA_C7MADDR_MADDR_SHIFT           (0)
#define DMA_C7MADDR_MADDR(x)              (x << 0)
#define DMA_DMA_SRC_SEL0_CH1_SRC_MASK     (0xff << 0)
#define DMA_DMA_SRC_SEL0_CH1_SRC_SHIFT    (0)
#define DMA_DMA_SRC_SEL0_CH1_SRC(x)       (x << 0)
#define DMA_DMA_SRC_SEL0_CH2_SRC_MASK     (0xff << 8)
#define DMA_DMA_SRC_SEL0_CH2_SRC_SHIFT    (8)
#define DMA_DMA_SRC_SEL0_CH2_SRC(x)       (x << 8)
#define DMA_DMA_SRC_SEL0_CH3_SRC_MASK     (0xff << 16)
#define DMA_DMA_SRC_SEL0_CH3_SRC_SHIFT    (16)
#define DMA_DMA_SRC_SEL0_CH3_SRC(x)       (x << 16)
#define DMA_DMA_SRC_SEL0_CH4_SRC_MASK     (0xff << 24)
#define DMA_DMA_SRC_SEL0_CH4_SRC_SHIFT    (24)
#define DMA_DMA_SRC_SEL0_CH4_SRC(x)       (x << 24)
#define DMA_DMA_SRC_SEL1_CH5_SRC_MASK     (0xff << 0)
#define DMA_DMA_SRC_SEL1_CH5_SRC_SHIFT    (0)
#define DMA_DMA_SRC_SEL1_CH5_SRC(x)       (x << 0)
#define DMA_DMA_SRC_SEL1_CH6_SRC_MASK     (0xff << 8)
#define DMA_DMA_SRC_SEL1_CH6_SRC_SHIFT    (8)
#define DMA_DMA_SRC_SEL1_CH6_SRC(x)       (x << 8)
#define DMA_DMA_SRC_SEL1_CH7_SRC_MASK     (0xff << 16)
#define DMA_DMA_SRC_SEL1_CH7_SRC_SHIFT    (16)
#define DMA_DMA_SRC_SEL1_CH7_SRC(x)       (x << 16)
#define DMA_DMA_SRC_SEL1_DMA_FLEX_EN_MASK (0x01 << 24)
#define DMA_DMA_SRC_SEL1_DMA_FLEX_EN_SHIFT (24)
#define DMA_DMA_SRC_SEL1_DMA_FLEX_EN(x)   (x << 24)

/* SDIO1 - Secure digital input/output interface */
#define SDIO_PWRCTRL_PS_MASK              (0x03 << 0)
#define SDIO_PWRCTRL_PS_SHIFT             (0)
#define SDIO_PWRCTRL_PS(x)                (x << 0)
#define SDIO_CLKCTRL_CLKDIV_MASK          (0xff << 0)
#define SDIO_CLKCTRL_CLKDIV_SHIFT         (0)
#define SDIO_CLKCTRL_CLKDIV(x)            (x << 0)
#define SDIO_CLKCTRL_CLKOEN_MASK          (0x01 << 8)
#define SDIO_CLKCTRL_CLKOEN_SHIFT         (8)
#define SDIO_CLKCTRL_CLKOEN(x)            (x << 8)
#define SDIO_CLKCTRL_PWRSVEN_MASK         (0x01 << 9)
#define SDIO_CLKCTRL_PWRSVEN_SHIFT        (9)
#define SDIO_CLKCTRL_PWRSVEN(x)           (x << 9)
#define SDIO_CLKCTRL_BYPSEN_MASK          (0x01 << 10)
#define SDIO_CLKCTRL_BYPSEN_SHIFT         (10)
#define SDIO_CLKCTRL_BYPSEN(x)            (x << 10)
#define SDIO_CLKCTRL_BUSWS_MASK           (0x03 << 11)
#define SDIO_CLKCTRL_BUSWS_SHIFT          (11)
#define SDIO_CLKCTRL_BUSWS(x)             (x << 11)
#define SDIO_CLKCTRL_CLKEDS_MASK          (0x01 << 13)
#define SDIO_CLKCTRL_CLKEDS_SHIFT         (13)
#define SDIO_CLKCTRL_CLKEDS(x)            (x << 13)
#define SDIO_CLKCTRL_HFCEN_MASK           (0x01 << 14)
#define SDIO_CLKCTRL_HFCEN_SHIFT          (14)
#define SDIO_CLKCTRL_HFCEN(x)             (x << 14)
#define SDIO_CLKCTRL_CLKDIV98_MASK        (0x03 << 15)
#define SDIO_CLKCTRL_CLKDIV98_SHIFT       (15)
#define SDIO_CLKCTRL_CLKDIV98(x)          (x << 15)
#define SDIO_ARGU_ARGU_MASK               (0xffffffff << 0)
#define SDIO_ARGU_ARGU_SHIFT              (0)
#define SDIO_ARGU_ARGU(x)                 (x << 0)
#define SDIO_CMDCTRL_CMDIDX_MASK          (0x3f << 0)
#define SDIO_CMDCTRL_CMDIDX_SHIFT         (0)
#define SDIO_CMDCTRL_CMDIDX(x)            (x << 0)
#define SDIO_CMDCTRL_RSPWT_MASK           (0x03 << 6)
#define SDIO_CMDCTRL_RSPWT_SHIFT          (6)
#define SDIO_CMDCTRL_RSPWT(x)             (x << 6)
#define SDIO_CMDCTRL_INTWT_MASK           (0x01 << 8)
#define SDIO_CMDCTRL_INTWT_SHIFT          (8)
#define SDIO_CMDCTRL_INTWT(x)             (x << 8)
#define SDIO_CMDCTRL_PNDWT_MASK           (0x01 << 9)
#define SDIO_CMDCTRL_PNDWT_SHIFT          (9)
#define SDIO_CMDCTRL_PNDWT(x)             (x << 9)
#define SDIO_CMDCTRL_CCSMEN_MASK          (0x01 << 10)
#define SDIO_CMDCTRL_CCSMEN_SHIFT         (10)
#define SDIO_CMDCTRL_CCSMEN(x)            (x << 10)
#define SDIO_CMDCTRL_IOSUSP_MASK          (0x01 << 11)
#define SDIO_CMDCTRL_IOSUSP_SHIFT         (11)
#define SDIO_CMDCTRL_IOSUSP(x)            (x << 11)
#define SDIO_RSPCMD_RSPCMD_MASK           (0x3f << 0)
#define SDIO_RSPCMD_RSPCMD_SHIFT          (0)
#define SDIO_RSPCMD_RSPCMD(x)             (x << 0)
#define SDIO_RSP1_CARDSTS1_MASK           (0xffffffff << 0)
#define SDIO_RSP1_CARDSTS1_SHIFT          (0)
#define SDIO_RSP1_CARDSTS1(x)             (x << 0)
#define SDIO_RSP2_CARDSTS2_MASK           (0xffffffff << 0)
#define SDIO_RSP2_CARDSTS2_SHIFT          (0)
#define SDIO_RSP2_CARDSTS2(x)             (x << 0)
#define SDIO_RSP3_CARDSTS3_MASK           (0xffffffff << 0)
#define SDIO_RSP3_CARDSTS3_SHIFT          (0)
#define SDIO_RSP3_CARDSTS3(x)             (x << 0)
#define SDIO_RSP4_CARDSTS4_MASK           (0xffffffff << 0)
#define SDIO_RSP4_CARDSTS4_SHIFT          (0)
#define SDIO_RSP4_CARDSTS4(x)             (x << 0)
#define SDIO_DTTMR_TIMEOUT_MASK           (0xffffffff << 0)
#define SDIO_DTTMR_TIMEOUT_SHIFT          (0)
#define SDIO_DTTMR_TIMEOUT(x)             (x << 0)
#define SDIO_DTLEN_DTLEN_MASK             (0x1ffffff << 0)
#define SDIO_DTLEN_DTLEN_SHIFT            (0)
#define SDIO_DTLEN_DTLEN(x)               (x << 0)
#define SDIO_DTCTRL_TFREN_MASK            (0x01 << 0)
#define SDIO_DTCTRL_TFREN_SHIFT           (0)
#define SDIO_DTCTRL_TFREN(x)              (x << 0)
#define SDIO_DTCTRL_TFRDIR_MASK           (0x01 << 1)
#define SDIO_DTCTRL_TFRDIR_SHIFT          (1)
#define SDIO_DTCTRL_TFRDIR(x)             (x << 1)
#define SDIO_DTCTRL_TFRMODE_MASK          (0x01 << 2)
#define SDIO_DTCTRL_TFRMODE_SHIFT         (2)
#define SDIO_DTCTRL_TFRMODE(x)            (x << 2)
#define SDIO_DTCTRL_DMAEN_MASK            (0x01 << 3)
#define SDIO_DTCTRL_DMAEN_SHIFT           (3)
#define SDIO_DTCTRL_DMAEN(x)              (x << 3)
#define SDIO_DTCTRL_BLKSIZE_MASK          (0x0f << 4)
#define SDIO_DTCTRL_BLKSIZE_SHIFT         (4)
#define SDIO_DTCTRL_BLKSIZE(x)            (x << 4)
#define SDIO_DTCTRL_RDWTSTART_MASK        (0x01 << 8)
#define SDIO_DTCTRL_RDWTSTART_SHIFT       (8)
#define SDIO_DTCTRL_RDWTSTART(x)          (x << 8)
#define SDIO_DTCTRL_RDWTSTOP_MASK         (0x01 << 9)
#define SDIO_DTCTRL_RDWTSTOP_SHIFT        (9)
#define SDIO_DTCTRL_RDWTSTOP(x)           (x << 9)
#define SDIO_DTCTRL_RDWTMODE_MASK         (0x01 << 10)
#define SDIO_DTCTRL_RDWTMODE_SHIFT        (10)
#define SDIO_DTCTRL_RDWTMODE(x)           (x << 10)
#define SDIO_DTCTRL_IOEN_MASK             (0x01 << 11)
#define SDIO_DTCTRL_IOEN_SHIFT            (11)
#define SDIO_DTCTRL_IOEN(x)               (x << 11)
#define SDIO_DTCNT_CNT_MASK               (0x1ffffff << 0)
#define SDIO_DTCNT_CNT_SHIFT              (0)
#define SDIO_DTCNT_CNT(x)                 (x << 0)
#define SDIO_STS_CMDFAIL_MASK             (0x01 << 0)
#define SDIO_STS_CMDFAIL_SHIFT            (0)
#define SDIO_STS_CMDFAIL(x)               (x << 0)
#define SDIO_STS_DTFAIL_MASK              (0x01 << 1)
#define SDIO_STS_DTFAIL_SHIFT             (1)
#define SDIO_STS_DTFAIL(x)                (x << 1)
#define SDIO_STS_CMDTIMEOUT_MASK          (0x01 << 2)
#define SDIO_STS_CMDTIMEOUT_SHIFT         (2)
#define SDIO_STS_CMDTIMEOUT(x)            (x << 2)
#define SDIO_STS_DTTIMEOUT_MASK           (0x01 << 3)
#define SDIO_STS_DTTIMEOUT_SHIFT          (3)
#define SDIO_STS_DTTIMEOUT(x)             (x << 3)
#define SDIO_STS_TXERRU_MASK              (0x01 << 4)
#define SDIO_STS_TXERRU_SHIFT             (4)
#define SDIO_STS_TXERRU(x)                (x << 4)
#define SDIO_STS_RXERRO_MASK              (0x01 << 5)
#define SDIO_STS_RXERRO_SHIFT             (5)
#define SDIO_STS_RXERRO(x)                (x << 5)
#define SDIO_STS_CMDRSPCMPL_MASK          (0x01 << 6)
#define SDIO_STS_CMDRSPCMPL_SHIFT         (6)
#define SDIO_STS_CMDRSPCMPL(x)            (x << 6)
#define SDIO_STS_CMDCMPL_MASK             (0x01 << 7)
#define SDIO_STS_CMDCMPL_SHIFT            (7)
#define SDIO_STS_CMDCMPL(x)               (x << 7)
#define SDIO_STS_DTCMPL_MASK              (0x01 << 8)
#define SDIO_STS_DTCMPL_SHIFT             (8)
#define SDIO_STS_DTCMPL(x)                (x << 8)
#define SDIO_STS_SBITERR_MASK             (0x01 << 9)
#define SDIO_STS_SBITERR_SHIFT            (9)
#define SDIO_STS_SBITERR(x)               (x << 9)
#define SDIO_STS_DTBLKCMPL_MASK           (0x01 << 10)
#define SDIO_STS_DTBLKCMPL_SHIFT          (10)
#define SDIO_STS_DTBLKCMPL(x)             (x << 10)
#define SDIO_STS_DOCMD_MASK               (0x01 << 11)
#define SDIO_STS_DOCMD_SHIFT              (11)
#define SDIO_STS_DOCMD(x)                 (x << 11)
#define SDIO_STS_DOTX_MASK                (0x01 << 12)
#define SDIO_STS_DOTX_SHIFT               (12)
#define SDIO_STS_DOTX(x)                  (x << 12)
#define SDIO_STS_DORX_MASK                (0x01 << 13)
#define SDIO_STS_DORX_SHIFT               (13)
#define SDIO_STS_DORX(x)                  (x << 13)
#define SDIO_STS_TXBUFH_MASK              (0x01 << 14)
#define SDIO_STS_TXBUFH_SHIFT             (14)
#define SDIO_STS_TXBUFH(x)                (x << 14)
#define SDIO_STS_RXBUFH_MASK              (0x01 << 15)
#define SDIO_STS_RXBUFH_SHIFT             (15)
#define SDIO_STS_RXBUFH(x)                (x << 15)
#define SDIO_STS_TXBUFF_MASK              (0x01 << 16)
#define SDIO_STS_TXBUFF_SHIFT             (16)
#define SDIO_STS_TXBUFF(x)                (x << 16)
#define SDIO_STS_RXBUFF_MASK              (0x01 << 17)
#define SDIO_STS_RXBUFF_SHIFT             (17)
#define SDIO_STS_RXBUFF(x)                (x << 17)
#define SDIO_STS_TXBUFE_MASK              (0x01 << 18)
#define SDIO_STS_TXBUFE_SHIFT             (18)
#define SDIO_STS_TXBUFE(x)                (x << 18)
#define SDIO_STS_RXBUFE_MASK              (0x01 << 19)
#define SDIO_STS_RXBUFE_SHIFT             (19)
#define SDIO_STS_RXBUFE(x)                (x << 19)
#define SDIO_STS_TXBUF_MASK               (0x01 << 20)
#define SDIO_STS_TXBUF_SHIFT              (20)
#define SDIO_STS_TXBUF(x)                 (x << 20)
#define SDIO_STS_RXBUF_MASK               (0x01 << 21)
#define SDIO_STS_RXBUF_SHIFT              (21)
#define SDIO_STS_RXBUF(x)                 (x << 21)
#define SDIO_STS_IOIF_MASK                (0x01 << 22)
#define SDIO_STS_IOIF_SHIFT               (22)
#define SDIO_STS_IOIF(x)                  (x << 22)
#define SDIO_INTCLR_CMDFAIL_MASK          (0x01 << 0)
#define SDIO_INTCLR_CMDFAIL_SHIFT         (0)
#define SDIO_INTCLR_CMDFAIL(x)            (x << 0)
#define SDIO_INTCLR_DTFAIL_MASK           (0x01 << 1)
#define SDIO_INTCLR_DTFAIL_SHIFT          (1)
#define SDIO_INTCLR_DTFAIL(x)             (x << 1)
#define SDIO_INTCLR_CMDTIMEOUT_MASK       (0x01 << 2)
#define SDIO_INTCLR_CMDTIMEOUT_SHIFT      (2)
#define SDIO_INTCLR_CMDTIMEOUT(x)         (x << 2)
#define SDIO_INTCLR_DTTIMEOUT_MASK        (0x01 << 3)
#define SDIO_INTCLR_DTTIMEOUT_SHIFT       (3)
#define SDIO_INTCLR_DTTIMEOUT(x)          (x << 3)
#define SDIO_INTCLR_TXERRU_MASK           (0x01 << 4)
#define SDIO_INTCLR_TXERRU_SHIFT          (4)
#define SDIO_INTCLR_TXERRU(x)             (x << 4)
#define SDIO_INTCLR_RXERRU_MASK           (0x01 << 5)
#define SDIO_INTCLR_RXERRU_SHIFT          (5)
#define SDIO_INTCLR_RXERRU(x)             (x << 5)
#define SDIO_INTCLR_CMDRSPCMPL_MASK       (0x01 << 6)
#define SDIO_INTCLR_CMDRSPCMPL_SHIFT      (6)
#define SDIO_INTCLR_CMDRSPCMPL(x)         (x << 6)
#define SDIO_INTCLR_CMDCMPL_MASK          (0x01 << 7)
#define SDIO_INTCLR_CMDCMPL_SHIFT         (7)
#define SDIO_INTCLR_CMDCMPL(x)            (x << 7)
#define SDIO_INTCLR_DTCMPL_MASK           (0x01 << 8)
#define SDIO_INTCLR_DTCMPL_SHIFT          (8)
#define SDIO_INTCLR_DTCMPL(x)             (x << 8)
#define SDIO_INTCLR_SBITERR_MASK          (0x01 << 9)
#define SDIO_INTCLR_SBITERR_SHIFT         (9)
#define SDIO_INTCLR_SBITERR(x)            (x << 9)
#define SDIO_INTCLR_DTBLKCMPL_MASK        (0x01 << 10)
#define SDIO_INTCLR_DTBLKCMPL_SHIFT       (10)
#define SDIO_INTCLR_DTBLKCMPL(x)          (x << 10)
#define SDIO_INTCLR_IOIF_MASK             (0x01 << 22)
#define SDIO_INTCLR_IOIF_SHIFT            (22)
#define SDIO_INTCLR_IOIF(x)               (x << 22)
#define SDIO_INTEN_CMDFAILIEN_MASK        (0x01 << 0)
#define SDIO_INTEN_CMDFAILIEN_SHIFT       (0)
#define SDIO_INTEN_CMDFAILIEN(x)          (x << 0)
#define SDIO_INTEN_DTFAILIEN_MASK         (0x01 << 1)
#define SDIO_INTEN_DTFAILIEN_SHIFT        (1)
#define SDIO_INTEN_DTFAILIEN(x)           (x << 1)
#define SDIO_INTEN_CMDTIMEOUTIEN_MASK     (0x01 << 2)
#define SDIO_INTEN_CMDTIMEOUTIEN_SHIFT    (2)
#define SDIO_INTEN_CMDTIMEOUTIEN(x)       (x << 2)
#define SDIO_INTEN_DTTIMEOUTIEN_MASK      (0x01 << 3)
#define SDIO_INTEN_DTTIMEOUTIEN_SHIFT     (3)
#define SDIO_INTEN_DTTIMEOUTIEN(x)        (x << 3)
#define SDIO_INTEN_TXERRUIEN_MASK         (0x01 << 4)
#define SDIO_INTEN_TXERRUIEN_SHIFT        (4)
#define SDIO_INTEN_TXERRUIEN(x)           (x << 4)
#define SDIO_INTEN_RXERRUIEN_MASK         (0x01 << 5)
#define SDIO_INTEN_RXERRUIEN_SHIFT        (5)
#define SDIO_INTEN_RXERRUIEN(x)           (x << 5)
#define SDIO_INTEN_CMDRSPCMPLIEN_MASK     (0x01 << 6)
#define SDIO_INTEN_CMDRSPCMPLIEN_SHIFT    (6)
#define SDIO_INTEN_CMDRSPCMPLIEN(x)       (x << 6)
#define SDIO_INTEN_CMDCMPLIEN_MASK        (0x01 << 7)
#define SDIO_INTEN_CMDCMPLIEN_SHIFT       (7)
#define SDIO_INTEN_CMDCMPLIEN(x)          (x << 7)
#define SDIO_INTEN_DTCMPLIEN_MASK         (0x01 << 8)
#define SDIO_INTEN_DTCMPLIEN_SHIFT        (8)
#define SDIO_INTEN_DTCMPLIEN(x)           (x << 8)
#define SDIO_INTEN_SBITERRIEN_MASK        (0x01 << 9)
#define SDIO_INTEN_SBITERRIEN_SHIFT       (9)
#define SDIO_INTEN_SBITERRIEN(x)          (x << 9)
#define SDIO_INTEN_DTBLKCMPLIEN_MASK      (0x01 << 10)
#define SDIO_INTEN_DTBLKCMPLIEN_SHIFT     (10)
#define SDIO_INTEN_DTBLKCMPLIEN(x)        (x << 10)
#define SDIO_INTEN_DOCMDIEN_MASK          (0x01 << 11)
#define SDIO_INTEN_DOCMDIEN_SHIFT         (11)
#define SDIO_INTEN_DOCMDIEN(x)            (x << 11)
#define SDIO_INTEN_DOTXIEN_MASK           (0x01 << 12)
#define SDIO_INTEN_DOTXIEN_SHIFT          (12)
#define SDIO_INTEN_DOTXIEN(x)             (x << 12)
#define SDIO_INTEN_DORXIEN_MASK           (0x01 << 13)
#define SDIO_INTEN_DORXIEN_SHIFT          (13)
#define SDIO_INTEN_DORXIEN(x)             (x << 13)
#define SDIO_INTEN_TXBUFHIEN_MASK         (0x01 << 14)
#define SDIO_INTEN_TXBUFHIEN_SHIFT        (14)
#define SDIO_INTEN_TXBUFHIEN(x)           (x << 14)
#define SDIO_INTEN_RXBUFHIEN_MASK         (0x01 << 15)
#define SDIO_INTEN_RXBUFHIEN_SHIFT        (15)
#define SDIO_INTEN_RXBUFHIEN(x)           (x << 15)
#define SDIO_INTEN_TXBUFFIEN_MASK         (0x01 << 16)
#define SDIO_INTEN_TXBUFFIEN_SHIFT        (16)
#define SDIO_INTEN_TXBUFFIEN(x)           (x << 16)
#define SDIO_INTEN_RXBUFFIEN_MASK         (0x01 << 17)
#define SDIO_INTEN_RXBUFFIEN_SHIFT        (17)
#define SDIO_INTEN_RXBUFFIEN(x)           (x << 17)
#define SDIO_INTEN_TXBUFEIEN_MASK         (0x01 << 18)
#define SDIO_INTEN_TXBUFEIEN_SHIFT        (18)
#define SDIO_INTEN_TXBUFEIEN(x)           (x << 18)
#define SDIO_INTEN_RXBUFEIEN_MASK         (0x01 << 19)
#define SDIO_INTEN_RXBUFEIEN_SHIFT        (19)
#define SDIO_INTEN_RXBUFEIEN(x)           (x << 19)
#define SDIO_INTEN_TXBUFIEN_MASK          (0x01 << 20)
#define SDIO_INTEN_TXBUFIEN_SHIFT         (20)
#define SDIO_INTEN_TXBUFIEN(x)            (x << 20)
#define SDIO_INTEN_RXBUFIEN_MASK          (0x01 << 21)
#define SDIO_INTEN_RXBUFIEN_SHIFT         (21)
#define SDIO_INTEN_RXBUFIEN(x)            (x << 21)
#define SDIO_INTEN_IOIFIEN_MASK           (0x01 << 22)
#define SDIO_INTEN_IOIFIEN_SHIFT          (22)
#define SDIO_INTEN_IOIFIEN(x)             (x << 22)
#define SDIO_BUFCNT_CNT_MASK              (0xffffff << 0)
#define SDIO_BUFCNT_CNT_SHIFT             (0)
#define SDIO_BUFCNT_CNT(x)                (x << 0)
#define SDIO_BUF_DT_MASK                  (0xffffffff << 0)
#define SDIO_BUF_DT_SHIFT                 (0)
#define SDIO_BUF_DT(x)                    (x << 0)

/* RTC - Real time clock */
#define RTC_CTRLH_OVFIEN_MASK             (0x01 << 0)
#define RTC_CTRLH_OVFIEN_SHIFT            (0)
#define RTC_CTRLH_OVFIEN(x)               (x << 0)
#define RTC_CTRLH_TAIEN_MASK              (0x01 << 1)
#define RTC_CTRLH_TAIEN_SHIFT             (1)
#define RTC_CTRLH_TAIEN(x)                (x << 1)
#define RTC_CTRLH_TSIEN_MASK              (0x01 << 2)
#define RTC_CTRLH_TSIEN_SHIFT             (2)
#define RTC_CTRLH_TSIEN(x)                (x << 2)
#define RTC_CTRLL_TSF_MASK                (0x01 << 0)
#define RTC_CTRLL_TSF_SHIFT               (0)
#define RTC_CTRLL_TSF(x)                  (x << 0)
#define RTC_CTRLL_TAF_MASK                (0x01 << 1)
#define RTC_CTRLL_TAF_SHIFT               (1)
#define RTC_CTRLL_TAF(x)                  (x << 1)
#define RTC_CTRLL_OVFF_MASK               (0x01 << 2)
#define RTC_CTRLL_OVFF_SHIFT              (2)
#define RTC_CTRLL_OVFF(x)                 (x << 2)
#define RTC_CTRLL_UPDF_MASK               (0x01 << 3)
#define RTC_CTRLL_UPDF_SHIFT              (3)
#define RTC_CTRLL_UPDF(x)                 (x << 3)
#define RTC_CTRLL_CFGEN_MASK              (0x01 << 4)
#define RTC_CTRLL_CFGEN_SHIFT             (4)
#define RTC_CTRLL_CFGEN(x)                (x << 4)
#define RTC_CTRLL_CFGF_MASK               (0x01 << 5)
#define RTC_CTRLL_CFGF_SHIFT              (5)
#define RTC_CTRLL_CFGF(x)                 (x << 5)
#define RTC_DIVH_DIV_MASK                 (0x0f << 0)
#define RTC_DIVH_DIV_SHIFT                (0)
#define RTC_DIVH_DIV(x)                   (x << 0)
#define RTC_DIVL_DIV_MASK                 (0xffff << 0)
#define RTC_DIVL_DIV_SHIFT                (0)
#define RTC_DIVL_DIV(x)                   (x << 0)
#define RTC_DIVCNTH_DIVCNT_MASK           (0x0f << 0)
#define RTC_DIVCNTH_DIVCNT_SHIFT          (0)
#define RTC_DIVCNTH_DIVCNT(x)             (x << 0)
#define RTC_DIVCNTL_DIVCNT_MASK           (0xffff << 0)
#define RTC_DIVCNTL_DIVCNT_SHIFT          (0)
#define RTC_DIVCNTL_DIVCNT(x)             (x << 0)
#define RTC_CNTH_CNT_MASK                 (0xffff << 0)
#define RTC_CNTH_CNT_SHIFT                (0)
#define RTC_CNTH_CNT(x)                   (x << 0)
#define RTC_CNTL_CNT_MASK                 (0xffff << 0)
#define RTC_CNTL_CNT_SHIFT                (0)
#define RTC_CNTL_CNT(x)                   (x << 0)
#define RTC_TAH_TA_MASK                   (0xffff << 0)
#define RTC_TAH_TA_SHIFT                  (0)
#define RTC_TAH_TA(x)                     (x << 0)
#define RTC_TAL_TA_MASK                   (0xffff << 0)
#define RTC_TAL_TA_SHIFT                  (0)
#define RTC_TAL_TA(x)                     (x << 0)

/* BPR - Battery powered register */
#define BPR_DT1_DT1_MASK                  (0xffff << 0)
#define BPR_DT1_DT1_SHIFT                 (0)
#define BPR_DT1_DT1(x)                    (x << 0)
#define BPR_DT2_DT2_MASK                  (0xffff << 0)
#define BPR_DT2_DT2_SHIFT                 (0)
#define BPR_DT2_DT2(x)                    (x << 0)
#define BPR_DT3_DT3_MASK                  (0xffff << 0)
#define BPR_DT3_DT3_SHIFT                 (0)
#define BPR_DT3_DT3(x)                    (x << 0)
#define BPR_DT4_DT4_MASK                  (0xffff << 0)
#define BPR_DT4_DT4_SHIFT                 (0)
#define BPR_DT4_DT4(x)                    (x << 0)
#define BPR_DT5_DT5_MASK                  (0xffff << 0)
#define BPR_DT5_DT5_SHIFT                 (0)
#define BPR_DT5_DT5(x)                    (x << 0)
#define BPR_DT6_DT6_MASK                  (0xffff << 0)
#define BPR_DT6_DT6_SHIFT                 (0)
#define BPR_DT6_DT6(x)                    (x << 0)
#define BPR_DT7_DT7_MASK                  (0xffff << 0)
#define BPR_DT7_DT7_SHIFT                 (0)
#define BPR_DT7_DT7(x)                    (x << 0)
#define BPR_DT8_DT8_MASK                  (0xffff << 0)
#define BPR_DT8_DT8_SHIFT                 (0)
#define BPR_DT8_DT8(x)                    (x << 0)
#define BPR_DT9_DT9_MASK                  (0xffff << 0)
#define BPR_DT9_DT9_SHIFT                 (0)
#define BPR_DT9_DT9(x)                    (x << 0)
#define BPR_DT10_DT10_MASK                (0xffff << 0)
#define BPR_DT10_DT10_SHIFT               (0)
#define BPR_DT10_DT10(x)                  (x << 0)
#define BPR_DT11_DT11_MASK                (0xffff << 0)
#define BPR_DT11_DT11_SHIFT               (0)
#define BPR_DT11_DT11(x)                  (x << 0)
#define BPR_DT12_DT12_MASK                (0xffff << 0)
#define BPR_DT12_DT12_SHIFT               (0)
#define BPR_DT12_DT12(x)                  (x << 0)
#define BPR_DT13_DT13_MASK                (0xffff << 0)
#define BPR_DT13_DT13_SHIFT               (0)
#define BPR_DT13_DT13(x)                  (x << 0)
#define BPR_DT14_DT14_MASK                (0xffff << 0)
#define BPR_DT14_DT14_SHIFT               (0)
#define BPR_DT14_DT14(x)                  (x << 0)
#define BPR_DT15_DT15_MASK                (0xffff << 0)
#define BPR_DT15_DT15_SHIFT               (0)
#define BPR_DT15_DT15(x)                  (x << 0)
#define BPR_DT16_DT16_MASK                (0xffff << 0)
#define BPR_DT16_DT16_SHIFT               (0)
#define BPR_DT16_DT16(x)                  (x << 0)
#define BPR_DT17_DT17_MASK                (0xffff << 0)
#define BPR_DT17_DT17_SHIFT               (0)
#define BPR_DT17_DT17(x)                  (x << 0)
#define BPR_DT18_DT18_MASK                (0xffff << 0)
#define BPR_DT18_DT18_SHIFT               (0)
#define BPR_DT18_DT18(x)                  (x << 0)
#define BPR_DT19_DT19_MASK                (0xffff << 0)
#define BPR_DT19_DT19_SHIFT               (0)
#define BPR_DT19_DT19(x)                  (x << 0)
#define BPR_DT20_DT20_MASK                (0xffff << 0)
#define BPR_DT20_DT20_SHIFT               (0)
#define BPR_DT20_DT20(x)                  (x << 0)
#define BPR_DT21_DT21_MASK                (0xffff << 0)
#define BPR_DT21_DT21_SHIFT               (0)
#define BPR_DT21_DT21(x)                  (x << 0)
#define BPR_DT22_DT22_MASK                (0xffff << 0)
#define BPR_DT22_DT22_SHIFT               (0)
#define BPR_DT22_DT22(x)                  (x << 0)
#define BPR_DT23_DT23_MASK                (0xffff << 0)
#define BPR_DT23_DT23_SHIFT               (0)
#define BPR_DT23_DT23(x)                  (x << 0)
#define BPR_DT24_DT24_MASK                (0xffff << 0)
#define BPR_DT24_DT24_SHIFT               (0)
#define BPR_DT24_DT24(x)                  (x << 0)
#define BPR_DT25_DT25_MASK                (0xffff << 0)
#define BPR_DT25_DT25_SHIFT               (0)
#define BPR_DT25_DT25(x)                  (x << 0)
#define BPR_DT26_DT26_MASK                (0xffff << 0)
#define BPR_DT26_DT26_SHIFT               (0)
#define BPR_DT26_DT26(x)                  (x << 0)
#define BPR_DT27_DT27_MASK                (0xffff << 0)
#define BPR_DT27_DT27_SHIFT               (0)
#define BPR_DT27_DT27(x)                  (x << 0)
#define BPR_DT28_DT28_MASK                (0xffff << 0)
#define BPR_DT28_DT28_SHIFT               (0)
#define BPR_DT28_DT28(x)                  (x << 0)
#define BPR_DT29_DT29_MASK                (0xffff << 0)
#define BPR_DT29_DT29_SHIFT               (0)
#define BPR_DT29_DT29(x)                  (x << 0)
#define BPR_DT30_DT30_MASK                (0xffff << 0)
#define BPR_DT30_DT30_SHIFT               (0)
#define BPR_DT30_DT30(x)                  (x << 0)
#define BPR_DT31_DT31_MASK                (0xffff << 0)
#define BPR_DT31_DT31_SHIFT               (0)
#define BPR_DT31_DT31(x)                  (x << 0)
#define BPR_DT32_DT32_MASK                (0xffff << 0)
#define BPR_DT32_DT32_SHIFT               (0)
#define BPR_DT32_DT32(x)                  (x << 0)
#define BPR_DT33_DT33_MASK                (0xffff << 0)
#define BPR_DT33_DT33_SHIFT               (0)
#define BPR_DT33_DT33(x)                  (x << 0)
#define BPR_DT34_DT34_MASK                (0xffff << 0)
#define BPR_DT34_DT34_SHIFT               (0)
#define BPR_DT34_DT34(x)                  (x << 0)
#define BPR_DT35_DT35_MASK                (0xffff << 0)
#define BPR_DT35_DT35_SHIFT               (0)
#define BPR_DT35_DT35(x)                  (x << 0)
#define BPR_DT36_DT36_MASK                (0xffff << 0)
#define BPR_DT36_DT36_SHIFT               (0)
#define BPR_DT36_DT36(x)                  (x << 0)
#define BPR_DT37_DT37_MASK                (0xffff << 0)
#define BPR_DT37_DT37_SHIFT               (0)
#define BPR_DT37_DT37(x)                  (x << 0)
#define BPR_DT38_DT38_MASK                (0xffff << 0)
#define BPR_DT38_DT38_SHIFT               (0)
#define BPR_DT38_DT38(x)                  (x << 0)
#define BPR_DT39_DT39_MASK                (0xffff << 0)
#define BPR_DT39_DT39_SHIFT               (0)
#define BPR_DT39_DT39(x)                  (x << 0)
#define BPR_DT40_DT40_MASK                (0xffff << 0)
#define BPR_DT40_DT40_SHIFT               (0)
#define BPR_DT40_DT40(x)                  (x << 0)
#define BPR_DT41_DT41_MASK                (0xffff << 0)
#define BPR_DT41_DT41_SHIFT               (0)
#define BPR_DT41_DT41(x)                  (x << 0)
#define BPR_DT42_DT42_MASK                (0xffff << 0)
#define BPR_DT42_DT42_SHIFT               (0)
#define BPR_DT42_DT42(x)                  (x << 0)
#define BPR_RTCCAL_CALVAL_MASK            (0x7f << 0)
#define BPR_RTCCAL_CALVAL_SHIFT           (0)
#define BPR_RTCCAL_CALVAL(x)              (x << 0)
#define BPR_RTCCAL_CALOUT_MASK            (0x01 << 7)
#define BPR_RTCCAL_CALOUT_SHIFT           (7)
#define BPR_RTCCAL_CALOUT(x)              (x << 7)
#define BPR_RTCCAL_OUTEN_MASK             (0x01 << 8)
#define BPR_RTCCAL_OUTEN_SHIFT            (8)
#define BPR_RTCCAL_OUTEN(x)               (x << 8)
#define BPR_RTCCAL_OUTSEL_MASK            (0x01 << 9)
#define BPR_RTCCAL_OUTSEL_SHIFT           (9)
#define BPR_RTCCAL_OUTSEL(x)              (x << 9)
#define BPR_RTCCAL_CCOS_MASK              (0x01 << 10)
#define BPR_RTCCAL_CCOS_SHIFT             (10)
#define BPR_RTCCAL_CCOS(x)                (x << 10)
#define BPR_RTCCAL_OUTM_MASK              (0x01 << 11)
#define BPR_RTCCAL_OUTM_SHIFT             (11)
#define BPR_RTCCAL_OUTM(x)                (x << 11)
#define BPR_CTRL_TPEN_MASK                (0x01 << 0)
#define BPR_CTRL_TPEN_SHIFT               (0)
#define BPR_CTRL_TPEN(x)                  (x << 0)
#define BPR_CTRL_TPP_MASK                 (0x01 << 1)
#define BPR_CTRL_TPP_SHIFT                (1)
#define BPR_CTRL_TPP(x)                   (x << 1)
#define BPR_CTRLSTS_TPEFCLR_MASK          (0x01 << 0)
#define BPR_CTRLSTS_TPEFCLR_SHIFT         (0)
#define BPR_CTRLSTS_TPEFCLR(x)            (x << 0)
#define BPR_CTRLSTS_TPIFCLR_MASK          (0x01 << 1)
#define BPR_CTRLSTS_TPIFCLR_SHIFT         (1)
#define BPR_CTRLSTS_TPIFCLR(x)            (x << 1)
#define BPR_CTRLSTS_TPIEN_MASK            (0x01 << 2)
#define BPR_CTRLSTS_TPIEN_SHIFT           (2)
#define BPR_CTRLSTS_TPIEN(x)              (x << 2)
#define BPR_CTRLSTS_TPEF_MASK             (0x01 << 8)
#define BPR_CTRLSTS_TPEF_SHIFT            (8)
#define BPR_CTRLSTS_TPEF(x)               (x << 8)
#define BPR_CTRLSTS_TPIF_MASK             (0x01 << 9)
#define BPR_CTRLSTS_TPIF_SHIFT            (9)
#define BPR_CTRLSTS_TPIF(x)               (x << 9)

/* WDT - Watchdog */
#define WDT_CMD_CMD_MASK                  (0xffff << 0)
#define WDT_CMD_CMD_SHIFT                 (0)
#define WDT_CMD_CMD(x)                    (x << 0)
#define WDT_DIV_DIV_MASK                  (0x07 << 0)
#define WDT_DIV_DIV_SHIFT                 (0)
#define WDT_DIV_DIV(x)                    (x << 0)
#define WDT_RLD_RLD_MASK                  (0xfff << 0)
#define WDT_RLD_RLD_SHIFT                 (0)
#define WDT_RLD_RLD(x)                    (x << 0)
#define WDT_STS_DIVF_MASK                 (0x01 << 0)
#define WDT_STS_DIVF_SHIFT                (0)
#define WDT_STS_DIVF(x)                   (x << 0)
#define WDT_STS_RLDF_MASK                 (0x01 << 1)
#define WDT_STS_RLDF_SHIFT                (1)
#define WDT_STS_RLDF(x)                   (x << 1)

/* WWDT - Window watchdog */
#define WWDT_CTRL_CNT_MASK                (0x7f << 0)
#define WWDT_CTRL_CNT_SHIFT               (0)
#define WWDT_CTRL_CNT(x)                  (x << 0)
#define WWDT_CTRL_WWDTEN_MASK             (0x01 << 7)
#define WWDT_CTRL_WWDTEN_SHIFT            (7)
#define WWDT_CTRL_WWDTEN(x)               (x << 7)
#define WWDT_CFG_WIN_MASK                 (0x7f << 0)
#define WWDT_CFG_WIN_SHIFT                (0)
#define WWDT_CFG_WIN(x)                   (x << 0)
#define WWDT_CFG_DIV_MASK                 (0x03 << 7)
#define WWDT_CFG_DIV_SHIFT                (7)
#define WWDT_CFG_DIV(x)                   (x << 7)
#define WWDT_CFG_RLDIEN_MASK              (0x01 << 9)
#define WWDT_CFG_RLDIEN_SHIFT             (9)
#define WWDT_CFG_RLDIEN(x)                (x << 9)
#define WWDT_STS_RLDF_MASK                (0x01 << 0)
#define WWDT_STS_RLDF_SHIFT               (0)
#define WWDT_STS_RLDF(x)                  (x << 0)

/* TMR1 - Advanced timer */
#define TMR_CTRL1_CLKDIV_MASK             (0x03 << 8)
#define TMR_CTRL1_CLKDIV_SHIFT            (8)
#define TMR_CTRL1_CLKDIV(x)               (x << 8)
#define TMR_CTRL1_PRBEN_MASK              (0x01 << 7)
#define TMR_CTRL1_PRBEN_SHIFT             (7)
#define TMR_CTRL1_PRBEN(x)                (x << 7)
#define TMR_CTRL1_TWCMSEL_MASK            (0x03 << 5)
#define TMR_CTRL1_TWCMSEL_SHIFT           (5)
#define TMR_CTRL1_TWCMSEL(x)              (x << 5)
#define TMR_CTRL1_OWCDIR_MASK             (0x01 << 4)
#define TMR_CTRL1_OWCDIR_SHIFT            (4)
#define TMR_CTRL1_OWCDIR(x)               (x << 4)
#define TMR_CTRL1_OCMEN_MASK              (0x01 << 3)
#define TMR_CTRL1_OCMEN_SHIFT             (3)
#define TMR_CTRL1_OCMEN(x)                (x << 3)
#define TMR_CTRL1_OVFS_MASK               (0x01 << 2)
#define TMR_CTRL1_OVFS_SHIFT              (2)
#define TMR_CTRL1_OVFS(x)                 (x << 2)
#define TMR_CTRL1_OVFEN_MASK              (0x01 << 1)
#define TMR_CTRL1_OVFEN_SHIFT             (1)
#define TMR_CTRL1_OVFEN(x)                (x << 1)
#define TMR_CTRL1_TMREN_MASK              (0x01 << 0)
#define TMR_CTRL1_TMREN_SHIFT             (0)
#define TMR_CTRL1_TMREN(x)                (x << 0)
#define TMR_CTRL2_C4IOS_MASK              (0x01 << 14)
#define TMR_CTRL2_C4IOS_SHIFT             (14)
#define TMR_CTRL2_C4IOS(x)                (x << 14)
#define TMR_CTRL2_C3CIOS_MASK             (0x01 << 13)
#define TMR_CTRL2_C3CIOS_SHIFT            (13)
#define TMR_CTRL2_C3CIOS(x)               (x << 13)
#define TMR_CTRL2_C3IOS_MASK              (0x01 << 12)
#define TMR_CTRL2_C3IOS_SHIFT             (12)
#define TMR_CTRL2_C3IOS(x)                (x << 12)
#define TMR_CTRL2_C2CIOS_MASK             (0x01 << 11)
#define TMR_CTRL2_C2CIOS_SHIFT            (11)
#define TMR_CTRL2_C2CIOS(x)               (x << 11)
#define TMR_CTRL2_C2IOS_MASK              (0x01 << 10)
#define TMR_CTRL2_C2IOS_SHIFT             (10)
#define TMR_CTRL2_C2IOS(x)                (x << 10)
#define TMR_CTRL2_C1CIOS_MASK             (0x01 << 9)
#define TMR_CTRL2_C1CIOS_SHIFT            (9)
#define TMR_CTRL2_C1CIOS(x)               (x << 9)
#define TMR_CTRL2_C1IOS_MASK              (0x01 << 8)
#define TMR_CTRL2_C1IOS_SHIFT             (8)
#define TMR_CTRL2_C1IOS(x)                (x << 8)
#define TMR_CTRL2_C1INSEL_MASK            (0x01 << 7)
#define TMR_CTRL2_C1INSEL_SHIFT           (7)
#define TMR_CTRL2_C1INSEL(x)              (x << 7)
#define TMR_CTRL2_PTOS_MASK               (0x07 << 4)
#define TMR_CTRL2_PTOS_SHIFT              (4)
#define TMR_CTRL2_PTOS(x)                 (x << 4)
#define TMR_CTRL2_DRS_MASK                (0x01 << 3)
#define TMR_CTRL2_DRS_SHIFT               (3)
#define TMR_CTRL2_DRS(x)                  (x << 3)
#define TMR_CTRL2_CCFS_MASK               (0x01 << 2)
#define TMR_CTRL2_CCFS_SHIFT              (2)
#define TMR_CTRL2_CCFS(x)                 (x << 2)
#define TMR_CTRL2_CBCTRL_MASK             (0x01 << 0)
#define TMR_CTRL2_CBCTRL_SHIFT            (0)
#define TMR_CTRL2_CBCTRL(x)               (x << 0)
#define TMR_STCTRL_ESP_MASK               (0x01 << 15)
#define TMR_STCTRL_ESP_SHIFT              (15)
#define TMR_STCTRL_ESP(x)                 (x << 15)
#define TMR_STCTRL_ECMBEN_MASK            (0x01 << 14)
#define TMR_STCTRL_ECMBEN_SHIFT           (14)
#define TMR_STCTRL_ECMBEN(x)              (x << 14)
#define TMR_STCTRL_ESDIV_MASK             (0x03 << 12)
#define TMR_STCTRL_ESDIV_SHIFT            (12)
#define TMR_STCTRL_ESDIV(x)               (x << 12)
#define TMR_STCTRL_ESF_MASK               (0x0f << 8)
#define TMR_STCTRL_ESF_SHIFT              (8)
#define TMR_STCTRL_ESF(x)                 (x << 8)
#define TMR_STCTRL_STS_MASK               (0x01 << 7)
#define TMR_STCTRL_STS_SHIFT              (7)
#define TMR_STCTRL_STS(x)                 (x << 7)
#define TMR_STCTRL_STIS_MASK              (0x07 << 4)
#define TMR_STCTRL_STIS_SHIFT             (4)
#define TMR_STCTRL_STIS(x)                (x << 4)
#define TMR_STCTRL_SMSEL_MASK             (0x07 << 0)
#define TMR_STCTRL_SMSEL_SHIFT            (0)
#define TMR_STCTRL_SMSEL(x)               (x << 0)
#define TMR_IDEN_TDEN_MASK                (0x01 << 14)
#define TMR_IDEN_TDEN_SHIFT               (14)
#define TMR_IDEN_TDEN(x)                  (x << 14)
#define TMR_IDEN_HALLDE_MASK              (0x01 << 13)
#define TMR_IDEN_HALLDE_SHIFT             (13)
#define TMR_IDEN_HALLDE(x)                (x << 13)
#define TMR_IDEN_C4DEN_MASK               (0x01 << 12)
#define TMR_IDEN_C4DEN_SHIFT              (12)
#define TMR_IDEN_C4DEN(x)                 (x << 12)
#define TMR_IDEN_C3DEN_MASK               (0x01 << 11)
#define TMR_IDEN_C3DEN_SHIFT              (11)
#define TMR_IDEN_C3DEN(x)                 (x << 11)
#define TMR_IDEN_C2DEN_MASK               (0x01 << 10)
#define TMR_IDEN_C2DEN_SHIFT              (10)
#define TMR_IDEN_C2DEN(x)                 (x << 10)
#define TMR_IDEN_C1DEN_MASK               (0x01 << 9)
#define TMR_IDEN_C1DEN_SHIFT              (9)
#define TMR_IDEN_C1DEN(x)                 (x << 9)
#define TMR_IDEN_OVFDEN_MASK              (0x01 << 8)
#define TMR_IDEN_OVFDEN_SHIFT             (8)
#define TMR_IDEN_OVFDEN(x)                (x << 8)
#define TMR_IDEN_BRKIE_MASK               (0x01 << 7)
#define TMR_IDEN_BRKIE_SHIFT              (7)
#define TMR_IDEN_BRKIE(x)                 (x << 7)
#define TMR_IDEN_TIEN_MASK                (0x01 << 6)
#define TMR_IDEN_TIEN_SHIFT               (6)
#define TMR_IDEN_TIEN(x)                  (x << 6)
#define TMR_IDEN_HALLIEN_MASK             (0x01 << 5)
#define TMR_IDEN_HALLIEN_SHIFT            (5)
#define TMR_IDEN_HALLIEN(x)               (x << 5)
#define TMR_IDEN_C4IEN_MASK               (0x01 << 4)
#define TMR_IDEN_C4IEN_SHIFT              (4)
#define TMR_IDEN_C4IEN(x)                 (x << 4)
#define TMR_IDEN_C3IEN_MASK               (0x01 << 3)
#define TMR_IDEN_C3IEN_SHIFT              (3)
#define TMR_IDEN_C3IEN(x)                 (x << 3)
#define TMR_IDEN_C2IEN_MASK               (0x01 << 2)
#define TMR_IDEN_C2IEN_SHIFT              (2)
#define TMR_IDEN_C2IEN(x)                 (x << 2)
#define TMR_IDEN_C1IEN_MASK               (0x01 << 1)
#define TMR_IDEN_C1IEN_SHIFT              (1)
#define TMR_IDEN_C1IEN(x)                 (x << 1)
#define TMR_IDEN_OVFIEN_MASK              (0x01 << 0)
#define TMR_IDEN_OVFIEN_SHIFT             (0)
#define TMR_IDEN_OVFIEN(x)                (x << 0)
#define TMR_ISTS_C4RF_MASK                (0x01 << 12)
#define TMR_ISTS_C4RF_SHIFT               (12)
#define TMR_ISTS_C4RF(x)                  (x << 12)
#define TMR_ISTS_C3RF_MASK                (0x01 << 11)
#define TMR_ISTS_C3RF_SHIFT               (11)
#define TMR_ISTS_C3RF(x)                  (x << 11)
#define TMR_ISTS_C2RF_MASK                (0x01 << 10)
#define TMR_ISTS_C2RF_SHIFT               (10)
#define TMR_ISTS_C2RF(x)                  (x << 10)
#define TMR_ISTS_C1RF_MASK                (0x01 << 9)
#define TMR_ISTS_C1RF_SHIFT               (9)
#define TMR_ISTS_C1RF(x)                  (x << 9)
#define TMR_ISTS_BRKIF_MASK               (0x01 << 7)
#define TMR_ISTS_BRKIF_SHIFT              (7)
#define TMR_ISTS_BRKIF(x)                 (x << 7)
#define TMR_ISTS_TRGIF_MASK               (0x01 << 6)
#define TMR_ISTS_TRGIF_SHIFT              (6)
#define TMR_ISTS_TRGIF(x)                 (x << 6)
#define TMR_ISTS_HALLIF_MASK              (0x01 << 5)
#define TMR_ISTS_HALLIF_SHIFT             (5)
#define TMR_ISTS_HALLIF(x)                (x << 5)
#define TMR_ISTS_C4IF_MASK                (0x01 << 4)
#define TMR_ISTS_C4IF_SHIFT               (4)
#define TMR_ISTS_C4IF(x)                  (x << 4)
#define TMR_ISTS_C3IF_MASK                (0x01 << 3)
#define TMR_ISTS_C3IF_SHIFT               (3)
#define TMR_ISTS_C3IF(x)                  (x << 3)
#define TMR_ISTS_C2IF_MASK                (0x01 << 2)
#define TMR_ISTS_C2IF_SHIFT               (2)
#define TMR_ISTS_C2IF(x)                  (x << 2)
#define TMR_ISTS_C1IF_MASK                (0x01 << 1)
#define TMR_ISTS_C1IF_SHIFT               (1)
#define TMR_ISTS_C1IF(x)                  (x << 1)
#define TMR_ISTS_OVFIF_MASK               (0x01 << 0)
#define TMR_ISTS_OVFIF_SHIFT              (0)
#define TMR_ISTS_OVFIF(x)                 (x << 0)
#define TMR_SWEVT_BRKSWTR_MASK            (0x01 << 7)
#define TMR_SWEVT_BRKSWTR_SHIFT           (7)
#define TMR_SWEVT_BRKSWTR(x)              (x << 7)
#define TMR_SWEVT_TRGSWTR_MASK            (0x01 << 6)
#define TMR_SWEVT_TRGSWTR_SHIFT           (6)
#define TMR_SWEVT_TRGSWTR(x)              (x << 6)
#define TMR_SWEVT_HALLSWTR_MASK           (0x01 << 5)
#define TMR_SWEVT_HALLSWTR_SHIFT          (5)
#define TMR_SWEVT_HALLSWTR(x)             (x << 5)
#define TMR_SWEVT_C4SWTR_MASK             (0x01 << 4)
#define TMR_SWEVT_C4SWTR_SHIFT            (4)
#define TMR_SWEVT_C4SWTR(x)               (x << 4)
#define TMR_SWEVT_C3SWTR_MASK             (0x01 << 3)
#define TMR_SWEVT_C3SWTR_SHIFT            (3)
#define TMR_SWEVT_C3SWTR(x)               (x << 3)
#define TMR_SWEVT_C2SWTR_MASK             (0x01 << 2)
#define TMR_SWEVT_C2SWTR_SHIFT            (2)
#define TMR_SWEVT_C2SWTR(x)               (x << 2)
#define TMR_SWEVT_C1SWTR_MASK             (0x01 << 1)
#define TMR_SWEVT_C1SWTR_SHIFT            (1)
#define TMR_SWEVT_C1SWTR(x)               (x << 1)
#define TMR_SWEVT_OVFSWTR_MASK            (0x01 << 0)
#define TMR_SWEVT_OVFSWTR_SHIFT           (0)
#define TMR_SWEVT_OVFSWTR(x)              (x << 0)
#define TMR_CM1_OUTPUT_C2OSEN_MASK        (0x01 << 15)
#define TMR_CM1_OUTPUT_C2OSEN_SHIFT       (15)
#define TMR_CM1_OUTPUT_C2OSEN(x)          (x << 15)
#define TMR_CM1_OUTPUT_C2OCTRL_MASK       (0x07 << 12)
#define TMR_CM1_OUTPUT_C2OCTRL_SHIFT      (12)
#define TMR_CM1_OUTPUT_C2OCTRL(x)         (x << 12)
#define TMR_CM1_OUTPUT_C2OBEN_MASK        (0x01 << 11)
#define TMR_CM1_OUTPUT_C2OBEN_SHIFT       (11)
#define TMR_CM1_OUTPUT_C2OBEN(x)          (x << 11)
#define TMR_CM1_OUTPUT_C2OIEN_MASK        (0x01 << 10)
#define TMR_CM1_OUTPUT_C2OIEN_SHIFT       (10)
#define TMR_CM1_OUTPUT_C2OIEN(x)          (x << 10)
#define TMR_CM1_OUTPUT_C2C_MASK           (0x03 << 8)
#define TMR_CM1_OUTPUT_C2C_SHIFT          (8)
#define TMR_CM1_OUTPUT_C2C(x)             (x << 8)
#define TMR_CM1_OUTPUT_C1OSEN_MASK        (0x01 << 7)
#define TMR_CM1_OUTPUT_C1OSEN_SHIFT       (7)
#define TMR_CM1_OUTPUT_C1OSEN(x)          (x << 7)
#define TMR_CM1_OUTPUT_C1OCTRL_MASK       (0x07 << 4)
#define TMR_CM1_OUTPUT_C1OCTRL_SHIFT      (4)
#define TMR_CM1_OUTPUT_C1OCTRL(x)         (x << 4)
#define TMR_CM1_OUTPUT_C1OBEN_MASK        (0x01 << 3)
#define TMR_CM1_OUTPUT_C1OBEN_SHIFT       (3)
#define TMR_CM1_OUTPUT_C1OBEN(x)          (x << 3)
#define TMR_CM1_OUTPUT_C1OIEN_MASK        (0x01 << 2)
#define TMR_CM1_OUTPUT_C1OIEN_SHIFT       (2)
#define TMR_CM1_OUTPUT_C1OIEN(x)          (x << 2)
#define TMR_CM1_OUTPUT_C1C_MASK           (0x03 << 0)
#define TMR_CM1_OUTPUT_C1C_SHIFT          (0)
#define TMR_CM1_OUTPUT_C1C(x)             (x << 0)
#define TMR_CM1_INPUT_C2DF_MASK           (0x0f << 12)
#define TMR_CM1_INPUT_C2DF_SHIFT          (12)
#define TMR_CM1_INPUT_C2DF(x)             (x << 12)
#define TMR_CM1_INPUT_C2IDIV_MASK         (0x03 << 10)
#define TMR_CM1_INPUT_C2IDIV_SHIFT        (10)
#define TMR_CM1_INPUT_C2IDIV(x)           (x << 10)
#define TMR_CM1_INPUT_C2C_MASK            (0x03 << 8)
#define TMR_CM1_INPUT_C2C_SHIFT           (8)
#define TMR_CM1_INPUT_C2C(x)              (x << 8)
#define TMR_CM1_INPUT_C1DF_MASK           (0x0f << 4)
#define TMR_CM1_INPUT_C1DF_SHIFT          (4)
#define TMR_CM1_INPUT_C1DF(x)             (x << 4)
#define TMR_CM1_INPUT_C1IDIV_MASK         (0x03 << 2)
#define TMR_CM1_INPUT_C1IDIV_SHIFT        (2)
#define TMR_CM1_INPUT_C1IDIV(x)           (x << 2)
#define TMR_CM1_INPUT_C1C_MASK            (0x03 << 0)
#define TMR_CM1_INPUT_C1C_SHIFT           (0)
#define TMR_CM1_INPUT_C1C(x)              (x << 0)
#define TMR_CM2_OUTPUT_C4OSEN_MASK        (0x01 << 15)
#define TMR_CM2_OUTPUT_C4OSEN_SHIFT       (15)
#define TMR_CM2_OUTPUT_C4OSEN(x)          (x << 15)
#define TMR_CM2_OUTPUT_C4OCTRL_MASK       (0x07 << 12)
#define TMR_CM2_OUTPUT_C4OCTRL_SHIFT      (12)
#define TMR_CM2_OUTPUT_C4OCTRL(x)         (x << 12)
#define TMR_CM2_OUTPUT_C4OBEN_MASK        (0x01 << 11)
#define TMR_CM2_OUTPUT_C4OBEN_SHIFT       (11)
#define TMR_CM2_OUTPUT_C4OBEN(x)          (x << 11)
#define TMR_CM2_OUTPUT_C4OIEN_MASK        (0x01 << 10)
#define TMR_CM2_OUTPUT_C4OIEN_SHIFT       (10)
#define TMR_CM2_OUTPUT_C4OIEN(x)          (x << 10)
#define TMR_CM2_OUTPUT_C4C_MASK           (0x03 << 8)
#define TMR_CM2_OUTPUT_C4C_SHIFT          (8)
#define TMR_CM2_OUTPUT_C4C(x)             (x << 8)
#define TMR_CM2_OUTPUT_C3OSEN_MASK        (0x01 << 7)
#define TMR_CM2_OUTPUT_C3OSEN_SHIFT       (7)
#define TMR_CM2_OUTPUT_C3OSEN(x)          (x << 7)
#define TMR_CM2_OUTPUT_C3OCTRL_MASK       (0x07 << 4)
#define TMR_CM2_OUTPUT_C3OCTRL_SHIFT      (4)
#define TMR_CM2_OUTPUT_C3OCTRL(x)         (x << 4)
#define TMR_CM2_OUTPUT_C3OBEN_MASK        (0x01 << 3)
#define TMR_CM2_OUTPUT_C3OBEN_SHIFT       (3)
#define TMR_CM2_OUTPUT_C3OBEN(x)          (x << 3)
#define TMR_CM2_OUTPUT_C3OIEN_MASK        (0x01 << 2)
#define TMR_CM2_OUTPUT_C3OIEN_SHIFT       (2)
#define TMR_CM2_OUTPUT_C3OIEN(x)          (x << 2)
#define TMR_CM2_OUTPUT_C3C_MASK           (0x03 << 0)
#define TMR_CM2_OUTPUT_C3C_SHIFT          (0)
#define TMR_CM2_OUTPUT_C3C(x)             (x << 0)
#define TMR_CM2_INPUT_C4DF_MASK           (0x0f << 12)
#define TMR_CM2_INPUT_C4DF_SHIFT          (12)
#define TMR_CM2_INPUT_C4DF(x)             (x << 12)
#define TMR_CM2_INPUT_C4IDIV_MASK         (0x03 << 10)
#define TMR_CM2_INPUT_C4IDIV_SHIFT        (10)
#define TMR_CM2_INPUT_C4IDIV(x)           (x << 10)
#define TMR_CM2_INPUT_C4C_MASK            (0x03 << 8)
#define TMR_CM2_INPUT_C4C_SHIFT           (8)
#define TMR_CM2_INPUT_C4C(x)              (x << 8)
#define TMR_CM2_INPUT_C3DF_MASK           (0x0f << 4)
#define TMR_CM2_INPUT_C3DF_SHIFT          (4)
#define TMR_CM2_INPUT_C3DF(x)             (x << 4)
#define TMR_CM2_INPUT_C3IDIV_MASK         (0x03 << 2)
#define TMR_CM2_INPUT_C3IDIV_SHIFT        (2)
#define TMR_CM2_INPUT_C3IDIV(x)           (x << 2)
#define TMR_CM2_INPUT_C3C_MASK            (0x03 << 0)
#define TMR_CM2_INPUT_C3C_SHIFT           (0)
#define TMR_CM2_INPUT_C3C(x)              (x << 0)
#define TMR_CCTRL_C4P_MASK                (0x01 << 13)
#define TMR_CCTRL_C4P_SHIFT               (13)
#define TMR_CCTRL_C4P(x)                  (x << 13)
#define TMR_CCTRL_C4EN_MASK               (0x01 << 12)
#define TMR_CCTRL_C4EN_SHIFT              (12)
#define TMR_CCTRL_C4EN(x)                 (x << 12)
#define TMR_CCTRL_C3CP_MASK               (0x01 << 11)
#define TMR_CCTRL_C3CP_SHIFT              (11)
#define TMR_CCTRL_C3CP(x)                 (x << 11)
#define TMR_CCTRL_C3CEN_MASK              (0x01 << 10)
#define TMR_CCTRL_C3CEN_SHIFT             (10)
#define TMR_CCTRL_C3CEN(x)                (x << 10)
#define TMR_CCTRL_C3P_MASK                (0x01 << 9)
#define TMR_CCTRL_C3P_SHIFT               (9)
#define TMR_CCTRL_C3P(x)                  (x << 9)
#define TMR_CCTRL_C3EN_MASK               (0x01 << 8)
#define TMR_CCTRL_C3EN_SHIFT              (8)
#define TMR_CCTRL_C3EN(x)                 (x << 8)
#define TMR_CCTRL_C2CP_MASK               (0x01 << 7)
#define TMR_CCTRL_C2CP_SHIFT              (7)
#define TMR_CCTRL_C2CP(x)                 (x << 7)
#define TMR_CCTRL_C2CEN_MASK              (0x01 << 6)
#define TMR_CCTRL_C2CEN_SHIFT             (6)
#define TMR_CCTRL_C2CEN(x)                (x << 6)
#define TMR_CCTRL_C2P_MASK                (0x01 << 5)
#define TMR_CCTRL_C2P_SHIFT               (5)
#define TMR_CCTRL_C2P(x)                  (x << 5)
#define TMR_CCTRL_C2EN_MASK               (0x01 << 4)
#define TMR_CCTRL_C2EN_SHIFT              (4)
#define TMR_CCTRL_C2EN(x)                 (x << 4)
#define TMR_CCTRL_C1CP_MASK               (0x01 << 3)
#define TMR_CCTRL_C1CP_SHIFT              (3)
#define TMR_CCTRL_C1CP(x)                 (x << 3)
#define TMR_CCTRL_C1CEN_MASK              (0x01 << 2)
#define TMR_CCTRL_C1CEN_SHIFT             (2)
#define TMR_CCTRL_C1CEN(x)                (x << 2)
#define TMR_CCTRL_C1P_MASK                (0x01 << 1)
#define TMR_CCTRL_C1P_SHIFT               (1)
#define TMR_CCTRL_C1P(x)                  (x << 1)
#define TMR_CCTRL_C1EN_MASK               (0x01 << 0)
#define TMR_CCTRL_C1EN_SHIFT              (0)
#define TMR_CCTRL_C1EN(x)                 (x << 0)
#define TMR_CVAL_CVAL_MASK                (0xffff << 0)
#define TMR_CVAL_CVAL_SHIFT               (0)
#define TMR_CVAL_CVAL(x)                  (x << 0)
#define TMR_DIV_DIV_MASK                  (0xffff << 0)
#define TMR_DIV_DIV_SHIFT                 (0)
#define TMR_DIV_DIV(x)                    (x << 0)
#define TMR_PR_PR_MASK                    (0xffff << 0)
#define TMR_PR_PR_SHIFT                   (0)
#define TMR_PR_PR(x)                      (x << 0)
#define TMR_RPR_RPR_MASK                  (0xff << 0)
#define TMR_RPR_RPR_SHIFT                 (0)
#define TMR_RPR_RPR(x)                    (x << 0)
#define TMR_C1DT_C1DT_MASK                (0xffff << 0)
#define TMR_C1DT_C1DT_SHIFT               (0)
#define TMR_C1DT_C1DT(x)                  (x << 0)
#define TMR_C2DT_C2DT_MASK                (0xffff << 0)
#define TMR_C2DT_C2DT_SHIFT               (0)
#define TMR_C2DT_C2DT(x)                  (x << 0)
#define TMR_C3DT_C3DT_MASK                (0xffff << 0)
#define TMR_C3DT_C3DT_SHIFT               (0)
#define TMR_C3DT_C3DT(x)                  (x << 0)
#define TMR_C4DT_C4DT_MASK                (0xffff << 0)
#define TMR_C4DT_C4DT_SHIFT               (0)
#define TMR_C4DT_C4DT(x)                  (x << 0)
#define TMR_BRK_OEN_MASK                  (0x01 << 15)
#define TMR_BRK_OEN_SHIFT                 (15)
#define TMR_BRK_OEN(x)                    (x << 15)
#define TMR_BRK_AOEN_MASK                 (0x01 << 14)
#define TMR_BRK_AOEN_SHIFT                (14)
#define TMR_BRK_AOEN(x)                   (x << 14)
#define TMR_BRK_BRKV_MASK                 (0x01 << 13)
#define TMR_BRK_BRKV_SHIFT                (13)
#define TMR_BRK_BRKV(x)                   (x << 13)
#define TMR_BRK_BRKEN_MASK                (0x01 << 12)
#define TMR_BRK_BRKEN_SHIFT               (12)
#define TMR_BRK_BRKEN(x)                  (x << 12)
#define TMR_BRK_FCSOEN_MASK               (0x01 << 11)
#define TMR_BRK_FCSOEN_SHIFT              (11)
#define TMR_BRK_FCSOEN(x)                 (x << 11)
#define TMR_BRK_FCSODIS_MASK              (0x01 << 10)
#define TMR_BRK_FCSODIS_SHIFT             (10)
#define TMR_BRK_FCSODIS(x)                (x << 10)
#define TMR_BRK_WPC_MASK                  (0x03 << 8)
#define TMR_BRK_WPC_SHIFT                 (8)
#define TMR_BRK_WPC(x)                    (x << 8)
#define TMR_BRK_DTC_MASK                  (0xff << 0)
#define TMR_BRK_DTC_SHIFT                 (0)
#define TMR_BRK_DTC(x)                    (x << 0)
#define TMR_DMACTRL_DTB_MASK              (0x1f << 8)
#define TMR_DMACTRL_DTB_SHIFT             (8)
#define TMR_DMACTRL_DTB(x)                (x << 8)
#define TMR_DMACTRL_ADDR_MASK             (0x1f << 0)
#define TMR_DMACTRL_ADDR_SHIFT            (0)
#define TMR_DMACTRL_ADDR(x)               (x << 0)
#define TMR_DMADT_DMADT_MASK              (0xffff << 0)
#define TMR_DMADT_DMADT_SHIFT             (0)
#define TMR_DMADT_DMADT(x)                (x << 0)

/* I2C1 - Inter integrated circuit */
#define I2C_CTRL1_RESET_MASK              (0x01 << 15)
#define I2C_CTRL1_RESET_SHIFT             (15)
#define I2C_CTRL1_RESET(x)                (x << 15)
#define I2C_CTRL1_SMBALERT_MASK           (0x01 << 13)
#define I2C_CTRL1_SMBALERT_SHIFT          (13)
#define I2C_CTRL1_SMBALERT(x)             (x << 13)
#define I2C_CTRL1_PECTEN_MASK             (0x01 << 12)
#define I2C_CTRL1_PECTEN_SHIFT            (12)
#define I2C_CTRL1_PECTEN(x)               (x << 12)
#define I2C_CTRL1_MACKCTRL_MASK           (0x01 << 11)
#define I2C_CTRL1_MACKCTRL_SHIFT          (11)
#define I2C_CTRL1_MACKCTRL(x)             (x << 11)
#define I2C_CTRL1_ACKEN_MASK              (0x01 << 10)
#define I2C_CTRL1_ACKEN_SHIFT             (10)
#define I2C_CTRL1_ACKEN(x)                (x << 10)
#define I2C_CTRL1_GENSTOP_MASK            (0x01 << 9)
#define I2C_CTRL1_GENSTOP_SHIFT           (9)
#define I2C_CTRL1_GENSTOP(x)              (x << 9)
#define I2C_CTRL1_GENSTART_MASK           (0x01 << 8)
#define I2C_CTRL1_GENSTART_SHIFT          (8)
#define I2C_CTRL1_GENSTART(x)             (x << 8)
#define I2C_CTRL1_STRETCH_MASK            (0x01 << 7)
#define I2C_CTRL1_STRETCH_SHIFT           (7)
#define I2C_CTRL1_STRETCH(x)              (x << 7)
#define I2C_CTRL1_GCAEN_MASK              (0x01 << 6)
#define I2C_CTRL1_GCAEN_SHIFT             (6)
#define I2C_CTRL1_GCAEN(x)                (x << 6)
#define I2C_CTRL1_PECEN_MASK              (0x01 << 5)
#define I2C_CTRL1_PECEN_SHIFT             (5)
#define I2C_CTRL1_PECEN(x)                (x << 5)
#define I2C_CTRL1_ARPEN_MASK              (0x01 << 4)
#define I2C_CTRL1_ARPEN_SHIFT             (4)
#define I2C_CTRL1_ARPEN(x)                (x << 4)
#define I2C_CTRL1_SMBMODE_MASK            (0x01 << 3)
#define I2C_CTRL1_SMBMODE_SHIFT           (3)
#define I2C_CTRL1_SMBMODE(x)              (x << 3)
#define I2C_CTRL1_PERMODE_MASK            (0x01 << 1)
#define I2C_CTRL1_PERMODE_SHIFT           (1)
#define I2C_CTRL1_PERMODE(x)              (x << 1)
#define I2C_CTRL1_I2CEN_MASK              (0x01 << 0)
#define I2C_CTRL1_I2CEN_SHIFT             (0)
#define I2C_CTRL1_I2CEN(x)                (x << 0)
#define I2C_CTRL2_DMAEND_MASK             (0x01 << 12)
#define I2C_CTRL2_DMAEND_SHIFT            (12)
#define I2C_CTRL2_DMAEND(x)               (x << 12)
#define I2C_CTRL2_DMAEN_MASK              (0x01 << 11)
#define I2C_CTRL2_DMAEN_SHIFT             (11)
#define I2C_CTRL2_DMAEN(x)                (x << 11)
#define I2C_CTRL2_DATAIEN_MASK            (0x01 << 10)
#define I2C_CTRL2_DATAIEN_SHIFT           (10)
#define I2C_CTRL2_DATAIEN(x)              (x << 10)
#define I2C_CTRL2_EVTIEN_MASK             (0x01 << 9)
#define I2C_CTRL2_EVTIEN_SHIFT            (9)
#define I2C_CTRL2_EVTIEN(x)               (x << 9)
#define I2C_CTRL2_ERRIEN_MASK             (0x01 << 8)
#define I2C_CTRL2_ERRIEN_SHIFT            (8)
#define I2C_CTRL2_ERRIEN(x)               (x << 8)
#define I2C_CTRL2_CLKFREQ_MASK            (0xff << 0)
#define I2C_CTRL2_CLKFREQ_SHIFT           (0)
#define I2C_CTRL2_CLKFREQ(x)              (x << 0)
#define I2C_OADDR1_ADDR1MODE_MASK         (0x01 << 15)
#define I2C_OADDR1_ADDR1MODE_SHIFT        (15)
#define I2C_OADDR1_ADDR1MODE(x)           (x << 15)
#define I2C_OADDR1_ADDR1_MASK             (0x3ff << 0)
#define I2C_OADDR1_ADDR1_SHIFT            (0)
#define I2C_OADDR1_ADDR1(x)               (x << 0)
#define I2C_OADDR2_ADDR2_MASK             (0x7f << 1)
#define I2C_OADDR2_ADDR2_SHIFT            (1)
#define I2C_OADDR2_ADDR2(x)               (x << 1)
#define I2C_OADDR2_ADDR2EN_MASK           (0x01 << 0)
#define I2C_OADDR2_ADDR2EN_SHIFT          (0)
#define I2C_OADDR2_ADDR2EN(x)             (x << 0)
#define I2C_DT_DT_MASK                    (0xff << 0)
#define I2C_DT_DT_SHIFT                   (0)
#define I2C_DT_DT(x)                      (x << 0)
#define I2C_STS1_ALERTF_MASK              (0x01 << 15)
#define I2C_STS1_ALERTF_SHIFT             (15)
#define I2C_STS1_ALERTF(x)                (x << 15)
#define I2C_STS1_TMOUT_MASK               (0x01 << 14)
#define I2C_STS1_TMOUT_SHIFT              (14)
#define I2C_STS1_TMOUT(x)                 (x << 14)
#define I2C_STS1_PECERR_MASK              (0x01 << 12)
#define I2C_STS1_PECERR_SHIFT             (12)
#define I2C_STS1_PECERR(x)                (x << 12)
#define I2C_STS1_OUF_MASK                 (0x01 << 11)
#define I2C_STS1_OUF_SHIFT                (11)
#define I2C_STS1_OUF(x)                   (x << 11)
#define I2C_STS1_ACKFAIL_MASK             (0x01 << 10)
#define I2C_STS1_ACKFAIL_SHIFT            (10)
#define I2C_STS1_ACKFAIL(x)               (x << 10)
#define I2C_STS1_ARLOST_MASK              (0x01 << 9)
#define I2C_STS1_ARLOST_SHIFT             (9)
#define I2C_STS1_ARLOST(x)                (x << 9)
#define I2C_STS1_BUSERR_MASK              (0x01 << 8)
#define I2C_STS1_BUSERR_SHIFT             (8)
#define I2C_STS1_BUSERR(x)                (x << 8)
#define I2C_STS1_TDBE_MASK                (0x01 << 7)
#define I2C_STS1_TDBE_SHIFT               (7)
#define I2C_STS1_TDBE(x)                  (x << 7)
#define I2C_STS1_RDBF_MASK                (0x01 << 6)
#define I2C_STS1_RDBF_SHIFT               (6)
#define I2C_STS1_RDBF(x)                  (x << 6)
#define I2C_STS1_STOPF_MASK               (0x01 << 4)
#define I2C_STS1_STOPF_SHIFT              (4)
#define I2C_STS1_STOPF(x)                 (x << 4)
#define I2C_STS1_ADDRHF_MASK              (0x01 << 3)
#define I2C_STS1_ADDRHF_SHIFT             (3)
#define I2C_STS1_ADDRHF(x)                (x << 3)
#define I2C_STS1_TDC_MASK                 (0x01 << 2)
#define I2C_STS1_TDC_SHIFT                (2)
#define I2C_STS1_TDC(x)                   (x << 2)
#define I2C_STS1_ADDR7F_MASK              (0x01 << 1)
#define I2C_STS1_ADDR7F_SHIFT             (1)
#define I2C_STS1_ADDR7F(x)                (x << 1)
#define I2C_STS1_STARTF_MASK              (0x01 << 0)
#define I2C_STS1_STARTF_SHIFT             (0)
#define I2C_STS1_STARTF(x)                (x << 0)
#define I2C_STS2_PECVAL_MASK              (0xff << 8)
#define I2C_STS2_PECVAL_SHIFT             (8)
#define I2C_STS2_PECVAL(x)                (x << 8)
#define I2C_STS2_ADDR2F_MASK              (0x01 << 7)
#define I2C_STS2_ADDR2F_SHIFT             (7)
#define I2C_STS2_ADDR2F(x)                (x << 7)
#define I2C_STS2_HOSTADDRF_MASK           (0x01 << 6)
#define I2C_STS2_HOSTADDRF_SHIFT          (6)
#define I2C_STS2_HOSTADDRF(x)             (x << 6)
#define I2C_STS2_DEVADDRF_MASK            (0x01 << 5)
#define I2C_STS2_DEVADDRF_SHIFT           (5)
#define I2C_STS2_DEVADDRF(x)              (x << 5)
#define I2C_STS2_GCADDRF_MASK             (0x01 << 4)
#define I2C_STS2_GCADDRF_SHIFT            (4)
#define I2C_STS2_GCADDRF(x)               (x << 4)
#define I2C_STS2_DIRF_MASK                (0x01 << 2)
#define I2C_STS2_DIRF_SHIFT               (2)
#define I2C_STS2_DIRF(x)                  (x << 2)
#define I2C_STS2_BUSYF_MASK               (0x01 << 1)
#define I2C_STS2_BUSYF_SHIFT              (1)
#define I2C_STS2_BUSYF(x)                 (x << 1)
#define I2C_STS2_TRMODE_MASK              (0x01 << 0)
#define I2C_STS2_TRMODE_SHIFT             (0)
#define I2C_STS2_TRMODE(x)                (x << 0)
#define I2C_CLKCTRL_SPEEDMODE_MASK        (0x01 << 15)
#define I2C_CLKCTRL_SPEEDMODE_SHIFT       (15)
#define I2C_CLKCTRL_SPEEDMODE(x)          (x << 15)
#define I2C_CLKCTRL_DUTYMODE_MASK         (0x01 << 14)
#define I2C_CLKCTRL_DUTYMODE_SHIFT        (14)
#define I2C_CLKCTRL_DUTYMODE(x)           (x << 14)
#define I2C_CLKCTRL_SPEED_MASK            (0xfff << 0)
#define I2C_CLKCTRL_SPEED_SHIFT           (0)
#define I2C_CLKCTRL_SPEED(x)              (x << 0)
#define I2C_TMRISE_RISETIME_MASK          (0x3f << 0)
#define I2C_TMRISE_RISETIME_SHIFT         (0)
#define I2C_TMRISE_RISETIME(x)            (x << 0)

/* SPI1 - Serial peripheral interface */
#define SPI_CTRL1_SLBEN_MASK              (0x01 << 15)
#define SPI_CTRL1_SLBEN_SHIFT             (15)
#define SPI_CTRL1_SLBEN(x)                (x << 15)
#define SPI_CTRL1_SLBTD_MASK              (0x01 << 14)
#define SPI_CTRL1_SLBTD_SHIFT             (14)
#define SPI_CTRL1_SLBTD(x)                (x << 14)
#define SPI_CTRL1_CCEN_MASK               (0x01 << 13)
#define SPI_CTRL1_CCEN_SHIFT              (13)
#define SPI_CTRL1_CCEN(x)                 (x << 13)
#define SPI_CTRL1_NTC_MASK                (0x01 << 12)
#define SPI_CTRL1_NTC_SHIFT               (12)
#define SPI_CTRL1_NTC(x)                  (x << 12)
#define SPI_CTRL1_FBN_MASK                (0x01 << 11)
#define SPI_CTRL1_FBN_SHIFT               (11)
#define SPI_CTRL1_FBN(x)                  (x << 11)
#define SPI_CTRL1_ORA_MASK                (0x01 << 10)
#define SPI_CTRL1_ORA_SHIFT               (10)
#define SPI_CTRL1_ORA(x)                  (x << 10)
#define SPI_CTRL1_SWCSEN_MASK             (0x01 << 9)
#define SPI_CTRL1_SWCSEN_SHIFT            (9)
#define SPI_CTRL1_SWCSEN(x)               (x << 9)
#define SPI_CTRL1_SWCSIL_MASK             (0x01 << 8)
#define SPI_CTRL1_SWCSIL_SHIFT            (8)
#define SPI_CTRL1_SWCSIL(x)               (x << 8)
#define SPI_CTRL1_LTF_MASK                (0x01 << 7)
#define SPI_CTRL1_LTF_SHIFT               (7)
#define SPI_CTRL1_LTF(x)                  (x << 7)
#define SPI_CTRL1_SPIEN_MASK              (0x01 << 6)
#define SPI_CTRL1_SPIEN_SHIFT             (6)
#define SPI_CTRL1_SPIEN(x)                (x << 6)
#define SPI_CTRL1_MDIV2_0_MASK            (0x07 << 3)
#define SPI_CTRL1_MDIV2_0_SHIFT           (3)
#define SPI_CTRL1_MDIV2_0(x)              (x << 3)
#define SPI_CTRL1_MSTEN_MASK              (0x01 << 2)
#define SPI_CTRL1_MSTEN_SHIFT             (2)
#define SPI_CTRL1_MSTEN(x)                (x << 2)
#define SPI_CTRL1_CLKPOL_MASK             (0x01 << 1)
#define SPI_CTRL1_CLKPOL_SHIFT            (1)
#define SPI_CTRL1_CLKPOL(x)               (x << 1)
#define SPI_CTRL1_CLKPHA_MASK             (0x01 << 0)
#define SPI_CTRL1_CLKPHA_SHIFT            (0)
#define SPI_CTRL1_CLKPHA(x)               (x << 0)
#define SPI_CTRL2_MDIV3_MASK              (0x01 << 8)
#define SPI_CTRL2_MDIV3_SHIFT             (8)
#define SPI_CTRL2_MDIV3(x)                (x << 8)
#define SPI_CTRL2_TDBEIE_MASK             (0x01 << 7)
#define SPI_CTRL2_TDBEIE_SHIFT            (7)
#define SPI_CTRL2_TDBEIE(x)               (x << 7)
#define SPI_CTRL2_RDBFIE_MASK             (0x01 << 6)
#define SPI_CTRL2_RDBFIE_SHIFT            (6)
#define SPI_CTRL2_RDBFIE(x)               (x << 6)
#define SPI_CTRL2_ERRIE_MASK              (0x01 << 5)
#define SPI_CTRL2_ERRIE_SHIFT             (5)
#define SPI_CTRL2_ERRIE(x)                (x << 5)
#define SPI_CTRL2_HWCSOE_MASK             (0x01 << 2)
#define SPI_CTRL2_HWCSOE_SHIFT            (2)
#define SPI_CTRL2_HWCSOE(x)               (x << 2)
#define SPI_CTRL2_DMATEN_MASK             (0x01 << 1)
#define SPI_CTRL2_DMATEN_SHIFT            (1)
#define SPI_CTRL2_DMATEN(x)               (x << 1)
#define SPI_CTRL2_DMAREN_MASK             (0x01 << 0)
#define SPI_CTRL2_DMAREN_SHIFT            (0)
#define SPI_CTRL2_DMAREN(x)               (x << 0)
#define SPI_STS_BF_MASK                   (0x01 << 7)
#define SPI_STS_BF_SHIFT                  (7)
#define SPI_STS_BF(x)                     (x << 7)
#define SPI_STS_ROERR_MASK                (0x01 << 6)
#define SPI_STS_ROERR_SHIFT               (6)
#define SPI_STS_ROERR(x)                  (x << 6)
#define SPI_STS_MMERR_MASK                (0x01 << 5)
#define SPI_STS_MMERR_SHIFT               (5)
#define SPI_STS_MMERR(x)                  (x << 5)
#define SPI_STS_CCERR_MASK                (0x01 << 4)
#define SPI_STS_CCERR_SHIFT               (4)
#define SPI_STS_CCERR(x)                  (x << 4)
#define SPI_STS_TUERR_MASK                (0x01 << 3)
#define SPI_STS_TUERR_SHIFT               (3)
#define SPI_STS_TUERR(x)                  (x << 3)
#define SPI_STS_ACS_MASK                  (0x01 << 2)
#define SPI_STS_ACS_SHIFT                 (2)
#define SPI_STS_ACS(x)                    (x << 2)
#define SPI_STS_TDBE_MASK                 (0x01 << 1)
#define SPI_STS_TDBE_SHIFT                (1)
#define SPI_STS_TDBE(x)                   (x << 1)
#define SPI_STS_RDBF_MASK                 (0x01 << 0)
#define SPI_STS_RDBF_SHIFT                (0)
#define SPI_STS_RDBF(x)                   (x << 0)
#define SPI_DT_DT_MASK                    (0xffff << 0)
#define SPI_DT_DT_SHIFT                   (0)
#define SPI_DT_DT(x)                      (x << 0)
#define SPI_CPOLY_CPOLY_MASK              (0xffff << 0)
#define SPI_CPOLY_CPOLY_SHIFT             (0)
#define SPI_CPOLY_CPOLY(x)                (x << 0)
#define SPI_RCRC_RCRC_MASK                (0xffff << 0)
#define SPI_RCRC_RCRC_SHIFT               (0)
#define SPI_RCRC_RCRC(x)                  (x << 0)
#define SPI_TCRC_TCRC_MASK                (0xffff << 0)
#define SPI_TCRC_TCRC_SHIFT               (0)
#define SPI_TCRC_TCRC(x)                  (x << 0)
#define SPI_I2SCTRL_I2SMSEL_MASK          (0x01 << 11)
#define SPI_I2SCTRL_I2SMSEL_SHIFT         (11)
#define SPI_I2SCTRL_I2SMSEL(x)            (x << 11)
#define SPI_I2SCTRL_I2SEN_MASK            (0x01 << 10)
#define SPI_I2SCTRL_I2SEN_SHIFT           (10)
#define SPI_I2SCTRL_I2SEN(x)              (x << 10)
#define SPI_I2SCTRL_OPERSEL_MASK          (0x03 << 8)
#define SPI_I2SCTRL_OPERSEL_SHIFT         (8)
#define SPI_I2SCTRL_OPERSEL(x)            (x << 8)
#define SPI_I2SCTRL_PCMFSSEL_MASK         (0x01 << 7)
#define SPI_I2SCTRL_PCMFSSEL_SHIFT        (7)
#define SPI_I2SCTRL_PCMFSSEL(x)           (x << 7)
#define SPI_I2SCTRL_STDSEL_MASK           (0x03 << 4)
#define SPI_I2SCTRL_STDSEL_SHIFT          (4)
#define SPI_I2SCTRL_STDSEL(x)             (x << 4)
#define SPI_I2SCTRL_I2SCLKPOL_MASK        (0x01 << 3)
#define SPI_I2SCTRL_I2SCLKPOL_SHIFT       (3)
#define SPI_I2SCTRL_I2SCLKPOL(x)          (x << 3)
#define SPI_I2SCTRL_I2SDBN_MASK           (0x03 << 1)
#define SPI_I2SCTRL_I2SDBN_SHIFT          (1)
#define SPI_I2SCTRL_I2SDBN(x)             (x << 1)
#define SPI_I2SCTRL_I2SCBN_MASK           (0x01 << 0)
#define SPI_I2SCTRL_I2SCBN_SHIFT          (0)
#define SPI_I2SCTRL_I2SCBN(x)             (x << 0)
#define SPI_I2SCLK_I2SDIV9_8_MASK         (0x03 << 10)
#define SPI_I2SCLK_I2SDIV9_8_SHIFT        (10)
#define SPI_I2SCLK_I2SDIV9_8(x)           (x << 10)
#define SPI_I2SCLK_I2SMCLKOE_MASK         (0x01 << 9)
#define SPI_I2SCLK_I2SMCLKOE_SHIFT        (9)
#define SPI_I2SCLK_I2SMCLKOE(x)           (x << 9)
#define SPI_I2SCLK_I2SODD_MASK            (0x01 << 8)
#define SPI_I2SCLK_I2SODD_SHIFT           (8)
#define SPI_I2SCLK_I2SODD(x)              (x << 8)
#define SPI_I2SCLK_I2SDIV7_0_MASK         (0xff << 0)
#define SPI_I2SCLK_I2SDIV7_0_SHIFT        (0)
#define SPI_I2SCLK_I2SDIV7_0(x)           (x << 0)

/* USART1 - Universal synchronous asynchronous receiver transmitter */
#define USART_STS_CTSCF_MASK              (0x01 << 9)
#define USART_STS_CTSCF_SHIFT             (9)
#define USART_STS_CTSCF(x)                (x << 9)
#define USART_STS_BFF_MASK                (0x01 << 8)
#define USART_STS_BFF_SHIFT               (8)
#define USART_STS_BFF(x)                  (x << 8)
#define USART_STS_TDBE_MASK               (0x01 << 7)
#define USART_STS_TDBE_SHIFT              (7)
#define USART_STS_TDBE(x)                 (x << 7)
#define USART_STS_TDC_MASK                (0x01 << 6)
#define USART_STS_TDC_SHIFT               (6)
#define USART_STS_TDC(x)                  (x << 6)
#define USART_STS_RDBF_MASK               (0x01 << 5)
#define USART_STS_RDBF_SHIFT              (5)
#define USART_STS_RDBF(x)                 (x << 5)
#define USART_STS_IDLEF_MASK              (0x01 << 4)
#define USART_STS_IDLEF_SHIFT             (4)
#define USART_STS_IDLEF(x)                (x << 4)
#define USART_STS_ROERR_MASK              (0x01 << 3)
#define USART_STS_ROERR_SHIFT             (3)
#define USART_STS_ROERR(x)                (x << 3)
#define USART_STS_NERR_MASK               (0x01 << 2)
#define USART_STS_NERR_SHIFT              (2)
#define USART_STS_NERR(x)                 (x << 2)
#define USART_STS_FERR_MASK               (0x01 << 1)
#define USART_STS_FERR_SHIFT              (1)
#define USART_STS_FERR(x)                 (x << 1)
#define USART_STS_PERR_MASK               (0x01 << 0)
#define USART_STS_PERR_SHIFT              (0)
#define USART_STS_PERR(x)                 (x << 0)
#define USART_DT_DT_MASK                  (0x1ff << 0)
#define USART_DT_DT_SHIFT                 (0)
#define USART_DT_DT(x)                    (x << 0)
#define USART_BAUDR_DIV_MASK              (0xffff << 0)
#define USART_BAUDR_DIV_SHIFT             (0)
#define USART_BAUDR_DIV(x)                (x << 0)
#define USART_CTRL1_UEN_MASK              (0x01 << 13)
#define USART_CTRL1_UEN_SHIFT             (13)
#define USART_CTRL1_UEN(x)                (x << 13)
#define USART_CTRL1_DBN_MASK              (0x01 << 12)
#define USART_CTRL1_DBN_SHIFT             (12)
#define USART_CTRL1_DBN(x)                (x << 12)
#define USART_CTRL1_WUM_MASK              (0x01 << 11)
#define USART_CTRL1_WUM_SHIFT             (11)
#define USART_CTRL1_WUM(x)                (x << 11)
#define USART_CTRL1_PEN_MASK              (0x01 << 10)
#define USART_CTRL1_PEN_SHIFT             (10)
#define USART_CTRL1_PEN(x)                (x << 10)
#define USART_CTRL1_PSEL_MASK             (0x01 << 9)
#define USART_CTRL1_PSEL_SHIFT            (9)
#define USART_CTRL1_PSEL(x)               (x << 9)
#define USART_CTRL1_PERRIEN_MASK          (0x01 << 8)
#define USART_CTRL1_PERRIEN_SHIFT         (8)
#define USART_CTRL1_PERRIEN(x)            (x << 8)
#define USART_CTRL1_TDBEIEN_MASK          (0x01 << 7)
#define USART_CTRL1_TDBEIEN_SHIFT         (7)
#define USART_CTRL1_TDBEIEN(x)            (x << 7)
#define USART_CTRL1_TDCIEN_MASK           (0x01 << 6)
#define USART_CTRL1_TDCIEN_SHIFT          (6)
#define USART_CTRL1_TDCIEN(x)             (x << 6)
#define USART_CTRL1_RDBFIEN_MASK          (0x01 << 5)
#define USART_CTRL1_RDBFIEN_SHIFT         (5)
#define USART_CTRL1_RDBFIEN(x)            (x << 5)
#define USART_CTRL1_IDLEIEN_MASK          (0x01 << 4)
#define USART_CTRL1_IDLEIEN_SHIFT         (4)
#define USART_CTRL1_IDLEIEN(x)            (x << 4)
#define USART_CTRL1_TEN_MASK              (0x01 << 3)
#define USART_CTRL1_TEN_SHIFT             (3)
#define USART_CTRL1_TEN(x)                (x << 3)
#define USART_CTRL1_REN_MASK              (0x01 << 2)
#define USART_CTRL1_REN_SHIFT             (2)
#define USART_CTRL1_REN(x)                (x << 2)
#define USART_CTRL1_RM_MASK               (0x01 << 1)
#define USART_CTRL1_RM_SHIFT              (1)
#define USART_CTRL1_RM(x)                 (x << 1)
#define USART_CTRL1_SBF_MASK              (0x01 << 0)
#define USART_CTRL1_SBF_SHIFT             (0)
#define USART_CTRL1_SBF(x)                (x << 0)
#define USART_CTRL2_LINEN_MASK            (0x01 << 14)
#define USART_CTRL2_LINEN_SHIFT           (14)
#define USART_CTRL2_LINEN(x)              (x << 14)
#define USART_CTRL2_STOPBN_MASK           (0x03 << 12)
#define USART_CTRL2_STOPBN_SHIFT          (12)
#define USART_CTRL2_STOPBN(x)             (x << 12)
#define USART_CTRL2_CLKEN_MASK            (0x01 << 11)
#define USART_CTRL2_CLKEN_SHIFT           (11)
#define USART_CTRL2_CLKEN(x)              (x << 11)
#define USART_CTRL2_CLKPOL_MASK           (0x01 << 10)
#define USART_CTRL2_CLKPOL_SHIFT          (10)
#define USART_CTRL2_CLKPOL(x)             (x << 10)
#define USART_CTRL2_CLKPHA_MASK           (0x01 << 9)
#define USART_CTRL2_CLKPHA_SHIFT          (9)
#define USART_CTRL2_CLKPHA(x)             (x << 9)
#define USART_CTRL2_LBCP_MASK             (0x01 << 8)
#define USART_CTRL2_LBCP_SHIFT            (8)
#define USART_CTRL2_LBCP(x)               (x << 8)
#define USART_CTRL2_BFIEN_MASK            (0x01 << 6)
#define USART_CTRL2_BFIEN_SHIFT           (6)
#define USART_CTRL2_BFIEN(x)              (x << 6)
#define USART_CTRL2_BFBN_MASK             (0x01 << 5)
#define USART_CTRL2_BFBN_SHIFT            (5)
#define USART_CTRL2_BFBN(x)               (x << 5)
#define USART_CTRL2_ID_MASK               (0x0f << 0)
#define USART_CTRL2_ID_SHIFT              (0)
#define USART_CTRL2_ID(x)                 (x << 0)
#define USART_CTRL3_CTSCFIEN_MASK         (0x01 << 10)
#define USART_CTRL3_CTSCFIEN_SHIFT        (10)
#define USART_CTRL3_CTSCFIEN(x)           (x << 10)
#define USART_CTRL3_CTSEN_MASK            (0x01 << 9)
#define USART_CTRL3_CTSEN_SHIFT           (9)
#define USART_CTRL3_CTSEN(x)              (x << 9)
#define USART_CTRL3_RTSEN_MASK            (0x01 << 8)
#define USART_CTRL3_RTSEN_SHIFT           (8)
#define USART_CTRL3_RTSEN(x)              (x << 8)
#define USART_CTRL3_DMATEN_MASK           (0x01 << 7)
#define USART_CTRL3_DMATEN_SHIFT          (7)
#define USART_CTRL3_DMATEN(x)             (x << 7)
#define USART_CTRL3_DMAREN_MASK           (0x01 << 6)
#define USART_CTRL3_DMAREN_SHIFT          (6)
#define USART_CTRL3_DMAREN(x)             (x << 6)
#define USART_CTRL3_SCMEN_MASK            (0x01 << 5)
#define USART_CTRL3_SCMEN_SHIFT           (5)
#define USART_CTRL3_SCMEN(x)              (x << 5)
#define USART_CTRL3_SCNACKEN_MASK         (0x01 << 4)
#define USART_CTRL3_SCNACKEN_SHIFT        (4)
#define USART_CTRL3_SCNACKEN(x)           (x << 4)
#define USART_CTRL3_SLBEN_MASK            (0x01 << 3)
#define USART_CTRL3_SLBEN_SHIFT           (3)
#define USART_CTRL3_SLBEN(x)              (x << 3)
#define USART_CTRL3_IRDALP_MASK           (0x01 << 2)
#define USART_CTRL3_IRDALP_SHIFT          (2)
#define USART_CTRL3_IRDALP(x)             (x << 2)
#define USART_CTRL3_IRDAEN_MASK           (0x01 << 1)
#define USART_CTRL3_IRDAEN_SHIFT          (1)
#define USART_CTRL3_IRDAEN(x)             (x << 1)
#define USART_CTRL3_ERRIEN_MASK           (0x01 << 0)
#define USART_CTRL3_ERRIEN_SHIFT          (0)
#define USART_CTRL3_ERRIEN(x)             (x << 0)
#define USART_GDIV_SCGT_MASK              (0xff << 8)
#define USART_GDIV_SCGT_SHIFT             (8)
#define USART_GDIV_SCGT(x)                (x << 8)
#define USART_GDIV_ISDIV_MASK             (0xff << 0)
#define USART_GDIV_ISDIV_SHIFT            (0)
#define USART_GDIV_ISDIV(x)               (x << 0)

/* ADC1 - Analog to digital converter */
#define ADC_STS_OCCS_MASK                 (0x01 << 4)
#define ADC_STS_OCCS_SHIFT                (4)
#define ADC_STS_OCCS(x)                   (x << 4)
#define ADC_STS_PCCS_MASK                 (0x01 << 3)
#define ADC_STS_PCCS_SHIFT                (3)
#define ADC_STS_PCCS(x)                   (x << 3)
#define ADC_STS_PCCE_MASK                 (0x01 << 2)
#define ADC_STS_PCCE_SHIFT                (2)
#define ADC_STS_PCCE(x)                   (x << 2)
#define ADC_STS_CCE_MASK                  (0x01 << 1)
#define ADC_STS_CCE_SHIFT                 (1)
#define ADC_STS_CCE(x)                    (x << 1)
#define ADC_STS_VMOR_MASK                 (0x01 << 0)
#define ADC_STS_VMOR_SHIFT                (0)
#define ADC_STS_VMOR(x)                   (x << 0)
#define ADC_CTRL1_OCVMEN_MASK             (0x01 << 23)
#define ADC_CTRL1_OCVMEN_SHIFT            (23)
#define ADC_CTRL1_OCVMEN(x)               (x << 23)
#define ADC_CTRL1_PCVMEN_MASK             (0x01 << 22)
#define ADC_CTRL1_PCVMEN_SHIFT            (22)
#define ADC_CTRL1_PCVMEN(x)               (x << 22)
#define ADC_CTRL1_MSSEL_MASK              (0x0f << 16)
#define ADC_CTRL1_MSSEL_SHIFT             (16)
#define ADC_CTRL1_MSSEL(x)                (x << 16)
#define ADC_CTRL1_OCPCNT_MASK             (0x07 << 13)
#define ADC_CTRL1_OCPCNT_SHIFT            (13)
#define ADC_CTRL1_OCPCNT(x)               (x << 13)
#define ADC_CTRL1_PCPEN_MASK              (0x01 << 12)
#define ADC_CTRL1_PCPEN_SHIFT             (12)
#define ADC_CTRL1_PCPEN(x)                (x << 12)
#define ADC_CTRL1_OCPEN_MASK              (0x01 << 11)
#define ADC_CTRL1_OCPEN_SHIFT             (11)
#define ADC_CTRL1_OCPEN(x)                (x << 11)
#define ADC_CTRL1_PCAUTOEN_MASK           (0x01 << 10)
#define ADC_CTRL1_PCAUTOEN_SHIFT          (10)
#define ADC_CTRL1_PCAUTOEN(x)             (x << 10)
#define ADC_CTRL1_VMSGEN_MASK             (0x01 << 9)
#define ADC_CTRL1_VMSGEN_SHIFT            (9)
#define ADC_CTRL1_VMSGEN(x)               (x << 9)
#define ADC_CTRL1_SQEN_MASK               (0x01 << 8)
#define ADC_CTRL1_SQEN_SHIFT              (8)
#define ADC_CTRL1_SQEN(x)                 (x << 8)
#define ADC_CTRL1_PCCEIEN_MASK            (0x01 << 7)
#define ADC_CTRL1_PCCEIEN_SHIFT           (7)
#define ADC_CTRL1_PCCEIEN(x)              (x << 7)
#define ADC_CTRL1_VMORIEN_MASK            (0x01 << 6)
#define ADC_CTRL1_VMORIEN_SHIFT           (6)
#define ADC_CTRL1_VMORIEN(x)              (x << 6)
#define ADC_CTRL1_CCEIEN_MASK             (0x01 << 5)
#define ADC_CTRL1_CCEIEN_SHIFT            (5)
#define ADC_CTRL1_CCEIEN(x)               (x << 5)
#define ADC_CTRL1_VMCSEL_MASK             (0x1f << 0)
#define ADC_CTRL1_VMCSEL_SHIFT            (0)
#define ADC_CTRL1_VMCSEL(x)               (x << 0)
#define ADC_CTRL2_OCTESEL_H_MASK          (0x01 << 25)
#define ADC_CTRL2_OCTESEL_H_SHIFT         (25)
#define ADC_CTRL2_OCTESEL_H(x)            (x << 25)
#define ADC_CTRL2_PCTESEL_H_MASK          (0x01 << 24)
#define ADC_CTRL2_PCTESEL_H_SHIFT         (24)
#define ADC_CTRL2_PCTESEL_H(x)            (x << 24)
#define ADC_CTRL2_ITSRVEN_MASK            (0x01 << 23)
#define ADC_CTRL2_ITSRVEN_SHIFT           (23)
#define ADC_CTRL2_ITSRVEN(x)              (x << 23)
#define ADC_CTRL2_OCSWTRG_MASK            (0x01 << 22)
#define ADC_CTRL2_OCSWTRG_SHIFT           (22)
#define ADC_CTRL2_OCSWTRG(x)              (x << 22)
#define ADC_CTRL2_PCSWTRG_MASK            (0x01 << 21)
#define ADC_CTRL2_PCSWTRG_SHIFT           (21)
#define ADC_CTRL2_PCSWTRG(x)              (x << 21)
#define ADC_CTRL2_OCTEN_MASK              (0x01 << 20)
#define ADC_CTRL2_OCTEN_SHIFT             (20)
#define ADC_CTRL2_OCTEN(x)                (x << 20)
#define ADC_CTRL2_OCTESEL_L_MASK          (0x07 << 17)
#define ADC_CTRL2_OCTESEL_L_SHIFT         (17)
#define ADC_CTRL2_OCTESEL_L(x)            (x << 17)
#define ADC_CTRL2_PCTEN_MASK              (0x01 << 15)
#define ADC_CTRL2_PCTEN_SHIFT             (15)
#define ADC_CTRL2_PCTEN(x)                (x << 15)
#define ADC_CTRL2_PCTESEL_L_MASK          (0x07 << 12)
#define ADC_CTRL2_PCTESEL_L_SHIFT         (12)
#define ADC_CTRL2_PCTESEL_L(x)            (x << 12)
#define ADC_CTRL2_DTALIGN_MASK            (0x01 << 11)
#define ADC_CTRL2_DTALIGN_SHIFT           (11)
#define ADC_CTRL2_DTALIGN(x)              (x << 11)
#define ADC_CTRL2_OCDMAEN_MASK            (0x01 << 8)
#define ADC_CTRL2_OCDMAEN_SHIFT           (8)
#define ADC_CTRL2_OCDMAEN(x)              (x << 8)
#define ADC_CTRL2_ADCALINIT_MASK          (0x01 << 3)
#define ADC_CTRL2_ADCALINIT_SHIFT         (3)
#define ADC_CTRL2_ADCALINIT(x)            (x << 3)
#define ADC_CTRL2_ADCAL_MASK              (0x01 << 2)
#define ADC_CTRL2_ADCAL_SHIFT             (2)
#define ADC_CTRL2_ADCAL(x)                (x << 2)
#define ADC_CTRL2_RPEN_MASK               (0x01 << 1)
#define ADC_CTRL2_RPEN_SHIFT              (1)
#define ADC_CTRL2_RPEN(x)                 (x << 1)
#define ADC_CTRL2_ADCEN_MASK              (0x01 << 0)
#define ADC_CTRL2_ADCEN_SHIFT             (0)
#define ADC_CTRL2_ADCEN(x)                (x << 0)
#define ADC_SPT1_CSPT17_MASK              (0x07 << 21)
#define ADC_SPT1_CSPT17_SHIFT             (21)
#define ADC_SPT1_CSPT17(x)                (x << 21)
#define ADC_SPT1_CSPT16_MASK              (0x07 << 18)
#define ADC_SPT1_CSPT16_SHIFT             (18)
#define ADC_SPT1_CSPT16(x)                (x << 18)
#define ADC_SPT1_CSPT15_MASK              (0x07 << 15)
#define ADC_SPT1_CSPT15_SHIFT             (15)
#define ADC_SPT1_CSPT15(x)                (x << 15)
#define ADC_SPT1_CSPT14_MASK              (0x07 << 12)
#define ADC_SPT1_CSPT14_SHIFT             (12)
#define ADC_SPT1_CSPT14(x)                (x << 12)
#define ADC_SPT1_CSPT13_MASK              (0x07 << 9)
#define ADC_SPT1_CSPT13_SHIFT             (9)
#define ADC_SPT1_CSPT13(x)                (x << 9)
#define ADC_SPT1_CSPT12_MASK              (0x07 << 6)
#define ADC_SPT1_CSPT12_SHIFT             (6)
#define ADC_SPT1_CSPT12(x)                (x << 6)
#define ADC_SPT1_CSPT11_MASK              (0x07 << 3)
#define ADC_SPT1_CSPT11_SHIFT             (3)
#define ADC_SPT1_CSPT11(x)                (x << 3)
#define ADC_SPT1_CSPT10_MASK              (0x07 << 0)
#define ADC_SPT1_CSPT10_SHIFT             (0)
#define ADC_SPT1_CSPT10(x)                (x << 0)
#define ADC_SPT2_CSPT9_MASK               (0x07 << 27)
#define ADC_SPT2_CSPT9_SHIFT              (27)
#define ADC_SPT2_CSPT9(x)                 (x << 27)
#define ADC_SPT2_CSPT8_MASK               (0x07 << 24)
#define ADC_SPT2_CSPT8_SHIFT              (24)
#define ADC_SPT2_CSPT8(x)                 (x << 24)
#define ADC_SPT2_CSPT7_MASK               (0x07 << 21)
#define ADC_SPT2_CSPT7_SHIFT              (21)
#define ADC_SPT2_CSPT7(x)                 (x << 21)
#define ADC_SPT2_CSPT6_MASK               (0x07 << 18)
#define ADC_SPT2_CSPT6_SHIFT              (18)
#define ADC_SPT2_CSPT6(x)                 (x << 18)
#define ADC_SPT2_CSPT5_MASK               (0x07 << 15)
#define ADC_SPT2_CSPT5_SHIFT              (15)
#define ADC_SPT2_CSPT5(x)                 (x << 15)
#define ADC_SPT2_CSPT4_MASK               (0x07 << 12)
#define ADC_SPT2_CSPT4_SHIFT              (12)
#define ADC_SPT2_CSPT4(x)                 (x << 12)
#define ADC_SPT2_CSPT3_MASK               (0x07 << 9)
#define ADC_SPT2_CSPT3_SHIFT              (9)
#define ADC_SPT2_CSPT3(x)                 (x << 9)
#define ADC_SPT2_CSPT2_MASK               (0x07 << 6)
#define ADC_SPT2_CSPT2_SHIFT              (6)
#define ADC_SPT2_CSPT2(x)                 (x << 6)
#define ADC_SPT2_CSPT1_MASK               (0x07 << 3)
#define ADC_SPT2_CSPT1_SHIFT              (3)
#define ADC_SPT2_CSPT1(x)                 (x << 3)
#define ADC_SPT2_CSPT0_MASK               (0x07 << 0)
#define ADC_SPT2_CSPT0_SHIFT              (0)
#define ADC_SPT2_CSPT0(x)                 (x << 0)
#define ADC_PCDTO1_PCDTO1_MASK            (0xfff << 0)
#define ADC_PCDTO1_PCDTO1_SHIFT           (0)
#define ADC_PCDTO1_PCDTO1(x)              (x << 0)
#define ADC_PCDTO2_PCDTO2_MASK            (0xfff << 0)
#define ADC_PCDTO2_PCDTO2_SHIFT           (0)
#define ADC_PCDTO2_PCDTO2(x)              (x << 0)
#define ADC_PCDTO3_PCDTO3_MASK            (0xfff << 0)
#define ADC_PCDTO3_PCDTO3_SHIFT           (0)
#define ADC_PCDTO3_PCDTO3(x)              (x << 0)
#define ADC_PCDTO4_PCDTO4_MASK            (0xfff << 0)
#define ADC_PCDTO4_PCDTO4_SHIFT           (0)
#define ADC_PCDTO4_PCDTO4(x)              (x << 0)
#define ADC_VMHB_VMHB_MASK                (0xfff << 0)
#define ADC_VMHB_VMHB_SHIFT               (0)
#define ADC_VMHB_VMHB(x)                  (x << 0)
#define ADC_VMLB_VMLB_MASK                (0xfff << 0)
#define ADC_VMLB_VMLB_SHIFT               (0)
#define ADC_VMLB_VMLB(x)                  (x << 0)
#define ADC_OSQ1_OCLEN_MASK               (0x0f << 20)
#define ADC_OSQ1_OCLEN_SHIFT              (20)
#define ADC_OSQ1_OCLEN(x)                 (x << 20)
#define ADC_OSQ1_OSN16_MASK               (0x1f << 15)
#define ADC_OSQ1_OSN16_SHIFT              (15)
#define ADC_OSQ1_OSN16(x)                 (x << 15)
#define ADC_OSQ1_OSN15_MASK               (0x1f << 10)
#define ADC_OSQ1_OSN15_SHIFT              (10)
#define ADC_OSQ1_OSN15(x)                 (x << 10)
#define ADC_OSQ1_OSN14_MASK               (0x1f << 5)
#define ADC_OSQ1_OSN14_SHIFT              (5)
#define ADC_OSQ1_OSN14(x)                 (x << 5)
#define ADC_OSQ1_OSN13_MASK               (0x1f << 0)
#define ADC_OSQ1_OSN13_SHIFT              (0)
#define ADC_OSQ1_OSN13(x)                 (x << 0)
#define ADC_OSQ2_OSN12_MASK               (0x1f << 25)
#define ADC_OSQ2_OSN12_SHIFT              (25)
#define ADC_OSQ2_OSN12(x)                 (x << 25)
#define ADC_OSQ2_OSN11_MASK               (0x1f << 20)
#define ADC_OSQ2_OSN11_SHIFT              (20)
#define ADC_OSQ2_OSN11(x)                 (x << 20)
#define ADC_OSQ2_OSN10_MASK               (0x1f << 15)
#define ADC_OSQ2_OSN10_SHIFT              (15)
#define ADC_OSQ2_OSN10(x)                 (x << 15)
#define ADC_OSQ2_OSN9_MASK                (0x1f << 10)
#define ADC_OSQ2_OSN9_SHIFT               (10)
#define ADC_OSQ2_OSN9(x)                  (x << 10)
#define ADC_OSQ2_OSN8_MASK                (0x1f << 5)
#define ADC_OSQ2_OSN8_SHIFT               (5)
#define ADC_OSQ2_OSN8(x)                  (x << 5)
#define ADC_OSQ2_OSN7_MASK                (0x1f << 0)
#define ADC_OSQ2_OSN7_SHIFT               (0)
#define ADC_OSQ2_OSN7(x)                  (x << 0)
#define ADC_OSQ3_OSN6_MASK                (0x1f << 25)
#define ADC_OSQ3_OSN6_SHIFT               (25)
#define ADC_OSQ3_OSN6(x)                  (x << 25)
#define ADC_OSQ3_OSN5_MASK                (0x1f << 20)
#define ADC_OSQ3_OSN5_SHIFT               (20)
#define ADC_OSQ3_OSN5(x)                  (x << 20)
#define ADC_OSQ3_OSN4_MASK                (0x1f << 15)
#define ADC_OSQ3_OSN4_SHIFT               (15)
#define ADC_OSQ3_OSN4(x)                  (x << 15)
#define ADC_OSQ3_OSN3_MASK                (0x1f << 10)
#define ADC_OSQ3_OSN3_SHIFT               (10)
#define ADC_OSQ3_OSN3(x)                  (x << 10)
#define ADC_OSQ3_OSN2_MASK                (0x1f << 5)
#define ADC_OSQ3_OSN2_SHIFT               (5)
#define ADC_OSQ3_OSN2(x)                  (x << 5)
#define ADC_OSQ3_OSN1_MASK                (0x1f << 0)
#define ADC_OSQ3_OSN1_SHIFT               (0)
#define ADC_OSQ3_OSN1(x)                  (x << 0)
#define ADC_PSQ_PCLEN_MASK                (0x03 << 20)
#define ADC_PSQ_PCLEN_SHIFT               (20)
#define ADC_PSQ_PCLEN(x)                  (x << 20)
#define ADC_PSQ_PSN4_MASK                 (0x1f << 15)
#define ADC_PSQ_PSN4_SHIFT                (15)
#define ADC_PSQ_PSN4(x)                   (x << 15)
#define ADC_PSQ_PSN3_MASK                 (0x1f << 10)
#define ADC_PSQ_PSN3_SHIFT                (10)
#define ADC_PSQ_PSN3(x)                   (x << 10)
#define ADC_PSQ_PSN2_MASK                 (0x1f << 5)
#define ADC_PSQ_PSN2_SHIFT                (5)
#define ADC_PSQ_PSN2(x)                   (x << 5)
#define ADC_PSQ_PSN1_MASK                 (0x1f << 0)
#define ADC_PSQ_PSN1_SHIFT                (0)
#define ADC_PSQ_PSN1(x)                   (x << 0)
#define ADC_PDT1_PDT1_MASK                (0xffff << 0)
#define ADC_PDT1_PDT1_SHIFT               (0)
#define ADC_PDT1_PDT1(x)                  (x << 0)
#define ADC_PDT2_PDT2_MASK                (0xffff << 0)
#define ADC_PDT2_PDT2_SHIFT               (0)
#define ADC_PDT2_PDT2(x)                  (x << 0)
#define ADC_PDT3_PDT3_MASK                (0xffff << 0)
#define ADC_PDT3_PDT3_SHIFT               (0)
#define ADC_PDT3_PDT3(x)                  (x << 0)
#define ADC_PDT4_PDT4_MASK                (0xffff << 0)
#define ADC_PDT4_PDT4_SHIFT               (0)
#define ADC_PDT4_PDT4(x)                  (x << 0)
#define ADC_ODT_ADC2ODT_MASK              (0xffff << 16)
#define ADC_ODT_ADC2ODT_SHIFT             (16)
#define ADC_ODT_ADC2ODT(x)                (x << 16)
#define ADC_ODT_ODT_MASK                  (0xffff << 0)
#define ADC_ODT_ODT_SHIFT                 (0)
#define ADC_ODT_ODT(x)                    (x << 0)

/* CAN1 - Can controller area network */
#define CAN_MCTRL_PTD_MASK                (0x01 << 16)
#define CAN_MCTRL_PTD_SHIFT               (16)
#define CAN_MCTRL_PTD(x)                  (x << 16)
#define CAN_MCTRL_SPRST_MASK              (0x01 << 15)
#define CAN_MCTRL_SPRST_SHIFT             (15)
#define CAN_MCTRL_SPRST(x)                (x << 15)
#define CAN_MCTRL_TTCEN_MASK              (0x01 << 7)
#define CAN_MCTRL_TTCEN_SHIFT             (7)
#define CAN_MCTRL_TTCEN(x)                (x << 7)
#define CAN_MCTRL_AEBOEN_MASK             (0x01 << 6)
#define CAN_MCTRL_AEBOEN_SHIFT            (6)
#define CAN_MCTRL_AEBOEN(x)               (x << 6)
#define CAN_MCTRL_AEDEN_MASK              (0x01 << 5)
#define CAN_MCTRL_AEDEN_SHIFT             (5)
#define CAN_MCTRL_AEDEN(x)                (x << 5)
#define CAN_MCTRL_PRSFEN_MASK             (0x01 << 4)
#define CAN_MCTRL_PRSFEN_SHIFT            (4)
#define CAN_MCTRL_PRSFEN(x)               (x << 4)
#define CAN_MCTRL_MDRSEL_MASK             (0x01 << 3)
#define CAN_MCTRL_MDRSEL_SHIFT            (3)
#define CAN_MCTRL_MDRSEL(x)               (x << 3)
#define CAN_MCTRL_MMSSR_MASK              (0x01 << 2)
#define CAN_MCTRL_MMSSR_SHIFT             (2)
#define CAN_MCTRL_MMSSR(x)                (x << 2)
#define CAN_MCTRL_DZEN_MASK               (0x01 << 1)
#define CAN_MCTRL_DZEN_SHIFT              (1)
#define CAN_MCTRL_DZEN(x)                 (x << 1)
#define CAN_MCTRL_FZEN_MASK               (0x01 << 0)
#define CAN_MCTRL_FZEN_SHIFT              (0)
#define CAN_MCTRL_FZEN(x)                 (x << 0)
#define CAN_MSTS_REALRX_MASK              (0x01 << 11)
#define CAN_MSTS_REALRX_SHIFT             (11)
#define CAN_MSTS_REALRX(x)                (x << 11)
#define CAN_MSTS_LSAMPRX_MASK             (0x01 << 10)
#define CAN_MSTS_LSAMPRX_SHIFT            (10)
#define CAN_MSTS_LSAMPRX(x)               (x << 10)
#define CAN_MSTS_CURS_MASK                (0x01 << 9)
#define CAN_MSTS_CURS_SHIFT               (9)
#define CAN_MSTS_CURS(x)                  (x << 9)
#define CAN_MSTS_CUSS_MASK                (0x01 << 8)
#define CAN_MSTS_CUSS_SHIFT               (8)
#define CAN_MSTS_CUSS(x)                  (x << 8)
#define CAN_MSTS_EDZIF_MASK               (0x01 << 4)
#define CAN_MSTS_EDZIF_SHIFT              (4)
#define CAN_MSTS_EDZIF(x)                 (x << 4)
#define CAN_MSTS_QDZIF_MASK               (0x01 << 3)
#define CAN_MSTS_QDZIF_SHIFT              (3)
#define CAN_MSTS_QDZIF(x)                 (x << 3)
#define CAN_MSTS_EOIF_MASK                (0x01 << 2)
#define CAN_MSTS_EOIF_SHIFT               (2)
#define CAN_MSTS_EOIF(x)                  (x << 2)
#define CAN_MSTS_DZC_MASK                 (0x01 << 1)
#define CAN_MSTS_DZC_SHIFT                (1)
#define CAN_MSTS_DZC(x)                   (x << 1)
#define CAN_MSTS_FZC_MASK                 (0x01 << 0)
#define CAN_MSTS_FZC_SHIFT                (0)
#define CAN_MSTS_FZC(x)                   (x << 0)
#define CAN_TSTS_TM2LPF_MASK              (0x01 << 31)
#define CAN_TSTS_TM2LPF_SHIFT             (31)
#define CAN_TSTS_TM2LPF(x)                (x << 31)
#define CAN_TSTS_TM1LPF_MASK              (0x01 << 30)
#define CAN_TSTS_TM1LPF_SHIFT             (30)
#define CAN_TSTS_TM1LPF(x)                (x << 30)
#define CAN_TSTS_TM0LPF_MASK              (0x01 << 29)
#define CAN_TSTS_TM0LPF_SHIFT             (29)
#define CAN_TSTS_TM0LPF(x)                (x << 29)
#define CAN_TSTS_TM2EF_MASK               (0x01 << 28)
#define CAN_TSTS_TM2EF_SHIFT              (28)
#define CAN_TSTS_TM2EF(x)                 (x << 28)
#define CAN_TSTS_TM1EF_MASK               (0x01 << 27)
#define CAN_TSTS_TM1EF_SHIFT              (27)
#define CAN_TSTS_TM1EF(x)                 (x << 27)
#define CAN_TSTS_TM0EF_MASK               (0x01 << 26)
#define CAN_TSTS_TM0EF_SHIFT              (26)
#define CAN_TSTS_TM0EF(x)                 (x << 26)
#define CAN_TSTS_TMNR_MASK                (0x03 << 24)
#define CAN_TSTS_TMNR_SHIFT               (24)
#define CAN_TSTS_TMNR(x)                  (x << 24)
#define CAN_TSTS_TM2CT_MASK               (0x01 << 23)
#define CAN_TSTS_TM2CT_SHIFT              (23)
#define CAN_TSTS_TM2CT(x)                 (x << 23)
#define CAN_TSTS_TM2TEF_MASK              (0x01 << 19)
#define CAN_TSTS_TM2TEF_SHIFT             (19)
#define CAN_TSTS_TM2TEF(x)                (x << 19)
#define CAN_TSTS_TM2ALF_MASK              (0x01 << 18)
#define CAN_TSTS_TM2ALF_SHIFT             (18)
#define CAN_TSTS_TM2ALF(x)                (x << 18)
#define CAN_TSTS_TM2TSF_MASK              (0x01 << 17)
#define CAN_TSTS_TM2TSF_SHIFT             (17)
#define CAN_TSTS_TM2TSF(x)                (x << 17)
#define CAN_TSTS_TM2TCF_MASK              (0x01 << 16)
#define CAN_TSTS_TM2TCF_SHIFT             (16)
#define CAN_TSTS_TM2TCF(x)                (x << 16)
#define CAN_TSTS_TM1CT_MASK               (0x01 << 15)
#define CAN_TSTS_TM1CT_SHIFT              (15)
#define CAN_TSTS_TM1CT(x)                 (x << 15)
#define CAN_TSTS_TM1TEF_MASK              (0x01 << 11)
#define CAN_TSTS_TM1TEF_SHIFT             (11)
#define CAN_TSTS_TM1TEF(x)                (x << 11)
#define CAN_TSTS_TM1ALF_MASK              (0x01 << 10)
#define CAN_TSTS_TM1ALF_SHIFT             (10)
#define CAN_TSTS_TM1ALF(x)                (x << 10)
#define CAN_TSTS_TM1TSF_MASK              (0x01 << 9)
#define CAN_TSTS_TM1TSF_SHIFT             (9)
#define CAN_TSTS_TM1TSF(x)                (x << 9)
#define CAN_TSTS_TM1TCF_MASK              (0x01 << 8)
#define CAN_TSTS_TM1TCF_SHIFT             (8)
#define CAN_TSTS_TM1TCF(x)                (x << 8)
#define CAN_TSTS_TM0CT_MASK               (0x01 << 7)
#define CAN_TSTS_TM0CT_SHIFT              (7)
#define CAN_TSTS_TM0CT(x)                 (x << 7)
#define CAN_TSTS_TM0TEF_MASK              (0x01 << 3)
#define CAN_TSTS_TM0TEF_SHIFT             (3)
#define CAN_TSTS_TM0TEF(x)                (x << 3)
#define CAN_TSTS_TM0ALF_MASK              (0x01 << 2)
#define CAN_TSTS_TM0ALF_SHIFT             (2)
#define CAN_TSTS_TM0ALF(x)                (x << 2)
#define CAN_TSTS_TM0TSF_MASK              (0x01 << 1)
#define CAN_TSTS_TM0TSF_SHIFT             (1)
#define CAN_TSTS_TM0TSF(x)                (x << 1)
#define CAN_TSTS_TM0TCF_MASK              (0x01 << 0)
#define CAN_TSTS_TM0TCF_SHIFT             (0)
#define CAN_TSTS_TM0TCF(x)                (x << 0)
#define CAN_RF0_RF0R_MASK                 (0x01 << 5)
#define CAN_RF0_RF0R_SHIFT                (5)
#define CAN_RF0_RF0R(x)                   (x << 5)
#define CAN_RF0_RF0OF_MASK                (0x01 << 4)
#define CAN_RF0_RF0OF_SHIFT               (4)
#define CAN_RF0_RF0OF(x)                  (x << 4)
#define CAN_RF0_RF0FF_MASK                (0x01 << 3)
#define CAN_RF0_RF0FF_SHIFT               (3)
#define CAN_RF0_RF0FF(x)                  (x << 3)
#define CAN_RF0_RF0MN_MASK                (0x03 << 0)
#define CAN_RF0_RF0MN_SHIFT               (0)
#define CAN_RF0_RF0MN(x)                  (x << 0)
#define CAN_RF1_RF1R_MASK                 (0x01 << 5)
#define CAN_RF1_RF1R_SHIFT                (5)
#define CAN_RF1_RF1R(x)                   (x << 5)
#define CAN_RF1_RF1OF_MASK                (0x01 << 4)
#define CAN_RF1_RF1OF_SHIFT               (4)
#define CAN_RF1_RF1OF(x)                  (x << 4)
#define CAN_RF1_RF1FF_MASK                (0x01 << 3)
#define CAN_RF1_RF1FF_SHIFT               (3)
#define CAN_RF1_RF1FF(x)                  (x << 3)
#define CAN_RF1_RF1MN_MASK                (0x03 << 0)
#define CAN_RF1_RF1MN_SHIFT               (0)
#define CAN_RF1_RF1MN(x)                  (x << 0)
#define CAN_INTEN_EDZIEN_MASK             (0x01 << 17)
#define CAN_INTEN_EDZIEN_SHIFT            (17)
#define CAN_INTEN_EDZIEN(x)               (x << 17)
#define CAN_INTEN_QDZIEN_MASK             (0x01 << 16)
#define CAN_INTEN_QDZIEN_SHIFT            (16)
#define CAN_INTEN_QDZIEN(x)               (x << 16)
#define CAN_INTEN_EOIEN_MASK              (0x01 << 15)
#define CAN_INTEN_EOIEN_SHIFT             (15)
#define CAN_INTEN_EOIEN(x)                (x << 15)
#define CAN_INTEN_ETRIEN_MASK             (0x01 << 11)
#define CAN_INTEN_ETRIEN_SHIFT            (11)
#define CAN_INTEN_ETRIEN(x)               (x << 11)
#define CAN_INTEN_BOIEN_MASK              (0x01 << 10)
#define CAN_INTEN_BOIEN_SHIFT             (10)
#define CAN_INTEN_BOIEN(x)                (x << 10)
#define CAN_INTEN_EPIEN_MASK              (0x01 << 9)
#define CAN_INTEN_EPIEN_SHIFT             (9)
#define CAN_INTEN_EPIEN(x)                (x << 9)
#define CAN_INTEN_EAIEN_MASK              (0x01 << 8)
#define CAN_INTEN_EAIEN_SHIFT             (8)
#define CAN_INTEN_EAIEN(x)                (x << 8)
#define CAN_INTEN_RF1OIEN_MASK            (0x01 << 6)
#define CAN_INTEN_RF1OIEN_SHIFT           (6)
#define CAN_INTEN_RF1OIEN(x)              (x << 6)
#define CAN_INTEN_RF1FIEN_MASK            (0x01 << 5)
#define CAN_INTEN_RF1FIEN_SHIFT           (5)
#define CAN_INTEN_RF1FIEN(x)              (x << 5)
#define CAN_INTEN_RF1MIEN_MASK            (0x01 << 4)
#define CAN_INTEN_RF1MIEN_SHIFT           (4)
#define CAN_INTEN_RF1MIEN(x)              (x << 4)
#define CAN_INTEN_RF0OIEN_MASK            (0x01 << 3)
#define CAN_INTEN_RF0OIEN_SHIFT           (3)
#define CAN_INTEN_RF0OIEN(x)              (x << 3)
#define CAN_INTEN_RF0FIEN_MASK            (0x01 << 2)
#define CAN_INTEN_RF0FIEN_SHIFT           (2)
#define CAN_INTEN_RF0FIEN(x)              (x << 2)
#define CAN_INTEN_RF0MIEN_MASK            (0x01 << 1)
#define CAN_INTEN_RF0MIEN_SHIFT           (1)
#define CAN_INTEN_RF0MIEN(x)              (x << 1)
#define CAN_INTEN_TCIEN_MASK              (0x01 << 0)
#define CAN_INTEN_TCIEN_SHIFT             (0)
#define CAN_INTEN_TCIEN(x)                (x << 0)
#define CAN_ESTS_REC_MASK                 (0xff << 24)
#define CAN_ESTS_REC_SHIFT                (24)
#define CAN_ESTS_REC(x)                   (x << 24)
#define CAN_ESTS_TEC_MASK                 (0xff << 16)
#define CAN_ESTS_TEC_SHIFT                (16)
#define CAN_ESTS_TEC(x)                   (x << 16)
#define CAN_ESTS_ETR_MASK                 (0x07 << 4)
#define CAN_ESTS_ETR_SHIFT                (4)
#define CAN_ESTS_ETR(x)                   (x << 4)
#define CAN_ESTS_BOF_MASK                 (0x01 << 2)
#define CAN_ESTS_BOF_SHIFT                (2)
#define CAN_ESTS_BOF(x)                   (x << 2)
#define CAN_ESTS_EPF_MASK                 (0x01 << 1)
#define CAN_ESTS_EPF_SHIFT                (1)
#define CAN_ESTS_EPF(x)                   (x << 1)
#define CAN_ESTS_EAF_MASK                 (0x01 << 0)
#define CAN_ESTS_EAF_SHIFT                (0)
#define CAN_ESTS_EAF(x)                   (x << 0)
#define CAN_BTMG_LOEN_MASK                (0x01 << 31)
#define CAN_BTMG_LOEN_SHIFT               (31)
#define CAN_BTMG_LOEN(x)                  (x << 31)
#define CAN_BTMG_LBEN_MASK                (0x01 << 30)
#define CAN_BTMG_LBEN_SHIFT               (30)
#define CAN_BTMG_LBEN(x)                  (x << 30)
#define CAN_BTMG_RSAW_MASK                (0x03 << 24)
#define CAN_BTMG_RSAW_SHIFT               (24)
#define CAN_BTMG_RSAW(x)                  (x << 24)
#define CAN_BTMG_BTS2_MASK                (0x07 << 20)
#define CAN_BTMG_BTS2_SHIFT               (20)
#define CAN_BTMG_BTS2(x)                  (x << 20)
#define CAN_BTMG_BTS1_MASK                (0x0f << 16)
#define CAN_BTMG_BTS1_SHIFT               (16)
#define CAN_BTMG_BTS1(x)                  (x << 16)
#define CAN_BTMG_BRDIV_MASK               (0xfff << 0)
#define CAN_BTMG_BRDIV_SHIFT              (0)
#define CAN_BTMG_BRDIV(x)                 (x << 0)
#define CAN_TMI0_TMSID_MASK               (0x7ff << 21)
#define CAN_TMI0_TMSID_SHIFT              (21)
#define CAN_TMI0_TMSID(x)                 (x << 21)
#define CAN_TMI0_TMEID_MASK               (0x3ffff << 3)
#define CAN_TMI0_TMEID_SHIFT              (3)
#define CAN_TMI0_TMEID(x)                 (x << 3)
#define CAN_TMI0_TMIDSEL_MASK             (0x01 << 2)
#define CAN_TMI0_TMIDSEL_SHIFT            (2)
#define CAN_TMI0_TMIDSEL(x)               (x << 2)
#define CAN_TMI0_TMFRSEL_MASK             (0x01 << 1)
#define CAN_TMI0_TMFRSEL_SHIFT            (1)
#define CAN_TMI0_TMFRSEL(x)               (x << 1)
#define CAN_TMI0_TMSR_MASK                (0x01 << 0)
#define CAN_TMI0_TMSR_SHIFT               (0)
#define CAN_TMI0_TMSR(x)                  (x << 0)
#define CAN_TMC0_TMTS_MASK                (0xffff << 16)
#define CAN_TMC0_TMTS_SHIFT               (16)
#define CAN_TMC0_TMTS(x)                  (x << 16)
#define CAN_TMC0_TMTSTEN_MASK             (0x01 << 8)
#define CAN_TMC0_TMTSTEN_SHIFT            (8)
#define CAN_TMC0_TMTSTEN(x)               (x << 8)
#define CAN_TMC0_TMDTBL_MASK              (0x0f << 0)
#define CAN_TMC0_TMDTBL_SHIFT             (0)
#define CAN_TMC0_TMDTBL(x)                (x << 0)
#define CAN_TMDTL0_TMDT3_MASK             (0xff << 24)
#define CAN_TMDTL0_TMDT3_SHIFT            (24)
#define CAN_TMDTL0_TMDT3(x)               (x << 24)
#define CAN_TMDTL0_TMDT2_MASK             (0xff << 16)
#define CAN_TMDTL0_TMDT2_SHIFT            (16)
#define CAN_TMDTL0_TMDT2(x)               (x << 16)
#define CAN_TMDTL0_TMDT1_MASK             (0xff << 8)
#define CAN_TMDTL0_TMDT1_SHIFT            (8)
#define CAN_TMDTL0_TMDT1(x)               (x << 8)
#define CAN_TMDTL0_TMDT0_MASK             (0xff << 0)
#define CAN_TMDTL0_TMDT0_SHIFT            (0)
#define CAN_TMDTL0_TMDT0(x)               (x << 0)
#define CAN_TMDTH0_TMDT7_MASK             (0xff << 24)
#define CAN_TMDTH0_TMDT7_SHIFT            (24)
#define CAN_TMDTH0_TMDT7(x)               (x << 24)
#define CAN_TMDTH0_TMDT6_MASK             (0xff << 16)
#define CAN_TMDTH0_TMDT6_SHIFT            (16)
#define CAN_TMDTH0_TMDT6(x)               (x << 16)
#define CAN_TMDTH0_TMDT5_MASK             (0xff << 8)
#define CAN_TMDTH0_TMDT5_SHIFT            (8)
#define CAN_TMDTH0_TMDT5(x)               (x << 8)
#define CAN_TMDTH0_TMDT4_MASK             (0xff << 0)
#define CAN_TMDTH0_TMDT4_SHIFT            (0)
#define CAN_TMDTH0_TMDT4(x)               (x << 0)
#define CAN_TMI1_TMSID_MASK               (0x7ff << 21)
#define CAN_TMI1_TMSID_SHIFT              (21)
#define CAN_TMI1_TMSID(x)                 (x << 21)
#define CAN_TMI1_TMEID_MASK               (0x3ffff << 3)
#define CAN_TMI1_TMEID_SHIFT              (3)
#define CAN_TMI1_TMEID(x)                 (x << 3)
#define CAN_TMI1_TMIDSEL_MASK             (0x01 << 2)
#define CAN_TMI1_TMIDSEL_SHIFT            (2)
#define CAN_TMI1_TMIDSEL(x)               (x << 2)
#define CAN_TMI1_TMFRSEL_MASK             (0x01 << 1)
#define CAN_TMI1_TMFRSEL_SHIFT            (1)
#define CAN_TMI1_TMFRSEL(x)               (x << 1)
#define CAN_TMI1_TMSR_MASK                (0x01 << 0)
#define CAN_TMI1_TMSR_SHIFT               (0)
#define CAN_TMI1_TMSR(x)                  (x << 0)
#define CAN_TMC1_TMTS_MASK                (0xffff << 16)
#define CAN_TMC1_TMTS_SHIFT               (16)
#define CAN_TMC1_TMTS(x)                  (x << 16)
#define CAN_TMC1_TMTSTEN_MASK             (0x01 << 8)
#define CAN_TMC1_TMTSTEN_SHIFT            (8)
#define CAN_TMC1_TMTSTEN(x)               (x << 8)
#define CAN_TMC1_TMDTBL_MASK              (0x0f << 0)
#define CAN_TMC1_TMDTBL_SHIFT             (0)
#define CAN_TMC1_TMDTBL(x)                (x << 0)
#define CAN_TMDTL1_TMDT3_MASK             (0xff << 24)
#define CAN_TMDTL1_TMDT3_SHIFT            (24)
#define CAN_TMDTL1_TMDT3(x)               (x << 24)
#define CAN_TMDTL1_TMDT2_MASK             (0xff << 16)
#define CAN_TMDTL1_TMDT2_SHIFT            (16)
#define CAN_TMDTL1_TMDT2(x)               (x << 16)
#define CAN_TMDTL1_TMDT1_MASK             (0xff << 8)
#define CAN_TMDTL1_TMDT1_SHIFT            (8)
#define CAN_TMDTL1_TMDT1(x)               (x << 8)
#define CAN_TMDTL1_TMDT0_MASK             (0xff << 0)
#define CAN_TMDTL1_TMDT0_SHIFT            (0)
#define CAN_TMDTL1_TMDT0(x)               (x << 0)
#define CAN_TMDTH1_TMDT7_MASK             (0xff << 24)
#define CAN_TMDTH1_TMDT7_SHIFT            (24)
#define CAN_TMDTH1_TMDT7(x)               (x << 24)
#define CAN_TMDTH1_TMDT6_MASK             (0xff << 16)
#define CAN_TMDTH1_TMDT6_SHIFT            (16)
#define CAN_TMDTH1_TMDT6(x)               (x << 16)
#define CAN_TMDTH1_TMDT5_MASK             (0xff << 8)
#define CAN_TMDTH1_TMDT5_SHIFT            (8)
#define CAN_TMDTH1_TMDT5(x)               (x << 8)
#define CAN_TMDTH1_TMDT4_MASK             (0xff << 0)
#define CAN_TMDTH1_TMDT4_SHIFT            (0)
#define CAN_TMDTH1_TMDT4(x)               (x << 0)
#define CAN_TMI2_TMSID_MASK               (0x7ff << 21)
#define CAN_TMI2_TMSID_SHIFT              (21)
#define CAN_TMI2_TMSID(x)                 (x << 21)
#define CAN_TMI2_TMEID_MASK               (0x3ffff << 3)
#define CAN_TMI2_TMEID_SHIFT              (3)
#define CAN_TMI2_TMEID(x)                 (x << 3)
#define CAN_TMI2_TMIDSEL_MASK             (0x01 << 2)
#define CAN_TMI2_TMIDSEL_SHIFT            (2)
#define CAN_TMI2_TMIDSEL(x)               (x << 2)
#define CAN_TMI2_TMFRSEL_MASK             (0x01 << 1)
#define CAN_TMI2_TMFRSEL_SHIFT            (1)
#define CAN_TMI2_TMFRSEL(x)               (x << 1)
#define CAN_TMI2_TMSR_MASK                (0x01 << 0)
#define CAN_TMI2_TMSR_SHIFT               (0)
#define CAN_TMI2_TMSR(x)                  (x << 0)
#define CAN_TMC2_TMTS_MASK                (0xffff << 16)
#define CAN_TMC2_TMTS_SHIFT               (16)
#define CAN_TMC2_TMTS(x)                  (x << 16)
#define CAN_TMC2_TMTSTEN_MASK             (0x01 << 8)
#define CAN_TMC2_TMTSTEN_SHIFT            (8)
#define CAN_TMC2_TMTSTEN(x)               (x << 8)
#define CAN_TMC2_TMDTBL_MASK              (0x0f << 0)
#define CAN_TMC2_TMDTBL_SHIFT             (0)
#define CAN_TMC2_TMDTBL(x)                (x << 0)
#define CAN_TMDTL2_TMDT3_MASK             (0xff << 24)
#define CAN_TMDTL2_TMDT3_SHIFT            (24)
#define CAN_TMDTL2_TMDT3(x)               (x << 24)
#define CAN_TMDTL2_TMDT2_MASK             (0xff << 16)
#define CAN_TMDTL2_TMDT2_SHIFT            (16)
#define CAN_TMDTL2_TMDT2(x)               (x << 16)
#define CAN_TMDTL2_TMDT1_MASK             (0xff << 8)
#define CAN_TMDTL2_TMDT1_SHIFT            (8)
#define CAN_TMDTL2_TMDT1(x)               (x << 8)
#define CAN_TMDTL2_TMDT0_MASK             (0xff << 0)
#define CAN_TMDTL2_TMDT0_SHIFT            (0)
#define CAN_TMDTL2_TMDT0(x)               (x << 0)
#define CAN_TMDTH2_TMDT7_MASK             (0xff << 24)
#define CAN_TMDTH2_TMDT7_SHIFT            (24)
#define CAN_TMDTH2_TMDT7(x)               (x << 24)
#define CAN_TMDTH2_TMDT6_MASK             (0xff << 16)
#define CAN_TMDTH2_TMDT6_SHIFT            (16)
#define CAN_TMDTH2_TMDT6(x)               (x << 16)
#define CAN_TMDTH2_TMDT5_MASK             (0xff << 8)
#define CAN_TMDTH2_TMDT5_SHIFT            (8)
#define CAN_TMDTH2_TMDT5(x)               (x << 8)
#define CAN_TMDTH2_TMDT4_MASK             (0xff << 0)
#define CAN_TMDTH2_TMDT4_SHIFT            (0)
#define CAN_TMDTH2_TMDT4(x)               (x << 0)
#define CAN_RFI0_RFSID_MASK               (0x7ff << 21)
#define CAN_RFI0_RFSID_SHIFT              (21)
#define CAN_RFI0_RFSID(x)                 (x << 21)
#define CAN_RFI0_RFEID_MASK               (0x3ffff << 3)
#define CAN_RFI0_RFEID_SHIFT              (3)
#define CAN_RFI0_RFEID(x)                 (x << 3)
#define CAN_RFI0_RFIDI_MASK               (0x01 << 2)
#define CAN_RFI0_RFIDI_SHIFT              (2)
#define CAN_RFI0_RFIDI(x)                 (x << 2)
#define CAN_RFI0_RFFRI_MASK               (0x01 << 1)
#define CAN_RFI0_RFFRI_SHIFT              (1)
#define CAN_RFI0_RFFRI(x)                 (x << 1)
#define CAN_RFC0_RFTS_MASK                (0xffff << 16)
#define CAN_RFC0_RFTS_SHIFT               (16)
#define CAN_RFC0_RFTS(x)                  (x << 16)
#define CAN_RFC0_RFFMN_MASK               (0xff << 8)
#define CAN_RFC0_RFFMN_SHIFT              (8)
#define CAN_RFC0_RFFMN(x)                 (x << 8)
#define CAN_RFC0_RFDTL_MASK               (0x0f << 0)
#define CAN_RFC0_RFDTL_SHIFT              (0)
#define CAN_RFC0_RFDTL(x)                 (x << 0)
#define CAN_RFDTL0_RFDT3_MASK             (0xff << 24)
#define CAN_RFDTL0_RFDT3_SHIFT            (24)
#define CAN_RFDTL0_RFDT3(x)               (x << 24)
#define CAN_RFDTL0_RFDT2_MASK             (0xff << 16)
#define CAN_RFDTL0_RFDT2_SHIFT            (16)
#define CAN_RFDTL0_RFDT2(x)               (x << 16)
#define CAN_RFDTL0_RFDT1_MASK             (0xff << 8)
#define CAN_RFDTL0_RFDT1_SHIFT            (8)
#define CAN_RFDTL0_RFDT1(x)               (x << 8)
#define CAN_RFDTL0_RFDT0_MASK             (0xff << 0)
#define CAN_RFDTL0_RFDT0_SHIFT            (0)
#define CAN_RFDTL0_RFDT0(x)               (x << 0)
#define CAN_RFDTH0_RFDT7_MASK             (0xff << 24)
#define CAN_RFDTH0_RFDT7_SHIFT            (24)
#define CAN_RFDTH0_RFDT7(x)               (x << 24)
#define CAN_RFDTH0_RFDT6_MASK             (0xff << 16)
#define CAN_RFDTH0_RFDT6_SHIFT            (16)
#define CAN_RFDTH0_RFDT6(x)               (x << 16)
#define CAN_RFDTH0_RFDT5_MASK             (0xff << 8)
#define CAN_RFDTH0_RFDT5_SHIFT            (8)
#define CAN_RFDTH0_RFDT5(x)               (x << 8)
#define CAN_RFDTH0_RFDT4_MASK             (0xff << 0)
#define CAN_RFDTH0_RFDT4_SHIFT            (0)
#define CAN_RFDTH0_RFDT4(x)               (x << 0)
#define CAN_RFI1_RFSID_MASK               (0x7ff << 21)
#define CAN_RFI1_RFSID_SHIFT              (21)
#define CAN_RFI1_RFSID(x)                 (x << 21)
#define CAN_RFI1_RFEID_MASK               (0x3ffff << 3)
#define CAN_RFI1_RFEID_SHIFT              (3)
#define CAN_RFI1_RFEID(x)                 (x << 3)
#define CAN_RFI1_RFIDI_MASK               (0x01 << 2)
#define CAN_RFI1_RFIDI_SHIFT              (2)
#define CAN_RFI1_RFIDI(x)                 (x << 2)
#define CAN_RFI1_RFFRI_MASK               (0x01 << 1)
#define CAN_RFI1_RFFRI_SHIFT              (1)
#define CAN_RFI1_RFFRI(x)                 (x << 1)
#define CAN_RFC1_RFTS_MASK                (0xffff << 16)
#define CAN_RFC1_RFTS_SHIFT               (16)
#define CAN_RFC1_RFTS(x)                  (x << 16)
#define CAN_RFC1_RFFMN_MASK               (0xff << 8)
#define CAN_RFC1_RFFMN_SHIFT              (8)
#define CAN_RFC1_RFFMN(x)                 (x << 8)
#define CAN_RFC1_RFDTL_MASK               (0x0f << 0)
#define CAN_RFC1_RFDTL_SHIFT              (0)
#define CAN_RFC1_RFDTL(x)                 (x << 0)
#define CAN_RFDTL1_RFDT3_MASK             (0xff << 24)
#define CAN_RFDTL1_RFDT3_SHIFT            (24)
#define CAN_RFDTL1_RFDT3(x)               (x << 24)
#define CAN_RFDTL1_RFDT2_MASK             (0xff << 16)
#define CAN_RFDTL1_RFDT2_SHIFT            (16)
#define CAN_RFDTL1_RFDT2(x)               (x << 16)
#define CAN_RFDTL1_RFDT1_MASK             (0xff << 8)
#define CAN_RFDTL1_RFDT1_SHIFT            (8)
#define CAN_RFDTL1_RFDT1(x)               (x << 8)
#define CAN_RFDTL1_RFDT0_MASK             (0xff << 0)
#define CAN_RFDTL1_RFDT0_SHIFT            (0)
#define CAN_RFDTL1_RFDT0(x)               (x << 0)
#define CAN_RFDTH1_RFDT7_MASK             (0xff << 24)
#define CAN_RFDTH1_RFDT7_SHIFT            (24)
#define CAN_RFDTH1_RFDT7(x)               (x << 24)
#define CAN_RFDTH1_RFDT6_MASK             (0xff << 16)
#define CAN_RFDTH1_RFDT6_SHIFT            (16)
#define CAN_RFDTH1_RFDT6(x)               (x << 16)
#define CAN_RFDTH1_RFDT5_MASK             (0xff << 8)
#define CAN_RFDTH1_RFDT5_SHIFT            (8)
#define CAN_RFDTH1_RFDT5(x)               (x << 8)
#define CAN_RFDTH1_RFDT4_MASK             (0xff << 0)
#define CAN_RFDTH1_RFDT4_SHIFT            (0)
#define CAN_RFDTH1_RFDT4(x)               (x << 0)
#define CAN_FCTRL_FCS_MASK                (0x01 << 0)
#define CAN_FCTRL_FCS_SHIFT               (0)
#define CAN_FCTRL_FCS(x)                  (x << 0)
#define CAN_FMCFG_FMSEL0_MASK             (0x01 << 0)
#define CAN_FMCFG_FMSEL0_SHIFT            (0)
#define CAN_FMCFG_FMSEL0(x)               (x << 0)
#define CAN_FMCFG_FMSEL1_MASK             (0x01 << 1)
#define CAN_FMCFG_FMSEL1_SHIFT            (1)
#define CAN_FMCFG_FMSEL1(x)               (x << 1)
#define CAN_FMCFG_FMSEL2_MASK             (0x01 << 2)
#define CAN_FMCFG_FMSEL2_SHIFT            (2)
#define CAN_FMCFG_FMSEL2(x)               (x << 2)
#define CAN_FMCFG_FMSEL3_MASK             (0x01 << 3)
#define CAN_FMCFG_FMSEL3_SHIFT            (3)
#define CAN_FMCFG_FMSEL3(x)               (x << 3)
#define CAN_FMCFG_FMSEL4_MASK             (0x01 << 4)
#define CAN_FMCFG_FMSEL4_SHIFT            (4)
#define CAN_FMCFG_FMSEL4(x)               (x << 4)
#define CAN_FMCFG_FMSEL5_MASK             (0x01 << 5)
#define CAN_FMCFG_FMSEL5_SHIFT            (5)
#define CAN_FMCFG_FMSEL5(x)               (x << 5)
#define CAN_FMCFG_FMSEL6_MASK             (0x01 << 6)
#define CAN_FMCFG_FMSEL6_SHIFT            (6)
#define CAN_FMCFG_FMSEL6(x)               (x << 6)
#define CAN_FMCFG_FMSEL7_MASK             (0x01 << 7)
#define CAN_FMCFG_FMSEL7_SHIFT            (7)
#define CAN_FMCFG_FMSEL7(x)               (x << 7)
#define CAN_FMCFG_FMSEL8_MASK             (0x01 << 8)
#define CAN_FMCFG_FMSEL8_SHIFT            (8)
#define CAN_FMCFG_FMSEL8(x)               (x << 8)
#define CAN_FMCFG_FMSEL9_MASK             (0x01 << 9)
#define CAN_FMCFG_FMSEL9_SHIFT            (9)
#define CAN_FMCFG_FMSEL9(x)               (x << 9)
#define CAN_FMCFG_FMSEL10_MASK            (0x01 << 10)
#define CAN_FMCFG_FMSEL10_SHIFT           (10)
#define CAN_FMCFG_FMSEL10(x)              (x << 10)
#define CAN_FMCFG_FMSEL11_MASK            (0x01 << 11)
#define CAN_FMCFG_FMSEL11_SHIFT           (11)
#define CAN_FMCFG_FMSEL11(x)              (x << 11)
#define CAN_FMCFG_FMSEL12_MASK            (0x01 << 12)
#define CAN_FMCFG_FMSEL12_SHIFT           (12)
#define CAN_FMCFG_FMSEL12(x)              (x << 12)
#define CAN_FMCFG_FMSEL13_MASK            (0x01 << 13)
#define CAN_FMCFG_FMSEL13_SHIFT           (13)
#define CAN_FMCFG_FMSEL13(x)              (x << 13)
#define CAN_FBWCFG_FBWSEL0_MASK           (0x01 << 0)
#define CAN_FBWCFG_FBWSEL0_SHIFT          (0)
#define CAN_FBWCFG_FBWSEL0(x)             (x << 0)
#define CAN_FBWCFG_FBWSEL1_MASK           (0x01 << 1)
#define CAN_FBWCFG_FBWSEL1_SHIFT          (1)
#define CAN_FBWCFG_FBWSEL1(x)             (x << 1)
#define CAN_FBWCFG_FBWSEL2_MASK           (0x01 << 2)
#define CAN_FBWCFG_FBWSEL2_SHIFT          (2)
#define CAN_FBWCFG_FBWSEL2(x)             (x << 2)
#define CAN_FBWCFG_FBWSEL3_MASK           (0x01 << 3)
#define CAN_FBWCFG_FBWSEL3_SHIFT          (3)
#define CAN_FBWCFG_FBWSEL3(x)             (x << 3)
#define CAN_FBWCFG_FBWSEL4_MASK           (0x01 << 4)
#define CAN_FBWCFG_FBWSEL4_SHIFT          (4)
#define CAN_FBWCFG_FBWSEL4(x)             (x << 4)
#define CAN_FBWCFG_FBWSEL5_MASK           (0x01 << 5)
#define CAN_FBWCFG_FBWSEL5_SHIFT          (5)
#define CAN_FBWCFG_FBWSEL5(x)             (x << 5)
#define CAN_FBWCFG_FBWSEL6_MASK           (0x01 << 6)
#define CAN_FBWCFG_FBWSEL6_SHIFT          (6)
#define CAN_FBWCFG_FBWSEL6(x)             (x << 6)
#define CAN_FBWCFG_FBWSEL7_MASK           (0x01 << 7)
#define CAN_FBWCFG_FBWSEL7_SHIFT          (7)
#define CAN_FBWCFG_FBWSEL7(x)             (x << 7)
#define CAN_FBWCFG_FBWSEL8_MASK           (0x01 << 8)
#define CAN_FBWCFG_FBWSEL8_SHIFT          (8)
#define CAN_FBWCFG_FBWSEL8(x)             (x << 8)
#define CAN_FBWCFG_FBWSEL9_MASK           (0x01 << 9)
#define CAN_FBWCFG_FBWSEL9_SHIFT          (9)
#define CAN_FBWCFG_FBWSEL9(x)             (x << 9)
#define CAN_FBWCFG_FBWSEL10_MASK          (0x01 << 10)
#define CAN_FBWCFG_FBWSEL10_SHIFT         (10)
#define CAN_FBWCFG_FBWSEL10(x)            (x << 10)
#define CAN_FBWCFG_FBWSEL11_MASK          (0x01 << 11)
#define CAN_FBWCFG_FBWSEL11_SHIFT         (11)
#define CAN_FBWCFG_FBWSEL11(x)            (x << 11)
#define CAN_FBWCFG_FBWSEL12_MASK          (0x01 << 12)
#define CAN_FBWCFG_FBWSEL12_SHIFT         (12)
#define CAN_FBWCFG_FBWSEL12(x)            (x << 12)
#define CAN_FBWCFG_FBWSEL13_MASK          (0x01 << 13)
#define CAN_FBWCFG_FBWSEL13_SHIFT         (13)
#define CAN_FBWCFG_FBWSEL13(x)            (x << 13)
#define CAN_FRF_FRFSEL0_MASK              (0x01 << 0)
#define CAN_FRF_FRFSEL0_SHIFT             (0)
#define CAN_FRF_FRFSEL0(x)                (x << 0)
#define CAN_FRF_FRFSEL1_MASK              (0x01 << 1)
#define CAN_FRF_FRFSEL1_SHIFT             (1)
#define CAN_FRF_FRFSEL1(x)                (x << 1)
#define CAN_FRF_FRFSEL2_MASK              (0x01 << 2)
#define CAN_FRF_FRFSEL2_SHIFT             (2)
#define CAN_FRF_FRFSEL2(x)                (x << 2)
#define CAN_FRF_FRFSEL3_MASK              (0x01 << 3)
#define CAN_FRF_FRFSEL3_SHIFT             (3)
#define CAN_FRF_FRFSEL3(x)                (x << 3)
#define CAN_FRF_FRFSEL4_MASK              (0x01 << 4)
#define CAN_FRF_FRFSEL4_SHIFT             (4)
#define CAN_FRF_FRFSEL4(x)                (x << 4)
#define CAN_FRF_FRFSEL5_MASK              (0x01 << 5)
#define CAN_FRF_FRFSEL5_SHIFT             (5)
#define CAN_FRF_FRFSEL5(x)                (x << 5)
#define CAN_FRF_FRFSEL6_MASK              (0x01 << 6)
#define CAN_FRF_FRFSEL6_SHIFT             (6)
#define CAN_FRF_FRFSEL6(x)                (x << 6)
#define CAN_FRF_FRFSEL7_MASK              (0x01 << 7)
#define CAN_FRF_FRFSEL7_SHIFT             (7)
#define CAN_FRF_FRFSEL7(x)                (x << 7)
#define CAN_FRF_FRFSEL8_MASK              (0x01 << 8)
#define CAN_FRF_FRFSEL8_SHIFT             (8)
#define CAN_FRF_FRFSEL8(x)                (x << 8)
#define CAN_FRF_FRFSEL9_MASK              (0x01 << 9)
#define CAN_FRF_FRFSEL9_SHIFT             (9)
#define CAN_FRF_FRFSEL9(x)                (x << 9)
#define CAN_FRF_FRFSEL10_MASK             (0x01 << 10)
#define CAN_FRF_FRFSEL10_SHIFT            (10)
#define CAN_FRF_FRFSEL10(x)               (x << 10)
#define CAN_FRF_FRFSEL11_MASK             (0x01 << 11)
#define CAN_FRF_FRFSEL11_SHIFT            (11)
#define CAN_FRF_FRFSEL11(x)               (x << 11)
#define CAN_FRF_FRFSEL12_MASK             (0x01 << 12)
#define CAN_FRF_FRFSEL12_SHIFT            (12)
#define CAN_FRF_FRFSEL12(x)               (x << 12)
#define CAN_FRF_FRFSEL13_MASK             (0x01 << 13)
#define CAN_FRF_FRFSEL13_SHIFT            (13)
#define CAN_FRF_FRFSEL13(x)               (x << 13)
#define CAN_FACFG_FAEN0_MASK              (0x01 << 0)
#define CAN_FACFG_FAEN0_SHIFT             (0)
#define CAN_FACFG_FAEN0(x)                (x << 0)
#define CAN_FACFG_FAEN1_MASK              (0x01 << 1)
#define CAN_FACFG_FAEN1_SHIFT             (1)
#define CAN_FACFG_FAEN1(x)                (x << 1)
#define CAN_FACFG_FAEN2_MASK              (0x01 << 2)
#define CAN_FACFG_FAEN2_SHIFT             (2)
#define CAN_FACFG_FAEN2(x)                (x << 2)
#define CAN_FACFG_FAEN3_MASK              (0x01 << 3)
#define CAN_FACFG_FAEN3_SHIFT             (3)
#define CAN_FACFG_FAEN3(x)                (x << 3)
#define CAN_FACFG_FAEN4_MASK              (0x01 << 4)
#define CAN_FACFG_FAEN4_SHIFT             (4)
#define CAN_FACFG_FAEN4(x)                (x << 4)
#define CAN_FACFG_FAEN5_MASK              (0x01 << 5)
#define CAN_FACFG_FAEN5_SHIFT             (5)
#define CAN_FACFG_FAEN5(x)                (x << 5)
#define CAN_FACFG_FAEN6_MASK              (0x01 << 6)
#define CAN_FACFG_FAEN6_SHIFT             (6)
#define CAN_FACFG_FAEN6(x)                (x << 6)
#define CAN_FACFG_FAEN7_MASK              (0x01 << 7)
#define CAN_FACFG_FAEN7_SHIFT             (7)
#define CAN_FACFG_FAEN7(x)                (x << 7)
#define CAN_FACFG_FAEN8_MASK              (0x01 << 8)
#define CAN_FACFG_FAEN8_SHIFT             (8)
#define CAN_FACFG_FAEN8(x)                (x << 8)
#define CAN_FACFG_FAEN9_MASK              (0x01 << 9)
#define CAN_FACFG_FAEN9_SHIFT             (9)
#define CAN_FACFG_FAEN9(x)                (x << 9)
#define CAN_FACFG_FAEN10_MASK             (0x01 << 10)
#define CAN_FACFG_FAEN10_SHIFT            (10)
#define CAN_FACFG_FAEN10(x)               (x << 10)
#define CAN_FACFG_FAEN11_MASK             (0x01 << 11)
#define CAN_FACFG_FAEN11_SHIFT            (11)
#define CAN_FACFG_FAEN11(x)               (x << 11)
#define CAN_FACFG_FAEN12_MASK             (0x01 << 12)
#define CAN_FACFG_FAEN12_SHIFT            (12)
#define CAN_FACFG_FAEN12(x)               (x << 12)
#define CAN_FACFG_FAEN13_MASK             (0x01 << 13)
#define CAN_FACFG_FAEN13_SHIFT            (13)
#define CAN_FACFG_FAEN13(x)               (x << 13)
#define CAN_F0FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F0FB1_FFDB0_SHIFT             (0)
#define CAN_F0FB1_FFDB0(x)                (x << 0)
#define CAN_F0FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F0FB1_FFDB1_SHIFT             (1)
#define CAN_F0FB1_FFDB1(x)                (x << 1)
#define CAN_F0FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F0FB1_FFDB2_SHIFT             (2)
#define CAN_F0FB1_FFDB2(x)                (x << 2)
#define CAN_F0FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F0FB1_FFDB3_SHIFT             (3)
#define CAN_F0FB1_FFDB3(x)                (x << 3)
#define CAN_F0FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F0FB1_FFDB4_SHIFT             (4)
#define CAN_F0FB1_FFDB4(x)                (x << 4)
#define CAN_F0FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F0FB1_FFDB5_SHIFT             (5)
#define CAN_F0FB1_FFDB5(x)                (x << 5)
#define CAN_F0FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F0FB1_FFDB6_SHIFT             (6)
#define CAN_F0FB1_FFDB6(x)                (x << 6)
#define CAN_F0FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F0FB1_FFDB7_SHIFT             (7)
#define CAN_F0FB1_FFDB7(x)                (x << 7)
#define CAN_F0FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F0FB1_FFDB8_SHIFT             (8)
#define CAN_F0FB1_FFDB8(x)                (x << 8)
#define CAN_F0FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F0FB1_FFDB9_SHIFT             (9)
#define CAN_F0FB1_FFDB9(x)                (x << 9)
#define CAN_F0FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F0FB1_FFDB10_SHIFT            (10)
#define CAN_F0FB1_FFDB10(x)               (x << 10)
#define CAN_F0FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F0FB1_FFDB11_SHIFT            (11)
#define CAN_F0FB1_FFDB11(x)               (x << 11)
#define CAN_F0FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F0FB1_FFDB12_SHIFT            (12)
#define CAN_F0FB1_FFDB12(x)               (x << 12)
#define CAN_F0FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F0FB1_FFDB13_SHIFT            (13)
#define CAN_F0FB1_FFDB13(x)               (x << 13)
#define CAN_F0FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F0FB1_FFDB14_SHIFT            (14)
#define CAN_F0FB1_FFDB14(x)               (x << 14)
#define CAN_F0FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F0FB1_FFDB15_SHIFT            (15)
#define CAN_F0FB1_FFDB15(x)               (x << 15)
#define CAN_F0FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F0FB1_FFDB16_SHIFT            (16)
#define CAN_F0FB1_FFDB16(x)               (x << 16)
#define CAN_F0FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F0FB1_FFDB17_SHIFT            (17)
#define CAN_F0FB1_FFDB17(x)               (x << 17)
#define CAN_F0FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F0FB1_FFDB18_SHIFT            (18)
#define CAN_F0FB1_FFDB18(x)               (x << 18)
#define CAN_F0FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F0FB1_FFDB19_SHIFT            (19)
#define CAN_F0FB1_FFDB19(x)               (x << 19)
#define CAN_F0FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F0FB1_FFDB20_SHIFT            (20)
#define CAN_F0FB1_FFDB20(x)               (x << 20)
#define CAN_F0FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F0FB1_FFDB21_SHIFT            (21)
#define CAN_F0FB1_FFDB21(x)               (x << 21)
#define CAN_F0FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F0FB1_FFDB22_SHIFT            (22)
#define CAN_F0FB1_FFDB22(x)               (x << 22)
#define CAN_F0FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F0FB1_FFDB23_SHIFT            (23)
#define CAN_F0FB1_FFDB23(x)               (x << 23)
#define CAN_F0FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F0FB1_FFDB24_SHIFT            (24)
#define CAN_F0FB1_FFDB24(x)               (x << 24)
#define CAN_F0FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F0FB1_FFDB25_SHIFT            (25)
#define CAN_F0FB1_FFDB25(x)               (x << 25)
#define CAN_F0FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F0FB1_FFDB26_SHIFT            (26)
#define CAN_F0FB1_FFDB26(x)               (x << 26)
#define CAN_F0FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F0FB1_FFDB27_SHIFT            (27)
#define CAN_F0FB1_FFDB27(x)               (x << 27)
#define CAN_F0FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F0FB1_FFDB28_SHIFT            (28)
#define CAN_F0FB1_FFDB28(x)               (x << 28)
#define CAN_F0FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F0FB1_FFDB29_SHIFT            (29)
#define CAN_F0FB1_FFDB29(x)               (x << 29)
#define CAN_F0FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F0FB1_FFDB30_SHIFT            (30)
#define CAN_F0FB1_FFDB30(x)               (x << 30)
#define CAN_F0FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F0FB1_FFDB31_SHIFT            (31)
#define CAN_F0FB1_FFDB31(x)               (x << 31)
#define CAN_F0FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F0FB2_FFDB0_SHIFT             (0)
#define CAN_F0FB2_FFDB0(x)                (x << 0)
#define CAN_F0FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F0FB2_FFDB1_SHIFT             (1)
#define CAN_F0FB2_FFDB1(x)                (x << 1)
#define CAN_F0FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F0FB2_FFDB2_SHIFT             (2)
#define CAN_F0FB2_FFDB2(x)                (x << 2)
#define CAN_F0FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F0FB2_FFDB3_SHIFT             (3)
#define CAN_F0FB2_FFDB3(x)                (x << 3)
#define CAN_F0FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F0FB2_FFDB4_SHIFT             (4)
#define CAN_F0FB2_FFDB4(x)                (x << 4)
#define CAN_F0FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F0FB2_FFDB5_SHIFT             (5)
#define CAN_F0FB2_FFDB5(x)                (x << 5)
#define CAN_F0FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F0FB2_FFDB6_SHIFT             (6)
#define CAN_F0FB2_FFDB6(x)                (x << 6)
#define CAN_F0FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F0FB2_FFDB7_SHIFT             (7)
#define CAN_F0FB2_FFDB7(x)                (x << 7)
#define CAN_F0FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F0FB2_FFDB8_SHIFT             (8)
#define CAN_F0FB2_FFDB8(x)                (x << 8)
#define CAN_F0FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F0FB2_FFDB9_SHIFT             (9)
#define CAN_F0FB2_FFDB9(x)                (x << 9)
#define CAN_F0FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F0FB2_FFDB10_SHIFT            (10)
#define CAN_F0FB2_FFDB10(x)               (x << 10)
#define CAN_F0FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F0FB2_FFDB11_SHIFT            (11)
#define CAN_F0FB2_FFDB11(x)               (x << 11)
#define CAN_F0FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F0FB2_FFDB12_SHIFT            (12)
#define CAN_F0FB2_FFDB12(x)               (x << 12)
#define CAN_F0FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F0FB2_FFDB13_SHIFT            (13)
#define CAN_F0FB2_FFDB13(x)               (x << 13)
#define CAN_F0FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F0FB2_FFDB14_SHIFT            (14)
#define CAN_F0FB2_FFDB14(x)               (x << 14)
#define CAN_F0FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F0FB2_FFDB15_SHIFT            (15)
#define CAN_F0FB2_FFDB15(x)               (x << 15)
#define CAN_F0FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F0FB2_FFDB16_SHIFT            (16)
#define CAN_F0FB2_FFDB16(x)               (x << 16)
#define CAN_F0FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F0FB2_FFDB17_SHIFT            (17)
#define CAN_F0FB2_FFDB17(x)               (x << 17)
#define CAN_F0FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F0FB2_FFDB18_SHIFT            (18)
#define CAN_F0FB2_FFDB18(x)               (x << 18)
#define CAN_F0FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F0FB2_FFDB19_SHIFT            (19)
#define CAN_F0FB2_FFDB19(x)               (x << 19)
#define CAN_F0FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F0FB2_FFDB20_SHIFT            (20)
#define CAN_F0FB2_FFDB20(x)               (x << 20)
#define CAN_F0FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F0FB2_FFDB21_SHIFT            (21)
#define CAN_F0FB2_FFDB21(x)               (x << 21)
#define CAN_F0FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F0FB2_FFDB22_SHIFT            (22)
#define CAN_F0FB2_FFDB22(x)               (x << 22)
#define CAN_F0FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F0FB2_FFDB23_SHIFT            (23)
#define CAN_F0FB2_FFDB23(x)               (x << 23)
#define CAN_F0FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F0FB2_FFDB24_SHIFT            (24)
#define CAN_F0FB2_FFDB24(x)               (x << 24)
#define CAN_F0FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F0FB2_FFDB25_SHIFT            (25)
#define CAN_F0FB2_FFDB25(x)               (x << 25)
#define CAN_F0FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F0FB2_FFDB26_SHIFT            (26)
#define CAN_F0FB2_FFDB26(x)               (x << 26)
#define CAN_F0FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F0FB2_FFDB27_SHIFT            (27)
#define CAN_F0FB2_FFDB27(x)               (x << 27)
#define CAN_F0FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F0FB2_FFDB28_SHIFT            (28)
#define CAN_F0FB2_FFDB28(x)               (x << 28)
#define CAN_F0FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F0FB2_FFDB29_SHIFT            (29)
#define CAN_F0FB2_FFDB29(x)               (x << 29)
#define CAN_F0FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F0FB2_FFDB30_SHIFT            (30)
#define CAN_F0FB2_FFDB30(x)               (x << 30)
#define CAN_F0FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F0FB2_FFDB31_SHIFT            (31)
#define CAN_F0FB2_FFDB31(x)               (x << 31)
#define CAN_F1FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F1FB1_FFDB0_SHIFT             (0)
#define CAN_F1FB1_FFDB0(x)                (x << 0)
#define CAN_F1FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F1FB1_FFDB1_SHIFT             (1)
#define CAN_F1FB1_FFDB1(x)                (x << 1)
#define CAN_F1FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F1FB1_FFDB2_SHIFT             (2)
#define CAN_F1FB1_FFDB2(x)                (x << 2)
#define CAN_F1FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F1FB1_FFDB3_SHIFT             (3)
#define CAN_F1FB1_FFDB3(x)                (x << 3)
#define CAN_F1FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F1FB1_FFDB4_SHIFT             (4)
#define CAN_F1FB1_FFDB4(x)                (x << 4)
#define CAN_F1FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F1FB1_FFDB5_SHIFT             (5)
#define CAN_F1FB1_FFDB5(x)                (x << 5)
#define CAN_F1FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F1FB1_FFDB6_SHIFT             (6)
#define CAN_F1FB1_FFDB6(x)                (x << 6)
#define CAN_F1FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F1FB1_FFDB7_SHIFT             (7)
#define CAN_F1FB1_FFDB7(x)                (x << 7)
#define CAN_F1FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F1FB1_FFDB8_SHIFT             (8)
#define CAN_F1FB1_FFDB8(x)                (x << 8)
#define CAN_F1FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F1FB1_FFDB9_SHIFT             (9)
#define CAN_F1FB1_FFDB9(x)                (x << 9)
#define CAN_F1FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F1FB1_FFDB10_SHIFT            (10)
#define CAN_F1FB1_FFDB10(x)               (x << 10)
#define CAN_F1FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F1FB1_FFDB11_SHIFT            (11)
#define CAN_F1FB1_FFDB11(x)               (x << 11)
#define CAN_F1FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F1FB1_FFDB12_SHIFT            (12)
#define CAN_F1FB1_FFDB12(x)               (x << 12)
#define CAN_F1FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F1FB1_FFDB13_SHIFT            (13)
#define CAN_F1FB1_FFDB13(x)               (x << 13)
#define CAN_F1FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F1FB1_FFDB14_SHIFT            (14)
#define CAN_F1FB1_FFDB14(x)               (x << 14)
#define CAN_F1FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F1FB1_FFDB15_SHIFT            (15)
#define CAN_F1FB1_FFDB15(x)               (x << 15)
#define CAN_F1FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F1FB1_FFDB16_SHIFT            (16)
#define CAN_F1FB1_FFDB16(x)               (x << 16)
#define CAN_F1FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F1FB1_FFDB17_SHIFT            (17)
#define CAN_F1FB1_FFDB17(x)               (x << 17)
#define CAN_F1FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F1FB1_FFDB18_SHIFT            (18)
#define CAN_F1FB1_FFDB18(x)               (x << 18)
#define CAN_F1FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F1FB1_FFDB19_SHIFT            (19)
#define CAN_F1FB1_FFDB19(x)               (x << 19)
#define CAN_F1FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F1FB1_FFDB20_SHIFT            (20)
#define CAN_F1FB1_FFDB20(x)               (x << 20)
#define CAN_F1FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F1FB1_FFDB21_SHIFT            (21)
#define CAN_F1FB1_FFDB21(x)               (x << 21)
#define CAN_F1FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F1FB1_FFDB22_SHIFT            (22)
#define CAN_F1FB1_FFDB22(x)               (x << 22)
#define CAN_F1FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F1FB1_FFDB23_SHIFT            (23)
#define CAN_F1FB1_FFDB23(x)               (x << 23)
#define CAN_F1FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F1FB1_FFDB24_SHIFT            (24)
#define CAN_F1FB1_FFDB24(x)               (x << 24)
#define CAN_F1FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F1FB1_FFDB25_SHIFT            (25)
#define CAN_F1FB1_FFDB25(x)               (x << 25)
#define CAN_F1FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F1FB1_FFDB26_SHIFT            (26)
#define CAN_F1FB1_FFDB26(x)               (x << 26)
#define CAN_F1FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F1FB1_FFDB27_SHIFT            (27)
#define CAN_F1FB1_FFDB27(x)               (x << 27)
#define CAN_F1FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F1FB1_FFDB28_SHIFT            (28)
#define CAN_F1FB1_FFDB28(x)               (x << 28)
#define CAN_F1FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F1FB1_FFDB29_SHIFT            (29)
#define CAN_F1FB1_FFDB29(x)               (x << 29)
#define CAN_F1FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F1FB1_FFDB30_SHIFT            (30)
#define CAN_F1FB1_FFDB30(x)               (x << 30)
#define CAN_F1FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F1FB1_FFDB31_SHIFT            (31)
#define CAN_F1FB1_FFDB31(x)               (x << 31)
#define CAN_F1FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F1FB2_FFDB0_SHIFT             (0)
#define CAN_F1FB2_FFDB0(x)                (x << 0)
#define CAN_F1FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F1FB2_FFDB1_SHIFT             (1)
#define CAN_F1FB2_FFDB1(x)                (x << 1)
#define CAN_F1FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F1FB2_FFDB2_SHIFT             (2)
#define CAN_F1FB2_FFDB2(x)                (x << 2)
#define CAN_F1FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F1FB2_FFDB3_SHIFT             (3)
#define CAN_F1FB2_FFDB3(x)                (x << 3)
#define CAN_F1FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F1FB2_FFDB4_SHIFT             (4)
#define CAN_F1FB2_FFDB4(x)                (x << 4)
#define CAN_F1FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F1FB2_FFDB5_SHIFT             (5)
#define CAN_F1FB2_FFDB5(x)                (x << 5)
#define CAN_F1FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F1FB2_FFDB6_SHIFT             (6)
#define CAN_F1FB2_FFDB6(x)                (x << 6)
#define CAN_F1FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F1FB2_FFDB7_SHIFT             (7)
#define CAN_F1FB2_FFDB7(x)                (x << 7)
#define CAN_F1FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F1FB2_FFDB8_SHIFT             (8)
#define CAN_F1FB2_FFDB8(x)                (x << 8)
#define CAN_F1FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F1FB2_FFDB9_SHIFT             (9)
#define CAN_F1FB2_FFDB9(x)                (x << 9)
#define CAN_F1FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F1FB2_FFDB10_SHIFT            (10)
#define CAN_F1FB2_FFDB10(x)               (x << 10)
#define CAN_F1FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F1FB2_FFDB11_SHIFT            (11)
#define CAN_F1FB2_FFDB11(x)               (x << 11)
#define CAN_F1FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F1FB2_FFDB12_SHIFT            (12)
#define CAN_F1FB2_FFDB12(x)               (x << 12)
#define CAN_F1FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F1FB2_FFDB13_SHIFT            (13)
#define CAN_F1FB2_FFDB13(x)               (x << 13)
#define CAN_F1FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F1FB2_FFDB14_SHIFT            (14)
#define CAN_F1FB2_FFDB14(x)               (x << 14)
#define CAN_F1FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F1FB2_FFDB15_SHIFT            (15)
#define CAN_F1FB2_FFDB15(x)               (x << 15)
#define CAN_F1FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F1FB2_FFDB16_SHIFT            (16)
#define CAN_F1FB2_FFDB16(x)               (x << 16)
#define CAN_F1FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F1FB2_FFDB17_SHIFT            (17)
#define CAN_F1FB2_FFDB17(x)               (x << 17)
#define CAN_F1FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F1FB2_FFDB18_SHIFT            (18)
#define CAN_F1FB2_FFDB18(x)               (x << 18)
#define CAN_F1FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F1FB2_FFDB19_SHIFT            (19)
#define CAN_F1FB2_FFDB19(x)               (x << 19)
#define CAN_F1FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F1FB2_FFDB20_SHIFT            (20)
#define CAN_F1FB2_FFDB20(x)               (x << 20)
#define CAN_F1FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F1FB2_FFDB21_SHIFT            (21)
#define CAN_F1FB2_FFDB21(x)               (x << 21)
#define CAN_F1FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F1FB2_FFDB22_SHIFT            (22)
#define CAN_F1FB2_FFDB22(x)               (x << 22)
#define CAN_F1FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F1FB2_FFDB23_SHIFT            (23)
#define CAN_F1FB2_FFDB23(x)               (x << 23)
#define CAN_F1FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F1FB2_FFDB24_SHIFT            (24)
#define CAN_F1FB2_FFDB24(x)               (x << 24)
#define CAN_F1FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F1FB2_FFDB25_SHIFT            (25)
#define CAN_F1FB2_FFDB25(x)               (x << 25)
#define CAN_F1FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F1FB2_FFDB26_SHIFT            (26)
#define CAN_F1FB2_FFDB26(x)               (x << 26)
#define CAN_F1FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F1FB2_FFDB27_SHIFT            (27)
#define CAN_F1FB2_FFDB27(x)               (x << 27)
#define CAN_F1FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F1FB2_FFDB28_SHIFT            (28)
#define CAN_F1FB2_FFDB28(x)               (x << 28)
#define CAN_F1FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F1FB2_FFDB29_SHIFT            (29)
#define CAN_F1FB2_FFDB29(x)               (x << 29)
#define CAN_F1FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F1FB2_FFDB30_SHIFT            (30)
#define CAN_F1FB2_FFDB30(x)               (x << 30)
#define CAN_F1FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F1FB2_FFDB31_SHIFT            (31)
#define CAN_F1FB2_FFDB31(x)               (x << 31)
#define CAN_F2FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F2FB1_FFDB0_SHIFT             (0)
#define CAN_F2FB1_FFDB0(x)                (x << 0)
#define CAN_F2FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F2FB1_FFDB1_SHIFT             (1)
#define CAN_F2FB1_FFDB1(x)                (x << 1)
#define CAN_F2FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F2FB1_FFDB2_SHIFT             (2)
#define CAN_F2FB1_FFDB2(x)                (x << 2)
#define CAN_F2FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F2FB1_FFDB3_SHIFT             (3)
#define CAN_F2FB1_FFDB3(x)                (x << 3)
#define CAN_F2FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F2FB1_FFDB4_SHIFT             (4)
#define CAN_F2FB1_FFDB4(x)                (x << 4)
#define CAN_F2FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F2FB1_FFDB5_SHIFT             (5)
#define CAN_F2FB1_FFDB5(x)                (x << 5)
#define CAN_F2FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F2FB1_FFDB6_SHIFT             (6)
#define CAN_F2FB1_FFDB6(x)                (x << 6)
#define CAN_F2FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F2FB1_FFDB7_SHIFT             (7)
#define CAN_F2FB1_FFDB7(x)                (x << 7)
#define CAN_F2FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F2FB1_FFDB8_SHIFT             (8)
#define CAN_F2FB1_FFDB8(x)                (x << 8)
#define CAN_F2FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F2FB1_FFDB9_SHIFT             (9)
#define CAN_F2FB1_FFDB9(x)                (x << 9)
#define CAN_F2FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F2FB1_FFDB10_SHIFT            (10)
#define CAN_F2FB1_FFDB10(x)               (x << 10)
#define CAN_F2FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F2FB1_FFDB11_SHIFT            (11)
#define CAN_F2FB1_FFDB11(x)               (x << 11)
#define CAN_F2FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F2FB1_FFDB12_SHIFT            (12)
#define CAN_F2FB1_FFDB12(x)               (x << 12)
#define CAN_F2FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F2FB1_FFDB13_SHIFT            (13)
#define CAN_F2FB1_FFDB13(x)               (x << 13)
#define CAN_F2FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F2FB1_FFDB14_SHIFT            (14)
#define CAN_F2FB1_FFDB14(x)               (x << 14)
#define CAN_F2FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F2FB1_FFDB15_SHIFT            (15)
#define CAN_F2FB1_FFDB15(x)               (x << 15)
#define CAN_F2FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F2FB1_FFDB16_SHIFT            (16)
#define CAN_F2FB1_FFDB16(x)               (x << 16)
#define CAN_F2FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F2FB1_FFDB17_SHIFT            (17)
#define CAN_F2FB1_FFDB17(x)               (x << 17)
#define CAN_F2FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F2FB1_FFDB18_SHIFT            (18)
#define CAN_F2FB1_FFDB18(x)               (x << 18)
#define CAN_F2FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F2FB1_FFDB19_SHIFT            (19)
#define CAN_F2FB1_FFDB19(x)               (x << 19)
#define CAN_F2FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F2FB1_FFDB20_SHIFT            (20)
#define CAN_F2FB1_FFDB20(x)               (x << 20)
#define CAN_F2FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F2FB1_FFDB21_SHIFT            (21)
#define CAN_F2FB1_FFDB21(x)               (x << 21)
#define CAN_F2FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F2FB1_FFDB22_SHIFT            (22)
#define CAN_F2FB1_FFDB22(x)               (x << 22)
#define CAN_F2FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F2FB1_FFDB23_SHIFT            (23)
#define CAN_F2FB1_FFDB23(x)               (x << 23)
#define CAN_F2FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F2FB1_FFDB24_SHIFT            (24)
#define CAN_F2FB1_FFDB24(x)               (x << 24)
#define CAN_F2FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F2FB1_FFDB25_SHIFT            (25)
#define CAN_F2FB1_FFDB25(x)               (x << 25)
#define CAN_F2FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F2FB1_FFDB26_SHIFT            (26)
#define CAN_F2FB1_FFDB26(x)               (x << 26)
#define CAN_F2FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F2FB1_FFDB27_SHIFT            (27)
#define CAN_F2FB1_FFDB27(x)               (x << 27)
#define CAN_F2FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F2FB1_FFDB28_SHIFT            (28)
#define CAN_F2FB1_FFDB28(x)               (x << 28)
#define CAN_F2FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F2FB1_FFDB29_SHIFT            (29)
#define CAN_F2FB1_FFDB29(x)               (x << 29)
#define CAN_F2FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F2FB1_FFDB30_SHIFT            (30)
#define CAN_F2FB1_FFDB30(x)               (x << 30)
#define CAN_F2FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F2FB1_FFDB31_SHIFT            (31)
#define CAN_F2FB1_FFDB31(x)               (x << 31)
#define CAN_F2FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F2FB2_FFDB0_SHIFT             (0)
#define CAN_F2FB2_FFDB0(x)                (x << 0)
#define CAN_F2FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F2FB2_FFDB1_SHIFT             (1)
#define CAN_F2FB2_FFDB1(x)                (x << 1)
#define CAN_F2FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F2FB2_FFDB2_SHIFT             (2)
#define CAN_F2FB2_FFDB2(x)                (x << 2)
#define CAN_F2FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F2FB2_FFDB3_SHIFT             (3)
#define CAN_F2FB2_FFDB3(x)                (x << 3)
#define CAN_F2FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F2FB2_FFDB4_SHIFT             (4)
#define CAN_F2FB2_FFDB4(x)                (x << 4)
#define CAN_F2FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F2FB2_FFDB5_SHIFT             (5)
#define CAN_F2FB2_FFDB5(x)                (x << 5)
#define CAN_F2FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F2FB2_FFDB6_SHIFT             (6)
#define CAN_F2FB2_FFDB6(x)                (x << 6)
#define CAN_F2FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F2FB2_FFDB7_SHIFT             (7)
#define CAN_F2FB2_FFDB7(x)                (x << 7)
#define CAN_F2FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F2FB2_FFDB8_SHIFT             (8)
#define CAN_F2FB2_FFDB8(x)                (x << 8)
#define CAN_F2FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F2FB2_FFDB9_SHIFT             (9)
#define CAN_F2FB2_FFDB9(x)                (x << 9)
#define CAN_F2FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F2FB2_FFDB10_SHIFT            (10)
#define CAN_F2FB2_FFDB10(x)               (x << 10)
#define CAN_F2FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F2FB2_FFDB11_SHIFT            (11)
#define CAN_F2FB2_FFDB11(x)               (x << 11)
#define CAN_F2FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F2FB2_FFDB12_SHIFT            (12)
#define CAN_F2FB2_FFDB12(x)               (x << 12)
#define CAN_F2FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F2FB2_FFDB13_SHIFT            (13)
#define CAN_F2FB2_FFDB13(x)               (x << 13)
#define CAN_F2FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F2FB2_FFDB14_SHIFT            (14)
#define CAN_F2FB2_FFDB14(x)               (x << 14)
#define CAN_F2FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F2FB2_FFDB15_SHIFT            (15)
#define CAN_F2FB2_FFDB15(x)               (x << 15)
#define CAN_F2FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F2FB2_FFDB16_SHIFT            (16)
#define CAN_F2FB2_FFDB16(x)               (x << 16)
#define CAN_F2FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F2FB2_FFDB17_SHIFT            (17)
#define CAN_F2FB2_FFDB17(x)               (x << 17)
#define CAN_F2FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F2FB2_FFDB18_SHIFT            (18)
#define CAN_F2FB2_FFDB18(x)               (x << 18)
#define CAN_F2FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F2FB2_FFDB19_SHIFT            (19)
#define CAN_F2FB2_FFDB19(x)               (x << 19)
#define CAN_F2FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F2FB2_FFDB20_SHIFT            (20)
#define CAN_F2FB2_FFDB20(x)               (x << 20)
#define CAN_F2FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F2FB2_FFDB21_SHIFT            (21)
#define CAN_F2FB2_FFDB21(x)               (x << 21)
#define CAN_F2FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F2FB2_FFDB22_SHIFT            (22)
#define CAN_F2FB2_FFDB22(x)               (x << 22)
#define CAN_F2FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F2FB2_FFDB23_SHIFT            (23)
#define CAN_F2FB2_FFDB23(x)               (x << 23)
#define CAN_F2FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F2FB2_FFDB24_SHIFT            (24)
#define CAN_F2FB2_FFDB24(x)               (x << 24)
#define CAN_F2FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F2FB2_FFDB25_SHIFT            (25)
#define CAN_F2FB2_FFDB25(x)               (x << 25)
#define CAN_F2FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F2FB2_FFDB26_SHIFT            (26)
#define CAN_F2FB2_FFDB26(x)               (x << 26)
#define CAN_F2FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F2FB2_FFDB27_SHIFT            (27)
#define CAN_F2FB2_FFDB27(x)               (x << 27)
#define CAN_F2FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F2FB2_FFDB28_SHIFT            (28)
#define CAN_F2FB2_FFDB28(x)               (x << 28)
#define CAN_F2FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F2FB2_FFDB29_SHIFT            (29)
#define CAN_F2FB2_FFDB29(x)               (x << 29)
#define CAN_F2FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F2FB2_FFDB30_SHIFT            (30)
#define CAN_F2FB2_FFDB30(x)               (x << 30)
#define CAN_F2FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F2FB2_FFDB31_SHIFT            (31)
#define CAN_F2FB2_FFDB31(x)               (x << 31)
#define CAN_F3FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F3FB1_FFDB0_SHIFT             (0)
#define CAN_F3FB1_FFDB0(x)                (x << 0)
#define CAN_F3FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F3FB1_FFDB1_SHIFT             (1)
#define CAN_F3FB1_FFDB1(x)                (x << 1)
#define CAN_F3FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F3FB1_FFDB2_SHIFT             (2)
#define CAN_F3FB1_FFDB2(x)                (x << 2)
#define CAN_F3FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F3FB1_FFDB3_SHIFT             (3)
#define CAN_F3FB1_FFDB3(x)                (x << 3)
#define CAN_F3FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F3FB1_FFDB4_SHIFT             (4)
#define CAN_F3FB1_FFDB4(x)                (x << 4)
#define CAN_F3FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F3FB1_FFDB5_SHIFT             (5)
#define CAN_F3FB1_FFDB5(x)                (x << 5)
#define CAN_F3FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F3FB1_FFDB6_SHIFT             (6)
#define CAN_F3FB1_FFDB6(x)                (x << 6)
#define CAN_F3FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F3FB1_FFDB7_SHIFT             (7)
#define CAN_F3FB1_FFDB7(x)                (x << 7)
#define CAN_F3FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F3FB1_FFDB8_SHIFT             (8)
#define CAN_F3FB1_FFDB8(x)                (x << 8)
#define CAN_F3FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F3FB1_FFDB9_SHIFT             (9)
#define CAN_F3FB1_FFDB9(x)                (x << 9)
#define CAN_F3FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F3FB1_FFDB10_SHIFT            (10)
#define CAN_F3FB1_FFDB10(x)               (x << 10)
#define CAN_F3FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F3FB1_FFDB11_SHIFT            (11)
#define CAN_F3FB1_FFDB11(x)               (x << 11)
#define CAN_F3FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F3FB1_FFDB12_SHIFT            (12)
#define CAN_F3FB1_FFDB12(x)               (x << 12)
#define CAN_F3FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F3FB1_FFDB13_SHIFT            (13)
#define CAN_F3FB1_FFDB13(x)               (x << 13)
#define CAN_F3FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F3FB1_FFDB14_SHIFT            (14)
#define CAN_F3FB1_FFDB14(x)               (x << 14)
#define CAN_F3FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F3FB1_FFDB15_SHIFT            (15)
#define CAN_F3FB1_FFDB15(x)               (x << 15)
#define CAN_F3FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F3FB1_FFDB16_SHIFT            (16)
#define CAN_F3FB1_FFDB16(x)               (x << 16)
#define CAN_F3FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F3FB1_FFDB17_SHIFT            (17)
#define CAN_F3FB1_FFDB17(x)               (x << 17)
#define CAN_F3FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F3FB1_FFDB18_SHIFT            (18)
#define CAN_F3FB1_FFDB18(x)               (x << 18)
#define CAN_F3FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F3FB1_FFDB19_SHIFT            (19)
#define CAN_F3FB1_FFDB19(x)               (x << 19)
#define CAN_F3FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F3FB1_FFDB20_SHIFT            (20)
#define CAN_F3FB1_FFDB20(x)               (x << 20)
#define CAN_F3FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F3FB1_FFDB21_SHIFT            (21)
#define CAN_F3FB1_FFDB21(x)               (x << 21)
#define CAN_F3FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F3FB1_FFDB22_SHIFT            (22)
#define CAN_F3FB1_FFDB22(x)               (x << 22)
#define CAN_F3FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F3FB1_FFDB23_SHIFT            (23)
#define CAN_F3FB1_FFDB23(x)               (x << 23)
#define CAN_F3FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F3FB1_FFDB24_SHIFT            (24)
#define CAN_F3FB1_FFDB24(x)               (x << 24)
#define CAN_F3FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F3FB1_FFDB25_SHIFT            (25)
#define CAN_F3FB1_FFDB25(x)               (x << 25)
#define CAN_F3FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F3FB1_FFDB26_SHIFT            (26)
#define CAN_F3FB1_FFDB26(x)               (x << 26)
#define CAN_F3FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F3FB1_FFDB27_SHIFT            (27)
#define CAN_F3FB1_FFDB27(x)               (x << 27)
#define CAN_F3FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F3FB1_FFDB28_SHIFT            (28)
#define CAN_F3FB1_FFDB28(x)               (x << 28)
#define CAN_F3FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F3FB1_FFDB29_SHIFT            (29)
#define CAN_F3FB1_FFDB29(x)               (x << 29)
#define CAN_F3FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F3FB1_FFDB30_SHIFT            (30)
#define CAN_F3FB1_FFDB30(x)               (x << 30)
#define CAN_F3FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F3FB1_FFDB31_SHIFT            (31)
#define CAN_F3FB1_FFDB31(x)               (x << 31)
#define CAN_F3FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F3FB2_FFDB0_SHIFT             (0)
#define CAN_F3FB2_FFDB0(x)                (x << 0)
#define CAN_F3FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F3FB2_FFDB1_SHIFT             (1)
#define CAN_F3FB2_FFDB1(x)                (x << 1)
#define CAN_F3FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F3FB2_FFDB2_SHIFT             (2)
#define CAN_F3FB2_FFDB2(x)                (x << 2)
#define CAN_F3FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F3FB2_FFDB3_SHIFT             (3)
#define CAN_F3FB2_FFDB3(x)                (x << 3)
#define CAN_F3FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F3FB2_FFDB4_SHIFT             (4)
#define CAN_F3FB2_FFDB4(x)                (x << 4)
#define CAN_F3FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F3FB2_FFDB5_SHIFT             (5)
#define CAN_F3FB2_FFDB5(x)                (x << 5)
#define CAN_F3FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F3FB2_FFDB6_SHIFT             (6)
#define CAN_F3FB2_FFDB6(x)                (x << 6)
#define CAN_F3FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F3FB2_FFDB7_SHIFT             (7)
#define CAN_F3FB2_FFDB7(x)                (x << 7)
#define CAN_F3FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F3FB2_FFDB8_SHIFT             (8)
#define CAN_F3FB2_FFDB8(x)                (x << 8)
#define CAN_F3FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F3FB2_FFDB9_SHIFT             (9)
#define CAN_F3FB2_FFDB9(x)                (x << 9)
#define CAN_F3FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F3FB2_FFDB10_SHIFT            (10)
#define CAN_F3FB2_FFDB10(x)               (x << 10)
#define CAN_F3FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F3FB2_FFDB11_SHIFT            (11)
#define CAN_F3FB2_FFDB11(x)               (x << 11)
#define CAN_F3FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F3FB2_FFDB12_SHIFT            (12)
#define CAN_F3FB2_FFDB12(x)               (x << 12)
#define CAN_F3FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F3FB2_FFDB13_SHIFT            (13)
#define CAN_F3FB2_FFDB13(x)               (x << 13)
#define CAN_F3FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F3FB2_FFDB14_SHIFT            (14)
#define CAN_F3FB2_FFDB14(x)               (x << 14)
#define CAN_F3FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F3FB2_FFDB15_SHIFT            (15)
#define CAN_F3FB2_FFDB15(x)               (x << 15)
#define CAN_F3FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F3FB2_FFDB16_SHIFT            (16)
#define CAN_F3FB2_FFDB16(x)               (x << 16)
#define CAN_F3FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F3FB2_FFDB17_SHIFT            (17)
#define CAN_F3FB2_FFDB17(x)               (x << 17)
#define CAN_F3FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F3FB2_FFDB18_SHIFT            (18)
#define CAN_F3FB2_FFDB18(x)               (x << 18)
#define CAN_F3FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F3FB2_FFDB19_SHIFT            (19)
#define CAN_F3FB2_FFDB19(x)               (x << 19)
#define CAN_F3FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F3FB2_FFDB20_SHIFT            (20)
#define CAN_F3FB2_FFDB20(x)               (x << 20)
#define CAN_F3FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F3FB2_FFDB21_SHIFT            (21)
#define CAN_F3FB2_FFDB21(x)               (x << 21)
#define CAN_F3FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F3FB2_FFDB22_SHIFT            (22)
#define CAN_F3FB2_FFDB22(x)               (x << 22)
#define CAN_F3FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F3FB2_FFDB23_SHIFT            (23)
#define CAN_F3FB2_FFDB23(x)               (x << 23)
#define CAN_F3FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F3FB2_FFDB24_SHIFT            (24)
#define CAN_F3FB2_FFDB24(x)               (x << 24)
#define CAN_F3FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F3FB2_FFDB25_SHIFT            (25)
#define CAN_F3FB2_FFDB25(x)               (x << 25)
#define CAN_F3FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F3FB2_FFDB26_SHIFT            (26)
#define CAN_F3FB2_FFDB26(x)               (x << 26)
#define CAN_F3FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F3FB2_FFDB27_SHIFT            (27)
#define CAN_F3FB2_FFDB27(x)               (x << 27)
#define CAN_F3FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F3FB2_FFDB28_SHIFT            (28)
#define CAN_F3FB2_FFDB28(x)               (x << 28)
#define CAN_F3FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F3FB2_FFDB29_SHIFT            (29)
#define CAN_F3FB2_FFDB29(x)               (x << 29)
#define CAN_F3FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F3FB2_FFDB30_SHIFT            (30)
#define CAN_F3FB2_FFDB30(x)               (x << 30)
#define CAN_F3FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F3FB2_FFDB31_SHIFT            (31)
#define CAN_F3FB2_FFDB31(x)               (x << 31)
#define CAN_F4FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F4FB1_FFDB0_SHIFT             (0)
#define CAN_F4FB1_FFDB0(x)                (x << 0)
#define CAN_F4FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F4FB1_FFDB1_SHIFT             (1)
#define CAN_F4FB1_FFDB1(x)                (x << 1)
#define CAN_F4FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F4FB1_FFDB2_SHIFT             (2)
#define CAN_F4FB1_FFDB2(x)                (x << 2)
#define CAN_F4FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F4FB1_FFDB3_SHIFT             (3)
#define CAN_F4FB1_FFDB3(x)                (x << 3)
#define CAN_F4FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F4FB1_FFDB4_SHIFT             (4)
#define CAN_F4FB1_FFDB4(x)                (x << 4)
#define CAN_F4FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F4FB1_FFDB5_SHIFT             (5)
#define CAN_F4FB1_FFDB5(x)                (x << 5)
#define CAN_F4FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F4FB1_FFDB6_SHIFT             (6)
#define CAN_F4FB1_FFDB6(x)                (x << 6)
#define CAN_F4FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F4FB1_FFDB7_SHIFT             (7)
#define CAN_F4FB1_FFDB7(x)                (x << 7)
#define CAN_F4FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F4FB1_FFDB8_SHIFT             (8)
#define CAN_F4FB1_FFDB8(x)                (x << 8)
#define CAN_F4FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F4FB1_FFDB9_SHIFT             (9)
#define CAN_F4FB1_FFDB9(x)                (x << 9)
#define CAN_F4FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F4FB1_FFDB10_SHIFT            (10)
#define CAN_F4FB1_FFDB10(x)               (x << 10)
#define CAN_F4FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F4FB1_FFDB11_SHIFT            (11)
#define CAN_F4FB1_FFDB11(x)               (x << 11)
#define CAN_F4FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F4FB1_FFDB12_SHIFT            (12)
#define CAN_F4FB1_FFDB12(x)               (x << 12)
#define CAN_F4FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F4FB1_FFDB13_SHIFT            (13)
#define CAN_F4FB1_FFDB13(x)               (x << 13)
#define CAN_F4FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F4FB1_FFDB14_SHIFT            (14)
#define CAN_F4FB1_FFDB14(x)               (x << 14)
#define CAN_F4FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F4FB1_FFDB15_SHIFT            (15)
#define CAN_F4FB1_FFDB15(x)               (x << 15)
#define CAN_F4FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F4FB1_FFDB16_SHIFT            (16)
#define CAN_F4FB1_FFDB16(x)               (x << 16)
#define CAN_F4FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F4FB1_FFDB17_SHIFT            (17)
#define CAN_F4FB1_FFDB17(x)               (x << 17)
#define CAN_F4FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F4FB1_FFDB18_SHIFT            (18)
#define CAN_F4FB1_FFDB18(x)               (x << 18)
#define CAN_F4FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F4FB1_FFDB19_SHIFT            (19)
#define CAN_F4FB1_FFDB19(x)               (x << 19)
#define CAN_F4FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F4FB1_FFDB20_SHIFT            (20)
#define CAN_F4FB1_FFDB20(x)               (x << 20)
#define CAN_F4FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F4FB1_FFDB21_SHIFT            (21)
#define CAN_F4FB1_FFDB21(x)               (x << 21)
#define CAN_F4FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F4FB1_FFDB22_SHIFT            (22)
#define CAN_F4FB1_FFDB22(x)               (x << 22)
#define CAN_F4FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F4FB1_FFDB23_SHIFT            (23)
#define CAN_F4FB1_FFDB23(x)               (x << 23)
#define CAN_F4FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F4FB1_FFDB24_SHIFT            (24)
#define CAN_F4FB1_FFDB24(x)               (x << 24)
#define CAN_F4FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F4FB1_FFDB25_SHIFT            (25)
#define CAN_F4FB1_FFDB25(x)               (x << 25)
#define CAN_F4FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F4FB1_FFDB26_SHIFT            (26)
#define CAN_F4FB1_FFDB26(x)               (x << 26)
#define CAN_F4FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F4FB1_FFDB27_SHIFT            (27)
#define CAN_F4FB1_FFDB27(x)               (x << 27)
#define CAN_F4FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F4FB1_FFDB28_SHIFT            (28)
#define CAN_F4FB1_FFDB28(x)               (x << 28)
#define CAN_F4FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F4FB1_FFDB29_SHIFT            (29)
#define CAN_F4FB1_FFDB29(x)               (x << 29)
#define CAN_F4FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F4FB1_FFDB30_SHIFT            (30)
#define CAN_F4FB1_FFDB30(x)               (x << 30)
#define CAN_F4FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F4FB1_FFDB31_SHIFT            (31)
#define CAN_F4FB1_FFDB31(x)               (x << 31)
#define CAN_F4FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F4FB2_FFDB0_SHIFT             (0)
#define CAN_F4FB2_FFDB0(x)                (x << 0)
#define CAN_F4FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F4FB2_FFDB1_SHIFT             (1)
#define CAN_F4FB2_FFDB1(x)                (x << 1)
#define CAN_F4FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F4FB2_FFDB2_SHIFT             (2)
#define CAN_F4FB2_FFDB2(x)                (x << 2)
#define CAN_F4FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F4FB2_FFDB3_SHIFT             (3)
#define CAN_F4FB2_FFDB3(x)                (x << 3)
#define CAN_F4FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F4FB2_FFDB4_SHIFT             (4)
#define CAN_F4FB2_FFDB4(x)                (x << 4)
#define CAN_F4FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F4FB2_FFDB5_SHIFT             (5)
#define CAN_F4FB2_FFDB5(x)                (x << 5)
#define CAN_F4FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F4FB2_FFDB6_SHIFT             (6)
#define CAN_F4FB2_FFDB6(x)                (x << 6)
#define CAN_F4FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F4FB2_FFDB7_SHIFT             (7)
#define CAN_F4FB2_FFDB7(x)                (x << 7)
#define CAN_F4FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F4FB2_FFDB8_SHIFT             (8)
#define CAN_F4FB2_FFDB8(x)                (x << 8)
#define CAN_F4FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F4FB2_FFDB9_SHIFT             (9)
#define CAN_F4FB2_FFDB9(x)                (x << 9)
#define CAN_F4FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F4FB2_FFDB10_SHIFT            (10)
#define CAN_F4FB2_FFDB10(x)               (x << 10)
#define CAN_F4FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F4FB2_FFDB11_SHIFT            (11)
#define CAN_F4FB2_FFDB11(x)               (x << 11)
#define CAN_F4FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F4FB2_FFDB12_SHIFT            (12)
#define CAN_F4FB2_FFDB12(x)               (x << 12)
#define CAN_F4FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F4FB2_FFDB13_SHIFT            (13)
#define CAN_F4FB2_FFDB13(x)               (x << 13)
#define CAN_F4FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F4FB2_FFDB14_SHIFT            (14)
#define CAN_F4FB2_FFDB14(x)               (x << 14)
#define CAN_F4FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F4FB2_FFDB15_SHIFT            (15)
#define CAN_F4FB2_FFDB15(x)               (x << 15)
#define CAN_F4FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F4FB2_FFDB16_SHIFT            (16)
#define CAN_F4FB2_FFDB16(x)               (x << 16)
#define CAN_F4FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F4FB2_FFDB17_SHIFT            (17)
#define CAN_F4FB2_FFDB17(x)               (x << 17)
#define CAN_F4FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F4FB2_FFDB18_SHIFT            (18)
#define CAN_F4FB2_FFDB18(x)               (x << 18)
#define CAN_F4FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F4FB2_FFDB19_SHIFT            (19)
#define CAN_F4FB2_FFDB19(x)               (x << 19)
#define CAN_F4FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F4FB2_FFDB20_SHIFT            (20)
#define CAN_F4FB2_FFDB20(x)               (x << 20)
#define CAN_F4FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F4FB2_FFDB21_SHIFT            (21)
#define CAN_F4FB2_FFDB21(x)               (x << 21)
#define CAN_F4FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F4FB2_FFDB22_SHIFT            (22)
#define CAN_F4FB2_FFDB22(x)               (x << 22)
#define CAN_F4FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F4FB2_FFDB23_SHIFT            (23)
#define CAN_F4FB2_FFDB23(x)               (x << 23)
#define CAN_F4FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F4FB2_FFDB24_SHIFT            (24)
#define CAN_F4FB2_FFDB24(x)               (x << 24)
#define CAN_F4FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F4FB2_FFDB25_SHIFT            (25)
#define CAN_F4FB2_FFDB25(x)               (x << 25)
#define CAN_F4FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F4FB2_FFDB26_SHIFT            (26)
#define CAN_F4FB2_FFDB26(x)               (x << 26)
#define CAN_F4FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F4FB2_FFDB27_SHIFT            (27)
#define CAN_F4FB2_FFDB27(x)               (x << 27)
#define CAN_F4FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F4FB2_FFDB28_SHIFT            (28)
#define CAN_F4FB2_FFDB28(x)               (x << 28)
#define CAN_F4FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F4FB2_FFDB29_SHIFT            (29)
#define CAN_F4FB2_FFDB29(x)               (x << 29)
#define CAN_F4FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F4FB2_FFDB30_SHIFT            (30)
#define CAN_F4FB2_FFDB30(x)               (x << 30)
#define CAN_F4FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F4FB2_FFDB31_SHIFT            (31)
#define CAN_F4FB2_FFDB31(x)               (x << 31)
#define CAN_F5FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F5FB1_FFDB0_SHIFT             (0)
#define CAN_F5FB1_FFDB0(x)                (x << 0)
#define CAN_F5FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F5FB1_FFDB1_SHIFT             (1)
#define CAN_F5FB1_FFDB1(x)                (x << 1)
#define CAN_F5FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F5FB1_FFDB2_SHIFT             (2)
#define CAN_F5FB1_FFDB2(x)                (x << 2)
#define CAN_F5FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F5FB1_FFDB3_SHIFT             (3)
#define CAN_F5FB1_FFDB3(x)                (x << 3)
#define CAN_F5FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F5FB1_FFDB4_SHIFT             (4)
#define CAN_F5FB1_FFDB4(x)                (x << 4)
#define CAN_F5FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F5FB1_FFDB5_SHIFT             (5)
#define CAN_F5FB1_FFDB5(x)                (x << 5)
#define CAN_F5FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F5FB1_FFDB6_SHIFT             (6)
#define CAN_F5FB1_FFDB6(x)                (x << 6)
#define CAN_F5FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F5FB1_FFDB7_SHIFT             (7)
#define CAN_F5FB1_FFDB7(x)                (x << 7)
#define CAN_F5FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F5FB1_FFDB8_SHIFT             (8)
#define CAN_F5FB1_FFDB8(x)                (x << 8)
#define CAN_F5FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F5FB1_FFDB9_SHIFT             (9)
#define CAN_F5FB1_FFDB9(x)                (x << 9)
#define CAN_F5FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F5FB1_FFDB10_SHIFT            (10)
#define CAN_F5FB1_FFDB10(x)               (x << 10)
#define CAN_F5FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F5FB1_FFDB11_SHIFT            (11)
#define CAN_F5FB1_FFDB11(x)               (x << 11)
#define CAN_F5FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F5FB1_FFDB12_SHIFT            (12)
#define CAN_F5FB1_FFDB12(x)               (x << 12)
#define CAN_F5FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F5FB1_FFDB13_SHIFT            (13)
#define CAN_F5FB1_FFDB13(x)               (x << 13)
#define CAN_F5FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F5FB1_FFDB14_SHIFT            (14)
#define CAN_F5FB1_FFDB14(x)               (x << 14)
#define CAN_F5FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F5FB1_FFDB15_SHIFT            (15)
#define CAN_F5FB1_FFDB15(x)               (x << 15)
#define CAN_F5FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F5FB1_FFDB16_SHIFT            (16)
#define CAN_F5FB1_FFDB16(x)               (x << 16)
#define CAN_F5FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F5FB1_FFDB17_SHIFT            (17)
#define CAN_F5FB1_FFDB17(x)               (x << 17)
#define CAN_F5FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F5FB1_FFDB18_SHIFT            (18)
#define CAN_F5FB1_FFDB18(x)               (x << 18)
#define CAN_F5FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F5FB1_FFDB19_SHIFT            (19)
#define CAN_F5FB1_FFDB19(x)               (x << 19)
#define CAN_F5FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F5FB1_FFDB20_SHIFT            (20)
#define CAN_F5FB1_FFDB20(x)               (x << 20)
#define CAN_F5FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F5FB1_FFDB21_SHIFT            (21)
#define CAN_F5FB1_FFDB21(x)               (x << 21)
#define CAN_F5FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F5FB1_FFDB22_SHIFT            (22)
#define CAN_F5FB1_FFDB22(x)               (x << 22)
#define CAN_F5FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F5FB1_FFDB23_SHIFT            (23)
#define CAN_F5FB1_FFDB23(x)               (x << 23)
#define CAN_F5FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F5FB1_FFDB24_SHIFT            (24)
#define CAN_F5FB1_FFDB24(x)               (x << 24)
#define CAN_F5FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F5FB1_FFDB25_SHIFT            (25)
#define CAN_F5FB1_FFDB25(x)               (x << 25)
#define CAN_F5FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F5FB1_FFDB26_SHIFT            (26)
#define CAN_F5FB1_FFDB26(x)               (x << 26)
#define CAN_F5FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F5FB1_FFDB27_SHIFT            (27)
#define CAN_F5FB1_FFDB27(x)               (x << 27)
#define CAN_F5FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F5FB1_FFDB28_SHIFT            (28)
#define CAN_F5FB1_FFDB28(x)               (x << 28)
#define CAN_F5FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F5FB1_FFDB29_SHIFT            (29)
#define CAN_F5FB1_FFDB29(x)               (x << 29)
#define CAN_F5FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F5FB1_FFDB30_SHIFT            (30)
#define CAN_F5FB1_FFDB30(x)               (x << 30)
#define CAN_F5FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F5FB1_FFDB31_SHIFT            (31)
#define CAN_F5FB1_FFDB31(x)               (x << 31)
#define CAN_F5FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F5FB2_FFDB0_SHIFT             (0)
#define CAN_F5FB2_FFDB0(x)                (x << 0)
#define CAN_F5FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F5FB2_FFDB1_SHIFT             (1)
#define CAN_F5FB2_FFDB1(x)                (x << 1)
#define CAN_F5FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F5FB2_FFDB2_SHIFT             (2)
#define CAN_F5FB2_FFDB2(x)                (x << 2)
#define CAN_F5FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F5FB2_FFDB3_SHIFT             (3)
#define CAN_F5FB2_FFDB3(x)                (x << 3)
#define CAN_F5FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F5FB2_FFDB4_SHIFT             (4)
#define CAN_F5FB2_FFDB4(x)                (x << 4)
#define CAN_F5FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F5FB2_FFDB5_SHIFT             (5)
#define CAN_F5FB2_FFDB5(x)                (x << 5)
#define CAN_F5FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F5FB2_FFDB6_SHIFT             (6)
#define CAN_F5FB2_FFDB6(x)                (x << 6)
#define CAN_F5FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F5FB2_FFDB7_SHIFT             (7)
#define CAN_F5FB2_FFDB7(x)                (x << 7)
#define CAN_F5FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F5FB2_FFDB8_SHIFT             (8)
#define CAN_F5FB2_FFDB8(x)                (x << 8)
#define CAN_F5FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F5FB2_FFDB9_SHIFT             (9)
#define CAN_F5FB2_FFDB9(x)                (x << 9)
#define CAN_F5FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F5FB2_FFDB10_SHIFT            (10)
#define CAN_F5FB2_FFDB10(x)               (x << 10)
#define CAN_F5FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F5FB2_FFDB11_SHIFT            (11)
#define CAN_F5FB2_FFDB11(x)               (x << 11)
#define CAN_F5FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F5FB2_FFDB12_SHIFT            (12)
#define CAN_F5FB2_FFDB12(x)               (x << 12)
#define CAN_F5FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F5FB2_FFDB13_SHIFT            (13)
#define CAN_F5FB2_FFDB13(x)               (x << 13)
#define CAN_F5FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F5FB2_FFDB14_SHIFT            (14)
#define CAN_F5FB2_FFDB14(x)               (x << 14)
#define CAN_F5FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F5FB2_FFDB15_SHIFT            (15)
#define CAN_F5FB2_FFDB15(x)               (x << 15)
#define CAN_F5FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F5FB2_FFDB16_SHIFT            (16)
#define CAN_F5FB2_FFDB16(x)               (x << 16)
#define CAN_F5FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F5FB2_FFDB17_SHIFT            (17)
#define CAN_F5FB2_FFDB17(x)               (x << 17)
#define CAN_F5FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F5FB2_FFDB18_SHIFT            (18)
#define CAN_F5FB2_FFDB18(x)               (x << 18)
#define CAN_F5FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F5FB2_FFDB19_SHIFT            (19)
#define CAN_F5FB2_FFDB19(x)               (x << 19)
#define CAN_F5FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F5FB2_FFDB20_SHIFT            (20)
#define CAN_F5FB2_FFDB20(x)               (x << 20)
#define CAN_F5FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F5FB2_FFDB21_SHIFT            (21)
#define CAN_F5FB2_FFDB21(x)               (x << 21)
#define CAN_F5FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F5FB2_FFDB22_SHIFT            (22)
#define CAN_F5FB2_FFDB22(x)               (x << 22)
#define CAN_F5FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F5FB2_FFDB23_SHIFT            (23)
#define CAN_F5FB2_FFDB23(x)               (x << 23)
#define CAN_F5FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F5FB2_FFDB24_SHIFT            (24)
#define CAN_F5FB2_FFDB24(x)               (x << 24)
#define CAN_F5FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F5FB2_FFDB25_SHIFT            (25)
#define CAN_F5FB2_FFDB25(x)               (x << 25)
#define CAN_F5FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F5FB2_FFDB26_SHIFT            (26)
#define CAN_F5FB2_FFDB26(x)               (x << 26)
#define CAN_F5FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F5FB2_FFDB27_SHIFT            (27)
#define CAN_F5FB2_FFDB27(x)               (x << 27)
#define CAN_F5FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F5FB2_FFDB28_SHIFT            (28)
#define CAN_F5FB2_FFDB28(x)               (x << 28)
#define CAN_F5FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F5FB2_FFDB29_SHIFT            (29)
#define CAN_F5FB2_FFDB29(x)               (x << 29)
#define CAN_F5FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F5FB2_FFDB30_SHIFT            (30)
#define CAN_F5FB2_FFDB30(x)               (x << 30)
#define CAN_F5FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F5FB2_FFDB31_SHIFT            (31)
#define CAN_F5FB2_FFDB31(x)               (x << 31)
#define CAN_F6FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F6FB1_FFDB0_SHIFT             (0)
#define CAN_F6FB1_FFDB0(x)                (x << 0)
#define CAN_F6FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F6FB1_FFDB1_SHIFT             (1)
#define CAN_F6FB1_FFDB1(x)                (x << 1)
#define CAN_F6FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F6FB1_FFDB2_SHIFT             (2)
#define CAN_F6FB1_FFDB2(x)                (x << 2)
#define CAN_F6FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F6FB1_FFDB3_SHIFT             (3)
#define CAN_F6FB1_FFDB3(x)                (x << 3)
#define CAN_F6FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F6FB1_FFDB4_SHIFT             (4)
#define CAN_F6FB1_FFDB4(x)                (x << 4)
#define CAN_F6FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F6FB1_FFDB5_SHIFT             (5)
#define CAN_F6FB1_FFDB5(x)                (x << 5)
#define CAN_F6FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F6FB1_FFDB6_SHIFT             (6)
#define CAN_F6FB1_FFDB6(x)                (x << 6)
#define CAN_F6FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F6FB1_FFDB7_SHIFT             (7)
#define CAN_F6FB1_FFDB7(x)                (x << 7)
#define CAN_F6FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F6FB1_FFDB8_SHIFT             (8)
#define CAN_F6FB1_FFDB8(x)                (x << 8)
#define CAN_F6FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F6FB1_FFDB9_SHIFT             (9)
#define CAN_F6FB1_FFDB9(x)                (x << 9)
#define CAN_F6FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F6FB1_FFDB10_SHIFT            (10)
#define CAN_F6FB1_FFDB10(x)               (x << 10)
#define CAN_F6FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F6FB1_FFDB11_SHIFT            (11)
#define CAN_F6FB1_FFDB11(x)               (x << 11)
#define CAN_F6FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F6FB1_FFDB12_SHIFT            (12)
#define CAN_F6FB1_FFDB12(x)               (x << 12)
#define CAN_F6FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F6FB1_FFDB13_SHIFT            (13)
#define CAN_F6FB1_FFDB13(x)               (x << 13)
#define CAN_F6FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F6FB1_FFDB14_SHIFT            (14)
#define CAN_F6FB1_FFDB14(x)               (x << 14)
#define CAN_F6FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F6FB1_FFDB15_SHIFT            (15)
#define CAN_F6FB1_FFDB15(x)               (x << 15)
#define CAN_F6FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F6FB1_FFDB16_SHIFT            (16)
#define CAN_F6FB1_FFDB16(x)               (x << 16)
#define CAN_F6FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F6FB1_FFDB17_SHIFT            (17)
#define CAN_F6FB1_FFDB17(x)               (x << 17)
#define CAN_F6FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F6FB1_FFDB18_SHIFT            (18)
#define CAN_F6FB1_FFDB18(x)               (x << 18)
#define CAN_F6FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F6FB1_FFDB19_SHIFT            (19)
#define CAN_F6FB1_FFDB19(x)               (x << 19)
#define CAN_F6FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F6FB1_FFDB20_SHIFT            (20)
#define CAN_F6FB1_FFDB20(x)               (x << 20)
#define CAN_F6FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F6FB1_FFDB21_SHIFT            (21)
#define CAN_F6FB1_FFDB21(x)               (x << 21)
#define CAN_F6FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F6FB1_FFDB22_SHIFT            (22)
#define CAN_F6FB1_FFDB22(x)               (x << 22)
#define CAN_F6FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F6FB1_FFDB23_SHIFT            (23)
#define CAN_F6FB1_FFDB23(x)               (x << 23)
#define CAN_F6FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F6FB1_FFDB24_SHIFT            (24)
#define CAN_F6FB1_FFDB24(x)               (x << 24)
#define CAN_F6FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F6FB1_FFDB25_SHIFT            (25)
#define CAN_F6FB1_FFDB25(x)               (x << 25)
#define CAN_F6FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F6FB1_FFDB26_SHIFT            (26)
#define CAN_F6FB1_FFDB26(x)               (x << 26)
#define CAN_F6FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F6FB1_FFDB27_SHIFT            (27)
#define CAN_F6FB1_FFDB27(x)               (x << 27)
#define CAN_F6FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F6FB1_FFDB28_SHIFT            (28)
#define CAN_F6FB1_FFDB28(x)               (x << 28)
#define CAN_F6FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F6FB1_FFDB29_SHIFT            (29)
#define CAN_F6FB1_FFDB29(x)               (x << 29)
#define CAN_F6FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F6FB1_FFDB30_SHIFT            (30)
#define CAN_F6FB1_FFDB30(x)               (x << 30)
#define CAN_F6FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F6FB1_FFDB31_SHIFT            (31)
#define CAN_F6FB1_FFDB31(x)               (x << 31)
#define CAN_F6FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F6FB2_FFDB0_SHIFT             (0)
#define CAN_F6FB2_FFDB0(x)                (x << 0)
#define CAN_F6FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F6FB2_FFDB1_SHIFT             (1)
#define CAN_F6FB2_FFDB1(x)                (x << 1)
#define CAN_F6FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F6FB2_FFDB2_SHIFT             (2)
#define CAN_F6FB2_FFDB2(x)                (x << 2)
#define CAN_F6FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F6FB2_FFDB3_SHIFT             (3)
#define CAN_F6FB2_FFDB3(x)                (x << 3)
#define CAN_F6FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F6FB2_FFDB4_SHIFT             (4)
#define CAN_F6FB2_FFDB4(x)                (x << 4)
#define CAN_F6FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F6FB2_FFDB5_SHIFT             (5)
#define CAN_F6FB2_FFDB5(x)                (x << 5)
#define CAN_F6FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F6FB2_FFDB6_SHIFT             (6)
#define CAN_F6FB2_FFDB6(x)                (x << 6)
#define CAN_F6FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F6FB2_FFDB7_SHIFT             (7)
#define CAN_F6FB2_FFDB7(x)                (x << 7)
#define CAN_F6FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F6FB2_FFDB8_SHIFT             (8)
#define CAN_F6FB2_FFDB8(x)                (x << 8)
#define CAN_F6FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F6FB2_FFDB9_SHIFT             (9)
#define CAN_F6FB2_FFDB9(x)                (x << 9)
#define CAN_F6FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F6FB2_FFDB10_SHIFT            (10)
#define CAN_F6FB2_FFDB10(x)               (x << 10)
#define CAN_F6FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F6FB2_FFDB11_SHIFT            (11)
#define CAN_F6FB2_FFDB11(x)               (x << 11)
#define CAN_F6FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F6FB2_FFDB12_SHIFT            (12)
#define CAN_F6FB2_FFDB12(x)               (x << 12)
#define CAN_F6FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F6FB2_FFDB13_SHIFT            (13)
#define CAN_F6FB2_FFDB13(x)               (x << 13)
#define CAN_F6FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F6FB2_FFDB14_SHIFT            (14)
#define CAN_F6FB2_FFDB14(x)               (x << 14)
#define CAN_F6FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F6FB2_FFDB15_SHIFT            (15)
#define CAN_F6FB2_FFDB15(x)               (x << 15)
#define CAN_F6FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F6FB2_FFDB16_SHIFT            (16)
#define CAN_F6FB2_FFDB16(x)               (x << 16)
#define CAN_F6FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F6FB2_FFDB17_SHIFT            (17)
#define CAN_F6FB2_FFDB17(x)               (x << 17)
#define CAN_F6FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F6FB2_FFDB18_SHIFT            (18)
#define CAN_F6FB2_FFDB18(x)               (x << 18)
#define CAN_F6FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F6FB2_FFDB19_SHIFT            (19)
#define CAN_F6FB2_FFDB19(x)               (x << 19)
#define CAN_F6FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F6FB2_FFDB20_SHIFT            (20)
#define CAN_F6FB2_FFDB20(x)               (x << 20)
#define CAN_F6FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F6FB2_FFDB21_SHIFT            (21)
#define CAN_F6FB2_FFDB21(x)               (x << 21)
#define CAN_F6FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F6FB2_FFDB22_SHIFT            (22)
#define CAN_F6FB2_FFDB22(x)               (x << 22)
#define CAN_F6FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F6FB2_FFDB23_SHIFT            (23)
#define CAN_F6FB2_FFDB23(x)               (x << 23)
#define CAN_F6FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F6FB2_FFDB24_SHIFT            (24)
#define CAN_F6FB2_FFDB24(x)               (x << 24)
#define CAN_F6FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F6FB2_FFDB25_SHIFT            (25)
#define CAN_F6FB2_FFDB25(x)               (x << 25)
#define CAN_F6FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F6FB2_FFDB26_SHIFT            (26)
#define CAN_F6FB2_FFDB26(x)               (x << 26)
#define CAN_F6FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F6FB2_FFDB27_SHIFT            (27)
#define CAN_F6FB2_FFDB27(x)               (x << 27)
#define CAN_F6FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F6FB2_FFDB28_SHIFT            (28)
#define CAN_F6FB2_FFDB28(x)               (x << 28)
#define CAN_F6FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F6FB2_FFDB29_SHIFT            (29)
#define CAN_F6FB2_FFDB29(x)               (x << 29)
#define CAN_F6FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F6FB2_FFDB30_SHIFT            (30)
#define CAN_F6FB2_FFDB30(x)               (x << 30)
#define CAN_F6FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F6FB2_FFDB31_SHIFT            (31)
#define CAN_F6FB2_FFDB31(x)               (x << 31)
#define CAN_F7FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F7FB1_FFDB0_SHIFT             (0)
#define CAN_F7FB1_FFDB0(x)                (x << 0)
#define CAN_F7FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F7FB1_FFDB1_SHIFT             (1)
#define CAN_F7FB1_FFDB1(x)                (x << 1)
#define CAN_F7FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F7FB1_FFDB2_SHIFT             (2)
#define CAN_F7FB1_FFDB2(x)                (x << 2)
#define CAN_F7FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F7FB1_FFDB3_SHIFT             (3)
#define CAN_F7FB1_FFDB3(x)                (x << 3)
#define CAN_F7FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F7FB1_FFDB4_SHIFT             (4)
#define CAN_F7FB1_FFDB4(x)                (x << 4)
#define CAN_F7FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F7FB1_FFDB5_SHIFT             (5)
#define CAN_F7FB1_FFDB5(x)                (x << 5)
#define CAN_F7FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F7FB1_FFDB6_SHIFT             (6)
#define CAN_F7FB1_FFDB6(x)                (x << 6)
#define CAN_F7FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F7FB1_FFDB7_SHIFT             (7)
#define CAN_F7FB1_FFDB7(x)                (x << 7)
#define CAN_F7FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F7FB1_FFDB8_SHIFT             (8)
#define CAN_F7FB1_FFDB8(x)                (x << 8)
#define CAN_F7FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F7FB1_FFDB9_SHIFT             (9)
#define CAN_F7FB1_FFDB9(x)                (x << 9)
#define CAN_F7FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F7FB1_FFDB10_SHIFT            (10)
#define CAN_F7FB1_FFDB10(x)               (x << 10)
#define CAN_F7FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F7FB1_FFDB11_SHIFT            (11)
#define CAN_F7FB1_FFDB11(x)               (x << 11)
#define CAN_F7FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F7FB1_FFDB12_SHIFT            (12)
#define CAN_F7FB1_FFDB12(x)               (x << 12)
#define CAN_F7FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F7FB1_FFDB13_SHIFT            (13)
#define CAN_F7FB1_FFDB13(x)               (x << 13)
#define CAN_F7FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F7FB1_FFDB14_SHIFT            (14)
#define CAN_F7FB1_FFDB14(x)               (x << 14)
#define CAN_F7FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F7FB1_FFDB15_SHIFT            (15)
#define CAN_F7FB1_FFDB15(x)               (x << 15)
#define CAN_F7FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F7FB1_FFDB16_SHIFT            (16)
#define CAN_F7FB1_FFDB16(x)               (x << 16)
#define CAN_F7FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F7FB1_FFDB17_SHIFT            (17)
#define CAN_F7FB1_FFDB17(x)               (x << 17)
#define CAN_F7FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F7FB1_FFDB18_SHIFT            (18)
#define CAN_F7FB1_FFDB18(x)               (x << 18)
#define CAN_F7FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F7FB1_FFDB19_SHIFT            (19)
#define CAN_F7FB1_FFDB19(x)               (x << 19)
#define CAN_F7FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F7FB1_FFDB20_SHIFT            (20)
#define CAN_F7FB1_FFDB20(x)               (x << 20)
#define CAN_F7FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F7FB1_FFDB21_SHIFT            (21)
#define CAN_F7FB1_FFDB21(x)               (x << 21)
#define CAN_F7FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F7FB1_FFDB22_SHIFT            (22)
#define CAN_F7FB1_FFDB22(x)               (x << 22)
#define CAN_F7FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F7FB1_FFDB23_SHIFT            (23)
#define CAN_F7FB1_FFDB23(x)               (x << 23)
#define CAN_F7FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F7FB1_FFDB24_SHIFT            (24)
#define CAN_F7FB1_FFDB24(x)               (x << 24)
#define CAN_F7FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F7FB1_FFDB25_SHIFT            (25)
#define CAN_F7FB1_FFDB25(x)               (x << 25)
#define CAN_F7FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F7FB1_FFDB26_SHIFT            (26)
#define CAN_F7FB1_FFDB26(x)               (x << 26)
#define CAN_F7FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F7FB1_FFDB27_SHIFT            (27)
#define CAN_F7FB1_FFDB27(x)               (x << 27)
#define CAN_F7FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F7FB1_FFDB28_SHIFT            (28)
#define CAN_F7FB1_FFDB28(x)               (x << 28)
#define CAN_F7FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F7FB1_FFDB29_SHIFT            (29)
#define CAN_F7FB1_FFDB29(x)               (x << 29)
#define CAN_F7FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F7FB1_FFDB30_SHIFT            (30)
#define CAN_F7FB1_FFDB30(x)               (x << 30)
#define CAN_F7FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F7FB1_FFDB31_SHIFT            (31)
#define CAN_F7FB1_FFDB31(x)               (x << 31)
#define CAN_F7FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F7FB2_FFDB0_SHIFT             (0)
#define CAN_F7FB2_FFDB0(x)                (x << 0)
#define CAN_F7FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F7FB2_FFDB1_SHIFT             (1)
#define CAN_F7FB2_FFDB1(x)                (x << 1)
#define CAN_F7FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F7FB2_FFDB2_SHIFT             (2)
#define CAN_F7FB2_FFDB2(x)                (x << 2)
#define CAN_F7FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F7FB2_FFDB3_SHIFT             (3)
#define CAN_F7FB2_FFDB3(x)                (x << 3)
#define CAN_F7FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F7FB2_FFDB4_SHIFT             (4)
#define CAN_F7FB2_FFDB4(x)                (x << 4)
#define CAN_F7FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F7FB2_FFDB5_SHIFT             (5)
#define CAN_F7FB2_FFDB5(x)                (x << 5)
#define CAN_F7FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F7FB2_FFDB6_SHIFT             (6)
#define CAN_F7FB2_FFDB6(x)                (x << 6)
#define CAN_F7FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F7FB2_FFDB7_SHIFT             (7)
#define CAN_F7FB2_FFDB7(x)                (x << 7)
#define CAN_F7FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F7FB2_FFDB8_SHIFT             (8)
#define CAN_F7FB2_FFDB8(x)                (x << 8)
#define CAN_F7FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F7FB2_FFDB9_SHIFT             (9)
#define CAN_F7FB2_FFDB9(x)                (x << 9)
#define CAN_F7FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F7FB2_FFDB10_SHIFT            (10)
#define CAN_F7FB2_FFDB10(x)               (x << 10)
#define CAN_F7FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F7FB2_FFDB11_SHIFT            (11)
#define CAN_F7FB2_FFDB11(x)               (x << 11)
#define CAN_F7FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F7FB2_FFDB12_SHIFT            (12)
#define CAN_F7FB2_FFDB12(x)               (x << 12)
#define CAN_F7FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F7FB2_FFDB13_SHIFT            (13)
#define CAN_F7FB2_FFDB13(x)               (x << 13)
#define CAN_F7FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F7FB2_FFDB14_SHIFT            (14)
#define CAN_F7FB2_FFDB14(x)               (x << 14)
#define CAN_F7FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F7FB2_FFDB15_SHIFT            (15)
#define CAN_F7FB2_FFDB15(x)               (x << 15)
#define CAN_F7FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F7FB2_FFDB16_SHIFT            (16)
#define CAN_F7FB2_FFDB16(x)               (x << 16)
#define CAN_F7FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F7FB2_FFDB17_SHIFT            (17)
#define CAN_F7FB2_FFDB17(x)               (x << 17)
#define CAN_F7FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F7FB2_FFDB18_SHIFT            (18)
#define CAN_F7FB2_FFDB18(x)               (x << 18)
#define CAN_F7FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F7FB2_FFDB19_SHIFT            (19)
#define CAN_F7FB2_FFDB19(x)               (x << 19)
#define CAN_F7FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F7FB2_FFDB20_SHIFT            (20)
#define CAN_F7FB2_FFDB20(x)               (x << 20)
#define CAN_F7FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F7FB2_FFDB21_SHIFT            (21)
#define CAN_F7FB2_FFDB21(x)               (x << 21)
#define CAN_F7FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F7FB2_FFDB22_SHIFT            (22)
#define CAN_F7FB2_FFDB22(x)               (x << 22)
#define CAN_F7FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F7FB2_FFDB23_SHIFT            (23)
#define CAN_F7FB2_FFDB23(x)               (x << 23)
#define CAN_F7FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F7FB2_FFDB24_SHIFT            (24)
#define CAN_F7FB2_FFDB24(x)               (x << 24)
#define CAN_F7FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F7FB2_FFDB25_SHIFT            (25)
#define CAN_F7FB2_FFDB25(x)               (x << 25)
#define CAN_F7FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F7FB2_FFDB26_SHIFT            (26)
#define CAN_F7FB2_FFDB26(x)               (x << 26)
#define CAN_F7FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F7FB2_FFDB27_SHIFT            (27)
#define CAN_F7FB2_FFDB27(x)               (x << 27)
#define CAN_F7FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F7FB2_FFDB28_SHIFT            (28)
#define CAN_F7FB2_FFDB28(x)               (x << 28)
#define CAN_F7FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F7FB2_FFDB29_SHIFT            (29)
#define CAN_F7FB2_FFDB29(x)               (x << 29)
#define CAN_F7FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F7FB2_FFDB30_SHIFT            (30)
#define CAN_F7FB2_FFDB30(x)               (x << 30)
#define CAN_F7FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F7FB2_FFDB31_SHIFT            (31)
#define CAN_F7FB2_FFDB31(x)               (x << 31)
#define CAN_F8FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F8FB1_FFDB0_SHIFT             (0)
#define CAN_F8FB1_FFDB0(x)                (x << 0)
#define CAN_F8FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F8FB1_FFDB1_SHIFT             (1)
#define CAN_F8FB1_FFDB1(x)                (x << 1)
#define CAN_F8FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F8FB1_FFDB2_SHIFT             (2)
#define CAN_F8FB1_FFDB2(x)                (x << 2)
#define CAN_F8FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F8FB1_FFDB3_SHIFT             (3)
#define CAN_F8FB1_FFDB3(x)                (x << 3)
#define CAN_F8FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F8FB1_FFDB4_SHIFT             (4)
#define CAN_F8FB1_FFDB4(x)                (x << 4)
#define CAN_F8FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F8FB1_FFDB5_SHIFT             (5)
#define CAN_F8FB1_FFDB5(x)                (x << 5)
#define CAN_F8FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F8FB1_FFDB6_SHIFT             (6)
#define CAN_F8FB1_FFDB6(x)                (x << 6)
#define CAN_F8FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F8FB1_FFDB7_SHIFT             (7)
#define CAN_F8FB1_FFDB7(x)                (x << 7)
#define CAN_F8FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F8FB1_FFDB8_SHIFT             (8)
#define CAN_F8FB1_FFDB8(x)                (x << 8)
#define CAN_F8FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F8FB1_FFDB9_SHIFT             (9)
#define CAN_F8FB1_FFDB9(x)                (x << 9)
#define CAN_F8FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F8FB1_FFDB10_SHIFT            (10)
#define CAN_F8FB1_FFDB10(x)               (x << 10)
#define CAN_F8FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F8FB1_FFDB11_SHIFT            (11)
#define CAN_F8FB1_FFDB11(x)               (x << 11)
#define CAN_F8FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F8FB1_FFDB12_SHIFT            (12)
#define CAN_F8FB1_FFDB12(x)               (x << 12)
#define CAN_F8FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F8FB1_FFDB13_SHIFT            (13)
#define CAN_F8FB1_FFDB13(x)               (x << 13)
#define CAN_F8FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F8FB1_FFDB14_SHIFT            (14)
#define CAN_F8FB1_FFDB14(x)               (x << 14)
#define CAN_F8FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F8FB1_FFDB15_SHIFT            (15)
#define CAN_F8FB1_FFDB15(x)               (x << 15)
#define CAN_F8FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F8FB1_FFDB16_SHIFT            (16)
#define CAN_F8FB1_FFDB16(x)               (x << 16)
#define CAN_F8FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F8FB1_FFDB17_SHIFT            (17)
#define CAN_F8FB1_FFDB17(x)               (x << 17)
#define CAN_F8FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F8FB1_FFDB18_SHIFT            (18)
#define CAN_F8FB1_FFDB18(x)               (x << 18)
#define CAN_F8FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F8FB1_FFDB19_SHIFT            (19)
#define CAN_F8FB1_FFDB19(x)               (x << 19)
#define CAN_F8FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F8FB1_FFDB20_SHIFT            (20)
#define CAN_F8FB1_FFDB20(x)               (x << 20)
#define CAN_F8FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F8FB1_FFDB21_SHIFT            (21)
#define CAN_F8FB1_FFDB21(x)               (x << 21)
#define CAN_F8FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F8FB1_FFDB22_SHIFT            (22)
#define CAN_F8FB1_FFDB22(x)               (x << 22)
#define CAN_F8FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F8FB1_FFDB23_SHIFT            (23)
#define CAN_F8FB1_FFDB23(x)               (x << 23)
#define CAN_F8FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F8FB1_FFDB24_SHIFT            (24)
#define CAN_F8FB1_FFDB24(x)               (x << 24)
#define CAN_F8FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F8FB1_FFDB25_SHIFT            (25)
#define CAN_F8FB1_FFDB25(x)               (x << 25)
#define CAN_F8FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F8FB1_FFDB26_SHIFT            (26)
#define CAN_F8FB1_FFDB26(x)               (x << 26)
#define CAN_F8FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F8FB1_FFDB27_SHIFT            (27)
#define CAN_F8FB1_FFDB27(x)               (x << 27)
#define CAN_F8FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F8FB1_FFDB28_SHIFT            (28)
#define CAN_F8FB1_FFDB28(x)               (x << 28)
#define CAN_F8FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F8FB1_FFDB29_SHIFT            (29)
#define CAN_F8FB1_FFDB29(x)               (x << 29)
#define CAN_F8FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F8FB1_FFDB30_SHIFT            (30)
#define CAN_F8FB1_FFDB30(x)               (x << 30)
#define CAN_F8FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F8FB1_FFDB31_SHIFT            (31)
#define CAN_F8FB1_FFDB31(x)               (x << 31)
#define CAN_F8FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F8FB2_FFDB0_SHIFT             (0)
#define CAN_F8FB2_FFDB0(x)                (x << 0)
#define CAN_F8FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F8FB2_FFDB1_SHIFT             (1)
#define CAN_F8FB2_FFDB1(x)                (x << 1)
#define CAN_F8FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F8FB2_FFDB2_SHIFT             (2)
#define CAN_F8FB2_FFDB2(x)                (x << 2)
#define CAN_F8FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F8FB2_FFDB3_SHIFT             (3)
#define CAN_F8FB2_FFDB3(x)                (x << 3)
#define CAN_F8FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F8FB2_FFDB4_SHIFT             (4)
#define CAN_F8FB2_FFDB4(x)                (x << 4)
#define CAN_F8FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F8FB2_FFDB5_SHIFT             (5)
#define CAN_F8FB2_FFDB5(x)                (x << 5)
#define CAN_F8FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F8FB2_FFDB6_SHIFT             (6)
#define CAN_F8FB2_FFDB6(x)                (x << 6)
#define CAN_F8FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F8FB2_FFDB7_SHIFT             (7)
#define CAN_F8FB2_FFDB7(x)                (x << 7)
#define CAN_F8FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F8FB2_FFDB8_SHIFT             (8)
#define CAN_F8FB2_FFDB8(x)                (x << 8)
#define CAN_F8FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F8FB2_FFDB9_SHIFT             (9)
#define CAN_F8FB2_FFDB9(x)                (x << 9)
#define CAN_F8FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F8FB2_FFDB10_SHIFT            (10)
#define CAN_F8FB2_FFDB10(x)               (x << 10)
#define CAN_F8FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F8FB2_FFDB11_SHIFT            (11)
#define CAN_F8FB2_FFDB11(x)               (x << 11)
#define CAN_F8FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F8FB2_FFDB12_SHIFT            (12)
#define CAN_F8FB2_FFDB12(x)               (x << 12)
#define CAN_F8FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F8FB2_FFDB13_SHIFT            (13)
#define CAN_F8FB2_FFDB13(x)               (x << 13)
#define CAN_F8FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F8FB2_FFDB14_SHIFT            (14)
#define CAN_F8FB2_FFDB14(x)               (x << 14)
#define CAN_F8FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F8FB2_FFDB15_SHIFT            (15)
#define CAN_F8FB2_FFDB15(x)               (x << 15)
#define CAN_F8FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F8FB2_FFDB16_SHIFT            (16)
#define CAN_F8FB2_FFDB16(x)               (x << 16)
#define CAN_F8FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F8FB2_FFDB17_SHIFT            (17)
#define CAN_F8FB2_FFDB17(x)               (x << 17)
#define CAN_F8FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F8FB2_FFDB18_SHIFT            (18)
#define CAN_F8FB2_FFDB18(x)               (x << 18)
#define CAN_F8FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F8FB2_FFDB19_SHIFT            (19)
#define CAN_F8FB2_FFDB19(x)               (x << 19)
#define CAN_F8FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F8FB2_FFDB20_SHIFT            (20)
#define CAN_F8FB2_FFDB20(x)               (x << 20)
#define CAN_F8FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F8FB2_FFDB21_SHIFT            (21)
#define CAN_F8FB2_FFDB21(x)               (x << 21)
#define CAN_F8FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F8FB2_FFDB22_SHIFT            (22)
#define CAN_F8FB2_FFDB22(x)               (x << 22)
#define CAN_F8FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F8FB2_FFDB23_SHIFT            (23)
#define CAN_F8FB2_FFDB23(x)               (x << 23)
#define CAN_F8FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F8FB2_FFDB24_SHIFT            (24)
#define CAN_F8FB2_FFDB24(x)               (x << 24)
#define CAN_F8FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F8FB2_FFDB25_SHIFT            (25)
#define CAN_F8FB2_FFDB25(x)               (x << 25)
#define CAN_F8FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F8FB2_FFDB26_SHIFT            (26)
#define CAN_F8FB2_FFDB26(x)               (x << 26)
#define CAN_F8FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F8FB2_FFDB27_SHIFT            (27)
#define CAN_F8FB2_FFDB27(x)               (x << 27)
#define CAN_F8FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F8FB2_FFDB28_SHIFT            (28)
#define CAN_F8FB2_FFDB28(x)               (x << 28)
#define CAN_F8FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F8FB2_FFDB29_SHIFT            (29)
#define CAN_F8FB2_FFDB29(x)               (x << 29)
#define CAN_F8FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F8FB2_FFDB30_SHIFT            (30)
#define CAN_F8FB2_FFDB30(x)               (x << 30)
#define CAN_F8FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F8FB2_FFDB31_SHIFT            (31)
#define CAN_F8FB2_FFDB31(x)               (x << 31)
#define CAN_F9FB1_FFDB0_MASK              (0x01 << 0)
#define CAN_F9FB1_FFDB0_SHIFT             (0)
#define CAN_F9FB1_FFDB0(x)                (x << 0)
#define CAN_F9FB1_FFDB1_MASK              (0x01 << 1)
#define CAN_F9FB1_FFDB1_SHIFT             (1)
#define CAN_F9FB1_FFDB1(x)                (x << 1)
#define CAN_F9FB1_FFDB2_MASK              (0x01 << 2)
#define CAN_F9FB1_FFDB2_SHIFT             (2)
#define CAN_F9FB1_FFDB2(x)                (x << 2)
#define CAN_F9FB1_FFDB3_MASK              (0x01 << 3)
#define CAN_F9FB1_FFDB3_SHIFT             (3)
#define CAN_F9FB1_FFDB3(x)                (x << 3)
#define CAN_F9FB1_FFDB4_MASK              (0x01 << 4)
#define CAN_F9FB1_FFDB4_SHIFT             (4)
#define CAN_F9FB1_FFDB4(x)                (x << 4)
#define CAN_F9FB1_FFDB5_MASK              (0x01 << 5)
#define CAN_F9FB1_FFDB5_SHIFT             (5)
#define CAN_F9FB1_FFDB5(x)                (x << 5)
#define CAN_F9FB1_FFDB6_MASK              (0x01 << 6)
#define CAN_F9FB1_FFDB6_SHIFT             (6)
#define CAN_F9FB1_FFDB6(x)                (x << 6)
#define CAN_F9FB1_FFDB7_MASK              (0x01 << 7)
#define CAN_F9FB1_FFDB7_SHIFT             (7)
#define CAN_F9FB1_FFDB7(x)                (x << 7)
#define CAN_F9FB1_FFDB8_MASK              (0x01 << 8)
#define CAN_F9FB1_FFDB8_SHIFT             (8)
#define CAN_F9FB1_FFDB8(x)                (x << 8)
#define CAN_F9FB1_FFDB9_MASK              (0x01 << 9)
#define CAN_F9FB1_FFDB9_SHIFT             (9)
#define CAN_F9FB1_FFDB9(x)                (x << 9)
#define CAN_F9FB1_FFDB10_MASK             (0x01 << 10)
#define CAN_F9FB1_FFDB10_SHIFT            (10)
#define CAN_F9FB1_FFDB10(x)               (x << 10)
#define CAN_F9FB1_FFDB11_MASK             (0x01 << 11)
#define CAN_F9FB1_FFDB11_SHIFT            (11)
#define CAN_F9FB1_FFDB11(x)               (x << 11)
#define CAN_F9FB1_FFDB12_MASK             (0x01 << 12)
#define CAN_F9FB1_FFDB12_SHIFT            (12)
#define CAN_F9FB1_FFDB12(x)               (x << 12)
#define CAN_F9FB1_FFDB13_MASK             (0x01 << 13)
#define CAN_F9FB1_FFDB13_SHIFT            (13)
#define CAN_F9FB1_FFDB13(x)               (x << 13)
#define CAN_F9FB1_FFDB14_MASK             (0x01 << 14)
#define CAN_F9FB1_FFDB14_SHIFT            (14)
#define CAN_F9FB1_FFDB14(x)               (x << 14)
#define CAN_F9FB1_FFDB15_MASK             (0x01 << 15)
#define CAN_F9FB1_FFDB15_SHIFT            (15)
#define CAN_F9FB1_FFDB15(x)               (x << 15)
#define CAN_F9FB1_FFDB16_MASK             (0x01 << 16)
#define CAN_F9FB1_FFDB16_SHIFT            (16)
#define CAN_F9FB1_FFDB16(x)               (x << 16)
#define CAN_F9FB1_FFDB17_MASK             (0x01 << 17)
#define CAN_F9FB1_FFDB17_SHIFT            (17)
#define CAN_F9FB1_FFDB17(x)               (x << 17)
#define CAN_F9FB1_FFDB18_MASK             (0x01 << 18)
#define CAN_F9FB1_FFDB18_SHIFT            (18)
#define CAN_F9FB1_FFDB18(x)               (x << 18)
#define CAN_F9FB1_FFDB19_MASK             (0x01 << 19)
#define CAN_F9FB1_FFDB19_SHIFT            (19)
#define CAN_F9FB1_FFDB19(x)               (x << 19)
#define CAN_F9FB1_FFDB20_MASK             (0x01 << 20)
#define CAN_F9FB1_FFDB20_SHIFT            (20)
#define CAN_F9FB1_FFDB20(x)               (x << 20)
#define CAN_F9FB1_FFDB21_MASK             (0x01 << 21)
#define CAN_F9FB1_FFDB21_SHIFT            (21)
#define CAN_F9FB1_FFDB21(x)               (x << 21)
#define CAN_F9FB1_FFDB22_MASK             (0x01 << 22)
#define CAN_F9FB1_FFDB22_SHIFT            (22)
#define CAN_F9FB1_FFDB22(x)               (x << 22)
#define CAN_F9FB1_FFDB23_MASK             (0x01 << 23)
#define CAN_F9FB1_FFDB23_SHIFT            (23)
#define CAN_F9FB1_FFDB23(x)               (x << 23)
#define CAN_F9FB1_FFDB24_MASK             (0x01 << 24)
#define CAN_F9FB1_FFDB24_SHIFT            (24)
#define CAN_F9FB1_FFDB24(x)               (x << 24)
#define CAN_F9FB1_FFDB25_MASK             (0x01 << 25)
#define CAN_F9FB1_FFDB25_SHIFT            (25)
#define CAN_F9FB1_FFDB25(x)               (x << 25)
#define CAN_F9FB1_FFDB26_MASK             (0x01 << 26)
#define CAN_F9FB1_FFDB26_SHIFT            (26)
#define CAN_F9FB1_FFDB26(x)               (x << 26)
#define CAN_F9FB1_FFDB27_MASK             (0x01 << 27)
#define CAN_F9FB1_FFDB27_SHIFT            (27)
#define CAN_F9FB1_FFDB27(x)               (x << 27)
#define CAN_F9FB1_FFDB28_MASK             (0x01 << 28)
#define CAN_F9FB1_FFDB28_SHIFT            (28)
#define CAN_F9FB1_FFDB28(x)               (x << 28)
#define CAN_F9FB1_FFDB29_MASK             (0x01 << 29)
#define CAN_F9FB1_FFDB29_SHIFT            (29)
#define CAN_F9FB1_FFDB29(x)               (x << 29)
#define CAN_F9FB1_FFDB30_MASK             (0x01 << 30)
#define CAN_F9FB1_FFDB30_SHIFT            (30)
#define CAN_F9FB1_FFDB30(x)               (x << 30)
#define CAN_F9FB1_FFDB31_MASK             (0x01 << 31)
#define CAN_F9FB1_FFDB31_SHIFT            (31)
#define CAN_F9FB1_FFDB31(x)               (x << 31)
#define CAN_F9FB2_FFDB0_MASK              (0x01 << 0)
#define CAN_F9FB2_FFDB0_SHIFT             (0)
#define CAN_F9FB2_FFDB0(x)                (x << 0)
#define CAN_F9FB2_FFDB1_MASK              (0x01 << 1)
#define CAN_F9FB2_FFDB1_SHIFT             (1)
#define CAN_F9FB2_FFDB1(x)                (x << 1)
#define CAN_F9FB2_FFDB2_MASK              (0x01 << 2)
#define CAN_F9FB2_FFDB2_SHIFT             (2)
#define CAN_F9FB2_FFDB2(x)                (x << 2)
#define CAN_F9FB2_FFDB3_MASK              (0x01 << 3)
#define CAN_F9FB2_FFDB3_SHIFT             (3)
#define CAN_F9FB2_FFDB3(x)                (x << 3)
#define CAN_F9FB2_FFDB4_MASK              (0x01 << 4)
#define CAN_F9FB2_FFDB4_SHIFT             (4)
#define CAN_F9FB2_FFDB4(x)                (x << 4)
#define CAN_F9FB2_FFDB5_MASK              (0x01 << 5)
#define CAN_F9FB2_FFDB5_SHIFT             (5)
#define CAN_F9FB2_FFDB5(x)                (x << 5)
#define CAN_F9FB2_FFDB6_MASK              (0x01 << 6)
#define CAN_F9FB2_FFDB6_SHIFT             (6)
#define CAN_F9FB2_FFDB6(x)                (x << 6)
#define CAN_F9FB2_FFDB7_MASK              (0x01 << 7)
#define CAN_F9FB2_FFDB7_SHIFT             (7)
#define CAN_F9FB2_FFDB7(x)                (x << 7)
#define CAN_F9FB2_FFDB8_MASK              (0x01 << 8)
#define CAN_F9FB2_FFDB8_SHIFT             (8)
#define CAN_F9FB2_FFDB8(x)                (x << 8)
#define CAN_F9FB2_FFDB9_MASK              (0x01 << 9)
#define CAN_F9FB2_FFDB9_SHIFT             (9)
#define CAN_F9FB2_FFDB9(x)                (x << 9)
#define CAN_F9FB2_FFDB10_MASK             (0x01 << 10)
#define CAN_F9FB2_FFDB10_SHIFT            (10)
#define CAN_F9FB2_FFDB10(x)               (x << 10)
#define CAN_F9FB2_FFDB11_MASK             (0x01 << 11)
#define CAN_F9FB2_FFDB11_SHIFT            (11)
#define CAN_F9FB2_FFDB11(x)               (x << 11)
#define CAN_F9FB2_FFDB12_MASK             (0x01 << 12)
#define CAN_F9FB2_FFDB12_SHIFT            (12)
#define CAN_F9FB2_FFDB12(x)               (x << 12)
#define CAN_F9FB2_FFDB13_MASK             (0x01 << 13)
#define CAN_F9FB2_FFDB13_SHIFT            (13)
#define CAN_F9FB2_FFDB13(x)               (x << 13)
#define CAN_F9FB2_FFDB14_MASK             (0x01 << 14)
#define CAN_F9FB2_FFDB14_SHIFT            (14)
#define CAN_F9FB2_FFDB14(x)               (x << 14)
#define CAN_F9FB2_FFDB15_MASK             (0x01 << 15)
#define CAN_F9FB2_FFDB15_SHIFT            (15)
#define CAN_F9FB2_FFDB15(x)               (x << 15)
#define CAN_F9FB2_FFDB16_MASK             (0x01 << 16)
#define CAN_F9FB2_FFDB16_SHIFT            (16)
#define CAN_F9FB2_FFDB16(x)               (x << 16)
#define CAN_F9FB2_FFDB17_MASK             (0x01 << 17)
#define CAN_F9FB2_FFDB17_SHIFT            (17)
#define CAN_F9FB2_FFDB17(x)               (x << 17)
#define CAN_F9FB2_FFDB18_MASK             (0x01 << 18)
#define CAN_F9FB2_FFDB18_SHIFT            (18)
#define CAN_F9FB2_FFDB18(x)               (x << 18)
#define CAN_F9FB2_FFDB19_MASK             (0x01 << 19)
#define CAN_F9FB2_FFDB19_SHIFT            (19)
#define CAN_F9FB2_FFDB19(x)               (x << 19)
#define CAN_F9FB2_FFDB20_MASK             (0x01 << 20)
#define CAN_F9FB2_FFDB20_SHIFT            (20)
#define CAN_F9FB2_FFDB20(x)               (x << 20)
#define CAN_F9FB2_FFDB21_MASK             (0x01 << 21)
#define CAN_F9FB2_FFDB21_SHIFT            (21)
#define CAN_F9FB2_FFDB21(x)               (x << 21)
#define CAN_F9FB2_FFDB22_MASK             (0x01 << 22)
#define CAN_F9FB2_FFDB22_SHIFT            (22)
#define CAN_F9FB2_FFDB22(x)               (x << 22)
#define CAN_F9FB2_FFDB23_MASK             (0x01 << 23)
#define CAN_F9FB2_FFDB23_SHIFT            (23)
#define CAN_F9FB2_FFDB23(x)               (x << 23)
#define CAN_F9FB2_FFDB24_MASK             (0x01 << 24)
#define CAN_F9FB2_FFDB24_SHIFT            (24)
#define CAN_F9FB2_FFDB24(x)               (x << 24)
#define CAN_F9FB2_FFDB25_MASK             (0x01 << 25)
#define CAN_F9FB2_FFDB25_SHIFT            (25)
#define CAN_F9FB2_FFDB25(x)               (x << 25)
#define CAN_F9FB2_FFDB26_MASK             (0x01 << 26)
#define CAN_F9FB2_FFDB26_SHIFT            (26)
#define CAN_F9FB2_FFDB26(x)               (x << 26)
#define CAN_F9FB2_FFDB27_MASK             (0x01 << 27)
#define CAN_F9FB2_FFDB27_SHIFT            (27)
#define CAN_F9FB2_FFDB27(x)               (x << 27)
#define CAN_F9FB2_FFDB28_MASK             (0x01 << 28)
#define CAN_F9FB2_FFDB28_SHIFT            (28)
#define CAN_F9FB2_FFDB28(x)               (x << 28)
#define CAN_F9FB2_FFDB29_MASK             (0x01 << 29)
#define CAN_F9FB2_FFDB29_SHIFT            (29)
#define CAN_F9FB2_FFDB29(x)               (x << 29)
#define CAN_F9FB2_FFDB30_MASK             (0x01 << 30)
#define CAN_F9FB2_FFDB30_SHIFT            (30)
#define CAN_F9FB2_FFDB30(x)               (x << 30)
#define CAN_F9FB2_FFDB31_MASK             (0x01 << 31)
#define CAN_F9FB2_FFDB31_SHIFT            (31)
#define CAN_F9FB2_FFDB31(x)               (x << 31)
#define CAN_F10FB1_FFDB0_MASK             (0x01 << 0)
#define CAN_F10FB1_FFDB0_SHIFT            (0)
#define CAN_F10FB1_FFDB0(x)               (x << 0)
#define CAN_F10FB1_FFDB1_MASK             (0x01 << 1)
#define CAN_F10FB1_FFDB1_SHIFT            (1)
#define CAN_F10FB1_FFDB1(x)               (x << 1)
#define CAN_F10FB1_FFDB2_MASK             (0x01 << 2)
#define CAN_F10FB1_FFDB2_SHIFT            (2)
#define CAN_F10FB1_FFDB2(x)               (x << 2)
#define CAN_F10FB1_FFDB3_MASK             (0x01 << 3)
#define CAN_F10FB1_FFDB3_SHIFT            (3)
#define CAN_F10FB1_FFDB3(x)               (x << 3)
#define CAN_F10FB1_FFDB4_MASK             (0x01 << 4)
#define CAN_F10FB1_FFDB4_SHIFT            (4)
#define CAN_F10FB1_FFDB4(x)               (x << 4)
#define CAN_F10FB1_FFDB5_MASK             (0x01 << 5)
#define CAN_F10FB1_FFDB5_SHIFT            (5)
#define CAN_F10FB1_FFDB5(x)               (x << 5)
#define CAN_F10FB1_FFDB6_MASK             (0x01 << 6)
#define CAN_F10FB1_FFDB6_SHIFT            (6)
#define CAN_F10FB1_FFDB6(x)               (x << 6)
#define CAN_F10FB1_FFDB7_MASK             (0x01 << 7)
#define CAN_F10FB1_FFDB7_SHIFT            (7)
#define CAN_F10FB1_FFDB7(x)               (x << 7)
#define CAN_F10FB1_FFDB8_MASK             (0x01 << 8)
#define CAN_F10FB1_FFDB8_SHIFT            (8)
#define CAN_F10FB1_FFDB8(x)               (x << 8)
#define CAN_F10FB1_FFDB9_MASK             (0x01 << 9)
#define CAN_F10FB1_FFDB9_SHIFT            (9)
#define CAN_F10FB1_FFDB9(x)               (x << 9)
#define CAN_F10FB1_FFDB10_MASK            (0x01 << 10)
#define CAN_F10FB1_FFDB10_SHIFT           (10)
#define CAN_F10FB1_FFDB10(x)              (x << 10)
#define CAN_F10FB1_FFDB11_MASK            (0x01 << 11)
#define CAN_F10FB1_FFDB11_SHIFT           (11)
#define CAN_F10FB1_FFDB11(x)              (x << 11)
#define CAN_F10FB1_FFDB12_MASK            (0x01 << 12)
#define CAN_F10FB1_FFDB12_SHIFT           (12)
#define CAN_F10FB1_FFDB12(x)              (x << 12)
#define CAN_F10FB1_FFDB13_MASK            (0x01 << 13)
#define CAN_F10FB1_FFDB13_SHIFT           (13)
#define CAN_F10FB1_FFDB13(x)              (x << 13)
#define CAN_F10FB1_FFDB14_MASK            (0x01 << 14)
#define CAN_F10FB1_FFDB14_SHIFT           (14)
#define CAN_F10FB1_FFDB14(x)              (x << 14)
#define CAN_F10FB1_FFDB15_MASK            (0x01 << 15)
#define CAN_F10FB1_FFDB15_SHIFT           (15)
#define CAN_F10FB1_FFDB15(x)              (x << 15)
#define CAN_F10FB1_FFDB16_MASK            (0x01 << 16)
#define CAN_F10FB1_FFDB16_SHIFT           (16)
#define CAN_F10FB1_FFDB16(x)              (x << 16)
#define CAN_F10FB1_FFDB17_MASK            (0x01 << 17)
#define CAN_F10FB1_FFDB17_SHIFT           (17)
#define CAN_F10FB1_FFDB17(x)              (x << 17)
#define CAN_F10FB1_FFDB18_MASK            (0x01 << 18)
#define CAN_F10FB1_FFDB18_SHIFT           (18)
#define CAN_F10FB1_FFDB18(x)              (x << 18)
#define CAN_F10FB1_FFDB19_MASK            (0x01 << 19)
#define CAN_F10FB1_FFDB19_SHIFT           (19)
#define CAN_F10FB1_FFDB19(x)              (x << 19)
#define CAN_F10FB1_FFDB20_MASK            (0x01 << 20)
#define CAN_F10FB1_FFDB20_SHIFT           (20)
#define CAN_F10FB1_FFDB20(x)              (x << 20)
#define CAN_F10FB1_FFDB21_MASK            (0x01 << 21)
#define CAN_F10FB1_FFDB21_SHIFT           (21)
#define CAN_F10FB1_FFDB21(x)              (x << 21)
#define CAN_F10FB1_FFDB22_MASK            (0x01 << 22)
#define CAN_F10FB1_FFDB22_SHIFT           (22)
#define CAN_F10FB1_FFDB22(x)              (x << 22)
#define CAN_F10FB1_FFDB23_MASK            (0x01 << 23)
#define CAN_F10FB1_FFDB23_SHIFT           (23)
#define CAN_F10FB1_FFDB23(x)              (x << 23)
#define CAN_F10FB1_FFDB24_MASK            (0x01 << 24)
#define CAN_F10FB1_FFDB24_SHIFT           (24)
#define CAN_F10FB1_FFDB24(x)              (x << 24)
#define CAN_F10FB1_FFDB25_MASK            (0x01 << 25)
#define CAN_F10FB1_FFDB25_SHIFT           (25)
#define CAN_F10FB1_FFDB25(x)              (x << 25)
#define CAN_F10FB1_FFDB26_MASK            (0x01 << 26)
#define CAN_F10FB1_FFDB26_SHIFT           (26)
#define CAN_F10FB1_FFDB26(x)              (x << 26)
#define CAN_F10FB1_FFDB27_MASK            (0x01 << 27)
#define CAN_F10FB1_FFDB27_SHIFT           (27)
#define CAN_F10FB1_FFDB27(x)              (x << 27)
#define CAN_F10FB1_FFDB28_MASK            (0x01 << 28)
#define CAN_F10FB1_FFDB28_SHIFT           (28)
#define CAN_F10FB1_FFDB28(x)              (x << 28)
#define CAN_F10FB1_FFDB29_MASK            (0x01 << 29)
#define CAN_F10FB1_FFDB29_SHIFT           (29)
#define CAN_F10FB1_FFDB29(x)              (x << 29)
#define CAN_F10FB1_FFDB30_MASK            (0x01 << 30)
#define CAN_F10FB1_FFDB30_SHIFT           (30)
#define CAN_F10FB1_FFDB30(x)              (x << 30)
#define CAN_F10FB1_FFDB31_MASK            (0x01 << 31)
#define CAN_F10FB1_FFDB31_SHIFT           (31)
#define CAN_F10FB1_FFDB31(x)              (x << 31)
#define CAN_F10FB2_FFDB0_MASK             (0x01 << 0)
#define CAN_F10FB2_FFDB0_SHIFT            (0)
#define CAN_F10FB2_FFDB0(x)               (x << 0)
#define CAN_F10FB2_FFDB1_MASK             (0x01 << 1)
#define CAN_F10FB2_FFDB1_SHIFT            (1)
#define CAN_F10FB2_FFDB1(x)               (x << 1)
#define CAN_F10FB2_FFDB2_MASK             (0x01 << 2)
#define CAN_F10FB2_FFDB2_SHIFT            (2)
#define CAN_F10FB2_FFDB2(x)               (x << 2)
#define CAN_F10FB2_FFDB3_MASK             (0x01 << 3)
#define CAN_F10FB2_FFDB3_SHIFT            (3)
#define CAN_F10FB2_FFDB3(x)               (x << 3)
#define CAN_F10FB2_FFDB4_MASK             (0x01 << 4)
#define CAN_F10FB2_FFDB4_SHIFT            (4)
#define CAN_F10FB2_FFDB4(x)               (x << 4)
#define CAN_F10FB2_FFDB5_MASK             (0x01 << 5)
#define CAN_F10FB2_FFDB5_SHIFT            (5)
#define CAN_F10FB2_FFDB5(x)               (x << 5)
#define CAN_F10FB2_FFDB6_MASK             (0x01 << 6)
#define CAN_F10FB2_FFDB6_SHIFT            (6)
#define CAN_F10FB2_FFDB6(x)               (x << 6)
#define CAN_F10FB2_FFDB7_MASK             (0x01 << 7)
#define CAN_F10FB2_FFDB7_SHIFT            (7)
#define CAN_F10FB2_FFDB7(x)               (x << 7)
#define CAN_F10FB2_FFDB8_MASK             (0x01 << 8)
#define CAN_F10FB2_FFDB8_SHIFT            (8)
#define CAN_F10FB2_FFDB8(x)               (x << 8)
#define CAN_F10FB2_FFDB9_MASK             (0x01 << 9)
#define CAN_F10FB2_FFDB9_SHIFT            (9)
#define CAN_F10FB2_FFDB9(x)               (x << 9)
#define CAN_F10FB2_FFDB10_MASK            (0x01 << 10)
#define CAN_F10FB2_FFDB10_SHIFT           (10)
#define CAN_F10FB2_FFDB10(x)              (x << 10)
#define CAN_F10FB2_FFDB11_MASK            (0x01 << 11)
#define CAN_F10FB2_FFDB11_SHIFT           (11)
#define CAN_F10FB2_FFDB11(x)              (x << 11)
#define CAN_F10FB2_FFDB12_MASK            (0x01 << 12)
#define CAN_F10FB2_FFDB12_SHIFT           (12)
#define CAN_F10FB2_FFDB12(x)              (x << 12)
#define CAN_F10FB2_FFDB13_MASK            (0x01 << 13)
#define CAN_F10FB2_FFDB13_SHIFT           (13)
#define CAN_F10FB2_FFDB13(x)              (x << 13)
#define CAN_F10FB2_FFDB14_MASK            (0x01 << 14)
#define CAN_F10FB2_FFDB14_SHIFT           (14)
#define CAN_F10FB2_FFDB14(x)              (x << 14)
#define CAN_F10FB2_FFDB15_MASK            (0x01 << 15)
#define CAN_F10FB2_FFDB15_SHIFT           (15)
#define CAN_F10FB2_FFDB15(x)              (x << 15)
#define CAN_F10FB2_FFDB16_MASK            (0x01 << 16)
#define CAN_F10FB2_FFDB16_SHIFT           (16)
#define CAN_F10FB2_FFDB16(x)              (x << 16)
#define CAN_F10FB2_FFDB17_MASK            (0x01 << 17)
#define CAN_F10FB2_FFDB17_SHIFT           (17)
#define CAN_F10FB2_FFDB17(x)              (x << 17)
#define CAN_F10FB2_FFDB18_MASK            (0x01 << 18)
#define CAN_F10FB2_FFDB18_SHIFT           (18)
#define CAN_F10FB2_FFDB18(x)              (x << 18)
#define CAN_F10FB2_FFDB19_MASK            (0x01 << 19)
#define CAN_F10FB2_FFDB19_SHIFT           (19)
#define CAN_F10FB2_FFDB19(x)              (x << 19)
#define CAN_F10FB2_FFDB20_MASK            (0x01 << 20)
#define CAN_F10FB2_FFDB20_SHIFT           (20)
#define CAN_F10FB2_FFDB20(x)              (x << 20)
#define CAN_F10FB2_FFDB21_MASK            (0x01 << 21)
#define CAN_F10FB2_FFDB21_SHIFT           (21)
#define CAN_F10FB2_FFDB21(x)              (x << 21)
#define CAN_F10FB2_FFDB22_MASK            (0x01 << 22)
#define CAN_F10FB2_FFDB22_SHIFT           (22)
#define CAN_F10FB2_FFDB22(x)              (x << 22)
#define CAN_F10FB2_FFDB23_MASK            (0x01 << 23)
#define CAN_F10FB2_FFDB23_SHIFT           (23)
#define CAN_F10FB2_FFDB23(x)              (x << 23)
#define CAN_F10FB2_FFDB24_MASK            (0x01 << 24)
#define CAN_F10FB2_FFDB24_SHIFT           (24)
#define CAN_F10FB2_FFDB24(x)              (x << 24)
#define CAN_F10FB2_FFDB25_MASK            (0x01 << 25)
#define CAN_F10FB2_FFDB25_SHIFT           (25)
#define CAN_F10FB2_FFDB25(x)              (x << 25)
#define CAN_F10FB2_FFDB26_MASK            (0x01 << 26)
#define CAN_F10FB2_FFDB26_SHIFT           (26)
#define CAN_F10FB2_FFDB26(x)              (x << 26)
#define CAN_F10FB2_FFDB27_MASK            (0x01 << 27)
#define CAN_F10FB2_FFDB27_SHIFT           (27)
#define CAN_F10FB2_FFDB27(x)              (x << 27)
#define CAN_F10FB2_FFDB28_MASK            (0x01 << 28)
#define CAN_F10FB2_FFDB28_SHIFT           (28)
#define CAN_F10FB2_FFDB28(x)              (x << 28)
#define CAN_F10FB2_FFDB29_MASK            (0x01 << 29)
#define CAN_F10FB2_FFDB29_SHIFT           (29)
#define CAN_F10FB2_FFDB29(x)              (x << 29)
#define CAN_F10FB2_FFDB30_MASK            (0x01 << 30)
#define CAN_F10FB2_FFDB30_SHIFT           (30)
#define CAN_F10FB2_FFDB30(x)              (x << 30)
#define CAN_F10FB2_FFDB31_MASK            (0x01 << 31)
#define CAN_F10FB2_FFDB31_SHIFT           (31)
#define CAN_F10FB2_FFDB31(x)              (x << 31)
#define CAN_F11FB1_FFDB0_MASK             (0x01 << 0)
#define CAN_F11FB1_FFDB0_SHIFT            (0)
#define CAN_F11FB1_FFDB0(x)               (x << 0)
#define CAN_F11FB1_FFDB1_MASK             (0x01 << 1)
#define CAN_F11FB1_FFDB1_SHIFT            (1)
#define CAN_F11FB1_FFDB1(x)               (x << 1)
#define CAN_F11FB1_FFDB2_MASK             (0x01 << 2)
#define CAN_F11FB1_FFDB2_SHIFT            (2)
#define CAN_F11FB1_FFDB2(x)               (x << 2)
#define CAN_F11FB1_FFDB3_MASK             (0x01 << 3)
#define CAN_F11FB1_FFDB3_SHIFT            (3)
#define CAN_F11FB1_FFDB3(x)               (x << 3)
#define CAN_F11FB1_FFDB4_MASK             (0x01 << 4)
#define CAN_F11FB1_FFDB4_SHIFT            (4)
#define CAN_F11FB1_FFDB4(x)               (x << 4)
#define CAN_F11FB1_FFDB5_MASK             (0x01 << 5)
#define CAN_F11FB1_FFDB5_SHIFT            (5)
#define CAN_F11FB1_FFDB5(x)               (x << 5)
#define CAN_F11FB1_FFDB6_MASK             (0x01 << 6)
#define CAN_F11FB1_FFDB6_SHIFT            (6)
#define CAN_F11FB1_FFDB6(x)               (x << 6)
#define CAN_F11FB1_FFDB7_MASK             (0x01 << 7)
#define CAN_F11FB1_FFDB7_SHIFT            (7)
#define CAN_F11FB1_FFDB7(x)               (x << 7)
#define CAN_F11FB1_FFDB8_MASK             (0x01 << 8)
#define CAN_F11FB1_FFDB8_SHIFT            (8)
#define CAN_F11FB1_FFDB8(x)               (x << 8)
#define CAN_F11FB1_FFDB9_MASK             (0x01 << 9)
#define CAN_F11FB1_FFDB9_SHIFT            (9)
#define CAN_F11FB1_FFDB9(x)               (x << 9)
#define CAN_F11FB1_FFDB10_MASK            (0x01 << 10)
#define CAN_F11FB1_FFDB10_SHIFT           (10)
#define CAN_F11FB1_FFDB10(x)              (x << 10)
#define CAN_F11FB1_FFDB11_MASK            (0x01 << 11)
#define CAN_F11FB1_FFDB11_SHIFT           (11)
#define CAN_F11FB1_FFDB11(x)              (x << 11)
#define CAN_F11FB1_FFDB12_MASK            (0x01 << 12)
#define CAN_F11FB1_FFDB12_SHIFT           (12)
#define CAN_F11FB1_FFDB12(x)              (x << 12)
#define CAN_F11FB1_FFDB13_MASK            (0x01 << 13)
#define CAN_F11FB1_FFDB13_SHIFT           (13)
#define CAN_F11FB1_FFDB13(x)              (x << 13)
#define CAN_F11FB1_FFDB14_MASK            (0x01 << 14)
#define CAN_F11FB1_FFDB14_SHIFT           (14)
#define CAN_F11FB1_FFDB14(x)              (x << 14)
#define CAN_F11FB1_FFDB15_MASK            (0x01 << 15)
#define CAN_F11FB1_FFDB15_SHIFT           (15)
#define CAN_F11FB1_FFDB15(x)              (x << 15)
#define CAN_F11FB1_FFDB16_MASK            (0x01 << 16)
#define CAN_F11FB1_FFDB16_SHIFT           (16)
#define CAN_F11FB1_FFDB16(x)              (x << 16)
#define CAN_F11FB1_FFDB17_MASK            (0x01 << 17)
#define CAN_F11FB1_FFDB17_SHIFT           (17)
#define CAN_F11FB1_FFDB17(x)              (x << 17)
#define CAN_F11FB1_FFDB18_MASK            (0x01 << 18)
#define CAN_F11FB1_FFDB18_SHIFT           (18)
#define CAN_F11FB1_FFDB18(x)              (x << 18)
#define CAN_F11FB1_FFDB19_MASK            (0x01 << 19)
#define CAN_F11FB1_FFDB19_SHIFT           (19)
#define CAN_F11FB1_FFDB19(x)              (x << 19)
#define CAN_F11FB1_FFDB20_MASK            (0x01 << 20)
#define CAN_F11FB1_FFDB20_SHIFT           (20)
#define CAN_F11FB1_FFDB20(x)              (x << 20)
#define CAN_F11FB1_FFDB21_MASK            (0x01 << 21)
#define CAN_F11FB1_FFDB21_SHIFT           (21)
#define CAN_F11FB1_FFDB21(x)              (x << 21)
#define CAN_F11FB1_FFDB22_MASK            (0x01 << 22)
#define CAN_F11FB1_FFDB22_SHIFT           (22)
#define CAN_F11FB1_FFDB22(x)              (x << 22)
#define CAN_F11FB1_FFDB23_MASK            (0x01 << 23)
#define CAN_F11FB1_FFDB23_SHIFT           (23)
#define CAN_F11FB1_FFDB23(x)              (x << 23)
#define CAN_F11FB1_FFDB24_MASK            (0x01 << 24)
#define CAN_F11FB1_FFDB24_SHIFT           (24)
#define CAN_F11FB1_FFDB24(x)              (x << 24)
#define CAN_F11FB1_FFDB25_MASK            (0x01 << 25)
#define CAN_F11FB1_FFDB25_SHIFT           (25)
#define CAN_F11FB1_FFDB25(x)              (x << 25)
#define CAN_F11FB1_FFDB26_MASK            (0x01 << 26)
#define CAN_F11FB1_FFDB26_SHIFT           (26)
#define CAN_F11FB1_FFDB26(x)              (x << 26)
#define CAN_F11FB1_FFDB27_MASK            (0x01 << 27)
#define CAN_F11FB1_FFDB27_SHIFT           (27)
#define CAN_F11FB1_FFDB27(x)              (x << 27)
#define CAN_F11FB1_FFDB28_MASK            (0x01 << 28)
#define CAN_F11FB1_FFDB28_SHIFT           (28)
#define CAN_F11FB1_FFDB28(x)              (x << 28)
#define CAN_F11FB1_FFDB29_MASK            (0x01 << 29)
#define CAN_F11FB1_FFDB29_SHIFT           (29)
#define CAN_F11FB1_FFDB29(x)              (x << 29)
#define CAN_F11FB1_FFDB30_MASK            (0x01 << 30)
#define CAN_F11FB1_FFDB30_SHIFT           (30)
#define CAN_F11FB1_FFDB30(x)              (x << 30)
#define CAN_F11FB1_FFDB31_MASK            (0x01 << 31)
#define CAN_F11FB1_FFDB31_SHIFT           (31)
#define CAN_F11FB1_FFDB31(x)              (x << 31)
#define CAN_F11FB2_FFDB0_MASK             (0x01 << 0)
#define CAN_F11FB2_FFDB0_SHIFT            (0)
#define CAN_F11FB2_FFDB0(x)               (x << 0)
#define CAN_F11FB2_FFDB1_MASK             (0x01 << 1)
#define CAN_F11FB2_FFDB1_SHIFT            (1)
#define CAN_F11FB2_FFDB1(x)               (x << 1)
#define CAN_F11FB2_FFDB2_MASK             (0x01 << 2)
#define CAN_F11FB2_FFDB2_SHIFT            (2)
#define CAN_F11FB2_FFDB2(x)               (x << 2)
#define CAN_F11FB2_FFDB3_MASK             (0x01 << 3)
#define CAN_F11FB2_FFDB3_SHIFT            (3)
#define CAN_F11FB2_FFDB3(x)               (x << 3)
#define CAN_F11FB2_FFDB4_MASK             (0x01 << 4)
#define CAN_F11FB2_FFDB4_SHIFT            (4)
#define CAN_F11FB2_FFDB4(x)               (x << 4)
#define CAN_F11FB2_FFDB5_MASK             (0x01 << 5)
#define CAN_F11FB2_FFDB5_SHIFT            (5)
#define CAN_F11FB2_FFDB5(x)               (x << 5)
#define CAN_F11FB2_FFDB6_MASK             (0x01 << 6)
#define CAN_F11FB2_FFDB6_SHIFT            (6)
#define CAN_F11FB2_FFDB6(x)               (x << 6)
#define CAN_F11FB2_FFDB7_MASK             (0x01 << 7)
#define CAN_F11FB2_FFDB7_SHIFT            (7)
#define CAN_F11FB2_FFDB7(x)               (x << 7)
#define CAN_F11FB2_FFDB8_MASK             (0x01 << 8)
#define CAN_F11FB2_FFDB8_SHIFT            (8)
#define CAN_F11FB2_FFDB8(x)               (x << 8)
#define CAN_F11FB2_FFDB9_MASK             (0x01 << 9)
#define CAN_F11FB2_FFDB9_SHIFT            (9)
#define CAN_F11FB2_FFDB9(x)               (x << 9)
#define CAN_F11FB2_FFDB10_MASK            (0x01 << 10)
#define CAN_F11FB2_FFDB10_SHIFT           (10)
#define CAN_F11FB2_FFDB10(x)              (x << 10)
#define CAN_F11FB2_FFDB11_MASK            (0x01 << 11)
#define CAN_F11FB2_FFDB11_SHIFT           (11)
#define CAN_F11FB2_FFDB11(x)              (x << 11)
#define CAN_F11FB2_FFDB12_MASK            (0x01 << 12)
#define CAN_F11FB2_FFDB12_SHIFT           (12)
#define CAN_F11FB2_FFDB12(x)              (x << 12)
#define CAN_F11FB2_FFDB13_MASK            (0x01 << 13)
#define CAN_F11FB2_FFDB13_SHIFT           (13)
#define CAN_F11FB2_FFDB13(x)              (x << 13)
#define CAN_F11FB2_FFDB14_MASK            (0x01 << 14)
#define CAN_F11FB2_FFDB14_SHIFT           (14)
#define CAN_F11FB2_FFDB14(x)              (x << 14)
#define CAN_F11FB2_FFDB15_MASK            (0x01 << 15)
#define CAN_F11FB2_FFDB15_SHIFT           (15)
#define CAN_F11FB2_FFDB15(x)              (x << 15)
#define CAN_F11FB2_FFDB16_MASK            (0x01 << 16)
#define CAN_F11FB2_FFDB16_SHIFT           (16)
#define CAN_F11FB2_FFDB16(x)              (x << 16)
#define CAN_F11FB2_FFDB17_MASK            (0x01 << 17)
#define CAN_F11FB2_FFDB17_SHIFT           (17)
#define CAN_F11FB2_FFDB17(x)              (x << 17)
#define CAN_F11FB2_FFDB18_MASK            (0x01 << 18)
#define CAN_F11FB2_FFDB18_SHIFT           (18)
#define CAN_F11FB2_FFDB18(x)              (x << 18)
#define CAN_F11FB2_FFDB19_MASK            (0x01 << 19)
#define CAN_F11FB2_FFDB19_SHIFT           (19)
#define CAN_F11FB2_FFDB19(x)              (x << 19)
#define CAN_F11FB2_FFDB20_MASK            (0x01 << 20)
#define CAN_F11FB2_FFDB20_SHIFT           (20)
#define CAN_F11FB2_FFDB20(x)              (x << 20)
#define CAN_F11FB2_FFDB21_MASK            (0x01 << 21)
#define CAN_F11FB2_FFDB21_SHIFT           (21)
#define CAN_F11FB2_FFDB21(x)              (x << 21)
#define CAN_F11FB2_FFDB22_MASK            (0x01 << 22)
#define CAN_F11FB2_FFDB22_SHIFT           (22)
#define CAN_F11FB2_FFDB22(x)              (x << 22)
#define CAN_F11FB2_FFDB23_MASK            (0x01 << 23)
#define CAN_F11FB2_FFDB23_SHIFT           (23)
#define CAN_F11FB2_FFDB23(x)              (x << 23)
#define CAN_F11FB2_FFDB24_MASK            (0x01 << 24)
#define CAN_F11FB2_FFDB24_SHIFT           (24)
#define CAN_F11FB2_FFDB24(x)              (x << 24)
#define CAN_F11FB2_FFDB25_MASK            (0x01 << 25)
#define CAN_F11FB2_FFDB25_SHIFT           (25)
#define CAN_F11FB2_FFDB25(x)              (x << 25)
#define CAN_F11FB2_FFDB26_MASK            (0x01 << 26)
#define CAN_F11FB2_FFDB26_SHIFT           (26)
#define CAN_F11FB2_FFDB26(x)              (x << 26)
#define CAN_F11FB2_FFDB27_MASK            (0x01 << 27)
#define CAN_F11FB2_FFDB27_SHIFT           (27)
#define CAN_F11FB2_FFDB27(x)              (x << 27)
#define CAN_F11FB2_FFDB28_MASK            (0x01 << 28)
#define CAN_F11FB2_FFDB28_SHIFT           (28)
#define CAN_F11FB2_FFDB28(x)              (x << 28)
#define CAN_F11FB2_FFDB29_MASK            (0x01 << 29)
#define CAN_F11FB2_FFDB29_SHIFT           (29)
#define CAN_F11FB2_FFDB29(x)              (x << 29)
#define CAN_F11FB2_FFDB30_MASK            (0x01 << 30)
#define CAN_F11FB2_FFDB30_SHIFT           (30)
#define CAN_F11FB2_FFDB30(x)              (x << 30)
#define CAN_F11FB2_FFDB31_MASK            (0x01 << 31)
#define CAN_F11FB2_FFDB31_SHIFT           (31)
#define CAN_F11FB2_FFDB31(x)              (x << 31)
#define CAN_F12FB1_FFDB0_MASK             (0x01 << 0)
#define CAN_F12FB1_FFDB0_SHIFT            (0)
#define CAN_F12FB1_FFDB0(x)               (x << 0)
#define CAN_F12FB1_FFDB1_MASK             (0x01 << 1)
#define CAN_F12FB1_FFDB1_SHIFT            (1)
#define CAN_F12FB1_FFDB1(x)               (x << 1)
#define CAN_F12FB1_FFDB2_MASK             (0x01 << 2)
#define CAN_F12FB1_FFDB2_SHIFT            (2)
#define CAN_F12FB1_FFDB2(x)               (x << 2)
#define CAN_F12FB1_FFDB3_MASK             (0x01 << 3)
#define CAN_F12FB1_FFDB3_SHIFT            (3)
#define CAN_F12FB1_FFDB3(x)               (x << 3)
#define CAN_F12FB1_FFDB4_MASK             (0x01 << 4)
#define CAN_F12FB1_FFDB4_SHIFT            (4)
#define CAN_F12FB1_FFDB4(x)               (x << 4)
#define CAN_F12FB1_FFDB5_MASK             (0x01 << 5)
#define CAN_F12FB1_FFDB5_SHIFT            (5)
#define CAN_F12FB1_FFDB5(x)               (x << 5)
#define CAN_F12FB1_FFDB6_MASK             (0x01 << 6)
#define CAN_F12FB1_FFDB6_SHIFT            (6)
#define CAN_F12FB1_FFDB6(x)               (x << 6)
#define CAN_F12FB1_FFDB7_MASK             (0x01 << 7)
#define CAN_F12FB1_FFDB7_SHIFT            (7)
#define CAN_F12FB1_FFDB7(x)               (x << 7)
#define CAN_F12FB1_FFDB8_MASK             (0x01 << 8)
#define CAN_F12FB1_FFDB8_SHIFT            (8)
#define CAN_F12FB1_FFDB8(x)               (x << 8)
#define CAN_F12FB1_FFDB9_MASK             (0x01 << 9)
#define CAN_F12FB1_FFDB9_SHIFT            (9)
#define CAN_F12FB1_FFDB9(x)               (x << 9)
#define CAN_F12FB1_FFDB10_MASK            (0x01 << 10)
#define CAN_F12FB1_FFDB10_SHIFT           (10)
#define CAN_F12FB1_FFDB10(x)              (x << 10)
#define CAN_F12FB1_FFDB11_MASK            (0x01 << 11)
#define CAN_F12FB1_FFDB11_SHIFT           (11)
#define CAN_F12FB1_FFDB11(x)              (x << 11)
#define CAN_F12FB1_FFDB12_MASK            (0x01 << 12)
#define CAN_F12FB1_FFDB12_SHIFT           (12)
#define CAN_F12FB1_FFDB12(x)              (x << 12)
#define CAN_F12FB1_FFDB13_MASK            (0x01 << 13)
#define CAN_F12FB1_FFDB13_SHIFT           (13)
#define CAN_F12FB1_FFDB13(x)              (x << 13)
#define CAN_F12FB1_FFDB14_MASK            (0x01 << 14)
#define CAN_F12FB1_FFDB14_SHIFT           (14)
#define CAN_F12FB1_FFDB14(x)              (x << 14)
#define CAN_F12FB1_FFDB15_MASK            (0x01 << 15)
#define CAN_F12FB1_FFDB15_SHIFT           (15)
#define CAN_F12FB1_FFDB15(x)              (x << 15)
#define CAN_F12FB1_FFDB16_MASK            (0x01 << 16)
#define CAN_F12FB1_FFDB16_SHIFT           (16)
#define CAN_F12FB1_FFDB16(x)              (x << 16)
#define CAN_F12FB1_FFDB17_MASK            (0x01 << 17)
#define CAN_F12FB1_FFDB17_SHIFT           (17)
#define CAN_F12FB1_FFDB17(x)              (x << 17)
#define CAN_F12FB1_FFDB18_MASK            (0x01 << 18)
#define CAN_F12FB1_FFDB18_SHIFT           (18)
#define CAN_F12FB1_FFDB18(x)              (x << 18)
#define CAN_F12FB1_FFDB19_MASK            (0x01 << 19)
#define CAN_F12FB1_FFDB19_SHIFT           (19)
#define CAN_F12FB1_FFDB19(x)              (x << 19)
#define CAN_F12FB1_FFDB20_MASK            (0x01 << 20)
#define CAN_F12FB1_FFDB20_SHIFT           (20)
#define CAN_F12FB1_FFDB20(x)              (x << 20)
#define CAN_F12FB1_FFDB21_MASK            (0x01 << 21)
#define CAN_F12FB1_FFDB21_SHIFT           (21)
#define CAN_F12FB1_FFDB21(x)              (x << 21)
#define CAN_F12FB1_FFDB22_MASK            (0x01 << 22)
#define CAN_F12FB1_FFDB22_SHIFT           (22)
#define CAN_F12FB1_FFDB22(x)              (x << 22)
#define CAN_F12FB1_FFDB23_MASK            (0x01 << 23)
#define CAN_F12FB1_FFDB23_SHIFT           (23)
#define CAN_F12FB1_FFDB23(x)              (x << 23)
#define CAN_F12FB1_FFDB24_MASK            (0x01 << 24)
#define CAN_F12FB1_FFDB24_SHIFT           (24)
#define CAN_F12FB1_FFDB24(x)              (x << 24)
#define CAN_F12FB1_FFDB25_MASK            (0x01 << 25)
#define CAN_F12FB1_FFDB25_SHIFT           (25)
#define CAN_F12FB1_FFDB25(x)              (x << 25)
#define CAN_F12FB1_FFDB26_MASK            (0x01 << 26)
#define CAN_F12FB1_FFDB26_SHIFT           (26)
#define CAN_F12FB1_FFDB26(x)              (x << 26)
#define CAN_F12FB1_FFDB27_MASK            (0x01 << 27)
#define CAN_F12FB1_FFDB27_SHIFT           (27)
#define CAN_F12FB1_FFDB27(x)              (x << 27)
#define CAN_F12FB1_FFDB28_MASK            (0x01 << 28)
#define CAN_F12FB1_FFDB28_SHIFT           (28)
#define CAN_F12FB1_FFDB28(x)              (x << 28)
#define CAN_F12FB1_FFDB29_MASK            (0x01 << 29)
#define CAN_F12FB1_FFDB29_SHIFT           (29)
#define CAN_F12FB1_FFDB29(x)              (x << 29)
#define CAN_F12FB1_FFDB30_MASK            (0x01 << 30)
#define CAN_F12FB1_FFDB30_SHIFT           (30)
#define CAN_F12FB1_FFDB30(x)              (x << 30)
#define CAN_F12FB1_FFDB31_MASK            (0x01 << 31)
#define CAN_F12FB1_FFDB31_SHIFT           (31)
#define CAN_F12FB1_FFDB31(x)              (x << 31)
#define CAN_F12FB2_FFDB0_MASK             (0x01 << 0)
#define CAN_F12FB2_FFDB0_SHIFT            (0)
#define CAN_F12FB2_FFDB0(x)               (x << 0)
#define CAN_F12FB2_FFDB1_MASK             (0x01 << 1)
#define CAN_F12FB2_FFDB1_SHIFT            (1)
#define CAN_F12FB2_FFDB1(x)               (x << 1)
#define CAN_F12FB2_FFDB2_MASK             (0x01 << 2)
#define CAN_F12FB2_FFDB2_SHIFT            (2)
#define CAN_F12FB2_FFDB2(x)               (x << 2)
#define CAN_F12FB2_FFDB3_MASK             (0x01 << 3)
#define CAN_F12FB2_FFDB3_SHIFT            (3)
#define CAN_F12FB2_FFDB3(x)               (x << 3)
#define CAN_F12FB2_FFDB4_MASK             (0x01 << 4)
#define CAN_F12FB2_FFDB4_SHIFT            (4)
#define CAN_F12FB2_FFDB4(x)               (x << 4)
#define CAN_F12FB2_FFDB5_MASK             (0x01 << 5)
#define CAN_F12FB2_FFDB5_SHIFT            (5)
#define CAN_F12FB2_FFDB5(x)               (x << 5)
#define CAN_F12FB2_FFDB6_MASK             (0x01 << 6)
#define CAN_F12FB2_FFDB6_SHIFT            (6)
#define CAN_F12FB2_FFDB6(x)               (x << 6)
#define CAN_F12FB2_FFDB7_MASK             (0x01 << 7)
#define CAN_F12FB2_FFDB7_SHIFT            (7)
#define CAN_F12FB2_FFDB7(x)               (x << 7)
#define CAN_F12FB2_FFDB8_MASK             (0x01 << 8)
#define CAN_F12FB2_FFDB8_SHIFT            (8)
#define CAN_F12FB2_FFDB8(x)               (x << 8)
#define CAN_F12FB2_FFDB9_MASK             (0x01 << 9)
#define CAN_F12FB2_FFDB9_SHIFT            (9)
#define CAN_F12FB2_FFDB9(x)               (x << 9)
#define CAN_F12FB2_FFDB10_MASK            (0x01 << 10)
#define CAN_F12FB2_FFDB10_SHIFT           (10)
#define CAN_F12FB2_FFDB10(x)              (x << 10)
#define CAN_F12FB2_FFDB11_MASK            (0x01 << 11)
#define CAN_F12FB2_FFDB11_SHIFT           (11)
#define CAN_F12FB2_FFDB11(x)              (x << 11)
#define CAN_F12FB2_FFDB12_MASK            (0x01 << 12)
#define CAN_F12FB2_FFDB12_SHIFT           (12)
#define CAN_F12FB2_FFDB12(x)              (x << 12)
#define CAN_F12FB2_FFDB13_MASK            (0x01 << 13)
#define CAN_F12FB2_FFDB13_SHIFT           (13)
#define CAN_F12FB2_FFDB13(x)              (x << 13)
#define CAN_F12FB2_FFDB14_MASK            (0x01 << 14)
#define CAN_F12FB2_FFDB14_SHIFT           (14)
#define CAN_F12FB2_FFDB14(x)              (x << 14)
#define CAN_F12FB2_FFDB15_MASK            (0x01 << 15)
#define CAN_F12FB2_FFDB15_SHIFT           (15)
#define CAN_F12FB2_FFDB15(x)              (x << 15)
#define CAN_F12FB2_FFDB16_MASK            (0x01 << 16)
#define CAN_F12FB2_FFDB16_SHIFT           (16)
#define CAN_F12FB2_FFDB16(x)              (x << 16)
#define CAN_F12FB2_FFDB17_MASK            (0x01 << 17)
#define CAN_F12FB2_FFDB17_SHIFT           (17)
#define CAN_F12FB2_FFDB17(x)              (x << 17)
#define CAN_F12FB2_FFDB18_MASK            (0x01 << 18)
#define CAN_F12FB2_FFDB18_SHIFT           (18)
#define CAN_F12FB2_FFDB18(x)              (x << 18)
#define CAN_F12FB2_FFDB19_MASK            (0x01 << 19)
#define CAN_F12FB2_FFDB19_SHIFT           (19)
#define CAN_F12FB2_FFDB19(x)              (x << 19)
#define CAN_F12FB2_FFDB20_MASK            (0x01 << 20)
#define CAN_F12FB2_FFDB20_SHIFT           (20)
#define CAN_F12FB2_FFDB20(x)              (x << 20)
#define CAN_F12FB2_FFDB21_MASK            (0x01 << 21)
#define CAN_F12FB2_FFDB21_SHIFT           (21)
#define CAN_F12FB2_FFDB21(x)              (x << 21)
#define CAN_F12FB2_FFDB22_MASK            (0x01 << 22)
#define CAN_F12FB2_FFDB22_SHIFT           (22)
#define CAN_F12FB2_FFDB22(x)              (x << 22)
#define CAN_F12FB2_FFDB23_MASK            (0x01 << 23)
#define CAN_F12FB2_FFDB23_SHIFT           (23)
#define CAN_F12FB2_FFDB23(x)              (x << 23)
#define CAN_F12FB2_FFDB24_MASK            (0x01 << 24)
#define CAN_F12FB2_FFDB24_SHIFT           (24)
#define CAN_F12FB2_FFDB24(x)              (x << 24)
#define CAN_F12FB2_FFDB25_MASK            (0x01 << 25)
#define CAN_F12FB2_FFDB25_SHIFT           (25)
#define CAN_F12FB2_FFDB25(x)              (x << 25)
#define CAN_F12FB2_FFDB26_MASK            (0x01 << 26)
#define CAN_F12FB2_FFDB26_SHIFT           (26)
#define CAN_F12FB2_FFDB26(x)              (x << 26)
#define CAN_F12FB2_FFDB27_MASK            (0x01 << 27)
#define CAN_F12FB2_FFDB27_SHIFT           (27)
#define CAN_F12FB2_FFDB27(x)              (x << 27)
#define CAN_F12FB2_FFDB28_MASK            (0x01 << 28)
#define CAN_F12FB2_FFDB28_SHIFT           (28)
#define CAN_F12FB2_FFDB28(x)              (x << 28)
#define CAN_F12FB2_FFDB29_MASK            (0x01 << 29)
#define CAN_F12FB2_FFDB29_SHIFT           (29)
#define CAN_F12FB2_FFDB29(x)              (x << 29)
#define CAN_F12FB2_FFDB30_MASK            (0x01 << 30)
#define CAN_F12FB2_FFDB30_SHIFT           (30)
#define CAN_F12FB2_FFDB30(x)              (x << 30)
#define CAN_F12FB2_FFDB31_MASK            (0x01 << 31)
#define CAN_F12FB2_FFDB31_SHIFT           (31)
#define CAN_F12FB2_FFDB31(x)              (x << 31)
#define CAN_F13FB1_FFDB0_MASK             (0x01 << 0)
#define CAN_F13FB1_FFDB0_SHIFT            (0)
#define CAN_F13FB1_FFDB0(x)               (x << 0)
#define CAN_F13FB1_FFDB1_MASK             (0x01 << 1)
#define CAN_F13FB1_FFDB1_SHIFT            (1)
#define CAN_F13FB1_FFDB1(x)               (x << 1)
#define CAN_F13FB1_FFDB2_MASK             (0x01 << 2)
#define CAN_F13FB1_FFDB2_SHIFT            (2)
#define CAN_F13FB1_FFDB2(x)               (x << 2)
#define CAN_F13FB1_FFDB3_MASK             (0x01 << 3)
#define CAN_F13FB1_FFDB3_SHIFT            (3)
#define CAN_F13FB1_FFDB3(x)               (x << 3)
#define CAN_F13FB1_FFDB4_MASK             (0x01 << 4)
#define CAN_F13FB1_FFDB4_SHIFT            (4)
#define CAN_F13FB1_FFDB4(x)               (x << 4)
#define CAN_F13FB1_FFDB5_MASK             (0x01 << 5)
#define CAN_F13FB1_FFDB5_SHIFT            (5)
#define CAN_F13FB1_FFDB5(x)               (x << 5)
#define CAN_F13FB1_FFDB6_MASK             (0x01 << 6)
#define CAN_F13FB1_FFDB6_SHIFT            (6)
#define CAN_F13FB1_FFDB6(x)               (x << 6)
#define CAN_F13FB1_FFDB7_MASK             (0x01 << 7)
#define CAN_F13FB1_FFDB7_SHIFT            (7)
#define CAN_F13FB1_FFDB7(x)               (x << 7)
#define CAN_F13FB1_FFDB8_MASK             (0x01 << 8)
#define CAN_F13FB1_FFDB8_SHIFT            (8)
#define CAN_F13FB1_FFDB8(x)               (x << 8)
#define CAN_F13FB1_FFDB9_MASK             (0x01 << 9)
#define CAN_F13FB1_FFDB9_SHIFT            (9)
#define CAN_F13FB1_FFDB9(x)               (x << 9)
#define CAN_F13FB1_FFDB10_MASK            (0x01 << 10)
#define CAN_F13FB1_FFDB10_SHIFT           (10)
#define CAN_F13FB1_FFDB10(x)              (x << 10)
#define CAN_F13FB1_FFDB11_MASK            (0x01 << 11)
#define CAN_F13FB1_FFDB11_SHIFT           (11)
#define CAN_F13FB1_FFDB11(x)              (x << 11)
#define CAN_F13FB1_FFDB12_MASK            (0x01 << 12)
#define CAN_F13FB1_FFDB12_SHIFT           (12)
#define CAN_F13FB1_FFDB12(x)              (x << 12)
#define CAN_F13FB1_FFDB13_MASK            (0x01 << 13)
#define CAN_F13FB1_FFDB13_SHIFT           (13)
#define CAN_F13FB1_FFDB13(x)              (x << 13)
#define CAN_F13FB1_FFDB14_MASK            (0x01 << 14)
#define CAN_F13FB1_FFDB14_SHIFT           (14)
#define CAN_F13FB1_FFDB14(x)              (x << 14)
#define CAN_F13FB1_FFDB15_MASK            (0x01 << 15)
#define CAN_F13FB1_FFDB15_SHIFT           (15)
#define CAN_F13FB1_FFDB15(x)              (x << 15)
#define CAN_F13FB1_FFDB16_MASK            (0x01 << 16)
#define CAN_F13FB1_FFDB16_SHIFT           (16)
#define CAN_F13FB1_FFDB16(x)              (x << 16)
#define CAN_F13FB1_FFDB17_MASK            (0x01 << 17)
#define CAN_F13FB1_FFDB17_SHIFT           (17)
#define CAN_F13FB1_FFDB17(x)              (x << 17)
#define CAN_F13FB1_FFDB18_MASK            (0x01 << 18)
#define CAN_F13FB1_FFDB18_SHIFT           (18)
#define CAN_F13FB1_FFDB18(x)              (x << 18)
#define CAN_F13FB1_FFDB19_MASK            (0x01 << 19)
#define CAN_F13FB1_FFDB19_SHIFT           (19)
#define CAN_F13FB1_FFDB19(x)              (x << 19)
#define CAN_F13FB1_FFDB20_MASK            (0x01 << 20)
#define CAN_F13FB1_FFDB20_SHIFT           (20)
#define CAN_F13FB1_FFDB20(x)              (x << 20)
#define CAN_F13FB1_FFDB21_MASK            (0x01 << 21)
#define CAN_F13FB1_FFDB21_SHIFT           (21)
#define CAN_F13FB1_FFDB21(x)              (x << 21)
#define CAN_F13FB1_FFDB22_MASK            (0x01 << 22)
#define CAN_F13FB1_FFDB22_SHIFT           (22)
#define CAN_F13FB1_FFDB22(x)              (x << 22)
#define CAN_F13FB1_FFDB23_MASK            (0x01 << 23)
#define CAN_F13FB1_FFDB23_SHIFT           (23)
#define CAN_F13FB1_FFDB23(x)              (x << 23)
#define CAN_F13FB1_FFDB24_MASK            (0x01 << 24)
#define CAN_F13FB1_FFDB24_SHIFT           (24)
#define CAN_F13FB1_FFDB24(x)              (x << 24)
#define CAN_F13FB1_FFDB25_MASK            (0x01 << 25)
#define CAN_F13FB1_FFDB25_SHIFT           (25)
#define CAN_F13FB1_FFDB25(x)              (x << 25)
#define CAN_F13FB1_FFDB26_MASK            (0x01 << 26)
#define CAN_F13FB1_FFDB26_SHIFT           (26)
#define CAN_F13FB1_FFDB26(x)              (x << 26)
#define CAN_F13FB1_FFDB27_MASK            (0x01 << 27)
#define CAN_F13FB1_FFDB27_SHIFT           (27)
#define CAN_F13FB1_FFDB27(x)              (x << 27)
#define CAN_F13FB1_FFDB28_MASK            (0x01 << 28)
#define CAN_F13FB1_FFDB28_SHIFT           (28)
#define CAN_F13FB1_FFDB28(x)              (x << 28)
#define CAN_F13FB1_FFDB29_MASK            (0x01 << 29)
#define CAN_F13FB1_FFDB29_SHIFT           (29)
#define CAN_F13FB1_FFDB29(x)              (x << 29)
#define CAN_F13FB1_FFDB30_MASK            (0x01 << 30)
#define CAN_F13FB1_FFDB30_SHIFT           (30)
#define CAN_F13FB1_FFDB30(x)              (x << 30)
#define CAN_F13FB1_FFDB31_MASK            (0x01 << 31)
#define CAN_F13FB1_FFDB31_SHIFT           (31)
#define CAN_F13FB1_FFDB31(x)              (x << 31)
#define CAN_F13FB2_FFDB0_MASK             (0x01 << 0)
#define CAN_F13FB2_FFDB0_SHIFT            (0)
#define CAN_F13FB2_FFDB0(x)               (x << 0)
#define CAN_F13FB2_FFDB1_MASK             (0x01 << 1)
#define CAN_F13FB2_FFDB1_SHIFT            (1)
#define CAN_F13FB2_FFDB1(x)               (x << 1)
#define CAN_F13FB2_FFDB2_MASK             (0x01 << 2)
#define CAN_F13FB2_FFDB2_SHIFT            (2)
#define CAN_F13FB2_FFDB2(x)               (x << 2)
#define CAN_F13FB2_FFDB3_MASK             (0x01 << 3)
#define CAN_F13FB2_FFDB3_SHIFT            (3)
#define CAN_F13FB2_FFDB3(x)               (x << 3)
#define CAN_F13FB2_FFDB4_MASK             (0x01 << 4)
#define CAN_F13FB2_FFDB4_SHIFT            (4)
#define CAN_F13FB2_FFDB4(x)               (x << 4)
#define CAN_F13FB2_FFDB5_MASK             (0x01 << 5)
#define CAN_F13FB2_FFDB5_SHIFT            (5)
#define CAN_F13FB2_FFDB5(x)               (x << 5)
#define CAN_F13FB2_FFDB6_MASK             (0x01 << 6)
#define CAN_F13FB2_FFDB6_SHIFT            (6)
#define CAN_F13FB2_FFDB6(x)               (x << 6)
#define CAN_F13FB2_FFDB7_MASK             (0x01 << 7)
#define CAN_F13FB2_FFDB7_SHIFT            (7)
#define CAN_F13FB2_FFDB7(x)               (x << 7)
#define CAN_F13FB2_FFDB8_MASK             (0x01 << 8)
#define CAN_F13FB2_FFDB8_SHIFT            (8)
#define CAN_F13FB2_FFDB8(x)               (x << 8)
#define CAN_F13FB2_FFDB9_MASK             (0x01 << 9)
#define CAN_F13FB2_FFDB9_SHIFT            (9)
#define CAN_F13FB2_FFDB9(x)               (x << 9)
#define CAN_F13FB2_FFDB10_MASK            (0x01 << 10)
#define CAN_F13FB2_FFDB10_SHIFT           (10)
#define CAN_F13FB2_FFDB10(x)              (x << 10)
#define CAN_F13FB2_FFDB11_MASK            (0x01 << 11)
#define CAN_F13FB2_FFDB11_SHIFT           (11)
#define CAN_F13FB2_FFDB11(x)              (x << 11)
#define CAN_F13FB2_FFDB12_MASK            (0x01 << 12)
#define CAN_F13FB2_FFDB12_SHIFT           (12)
#define CAN_F13FB2_FFDB12(x)              (x << 12)
#define CAN_F13FB2_FFDB13_MASK            (0x01 << 13)
#define CAN_F13FB2_FFDB13_SHIFT           (13)
#define CAN_F13FB2_FFDB13(x)              (x << 13)
#define CAN_F13FB2_FFDB14_MASK            (0x01 << 14)
#define CAN_F13FB2_FFDB14_SHIFT           (14)
#define CAN_F13FB2_FFDB14(x)              (x << 14)
#define CAN_F13FB2_FFDB15_MASK            (0x01 << 15)
#define CAN_F13FB2_FFDB15_SHIFT           (15)
#define CAN_F13FB2_FFDB15(x)              (x << 15)
#define CAN_F13FB2_FFDB16_MASK            (0x01 << 16)
#define CAN_F13FB2_FFDB16_SHIFT           (16)
#define CAN_F13FB2_FFDB16(x)              (x << 16)
#define CAN_F13FB2_FFDB17_MASK            (0x01 << 17)
#define CAN_F13FB2_FFDB17_SHIFT           (17)
#define CAN_F13FB2_FFDB17(x)              (x << 17)
#define CAN_F13FB2_FFDB18_MASK            (0x01 << 18)
#define CAN_F13FB2_FFDB18_SHIFT           (18)
#define CAN_F13FB2_FFDB18(x)              (x << 18)
#define CAN_F13FB2_FFDB19_MASK            (0x01 << 19)
#define CAN_F13FB2_FFDB19_SHIFT           (19)
#define CAN_F13FB2_FFDB19(x)              (x << 19)
#define CAN_F13FB2_FFDB20_MASK            (0x01 << 20)
#define CAN_F13FB2_FFDB20_SHIFT           (20)
#define CAN_F13FB2_FFDB20(x)              (x << 20)
#define CAN_F13FB2_FFDB21_MASK            (0x01 << 21)
#define CAN_F13FB2_FFDB21_SHIFT           (21)
#define CAN_F13FB2_FFDB21(x)              (x << 21)
#define CAN_F13FB2_FFDB22_MASK            (0x01 << 22)
#define CAN_F13FB2_FFDB22_SHIFT           (22)
#define CAN_F13FB2_FFDB22(x)              (x << 22)
#define CAN_F13FB2_FFDB23_MASK            (0x01 << 23)
#define CAN_F13FB2_FFDB23_SHIFT           (23)
#define CAN_F13FB2_FFDB23(x)              (x << 23)
#define CAN_F13FB2_FFDB24_MASK            (0x01 << 24)
#define CAN_F13FB2_FFDB24_SHIFT           (24)
#define CAN_F13FB2_FFDB24(x)              (x << 24)
#define CAN_F13FB2_FFDB25_MASK            (0x01 << 25)
#define CAN_F13FB2_FFDB25_SHIFT           (25)
#define CAN_F13FB2_FFDB25(x)              (x << 25)
#define CAN_F13FB2_FFDB26_MASK            (0x01 << 26)
#define CAN_F13FB2_FFDB26_SHIFT           (26)
#define CAN_F13FB2_FFDB26(x)              (x << 26)
#define CAN_F13FB2_FFDB27_MASK            (0x01 << 27)
#define CAN_F13FB2_FFDB27_SHIFT           (27)
#define CAN_F13FB2_FFDB27(x)              (x << 27)
#define CAN_F13FB2_FFDB28_MASK            (0x01 << 28)
#define CAN_F13FB2_FFDB28_SHIFT           (28)
#define CAN_F13FB2_FFDB28(x)              (x << 28)
#define CAN_F13FB2_FFDB29_MASK            (0x01 << 29)
#define CAN_F13FB2_FFDB29_SHIFT           (29)
#define CAN_F13FB2_FFDB29(x)              (x << 29)
#define CAN_F13FB2_FFDB30_MASK            (0x01 << 30)
#define CAN_F13FB2_FFDB30_SHIFT           (30)
#define CAN_F13FB2_FFDB30(x)              (x << 30)
#define CAN_F13FB2_FFDB31_MASK            (0x01 << 31)
#define CAN_F13FB2_FFDB31_SHIFT           (31)
#define CAN_F13FB2_FFDB31(x)              (x << 31)

/* DAC - Digital to analog converter */
#define DAC_CTRL_D1EN_MASK                (0x01 << 0)
#define DAC_CTRL_D1EN_SHIFT               (0)
#define DAC_CTRL_D1EN(x)                  (x << 0)
#define DAC_CTRL_D1OBDIS_MASK             (0x01 << 1)
#define DAC_CTRL_D1OBDIS_SHIFT            (1)
#define DAC_CTRL_D1OBDIS(x)               (x << 1)
#define DAC_CTRL_D1TRGEN_MASK             (0x01 << 2)
#define DAC_CTRL_D1TRGEN_SHIFT            (2)
#define DAC_CTRL_D1TRGEN(x)               (x << 2)
#define DAC_CTRL_D1TRGSEL_MASK            (0x07 << 3)
#define DAC_CTRL_D1TRGSEL_SHIFT           (3)
#define DAC_CTRL_D1TRGSEL(x)              (x << 3)
#define DAC_CTRL_D1NM_MASK                (0x03 << 6)
#define DAC_CTRL_D1NM_SHIFT               (6)
#define DAC_CTRL_D1NM(x)                  (x << 6)
#define DAC_CTRL_D1NBSEL_MASK             (0x0f << 8)
#define DAC_CTRL_D1NBSEL_SHIFT            (8)
#define DAC_CTRL_D1NBSEL(x)               (x << 8)
#define DAC_CTRL_D1DMAEN_MASK             (0x01 << 12)
#define DAC_CTRL_D1DMAEN_SHIFT            (12)
#define DAC_CTRL_D1DMAEN(x)               (x << 12)
#define DAC_CTRL_D2EN_MASK                (0x01 << 16)
#define DAC_CTRL_D2EN_SHIFT               (16)
#define DAC_CTRL_D2EN(x)                  (x << 16)
#define DAC_CTRL_D2OBDIS_MASK             (0x01 << 17)
#define DAC_CTRL_D2OBDIS_SHIFT            (17)
#define DAC_CTRL_D2OBDIS(x)               (x << 17)
#define DAC_CTRL_D2TRGEN_MASK             (0x01 << 18)
#define DAC_CTRL_D2TRGEN_SHIFT            (18)
#define DAC_CTRL_D2TRGEN(x)               (x << 18)
#define DAC_CTRL_D2TRGSEL_MASK            (0x07 << 19)
#define DAC_CTRL_D2TRGSEL_SHIFT           (19)
#define DAC_CTRL_D2TRGSEL(x)              (x << 19)
#define DAC_CTRL_D2NM_MASK                (0x03 << 22)
#define DAC_CTRL_D2NM_SHIFT               (22)
#define DAC_CTRL_D2NM(x)                  (x << 22)
#define DAC_CTRL_D2NBSEL_MASK             (0x0f << 24)
#define DAC_CTRL_D2NBSEL_SHIFT            (24)
#define DAC_CTRL_D2NBSEL(x)               (x << 24)
#define DAC_CTRL_D2DMAEN_MASK             (0x01 << 28)
#define DAC_CTRL_D2DMAEN_SHIFT            (28)
#define DAC_CTRL_D2DMAEN(x)               (x << 28)
#define DAC_SWTRG_D1SWTRG_MASK            (0x01 << 0)
#define DAC_SWTRG_D1SWTRG_SHIFT           (0)
#define DAC_SWTRG_D1SWTRG(x)              (x << 0)
#define DAC_SWTRG_D2SWTRG_MASK            (0x01 << 1)
#define DAC_SWTRG_D2SWTRG_SHIFT           (1)
#define DAC_SWTRG_D2SWTRG(x)              (x << 1)
#define DAC_D1DTH12R_D1DT12R_MASK         (0xfff << 0)
#define DAC_D1DTH12R_D1DT12R_SHIFT        (0)
#define DAC_D1DTH12R_D1DT12R(x)           (x << 0)
#define DAC_D1DTH12L_D1DT12L_MASK         (0xfff << 4)
#define DAC_D1DTH12L_D1DT12L_SHIFT        (4)
#define DAC_D1DTH12L_D1DT12L(x)           (x << 4)
#define DAC_D1DTH8R_D1DT8R_MASK           (0xff << 0)
#define DAC_D1DTH8R_D1DT8R_SHIFT          (0)
#define DAC_D1DTH8R_D1DT8R(x)             (x << 0)
#define DAC_D2DTH12R_D2DT12R_MASK         (0xfff << 0)
#define DAC_D2DTH12R_D2DT12R_SHIFT        (0)
#define DAC_D2DTH12R_D2DT12R(x)           (x << 0)
#define DAC_D2DTH12L_D2DT12L_MASK         (0xfff << 4)
#define DAC_D2DTH12L_D2DT12L_SHIFT        (4)
#define DAC_D2DTH12L_D2DT12L(x)           (x << 4)
#define DAC_D2DTH8R_D2DT8R_MASK           (0xff << 0)
#define DAC_D2DTH8R_D2DT8R_SHIFT          (0)
#define DAC_D2DTH8R_D2DT8R(x)             (x << 0)
#define DAC_DDTH12R_DD1DT12R_MASK         (0xfff << 0)
#define DAC_DDTH12R_DD1DT12R_SHIFT        (0)
#define DAC_DDTH12R_DD1DT12R(x)           (x << 0)
#define DAC_DDTH12R_DD2DT12R_MASK         (0xfff << 16)
#define DAC_DDTH12R_DD2DT12R_SHIFT        (16)
#define DAC_DDTH12R_DD2DT12R(x)           (x << 16)
#define DAC_DDTH12L_DD1DT12L_MASK         (0xfff << 4)
#define DAC_DDTH12L_DD1DT12L_SHIFT        (4)
#define DAC_DDTH12L_DD1DT12L(x)           (x << 4)
#define DAC_DDTH12L_DD2DT12L_MASK         (0xfff << 20)
#define DAC_DDTH12L_DD2DT12L_SHIFT        (20)
#define DAC_DDTH12L_DD2DT12L(x)           (x << 20)
#define DAC_DDTH8R_DD1DT8R_MASK           (0xff << 0)
#define DAC_DDTH8R_DD1DT8R_SHIFT          (0)
#define DAC_DDTH8R_DD1DT8R(x)             (x << 0)
#define DAC_DDTH8R_DD2DT8R_MASK           (0xff << 8)
#define DAC_DDTH8R_DD2DT8R_SHIFT          (8)
#define DAC_DDTH8R_DD2DT8R(x)             (x << 8)
#define DAC_D1ODT_D1ODT_MASK              (0xfff << 0)
#define DAC_D1ODT_D1ODT_SHIFT             (0)
#define DAC_D1ODT_D1ODT(x)                (x << 0)
#define DAC_D2ODT_D2ODT_MASK              (0xfff << 0)
#define DAC_D2ODT_D2ODT_SHIFT             (0)
#define DAC_D2ODT_D2ODT(x)                (x << 0)

/* DEBUG - Debug support */
#define DEBUG_IDCODE_PID_MASK             (0xffffffff << 0)
#define DEBUG_IDCODE_PID_SHIFT            (0)
#define DEBUG_IDCODE_PID(x)               (x << 0)
#define DEBUG_CTRL_SLEEP_DEBUG_MASK       (0x01 << 0)
#define DEBUG_CTRL_SLEEP_DEBUG_SHIFT      (0)
#define DEBUG_CTRL_SLEEP_DEBUG(x)         (x << 0)
#define DEBUG_CTRL_DEEPSLEEP_DEBUG_MASK   (0x01 << 1)
#define DEBUG_CTRL_DEEPSLEEP_DEBUG_SHIFT  (1)
#define DEBUG_CTRL_DEEPSLEEP_DEBUG(x)     (x << 1)
#define DEBUG_CTRL_STANDBY_DEBUG_MASK     (0x01 << 2)
#define DEBUG_CTRL_STANDBY_DEBUG_SHIFT    (2)
#define DEBUG_CTRL_STANDBY_DEBUG(x)       (x << 2)
#define DEBUG_CTRL_TRACE_IOEN_MASK        (0x01 << 5)
#define DEBUG_CTRL_TRACE_IOEN_SHIFT       (5)
#define DEBUG_CTRL_TRACE_IOEN(x)          (x << 5)
#define DEBUG_CTRL_TRACE_MODE_MASK        (0x03 << 6)
#define DEBUG_CTRL_TRACE_MODE_SHIFT       (6)
#define DEBUG_CTRL_TRACE_MODE(x)          (x << 6)
#define DEBUG_CTRL_WDT_PAUSE_MASK         (0x01 << 8)
#define DEBUG_CTRL_WDT_PAUSE_SHIFT        (8)
#define DEBUG_CTRL_WDT_PAUSE(x)           (x << 8)
#define DEBUG_CTRL_WWDT_PAUSE_MASK        (0x01 << 9)
#define DEBUG_CTRL_WWDT_PAUSE_SHIFT       (9)
#define DEBUG_CTRL_WWDT_PAUSE(x)          (x << 9)
#define DEBUG_CTRL_TMR1_PAUSE_MASK        (0x01 << 10)
#define DEBUG_CTRL_TMR1_PAUSE_SHIFT       (10)
#define DEBUG_CTRL_TMR1_PAUSE(x)          (x << 10)
#define DEBUG_CTRL_TMR2_PAUSE_MASK        (0x01 << 11)
#define DEBUG_CTRL_TMR2_PAUSE_SHIFT       (11)
#define DEBUG_CTRL_TMR2_PAUSE(x)          (x << 11)
#define DEBUG_CTRL_TMR3_PAUSE_MASK        (0x01 << 12)
#define DEBUG_CTRL_TMR3_PAUSE_SHIFT       (12)
#define DEBUG_CTRL_TMR3_PAUSE(x)          (x << 12)
#define DEBUG_CTRL_TMR4_PAUSE_MASK        (0x01 << 13)
#define DEBUG_CTRL_TMR4_PAUSE_SHIFT       (13)
#define DEBUG_CTRL_TMR4_PAUSE(x)          (x << 13)
#define DEBUG_CTRL_CAN1_PAUSE_MASK        (0x01 << 14)
#define DEBUG_CTRL_CAN1_PAUSE_SHIFT       (14)
#define DEBUG_CTRL_CAN1_PAUSE(x)          (x << 14)
#define DEBUG_CTRL_I2C1_SMBUS_TIMEOUT_MASK (0x01 << 15)
#define DEBUG_CTRL_I2C1_SMBUS_TIMEOUT_SHIFT (15)
#define DEBUG_CTRL_I2C1_SMBUS_TIMEOUT(x)  (x << 15)
#define DEBUG_CTRL_I2C2_SMBUS_TIMEOUT_MASK (0x01 << 16)
#define DEBUG_CTRL_I2C2_SMBUS_TIMEOUT_SHIFT (16)
#define DEBUG_CTRL_I2C2_SMBUS_TIMEOUT(x)  (x << 16)
#define DEBUG_CTRL_TMR8_PAUSE_MASK        (0x01 << 17)
#define DEBUG_CTRL_TMR8_PAUSE_SHIFT       (17)
#define DEBUG_CTRL_TMR8_PAUSE(x)          (x << 17)
#define DEBUG_CTRL_TMR5_PAUSE_MASK        (0x01 << 18)
#define DEBUG_CTRL_TMR5_PAUSE_SHIFT       (18)
#define DEBUG_CTRL_TMR5_PAUSE(x)          (x << 18)
#define DEBUG_CTRL_TMR6_PAUSE_MASK        (0x01 << 19)
#define DEBUG_CTRL_TMR6_PAUSE_SHIFT       (19)
#define DEBUG_CTRL_TMR6_PAUSE(x)          (x << 19)
#define DEBUG_CTRL_TMR7_PAUSE_MASK        (0x01 << 20)
#define DEBUG_CTRL_TMR7_PAUSE_SHIFT       (20)
#define DEBUG_CTRL_TMR7_PAUSE(x)          (x << 20)
#define DEBUG_CTRL_CAN2_PAUSE_MASK        (0x01 << 21)
#define DEBUG_CTRL_CAN2_PAUSE_SHIFT       (21)
#define DEBUG_CTRL_CAN2_PAUSE(x)          (x << 21)
#define DEBUG_CTRL_TMR12_PAUSE_MASK       (0x01 << 25)
#define DEBUG_CTRL_TMR12_PAUSE_SHIFT      (25)
#define DEBUG_CTRL_TMR12_PAUSE(x)         (x << 25)
#define DEBUG_CTRL_TMR13_PAUSE_MASK       (0x01 << 26)
#define DEBUG_CTRL_TMR13_PAUSE_SHIFT      (26)
#define DEBUG_CTRL_TMR13_PAUSE(x)         (x << 26)
#define DEBUG_CTRL_TMR14_PAUSE_MASK       (0x01 << 27)
#define DEBUG_CTRL_TMR14_PAUSE_SHIFT      (27)
#define DEBUG_CTRL_TMR14_PAUSE(x)         (x << 27)
#define DEBUG_CTRL_TMR9_PAUSE_MASK        (0x01 << 28)
#define DEBUG_CTRL_TMR9_PAUSE_SHIFT       (28)
#define DEBUG_CTRL_TMR9_PAUSE(x)          (x << 28)
#define DEBUG_CTRL_TMR10_PAUSE_MASK       (0x01 << 29)
#define DEBUG_CTRL_TMR10_PAUSE_SHIFT      (29)
#define DEBUG_CTRL_TMR10_PAUSE(x)         (x << 29)
#define DEBUG_CTRL_TMR11_PAUSE_MASK       (0x01 << 30)
#define DEBUG_CTRL_TMR11_PAUSE_SHIFT      (30)
#define DEBUG_CTRL_TMR11_PAUSE(x)         (x << 30)
#define DEBUG_CTRL_I2C3_SMBUS_TIMEOUT_MASK (0x01 << 31)
#define DEBUG_CTRL_I2C3_SMBUS_TIMEOUT_SHIFT (31)
#define DEBUG_CTRL_I2C3_SMBUS_TIMEOUT(x)  (x << 31)

/* CRC - CRC calculation unit */
#define CRC_DT_DT_MASK                    (0xffffffff << 0)
#define CRC_DT_DT_SHIFT                   (0)
#define CRC_DT_DT(x)                      (x << 0)
#define CRC_CDT_CDT_MASK                  (0x01 << 0)
#define CRC_CDT_CDT_SHIFT                 (0)
#define CRC_CDT_CDT(x)                    (x << 0)
#define CRC_CTRL_RST_MASK                 (0x01 << 0)
#define CRC_CTRL_RST_SHIFT                (0)
#define CRC_CTRL_RST(x)                   (x << 0)
#define CRC_CTRL_REVID_MASK               (0x03 << 5)
#define CRC_CTRL_REVID_SHIFT              (5)
#define CRC_CTRL_REVID(x)                 (x << 5)
#define CRC_CTRL_REVOD_MASK               (0x01 << 7)
#define CRC_CTRL_REVOD_SHIFT              (7)
#define CRC_CTRL_REVOD(x)                 (x << 7)
#define CRC_IDT_IDT_MASK                  (0xffffffff << 0)
#define CRC_IDT_IDT_SHIFT                 (0)
#define CRC_IDT_IDT(x)                    (x << 0)

/* FLASH - Flash memory controler */
#define FLASH_UNLOCK_UKVAL_MASK           (0xffffffff << 0)
#define FLASH_UNLOCK_UKVAL_SHIFT          (0)
#define FLASH_UNLOCK_UKVAL(x)             (x << 0)
#define FLASH_USD_UNLOCK_USD_UKVAL_MASK   (0xffffffff << 0)
#define FLASH_USD_UNLOCK_USD_UKVAL_SHIFT  (0)
#define FLASH_USD_UNLOCK_USD_UKVAL(x)     (x << 0)
#define FLASH_STS_ODF_MASK                (0x01 << 5)
#define FLASH_STS_ODF_SHIFT               (5)
#define FLASH_STS_ODF(x)                  (x << 5)
#define FLASH_STS_EPPERR_MASK             (0x01 << 4)
#define FLASH_STS_EPPERR_SHIFT            (4)
#define FLASH_STS_EPPERR(x)               (x << 4)
#define FLASH_STS_PRGMERR_MASK            (0x01 << 2)
#define FLASH_STS_PRGMERR_SHIFT           (2)
#define FLASH_STS_PRGMERR(x)              (x << 2)
#define FLASH_STS_OBF_MASK                (0x01 << 0)
#define FLASH_STS_OBF_SHIFT               (0)
#define FLASH_STS_OBF(x)                  (x << 0)
#define FLASH_CTRL_FPRGM_MASK             (0x01 << 0)
#define FLASH_CTRL_FPRGM_SHIFT            (0)
#define FLASH_CTRL_FPRGM(x)               (x << 0)
#define FLASH_CTRL_SECERS_MASK            (0x01 << 1)
#define FLASH_CTRL_SECERS_SHIFT           (1)
#define FLASH_CTRL_SECERS(x)              (x << 1)
#define FLASH_CTRL_BANKERS_MASK           (0x01 << 2)
#define FLASH_CTRL_BANKERS_SHIFT          (2)
#define FLASH_CTRL_BANKERS(x)             (x << 2)
#define FLASH_CTRL_USDPRGM_MASK           (0x01 << 4)
#define FLASH_CTRL_USDPRGM_SHIFT          (4)
#define FLASH_CTRL_USDPRGM(x)             (x << 4)
#define FLASH_CTRL_USDERS_MASK            (0x01 << 5)
#define FLASH_CTRL_USDERS_SHIFT           (5)
#define FLASH_CTRL_USDERS(x)              (x << 5)
#define FLASH_CTRL_ERSTR_MASK             (0x01 << 6)
#define FLASH_CTRL_ERSTR_SHIFT            (6)
#define FLASH_CTRL_ERSTR(x)               (x << 6)
#define FLASH_CTRL_OPLK_MASK              (0x01 << 7)
#define FLASH_CTRL_OPLK_SHIFT             (7)
#define FLASH_CTRL_OPLK(x)                (x << 7)
#define FLASH_CTRL_USDULKS_MASK           (0x01 << 9)
#define FLASH_CTRL_USDULKS_SHIFT          (9)
#define FLASH_CTRL_USDULKS(x)             (x << 9)
#define FLASH_CTRL_ERRIE_MASK             (0x01 << 10)
#define FLASH_CTRL_ERRIE_SHIFT            (10)
#define FLASH_CTRL_ERRIE(x)               (x << 10)
#define FLASH_CTRL_ODFIE_MASK             (0x01 << 12)
#define FLASH_CTRL_ODFIE_SHIFT            (12)
#define FLASH_CTRL_ODFIE(x)               (x << 12)
#define FLASH_ADDR_FA_MASK                (0xffffffff << 0)
#define FLASH_ADDR_FA_SHIFT               (0)
#define FLASH_ADDR_FA(x)                  (x << 0)
#define FLASH_USD_USDERR_MASK             (0x01 << 0)
#define FLASH_USD_USDERR_SHIFT            (0)
#define FLASH_USD_USDERR(x)               (x << 0)
#define FLASH_USD_FAP_MASK                (0x01 << 1)
#define FLASH_USD_FAP_SHIFT               (1)
#define FLASH_USD_FAP(x)                  (x << 1)
#define FLASH_USD_nWDT_ATO_EN_MASK        (0x01 << 2)
#define FLASH_USD_nWDT_ATO_EN_SHIFT       (2)
#define FLASH_USD_nWDT_ATO_EN(x)          (x << 2)
#define FLASH_USD_nDEPSLP_RST_MASK        (0x01 << 3)
#define FLASH_USD_nDEPSLP_RST_SHIFT       (3)
#define FLASH_USD_nDEPSLP_RST(x)          (x << 3)
#define FLASH_USD_nSTDBY_RST_MASK         (0x01 << 4)
#define FLASH_USD_nSTDBY_RST_SHIFT        (4)
#define FLASH_USD_nSTDBY_RST(x)           (x << 4)
#define FLASH_USD_BTOPT_MASK              (0x01 << 5)
#define FLASH_USD_BTOPT_SHIFT             (5)
#define FLASH_USD_BTOPT(x)                (x << 5)
#define FLASH_USD_USER_D0_MASK            (0xff << 10)
#define FLASH_USD_USER_D0_SHIFT           (10)
#define FLASH_USD_USER_D0(x)              (x << 10)
#define FLASH_USD_USER_D1_MASK            (0xff << 18)
#define FLASH_USD_USER_D1_SHIFT           (18)
#define FLASH_USD_USER_D1(x)              (x << 18)
#define FLASH_EPPS_EPPS_MASK              (0xffffffff << 0)
#define FLASH_EPPS_EPPS_SHIFT             (0)
#define FLASH_EPPS_EPPS(x)                (x << 0)
#define FLASH_UNLOCK2_UKVAL_MASK          (0xffffffff << 0)
#define FLASH_UNLOCK2_UKVAL_SHIFT         (0)
#define FLASH_UNLOCK2_UKVAL(x)            (x << 0)
#define FLASH_STS2_OBF_MASK               (0x01 << 0)
#define FLASH_STS2_OBF_SHIFT              (0)
#define FLASH_STS2_OBF(x)                 (x << 0)
#define FLASH_STS2_PRGMERR_MASK           (0x01 << 2)
#define FLASH_STS2_PRGMERR_SHIFT          (2)
#define FLASH_STS2_PRGMERR(x)             (x << 2)
#define FLASH_STS2_EPPERR_MASK            (0x01 << 4)
#define FLASH_STS2_EPPERR_SHIFT           (4)
#define FLASH_STS2_EPPERR(x)              (x << 4)
#define FLASH_STS2_ODF_MASK               (0x01 << 5)
#define FLASH_STS2_ODF_SHIFT              (5)
#define FLASH_STS2_ODF(x)                 (x << 5)
#define FLASH_CTRL2_FPRGM_MASK            (0x01 << 0)
#define FLASH_CTRL2_FPRGM_SHIFT           (0)
#define FLASH_CTRL2_FPRGM(x)              (x << 0)
#define FLASH_CTRL2_SECERS_MASK           (0x01 << 1)
#define FLASH_CTRL2_SECERS_SHIFT          (1)
#define FLASH_CTRL2_SECERS(x)             (x << 1)
#define FLASH_CTRL2_BANKERS_MASK          (0x01 << 2)
#define FLASH_CTRL2_BANKERS_SHIFT         (2)
#define FLASH_CTRL2_BANKERS(x)            (x << 2)
#define FLASH_CTRL2_ERSTR_MASK            (0x01 << 6)
#define FLASH_CTRL2_ERSTR_SHIFT           (6)
#define FLASH_CTRL2_ERSTR(x)              (x << 6)
#define FLASH_CTRL2_OPLK_MASK             (0x01 << 7)
#define FLASH_CTRL2_OPLK_SHIFT            (7)
#define FLASH_CTRL2_OPLK(x)               (x << 7)
#define FLASH_CTRL2_ERRIE_MASK            (0x01 << 10)
#define FLASH_CTRL2_ERRIE_SHIFT           (10)
#define FLASH_CTRL2_ERRIE(x)              (x << 10)
#define FLASH_CTRL2_ODFIE_MASK            (0x01 << 12)
#define FLASH_CTRL2_ODFIE_SHIFT           (12)
#define FLASH_CTRL2_ODFIE(x)              (x << 12)
#define FLASH_ADDR2_FA_MASK               (0xffffffff << 0)
#define FLASH_ADDR2_FA_SHIFT              (0)
#define FLASH_ADDR2_FA(x)                 (x << 0)
#define FLASH_UNLOCK3_UKVAL_MASK          (0xffffffff << 0)
#define FLASH_UNLOCK3_UKVAL_SHIFT         (0)
#define FLASH_UNLOCK3_UKVAL(x)            (x << 0)
#define FLASH_SELECT_SELECT_MASK          (0xffffffff << 0)
#define FLASH_SELECT_SELECT_SHIFT         (0)
#define FLASH_SELECT_SELECT(x)            (x << 0)
#define FLASH_STS3_OBF_MASK               (0x01 << 0)
#define FLASH_STS3_OBF_SHIFT              (0)
#define FLASH_STS3_OBF(x)                 (x << 0)
#define FLASH_STS3_PRGMERR_MASK           (0x01 << 2)
#define FLASH_STS3_PRGMERR_SHIFT          (2)
#define FLASH_STS3_PRGMERR(x)             (x << 2)
#define FLASH_STS3_EPPERR_MASK            (0x01 << 4)
#define FLASH_STS3_EPPERR_SHIFT           (4)
#define FLASH_STS3_EPPERR(x)              (x << 4)
#define FLASH_STS3_ODF_MASK               (0x01 << 5)
#define FLASH_STS3_ODF_SHIFT              (5)
#define FLASH_STS3_ODF(x)                 (x << 5)
#define FLASH_CTRL3_FPRGM_MASK            (0x01 << 0)
#define FLASH_CTRL3_FPRGM_SHIFT           (0)
#define FLASH_CTRL3_FPRGM(x)              (x << 0)
#define FLASH_CTRL3_SECERS_MASK           (0x01 << 1)
#define FLASH_CTRL3_SECERS_SHIFT          (1)
#define FLASH_CTRL3_SECERS(x)             (x << 1)
#define FLASH_CTRL3_CHPERS_MASK           (0x01 << 2)
#define FLASH_CTRL3_CHPERS_SHIFT          (2)
#define FLASH_CTRL3_CHPERS(x)             (x << 2)
#define FLASH_CTRL3_ERSTR_MASK            (0x01 << 6)
#define FLASH_CTRL3_ERSTR_SHIFT           (6)
#define FLASH_CTRL3_ERSTR(x)              (x << 6)
#define FLASH_CTRL3_OPLK_MASK             (0x01 << 7)
#define FLASH_CTRL3_OPLK_SHIFT            (7)
#define FLASH_CTRL3_OPLK(x)               (x << 7)
#define FLASH_CTRL3_ERRIE_MASK            (0x01 << 10)
#define FLASH_CTRL3_ERRIE_SHIFT           (10)
#define FLASH_CTRL3_ERRIE(x)              (x << 10)
#define FLASH_CTRL3_ODFIE_MASK            (0x01 << 12)
#define FLASH_CTRL3_ODFIE_SHIFT           (12)
#define FLASH_CTRL3_ODFIE(x)              (x << 12)
#define FLASH_ADDR3_FA_MASK               (0xffffffff << 0)
#define FLASH_ADDR3_FA_SHIFT              (0)
#define FLASH_ADDR3_FA(x)                 (x << 0)
#define FLASH_DA_FDA_MASK                 (0xffffffff << 0)
#define FLASH_DA_FDA_SHIFT                (0)
#define FLASH_DA_FDA(x)                   (x << 0)
#define FLASH_SLIB_STS0_SLIB_ENF_MASK     (0x01 << 3)
#define FLASH_SLIB_STS0_SLIB_ENF_SHIFT    (3)
#define FLASH_SLIB_STS0_SLIB_ENF(x)       (x << 3)
#define FLASH_SLIB_STS1_SLIB_SS_MASK      (0x7ff << 0)
#define FLASH_SLIB_STS1_SLIB_SS_SHIFT     (0)
#define FLASH_SLIB_STS1_SLIB_SS(x)        (x << 0)
#define FLASH_SLIB_STS1_SLIB_DAT_SS_MASK  (0x7ff << 11)
#define FLASH_SLIB_STS1_SLIB_DAT_SS_SHIFT (11)
#define FLASH_SLIB_STS1_SLIB_DAT_SS(x)    (x << 11)
#define FLASH_SLIB_STS1_SLIB_ES_MASK      (0x3ff << 22)
#define FLASH_SLIB_STS1_SLIB_ES_SHIFT     (22)
#define FLASH_SLIB_STS1_SLIB_ES(x)        (x << 22)
#define FLASH_SLIB_PWD_CLR_SLIB_PCLR_VAL_MASK (0xffffffff << 0)
#define FLASH_SLIB_PWD_CLR_SLIB_PCLR_VAL_SHIFT (0)
#define FLASH_SLIB_PWD_CLR_SLIB_PCLR_VAL(x) (x << 0)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_ERR_MASK (0x01 << 0)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_ERR_SHIFT (0)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_ERR(x) (x << 0)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_OK_MASK (0x01 << 1)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_OK_SHIFT (1)
#define FLASH_SLIB_MISC_STS_SLIB_PWD_OK(x) (x << 1)
#define FLASH_SLIB_MISC_STS_SLIB_ULKF_MASK (0x01 << 2)
#define FLASH_SLIB_MISC_STS_SLIB_ULKF_SHIFT (2)
#define FLASH_SLIB_MISC_STS_SLIB_ULKF(x)  (x << 2)
#define FLASH_SLIB_MISC_STS_SLIB_RCNT_MASK (0x1ff << 16)
#define FLASH_SLIB_MISC_STS_SLIB_RCNT_SHIFT (16)
#define FLASH_SLIB_MISC_STS_SLIB_RCNT(x)  (x << 16)
#define FLASH_SLIB_SET_PWD_SLIB_PSET_VAL_MASK (0xffffffff << 0)
#define FLASH_SLIB_SET_PWD_SLIB_PSET_VAL_SHIFT (0)
#define FLASH_SLIB_SET_PWD_SLIB_PSET_VAL(x) (x << 0)
#define FLASH_SLIB_SET_RANGE_SLIB_SS_SET_MASK (0x7ff << 0)
#define FLASH_SLIB_SET_RANGE_SLIB_SS_SET_SHIFT (0)
#define FLASH_SLIB_SET_RANGE_SLIB_SS_SET(x) (x << 0)
#define FLASH_SLIB_SET_RANGE_SLIB_DSS_SET_MASK (0x7ff << 11)
#define FLASH_SLIB_SET_RANGE_SLIB_DSS_SET_SHIFT (11)
#define FLASH_SLIB_SET_RANGE_SLIB_DSS_SET(x) (x << 11)
#define FLASH_SLIB_SET_RANGE_SLIB_ES_SET_MASK (0x3ff << 22)
#define FLASH_SLIB_SET_RANGE_SLIB_ES_SET_SHIFT (22)
#define FLASH_SLIB_SET_RANGE_SLIB_ES_SET(x) (x << 22)
#define FLASH_SLIB_UNLOCK_SLIB_UKVAL_MASK (0xffffffff << 0)
#define FLASH_SLIB_UNLOCK_SLIB_UKVAL_SHIFT (0)
#define FLASH_SLIB_UNLOCK_SLIB_UKVAL(x)   (x << 0)
#define FLASH_CRC_CTRL_CRC_SS_MASK        (0xfff << 0)
#define FLASH_CRC_CTRL_CRC_SS_SHIFT       (0)
#define FLASH_CRC_CTRL_CRC_SS(x)          (x << 0)
#define FLASH_CRC_CTRL_CRC_SN_MASK        (0xfff << 12)
#define FLASH_CRC_CTRL_CRC_SN_SHIFT       (12)
#define FLASH_CRC_CTRL_CRC_SN(x)          (x << 12)
#define FLASH_CRC_CTRL_CRC_STRT_MASK      (0x01 << 31)
#define FLASH_CRC_CTRL_CRC_STRT_SHIFT     (31)
#define FLASH_CRC_CTRL_CRC_STRT(x)        (x << 31)
#define FLASH_CRC_CHKR_CRC_CHKR_MASK      (0xffffffff << 0)
#define FLASH_CRC_CHKR_CRC_CHKR_SHIFT     (0)
#define FLASH_CRC_CHKR_CRC_CHKR(x)        (x << 0)

/* NVIC - Nested Vectored Interrupt Controller */
#define NVIC_ICTR_INTLINESNUM_MASK        (0x0f << 0)
#define NVIC_ICTR_INTLINESNUM_SHIFT       (0)
#define NVIC_ICTR_INTLINESNUM(x)          (x << 0)
#define NVIC_STIR_INTID_MASK              (0x1ff << 0)
#define NVIC_STIR_INTID_SHIFT             (0)
#define NVIC_STIR_INTID(x)                (x << 0)
#define NVIC_ISER0_SETENA_MASK            (0xffffffff << 0)
#define NVIC_ISER0_SETENA_SHIFT           (0)
#define NVIC_ISER0_SETENA(x)              (x << 0)
#define NVIC_ISER1_SETENA_MASK            (0xffffffff << 0)
#define NVIC_ISER1_SETENA_SHIFT           (0)
#define NVIC_ISER1_SETENA(x)              (x << 0)
#define NVIC_ICER0_CLRENA_MASK            (0xffffffff << 0)
#define NVIC_ICER0_CLRENA_SHIFT           (0)
#define NVIC_ICER0_CLRENA(x)              (x << 0)
#define NVIC_ICER1_CLRENA_MASK            (0xffffffff << 0)
#define NVIC_ICER1_CLRENA_SHIFT           (0)
#define NVIC_ICER1_CLRENA(x)              (x << 0)
#define NVIC_ISPR0_SETPEND_MASK           (0xffffffff << 0)
#define NVIC_ISPR0_SETPEND_SHIFT          (0)
#define NVIC_ISPR0_SETPEND(x)             (x << 0)
#define NVIC_ISPR1_SETPEND_MASK           (0xffffffff << 0)
#define NVIC_ISPR1_SETPEND_SHIFT          (0)
#define NVIC_ISPR1_SETPEND(x)             (x << 0)
#define NVIC_ICPR0_CLRPEND_MASK           (0xffffffff << 0)
#define NVIC_ICPR0_CLRPEND_SHIFT          (0)
#define NVIC_ICPR0_CLRPEND(x)             (x << 0)
#define NVIC_ICPR1_CLRPEND_MASK           (0xffffffff << 0)
#define NVIC_ICPR1_CLRPEND_SHIFT          (0)
#define NVIC_ICPR1_CLRPEND(x)             (x << 0)
#define NVIC_IABR0_ACTIVE_MASK            (0xffffffff << 0)
#define NVIC_IABR0_ACTIVE_SHIFT           (0)
#define NVIC_IABR0_ACTIVE(x)              (x << 0)
#define NVIC_IABR1_ACTIVE_MASK            (0xffffffff << 0)
#define NVIC_IABR1_ACTIVE_SHIFT           (0)
#define NVIC_IABR1_ACTIVE(x)              (x << 0)
#define NVIC_IPR0_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR0_IPR_N0_SHIFT            (0)
#define NVIC_IPR0_IPR_N0(x)               (x << 0)
#define NVIC_IPR0_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR0_IPR_N1_SHIFT            (8)
#define NVIC_IPR0_IPR_N1(x)               (x << 8)
#define NVIC_IPR0_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR0_IPR_N2_SHIFT            (16)
#define NVIC_IPR0_IPR_N2(x)               (x << 16)
#define NVIC_IPR0_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR0_IPR_N3_SHIFT            (24)
#define NVIC_IPR0_IPR_N3(x)               (x << 24)
#define NVIC_IPR1_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR1_IPR_N0_SHIFT            (0)
#define NVIC_IPR1_IPR_N0(x)               (x << 0)
#define NVIC_IPR1_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR1_IPR_N1_SHIFT            (8)
#define NVIC_IPR1_IPR_N1(x)               (x << 8)
#define NVIC_IPR1_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR1_IPR_N2_SHIFT            (16)
#define NVIC_IPR1_IPR_N2(x)               (x << 16)
#define NVIC_IPR1_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR1_IPR_N3_SHIFT            (24)
#define NVIC_IPR1_IPR_N3(x)               (x << 24)
#define NVIC_IPR2_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR2_IPR_N0_SHIFT            (0)
#define NVIC_IPR2_IPR_N0(x)               (x << 0)
#define NVIC_IPR2_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR2_IPR_N1_SHIFT            (8)
#define NVIC_IPR2_IPR_N1(x)               (x << 8)
#define NVIC_IPR2_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR2_IPR_N2_SHIFT            (16)
#define NVIC_IPR2_IPR_N2(x)               (x << 16)
#define NVIC_IPR2_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR2_IPR_N3_SHIFT            (24)
#define NVIC_IPR2_IPR_N3(x)               (x << 24)
#define NVIC_IPR3_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR3_IPR_N0_SHIFT            (0)
#define NVIC_IPR3_IPR_N0(x)               (x << 0)
#define NVIC_IPR3_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR3_IPR_N1_SHIFT            (8)
#define NVIC_IPR3_IPR_N1(x)               (x << 8)
#define NVIC_IPR3_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR3_IPR_N2_SHIFT            (16)
#define NVIC_IPR3_IPR_N2(x)               (x << 16)
#define NVIC_IPR3_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR3_IPR_N3_SHIFT            (24)
#define NVIC_IPR3_IPR_N3(x)               (x << 24)
#define NVIC_IPR4_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR4_IPR_N0_SHIFT            (0)
#define NVIC_IPR4_IPR_N0(x)               (x << 0)
#define NVIC_IPR4_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR4_IPR_N1_SHIFT            (8)
#define NVIC_IPR4_IPR_N1(x)               (x << 8)
#define NVIC_IPR4_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR4_IPR_N2_SHIFT            (16)
#define NVIC_IPR4_IPR_N2(x)               (x << 16)
#define NVIC_IPR4_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR4_IPR_N3_SHIFT            (24)
#define NVIC_IPR4_IPR_N3(x)               (x << 24)
#define NVIC_IPR5_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR5_IPR_N0_SHIFT            (0)
#define NVIC_IPR5_IPR_N0(x)               (x << 0)
#define NVIC_IPR5_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR5_IPR_N1_SHIFT            (8)
#define NVIC_IPR5_IPR_N1(x)               (x << 8)
#define NVIC_IPR5_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR5_IPR_N2_SHIFT            (16)
#define NVIC_IPR5_IPR_N2(x)               (x << 16)
#define NVIC_IPR5_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR5_IPR_N3_SHIFT            (24)
#define NVIC_IPR5_IPR_N3(x)               (x << 24)
#define NVIC_IPR6_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR6_IPR_N0_SHIFT            (0)
#define NVIC_IPR6_IPR_N0(x)               (x << 0)
#define NVIC_IPR6_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR6_IPR_N1_SHIFT            (8)
#define NVIC_IPR6_IPR_N1(x)               (x << 8)
#define NVIC_IPR6_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR6_IPR_N2_SHIFT            (16)
#define NVIC_IPR6_IPR_N2(x)               (x << 16)
#define NVIC_IPR6_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR6_IPR_N3_SHIFT            (24)
#define NVIC_IPR6_IPR_N3(x)               (x << 24)
#define NVIC_IPR7_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR7_IPR_N0_SHIFT            (0)
#define NVIC_IPR7_IPR_N0(x)               (x << 0)
#define NVIC_IPR7_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR7_IPR_N1_SHIFT            (8)
#define NVIC_IPR7_IPR_N1(x)               (x << 8)
#define NVIC_IPR7_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR7_IPR_N2_SHIFT            (16)
#define NVIC_IPR7_IPR_N2(x)               (x << 16)
#define NVIC_IPR7_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR7_IPR_N3_SHIFT            (24)
#define NVIC_IPR7_IPR_N3(x)               (x << 24)
#define NVIC_IPR8_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR8_IPR_N0_SHIFT            (0)
#define NVIC_IPR8_IPR_N0(x)               (x << 0)
#define NVIC_IPR8_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR8_IPR_N1_SHIFT            (8)
#define NVIC_IPR8_IPR_N1(x)               (x << 8)
#define NVIC_IPR8_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR8_IPR_N2_SHIFT            (16)
#define NVIC_IPR8_IPR_N2(x)               (x << 16)
#define NVIC_IPR8_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR8_IPR_N3_SHIFT            (24)
#define NVIC_IPR8_IPR_N3(x)               (x << 24)
#define NVIC_IPR9_IPR_N0_MASK             (0xff << 0)
#define NVIC_IPR9_IPR_N0_SHIFT            (0)
#define NVIC_IPR9_IPR_N0(x)               (x << 0)
#define NVIC_IPR9_IPR_N1_MASK             (0xff << 8)
#define NVIC_IPR9_IPR_N1_SHIFT            (8)
#define NVIC_IPR9_IPR_N1(x)               (x << 8)
#define NVIC_IPR9_IPR_N2_MASK             (0xff << 16)
#define NVIC_IPR9_IPR_N2_SHIFT            (16)
#define NVIC_IPR9_IPR_N2(x)               (x << 16)
#define NVIC_IPR9_IPR_N3_MASK             (0xff << 24)
#define NVIC_IPR9_IPR_N3_SHIFT            (24)
#define NVIC_IPR9_IPR_N3(x)               (x << 24)
#define NVIC_IPR10_IPR_N0_MASK            (0xff << 0)
#define NVIC_IPR10_IPR_N0_SHIFT           (0)
#define NVIC_IPR10_IPR_N0(x)              (x << 0)
#define NVIC_IPR10_IPR_N1_MASK            (0xff << 8)
#define NVIC_IPR10_IPR_N1_SHIFT           (8)
#define NVIC_IPR10_IPR_N1(x)              (x << 8)
#define NVIC_IPR10_IPR_N2_MASK            (0xff << 16)
#define NVIC_IPR10_IPR_N2_SHIFT           (16)
#define NVIC_IPR10_IPR_N2(x)              (x << 16)
#define NVIC_IPR10_IPR_N3_MASK            (0xff << 24)
#define NVIC_IPR10_IPR_N3_SHIFT           (24)
#define NVIC_IPR10_IPR_N3(x)              (x << 24)
#define NVIC_IPR11_IPR_N0_MASK            (0xff << 0)
#define NVIC_IPR11_IPR_N0_SHIFT           (0)
#define NVIC_IPR11_IPR_N0(x)              (x << 0)
#define NVIC_IPR11_IPR_N1_MASK            (0xff << 8)
#define NVIC_IPR11_IPR_N1_SHIFT           (8)
#define NVIC_IPR11_IPR_N1(x)              (x << 8)
#define NVIC_IPR11_IPR_N2_MASK            (0xff << 16)
#define NVIC_IPR11_IPR_N2_SHIFT           (16)
#define NVIC_IPR11_IPR_N2(x)              (x << 16)
#define NVIC_IPR11_IPR_N3_MASK            (0xff << 24)
#define NVIC_IPR11_IPR_N3_SHIFT           (24)
#define NVIC_IPR11_IPR_N3(x)              (x << 24)
#define NVIC_IPR12_IPR_N0_MASK            (0xff << 0)
#define NVIC_IPR12_IPR_N0_SHIFT           (0)
#define NVIC_IPR12_IPR_N0(x)              (x << 0)
#define NVIC_IPR12_IPR_N1_MASK            (0xff << 8)
#define NVIC_IPR12_IPR_N1_SHIFT           (8)
#define NVIC_IPR12_IPR_N1(x)              (x << 8)
#define NVIC_IPR12_IPR_N2_MASK            (0xff << 16)
#define NVIC_IPR12_IPR_N2_SHIFT           (16)
#define NVIC_IPR12_IPR_N2(x)              (x << 16)
#define NVIC_IPR12_IPR_N3_MASK            (0xff << 24)
#define NVIC_IPR12_IPR_N3_SHIFT           (24)
#define NVIC_IPR12_IPR_N3(x)              (x << 24)
#define NVIC_IPR13_IPR_N0_MASK            (0xff << 0)
#define NVIC_IPR13_IPR_N0_SHIFT           (0)
#define NVIC_IPR13_IPR_N0(x)              (x << 0)
#define NVIC_IPR13_IPR_N1_MASK            (0xff << 8)
#define NVIC_IPR13_IPR_N1_SHIFT           (8)
#define NVIC_IPR13_IPR_N1(x)              (x << 8)
#define NVIC_IPR13_IPR_N2_MASK            (0xff << 16)
#define NVIC_IPR13_IPR_N2_SHIFT           (16)
#define NVIC_IPR13_IPR_N2(x)              (x << 16)
#define NVIC_IPR13_IPR_N3_MASK            (0xff << 24)
#define NVIC_IPR13_IPR_N3_SHIFT           (24)
#define NVIC_IPR13_IPR_N3(x)              (x << 24)
#define NVIC_IPR14_IPR_N0_MASK            (0xff << 0)
#define NVIC_IPR14_IPR_N0_SHIFT           (0)
#define NVIC_IPR14_IPR_N0(x)              (x << 0)
#define NVIC_IPR14_IPR_N1_MASK            (0xff << 8)
#define NVIC_IPR14_IPR_N1_SHIFT           (8)
#define NVIC_IPR14_IPR_N1(x)              (x << 8)
#define NVIC_IPR14_IPR_N2_MASK            (0xff << 16)
#define NVIC_IPR14_IPR_N2_SHIFT           (16)
#define NVIC_IPR14_IPR_N2(x)              (x << 16)
#define NVIC_IPR14_IPR_N3_MASK            (0xff << 24)
#define NVIC_IPR14_IPR_N3_SHIFT           (24)
#define NVIC_IPR14_IPR_N3(x)              (x << 24)

/* USBFS - Universal serial bus full-speed device interface */
#define USBFS_EPT0_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT0_EPTADDR_SHIFT          (0)
#define USBFS_EPT0_EPTADDR(x)             (x << 0)
#define USBFS_EPT0_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT0_TXSTS_SHIFT            (4)
#define USBFS_EPT0_TXSTS(x)               (x << 4)
#define USBFS_EPT0_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT0_TXDTS_SHIFT            (6)
#define USBFS_EPT0_TXDTS(x)               (x << 6)
#define USBFS_EPT0_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT0_TXTC_SHIFT             (7)
#define USBFS_EPT0_TXTC(x)                (x << 7)
#define USBFS_EPT0_EXF_MASK               (0x01 << 8)
#define USBFS_EPT0_EXF_SHIFT              (8)
#define USBFS_EPT0_EXF(x)                 (x << 8)
#define USBFS_EPT0_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT0_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT0_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT0_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT0_SETUPTC_SHIFT          (11)
#define USBFS_EPT0_SETUPTC(x)             (x << 11)
#define USBFS_EPT0_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT0_RXSTS_SHIFT            (12)
#define USBFS_EPT0_RXSTS(x)               (x << 12)
#define USBFS_EPT0_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT0_RXDTS_SHIFT            (14)
#define USBFS_EPT0_RXDTS(x)               (x << 14)
#define USBFS_EPT0_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT0_RXTC_SHIFT             (15)
#define USBFS_EPT0_RXTC(x)                (x << 15)
#define USBFS_EPT1_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT1_EPTADDR_SHIFT          (0)
#define USBFS_EPT1_EPTADDR(x)             (x << 0)
#define USBFS_EPT1_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT1_TXSTS_SHIFT            (4)
#define USBFS_EPT1_TXSTS(x)               (x << 4)
#define USBFS_EPT1_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT1_TXDTS_SHIFT            (6)
#define USBFS_EPT1_TXDTS(x)               (x << 6)
#define USBFS_EPT1_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT1_TXTC_SHIFT             (7)
#define USBFS_EPT1_TXTC(x)                (x << 7)
#define USBFS_EPT1_EXF_MASK               (0x01 << 8)
#define USBFS_EPT1_EXF_SHIFT              (8)
#define USBFS_EPT1_EXF(x)                 (x << 8)
#define USBFS_EPT1_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT1_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT1_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT1_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT1_SETUPTC_SHIFT          (11)
#define USBFS_EPT1_SETUPTC(x)             (x << 11)
#define USBFS_EPT1_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT1_RXSTS_SHIFT            (12)
#define USBFS_EPT1_RXSTS(x)               (x << 12)
#define USBFS_EPT1_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT1_RXDTS_SHIFT            (14)
#define USBFS_EPT1_RXDTS(x)               (x << 14)
#define USBFS_EPT1_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT1_RXTC_SHIFT             (15)
#define USBFS_EPT1_RXTC(x)                (x << 15)
#define USBFS_EPT2_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT2_EPTADDR_SHIFT          (0)
#define USBFS_EPT2_EPTADDR(x)             (x << 0)
#define USBFS_EPT2_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT2_TXSTS_SHIFT            (4)
#define USBFS_EPT2_TXSTS(x)               (x << 4)
#define USBFS_EPT2_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT2_TXDTS_SHIFT            (6)
#define USBFS_EPT2_TXDTS(x)               (x << 6)
#define USBFS_EPT2_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT2_TXTC_SHIFT             (7)
#define USBFS_EPT2_TXTC(x)                (x << 7)
#define USBFS_EPT2_EXF_MASK               (0x01 << 8)
#define USBFS_EPT2_EXF_SHIFT              (8)
#define USBFS_EPT2_EXF(x)                 (x << 8)
#define USBFS_EPT2_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT2_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT2_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT2_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT2_SETUPTC_SHIFT          (11)
#define USBFS_EPT2_SETUPTC(x)             (x << 11)
#define USBFS_EPT2_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT2_RXSTS_SHIFT            (12)
#define USBFS_EPT2_RXSTS(x)               (x << 12)
#define USBFS_EPT2_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT2_RXDTS_SHIFT            (14)
#define USBFS_EPT2_RXDTS(x)               (x << 14)
#define USBFS_EPT2_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT2_RXTC_SHIFT             (15)
#define USBFS_EPT2_RXTC(x)                (x << 15)
#define USBFS_EPT3_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT3_EPTADDR_SHIFT          (0)
#define USBFS_EPT3_EPTADDR(x)             (x << 0)
#define USBFS_EPT3_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT3_TXSTS_SHIFT            (4)
#define USBFS_EPT3_TXSTS(x)               (x << 4)
#define USBFS_EPT3_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT3_TXDTS_SHIFT            (6)
#define USBFS_EPT3_TXDTS(x)               (x << 6)
#define USBFS_EPT3_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT3_TXTC_SHIFT             (7)
#define USBFS_EPT3_TXTC(x)                (x << 7)
#define USBFS_EPT3_EXF_MASK               (0x01 << 8)
#define USBFS_EPT3_EXF_SHIFT              (8)
#define USBFS_EPT3_EXF(x)                 (x << 8)
#define USBFS_EPT3_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT3_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT3_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT3_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT3_SETUPTC_SHIFT          (11)
#define USBFS_EPT3_SETUPTC(x)             (x << 11)
#define USBFS_EPT3_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT3_RXSTS_SHIFT            (12)
#define USBFS_EPT3_RXSTS(x)               (x << 12)
#define USBFS_EPT3_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT3_RXDTS_SHIFT            (14)
#define USBFS_EPT3_RXDTS(x)               (x << 14)
#define USBFS_EPT3_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT3_RXTC_SHIFT             (15)
#define USBFS_EPT3_RXTC(x)                (x << 15)
#define USBFS_EPT4_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT4_EPTADDR_SHIFT          (0)
#define USBFS_EPT4_EPTADDR(x)             (x << 0)
#define USBFS_EPT4_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT4_TXSTS_SHIFT            (4)
#define USBFS_EPT4_TXSTS(x)               (x << 4)
#define USBFS_EPT4_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT4_TXDTS_SHIFT            (6)
#define USBFS_EPT4_TXDTS(x)               (x << 6)
#define USBFS_EPT4_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT4_TXTC_SHIFT             (7)
#define USBFS_EPT4_TXTC(x)                (x << 7)
#define USBFS_EPT4_EXF_MASK               (0x01 << 8)
#define USBFS_EPT4_EXF_SHIFT              (8)
#define USBFS_EPT4_EXF(x)                 (x << 8)
#define USBFS_EPT4_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT4_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT4_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT4_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT4_SETUPTC_SHIFT          (11)
#define USBFS_EPT4_SETUPTC(x)             (x << 11)
#define USBFS_EPT4_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT4_RXSTS_SHIFT            (12)
#define USBFS_EPT4_RXSTS(x)               (x << 12)
#define USBFS_EPT4_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT4_RXDTS_SHIFT            (14)
#define USBFS_EPT4_RXDTS(x)               (x << 14)
#define USBFS_EPT4_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT4_RXTC_SHIFT             (15)
#define USBFS_EPT4_RXTC(x)                (x << 15)
#define USBFS_EPT5_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT5_EPTADDR_SHIFT          (0)
#define USBFS_EPT5_EPTADDR(x)             (x << 0)
#define USBFS_EPT5_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT5_TXSTS_SHIFT            (4)
#define USBFS_EPT5_TXSTS(x)               (x << 4)
#define USBFS_EPT5_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT5_TXDTS_SHIFT            (6)
#define USBFS_EPT5_TXDTS(x)               (x << 6)
#define USBFS_EPT5_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT5_TXTC_SHIFT             (7)
#define USBFS_EPT5_TXTC(x)                (x << 7)
#define USBFS_EPT5_EXF_MASK               (0x01 << 8)
#define USBFS_EPT5_EXF_SHIFT              (8)
#define USBFS_EPT5_EXF(x)                 (x << 8)
#define USBFS_EPT5_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT5_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT5_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT5_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT5_SETUPTC_SHIFT          (11)
#define USBFS_EPT5_SETUPTC(x)             (x << 11)
#define USBFS_EPT5_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT5_RXSTS_SHIFT            (12)
#define USBFS_EPT5_RXSTS(x)               (x << 12)
#define USBFS_EPT5_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT5_RXDTS_SHIFT            (14)
#define USBFS_EPT5_RXDTS(x)               (x << 14)
#define USBFS_EPT5_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT5_RXTC_SHIFT             (15)
#define USBFS_EPT5_RXTC(x)                (x << 15)
#define USBFS_EPT6_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT6_EPTADDR_SHIFT          (0)
#define USBFS_EPT6_EPTADDR(x)             (x << 0)
#define USBFS_EPT6_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT6_TXSTS_SHIFT            (4)
#define USBFS_EPT6_TXSTS(x)               (x << 4)
#define USBFS_EPT6_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT6_TXDTS_SHIFT            (6)
#define USBFS_EPT6_TXDTS(x)               (x << 6)
#define USBFS_EPT6_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT6_TXTC_SHIFT             (7)
#define USBFS_EPT6_TXTC(x)                (x << 7)
#define USBFS_EPT6_EXF_MASK               (0x01 << 8)
#define USBFS_EPT6_EXF_SHIFT              (8)
#define USBFS_EPT6_EXF(x)                 (x << 8)
#define USBFS_EPT6_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT6_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT6_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT6_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT6_SETUPTC_SHIFT          (11)
#define USBFS_EPT6_SETUPTC(x)             (x << 11)
#define USBFS_EPT6_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT6_RXSTS_SHIFT            (12)
#define USBFS_EPT6_RXSTS(x)               (x << 12)
#define USBFS_EPT6_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT6_RXDTS_SHIFT            (14)
#define USBFS_EPT6_RXDTS(x)               (x << 14)
#define USBFS_EPT6_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT6_RXTC_SHIFT             (15)
#define USBFS_EPT6_RXTC(x)                (x << 15)
#define USBFS_EPT7_EPTADDR_MASK           (0x0f << 0)
#define USBFS_EPT7_EPTADDR_SHIFT          (0)
#define USBFS_EPT7_EPTADDR(x)             (x << 0)
#define USBFS_EPT7_TXSTS_MASK             (0x03 << 4)
#define USBFS_EPT7_TXSTS_SHIFT            (4)
#define USBFS_EPT7_TXSTS(x)               (x << 4)
#define USBFS_EPT7_TXDTS_MASK             (0x01 << 6)
#define USBFS_EPT7_TXDTS_SHIFT            (6)
#define USBFS_EPT7_TXDTS(x)               (x << 6)
#define USBFS_EPT7_TXTC_MASK              (0x01 << 7)
#define USBFS_EPT7_TXTC_SHIFT             (7)
#define USBFS_EPT7_TXTC(x)                (x << 7)
#define USBFS_EPT7_EXF_MASK               (0x01 << 8)
#define USBFS_EPT7_EXF_SHIFT              (8)
#define USBFS_EPT7_EXF(x)                 (x << 8)
#define USBFS_EPT7_TRANS_TYPE_MASK        (0x03 << 9)
#define USBFS_EPT7_TRANS_TYPE_SHIFT       (9)
#define USBFS_EPT7_TRANS_TYPE(x)          (x << 9)
#define USBFS_EPT7_SETUPTC_MASK           (0x01 << 11)
#define USBFS_EPT7_SETUPTC_SHIFT          (11)
#define USBFS_EPT7_SETUPTC(x)             (x << 11)
#define USBFS_EPT7_RXSTS_MASK             (0x03 << 12)
#define USBFS_EPT7_RXSTS_SHIFT            (12)
#define USBFS_EPT7_RXSTS(x)               (x << 12)
#define USBFS_EPT7_RXDTS_MASK             (0x01 << 14)
#define USBFS_EPT7_RXDTS_SHIFT            (14)
#define USBFS_EPT7_RXDTS(x)               (x << 14)
#define USBFS_EPT7_RXTC_MASK              (0x01 << 15)
#define USBFS_EPT7_RXTC_SHIFT             (15)
#define USBFS_EPT7_RXTC(x)                (x << 15)
#define USBFS_CTRL_CSRST_MASK             (0x01 << 0)
#define USBFS_CTRL_CSRST_SHIFT            (0)
#define USBFS_CTRL_CSRST(x)               (x << 0)
#define USBFS_CTRL_DISUSB_MASK            (0x01 << 1)
#define USBFS_CTRL_DISUSB_SHIFT           (1)
#define USBFS_CTRL_DISUSB(x)              (x << 1)
#define USBFS_CTRL_LPM_MASK               (0x01 << 2)
#define USBFS_CTRL_LPM_SHIFT              (2)
#define USBFS_CTRL_LPM(x)                 (x << 2)
#define USBFS_CTRL_SSP_MASK               (0x01 << 3)
#define USBFS_CTRL_SSP_SHIFT              (3)
#define USBFS_CTRL_SSP(x)                 (x << 3)
#define USBFS_CTRL_GRESUME_MASK           (0x01 << 4)
#define USBFS_CTRL_GRESUME_SHIFT          (4)
#define USBFS_CTRL_GRESUME(x)             (x << 4)
#define USBFS_CTRL_LSOFIEN_MASK           (0x01 << 8)
#define USBFS_CTRL_LSOFIEN_SHIFT          (8)
#define USBFS_CTRL_LSOFIEN(x)             (x << 8)
#define USBFS_CTRL_SOFIEN_MASK            (0x01 << 9)
#define USBFS_CTRL_SOFIEN_SHIFT           (9)
#define USBFS_CTRL_SOFIEN(x)              (x << 9)
#define USBFS_CTRL_RSTIEN_MASK            (0x01 << 10)
#define USBFS_CTRL_RSTIEN_SHIFT           (10)
#define USBFS_CTRL_RSTIEN(x)              (x << 10)
#define USBFS_CTRL_SPIEN_MASK             (0x01 << 11)
#define USBFS_CTRL_SPIEN_SHIFT            (11)
#define USBFS_CTRL_SPIEN(x)               (x << 11)
#define USBFS_CTRL_WKIEN_MASK             (0x01 << 12)
#define USBFS_CTRL_WKIEN_SHIFT            (12)
#define USBFS_CTRL_WKIEN(x)               (x << 12)
#define USBFS_CTRL_BEIEN_MASK             (0x01 << 13)
#define USBFS_CTRL_BEIEN_SHIFT            (13)
#define USBFS_CTRL_BEIEN(x)               (x << 13)
#define USBFS_CTRL_UCFORIEN_MASK          (0x01 << 14)
#define USBFS_CTRL_UCFORIEN_SHIFT         (14)
#define USBFS_CTRL_UCFORIEN(x)            (x << 14)
#define USBFS_CTRL_TCIEN_MASK             (0x01 << 15)
#define USBFS_CTRL_TCIEN_SHIFT            (15)
#define USBFS_CTRL_TCIEN(x)               (x << 15)
#define USBFS_INTSTS_EPT_NUM_MASK         (0x0f << 0)
#define USBFS_INTSTS_EPT_NUM_SHIFT        (0)
#define USBFS_INTSTS_EPT_NUM(x)           (x << 0)
#define USBFS_INTSTS_INOUT_MASK           (0x01 << 4)
#define USBFS_INTSTS_INOUT_SHIFT          (4)
#define USBFS_INTSTS_INOUT(x)             (x << 4)
#define USBFS_INTSTS_LSOF_MASK            (0x01 << 8)
#define USBFS_INTSTS_LSOF_SHIFT           (8)
#define USBFS_INTSTS_LSOF(x)              (x << 8)
#define USBFS_INTSTS_SOF_MASK             (0x01 << 9)
#define USBFS_INTSTS_SOF_SHIFT            (9)
#define USBFS_INTSTS_SOF(x)               (x << 9)
#define USBFS_INTSTS_RST_MASK             (0x01 << 10)
#define USBFS_INTSTS_RST_SHIFT            (10)
#define USBFS_INTSTS_RST(x)               (x << 10)
#define USBFS_INTSTS_SP_MASK              (0x01 << 11)
#define USBFS_INTSTS_SP_SHIFT             (11)
#define USBFS_INTSTS_SP(x)                (x << 11)
#define USBFS_INTSTS_WK_MASK              (0x01 << 12)
#define USBFS_INTSTS_WK_SHIFT             (12)
#define USBFS_INTSTS_WK(x)                (x << 12)
#define USBFS_INTSTS_BE_MASK              (0x01 << 13)
#define USBFS_INTSTS_BE_SHIFT             (13)
#define USBFS_INTSTS_BE(x)                (x << 13)
#define USBFS_INTSTS_UCFOR_MASK           (0x01 << 14)
#define USBFS_INTSTS_UCFOR_SHIFT          (14)
#define USBFS_INTSTS_UCFOR(x)             (x << 14)
#define USBFS_INTSTS_TC_MASK              (0x01 << 15)
#define USBFS_INTSTS_TC_SHIFT             (15)
#define USBFS_INTSTS_TC(x)                (x << 15)
#define USBFS_SOFRNUM_SOFNUM_MASK         (0x7ff << 0)
#define USBFS_SOFRNUM_SOFNUM_SHIFT        (0)
#define USBFS_SOFRNUM_SOFNUM(x)           (x << 0)
#define USBFS_SOFRNUM_LSOFNUM_MASK        (0x03 << 11)
#define USBFS_SOFRNUM_LSOFNUM_SHIFT       (11)
#define USBFS_SOFRNUM_LSOFNUM(x)          (x << 11)
#define USBFS_SOFRNUM_CLCK_MASK           (0x01 << 13)
#define USBFS_SOFRNUM_CLCK_SHIFT          (13)
#define USBFS_SOFRNUM_CLCK(x)             (x << 13)
#define USBFS_SOFRNUM_DMSTS_MASK          (0x01 << 14)
#define USBFS_SOFRNUM_DMSTS_SHIFT         (14)
#define USBFS_SOFRNUM_DMSTS(x)            (x << 14)
#define USBFS_SOFRNUM_DPSTS_MASK          (0x01 << 15)
#define USBFS_SOFRNUM_DPSTS_SHIFT         (15)
#define USBFS_SOFRNUM_DPSTS(x)            (x << 15)
#define USBFS_DEVADDR_ADDR_MASK           (0x7f << 0)
#define USBFS_DEVADDR_ADDR_SHIFT          (0)
#define USBFS_DEVADDR_ADDR(x)             (x << 0)
#define USBFS_DEVADDR_CEN_MASK            (0x01 << 7)
#define USBFS_DEVADDR_CEN_SHIFT           (7)
#define USBFS_DEVADDR_CEN(x)              (x << 7)
#define USBFS_BUFTBL_BTADDR_MASK          (0x1fff << 3)
#define USBFS_BUFTBL_BTADDR_SHIFT         (3)
#define USBFS_BUFTBL_BTADDR(x)            (x << 3)
#define USBFS_CFG_PUO_MASK                (0x01 << 1)
#define USBFS_CFG_PUO_SHIFT               (1)
#define USBFS_CFG_PUO(x)                  (x << 1)
#define USBFS_CFG_SOFOUTEN_MASK           (0x01 << 0)
#define USBFS_CFG_SOFOUTEN_SHIFT          (0)
#define USBFS_CFG_SOFOUTEN(x)             (x << 0)


#define CRM_SCLK_HICK (0x00)
#define CRM_SCLK_HEXT (0x01)
#define CRM_SCLK_PLL (0x02)

#define CRM_AUTO_STEP_OFF (0x0)
#define CRM_AUTO_STEP_ON (0x3)

#define __FPU_PRESENT 1
// TODO add MPU support
#define __MPU_PRESENT 0
#define __CM4_REV 0x0001U
#define __NVIC_PRIO_BITS 4
#define __Vendor_SysTickConfig 0
#define VECT_TAB_OFFSET 0x0 
#define HICK_FREQUENCY ((uint32_t)8000000) // 48MHz in DS, but /6 prescalar is on by default 
#define HEXT_FREQUENCY ((uint32_t)8000000)

typedef enum IRQn
{
    /******  cortex-m4 processor exceptions numbers ***************************************************/
    Reset_IRQn                  = -15,    /*!< 1 reset vector, invoked on power up and warm reset   */
    NonMaskableInt_IRQn         = -14,    /*!< 2 non maskable interrupt                             */
    HardFault_IRQn              = -13,    /*!< 3 hard fault, all classes of fault                   */
    MemoryManagement_IRQn       = -12,    /*!< 4 cortex-m4 memory management interrupt              */
    BusFault_IRQn               = -11,    /*!< 5 cortex-m4 bus fault interrupt                      */
    UsageFault_IRQn             = -10,    /*!< 6 cortex-m4 usage fault interrupt                    */
    SVCall_IRQn                 = -5,     /*!< 11 cortex-m4 sv call interrupt                       */
    DebugMonitor_IRQn           = -4,     /*!< 12 cortex-m4 debug monitor interrupt                 */
    PendSV_IRQn                 = -2,     /*!< 14 cortex-m4 pend sv interrupt                       */
    SysTick_IRQn                = -1,     /*!< 15 cortex-m4 system tick interrupt                   */

    /******  at32 specific interrupt numbers *********************************************************/
    WWDT_IRQn                   = 0,      /*!< window watchdog timer interrupt                      */
    PVM_IRQn                    = 1,      /*!< pvm through exint line detection interrupt           */
    TAMPER_IRQn                 = 2,      /*!< tamper interrupt                                     */
    RTC_IRQn                    = 3,      /*!< rtc global interrupt                                 */
    FLASH_IRQn                  = 4,      /*!< flash global interrupt                               */
    CRM_IRQn                    = 5,      /*!< crm global interrupt                                 */
    EXINT0_IRQn                 = 6,      /*!< external line0 interrupt                             */
    EXINT1_IRQn                 = 7,      /*!< external line1 interrupt                             */
    EXINT2_IRQn                 = 8,      /*!< external line2 interrupt                             */
    EXINT3_IRQn                 = 9,      /*!< external line3 interrupt                             */
    EXINT4_IRQn                 = 10,     /*!< external line4 interrupt                             */
    DMA1_Channel1_IRQn          = 11,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel2_IRQn          = 12,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel3_IRQn          = 13,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel4_IRQn          = 14,     /*!< dma1 channel 4 global interrupt                      */
    DMA1_Channel5_IRQn          = 15,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel6_IRQn          = 16,     /*!< dma1 channel 6 global interrupt                      */
    DMA1_Channel7_IRQn          = 17,     /*!< dma1 channel 7 global interrupt                      */

#if defined (AT32F403Axx)
    ADC1_2_IRQn                 = 18,     /*!< adc1 and adc2 global interrupt                       */
    USBFS_H_CAN1_TX_IRQn        = 19,     /*!< usb device high priority or can1 tx interrupts       */
    USBFS_L_CAN1_RX0_IRQn       = 20,     /*!< usb device low priority or can1 rx0 interrupts       */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    RTCAlarm_IRQn               = 41,     /*!< rtc alarm through exint line interrupt               */
    USBFSWakeUp_IRQn            = 42,     /*!< usb device wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    ADC3_IRQn                   = 47,     /*!< adc3 global interrupt                                */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio1 global interrupt                               */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_GLOBAL_IRQn            = 54,     /*!< tmr6 global interrupt                                */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA2_Channel1_IRQn          = 56,     /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 57,     /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 58,     /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_5_IRQn        = 59,     /*!< dma2 channel 4 and channel 5 global interrupt        */
    SDIO2_IRQn                  = 60,     /*!< sdio2 global interrupt                               */
    I2C3_EVT_IRQn               = 61,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 62,     /*!< i2c3 error interrupt                                 */
    SPI4_IRQn                   = 63,     /*!< spi4 global interrupt                                */
    CAN2_TX_IRQn                = 68,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 69,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 70,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 71,     /*!< can2 se interrupt                                    */
    ACC_IRQn                    = 72,     /*!< acc interrupt                                        */
    USBFS_MAPH_IRQn             = 73,     /*!< usb map hp interrupt                                 */
    USBFS_MAPL_IRQn             = 74,     /*!< usb map lp interrupt                                 */
    DMA2_Channel6_7_IRQn        = 75,     /*!< dma2 channel 6 and channel 7 global interrupt        */
    USART6_IRQn                 = 76,     /*!< usart6 interrupt                                     */
    UART7_IRQn                  = 77,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 78,     /*!< uart8 interrupt                                      */
#endif

#if defined (AT32F407xx)
    ADC1_2_IRQn                 = 18,     /*!< adc1 and adc2 global interrupt                       */
    USBFS_H_CAN1_TX_IRQn        = 19,     /*!< usb device high priority or can1 tx interrupts       */
    USBFS_L_CAN1_RX0_IRQn       = 20,     /*!< usb device low priority or can1 rx0 interrupts       */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    RTCAlarm_IRQn               = 41,     /*!< rtc alarm through exint line interrupt               */
    USBFSWakeUp_IRQn            = 42,     /*!< usb device wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    ADC3_IRQn                   = 47,     /*!< adc3 global interrupt                                */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio1 global interrupt                               */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_GLOBAL_IRQn            = 54,     /*!< tmr6 global interrupt                                */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA2_Channel1_IRQn          = 56,     /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 57,     /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 58,     /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_5_IRQn        = 59,     /*!< dma2 channel 4 and channel 5 global interrupt        */
    SDIO2_IRQn                  = 60,     /*!< sdio2 global interrupt                               */
    I2C3_EVT_IRQn               = 61,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 62,     /*!< i2c3 error interrupt                                 */
    SPI4_IRQn                   = 63,     /*!< spi4 global interrupt                                */
    CAN2_TX_IRQn                = 68,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 69,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 70,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 71,     /*!< can2 se interrupt                                    */
    ACC_IRQn                    = 72,     /*!< acc interrupt                                        */
    USBFS_MAPH_IRQn             = 73,     /*!< usb map hp interrupt                                 */
    USBFS_MAPL_IRQn             = 74,     /*!< usb map lp interrupt                                 */
    DMA2_Channel6_7_IRQn        = 75,     /*!< dma2 channel 6 and channel 7 global interrupt        */
    USART6_IRQn                 = 76,     /*!< usart6 interrupt                                     */
    UART7_IRQn                  = 77,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 78,     /*!< uart8 interrupt                                      */
    EMAC_IRQn                   = 79,     /*!< emac interrupt                                       */
    EMAC_WKUP_IRQn              = 80,     /*!< emac wakeup interrupt                                */
#endif

} IRQn_Type;


/******************************************************************************
 * @file     cmsis_gcc.h
 * @brief    CMSIS compiler GCC header file
 * @version  V5.3.0
 * @date     26. March 2020
 ******************************************************************************/
/*
 * Copyright (c) 2009-2020 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CMSIS_GCC_H
#define __CMSIS_GCC_H

/* ignore some GCC warnings */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Fallback for __has_builtin */
#ifndef __has_builtin
  #define __has_builtin(x) (0)
#endif

/* CMSIS compiler specific defines */
#ifndef   __ASM
  #define __ASM                                  __asm
#endif
#ifndef   __INLINE
  #define __INLINE                               inline
#endif
#ifndef   __STATIC_INLINE
  #define __STATIC_INLINE                        static inline
#endif
#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE                   __attribute__((always_inline)) static inline
#endif
#ifndef   __NO_RETURN
  #define __NO_RETURN                            __attribute__((__noreturn__))
#endif
#ifndef   __USED
  #define __USED                                 __attribute__((used))
#endif
#ifndef   __WEAK
  #define __WEAK                                 __attribute__((weak))
#endif
#ifndef   __PACKED
  #define __PACKED                               __attribute__((packed, aligned(1)))
#endif
#ifndef   __PACKED_STRUCT
  #define __PACKED_STRUCT                        struct __attribute__((packed, aligned(1)))
#endif
#ifndef   __PACKED_UNION
  #define __PACKED_UNION                         union __attribute__((packed, aligned(1)))
#endif
#ifndef   __UNALIGNED_UINT32        /* deprecated */
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wpacked"
  #pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
  #pragma GCC diagnostic pop
  #define __UNALIGNED_UINT32(x)                  (((struct T_UINT32 *)(x))->v)
#endif
#ifndef   __UNALIGNED_UINT16_WRITE
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wpacked"
  #pragma GCC diagnostic ignored "-Wattributes"
  __PACKED_STRUCT T_UINT16_WRITE { uint16_t v; };
  #pragma GCC diagnostic pop
  #define __UNALIGNED_UINT16_WRITE(addr, val)    (void)((((struct T_UINT16_WRITE *)(void *)(addr))->v) = (val))
#endif
#ifndef   __UNALIGNED_UINT16_READ
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wpacked"
  #pragma GCC diagnostic ignored "-Wattributes"
  __PACKED_STRUCT T_UINT16_READ { uint16_t v; };
  #pragma GCC diagnostic pop
  #define __UNALIGNED_UINT16_READ(addr)          (((const struct T_UINT16_READ *)(const void *)(addr))->v)
#endif
#ifndef   __UNALIGNED_UINT32_WRITE
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wpacked"
  #pragma GCC diagnostic ignored "-Wattributes"
  __PACKED_STRUCT T_UINT32_WRITE { uint32_t v; };
  #pragma GCC diagnostic pop
  #define __UNALIGNED_UINT32_WRITE(addr, val)    (void)((((struct T_UINT32_WRITE *)(void *)(addr))->v) = (val))
#endif
#ifndef   __UNALIGNED_UINT32_READ
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wpacked"
  #pragma GCC diagnostic ignored "-Wattributes"
  __PACKED_STRUCT T_UINT32_READ { uint32_t v; };
  #pragma GCC diagnostic pop
  #define __UNALIGNED_UINT32_READ(addr)          (((const struct T_UINT32_READ *)(const void *)(addr))->v)
#endif
#ifndef   __ALIGNED
  #define __ALIGNED(x)                           __attribute__((aligned(x)))
#endif
#ifndef   __RESTRICT
  #define __RESTRICT                             __restrict
#endif
#ifndef   __COMPILER_BARRIER
  #define __COMPILER_BARRIER()                   __ASM volatile("":::"memory")
#endif

/* ###########################  Core Function Access  ########################### */
/** \ingroup  CMSIS_Core_FunctionInterface
    \defgroup CMSIS_Core_RegAccFunctions CMSIS Core Register Access Functions
  @{
 */

/**
  \brief   Enable IRQ Interrupts
  \details Enables IRQ interrupts by clearing the I-bit in the CPSR.
           Can only be executed in Privileged modes.
 */
__STATIC_FORCEINLINE void __enable_irq(void)
{
  __ASM volatile ("cpsie i" : : : "memory");
}


/**
  \brief   Disable IRQ Interrupts
  \details Disables IRQ interrupts by setting the I-bit in the CPSR.
           Can only be executed in Privileged modes.
 */
__STATIC_FORCEINLINE void __disable_irq(void)
{
  __ASM volatile ("cpsid i" : : : "memory");
}


/**
  \brief   Get Control Register
  \details Returns the content of the Control Register.
  \return               Control Register value
 */
__STATIC_FORCEINLINE uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Control Register (non-secure)
  \details Returns the content of the non-secure Control Register when in secure mode.
  \return               non-secure Control Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_CONTROL_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, control_ns" : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Control Register
  \details Writes the given value to the Control Register.
  \param [in]    control  Control Register value to set
 */
__STATIC_FORCEINLINE void __set_CONTROL(uint32_t control)
{
  __ASM volatile ("MSR control, %0" : : "r" (control) : "memory");
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Control Register (non-secure)
  \details Writes the given value to the non-secure Control Register when in secure state.
  \param [in]    control  Control Register value to set
 */
__STATIC_FORCEINLINE void __TZ_set_CONTROL_NS(uint32_t control)
{
  __ASM volatile ("MSR control_ns, %0" : : "r" (control) : "memory");
}
#endif


/**
  \brief   Get IPSR Register
  \details Returns the content of the IPSR Register.
  \return               IPSR Register value
 */
__STATIC_FORCEINLINE uint32_t __get_IPSR(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}


/**
  \brief   Get APSR Register
  \details Returns the content of the APSR Register.
  \return               APSR Register value
 */
__STATIC_FORCEINLINE uint32_t __get_APSR(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}


/**
  \brief   Get xPSR Register
  \details Returns the content of the xPSR Register.
  \return               xPSR Register value
 */
__STATIC_FORCEINLINE uint32_t __get_xPSR(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}


/**
  \brief   Get Process Stack Pointer
  \details Returns the current value of the Process Stack Pointer (PSP).
  \return               PSP Register value
 */
__STATIC_FORCEINLINE uint32_t __get_PSP(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, psp"  : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Process Stack Pointer (non-secure)
  \details Returns the current value of the non-secure Process Stack Pointer (PSP) when in secure state.
  \return               PSP Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_PSP_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, psp_ns"  : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Process Stack Pointer
  \details Assigns the given value to the Process Stack Pointer (PSP).
  \param [in]    topOfProcStack  Process Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __set_PSP(uint32_t topOfProcStack)
{
  __ASM volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Process Stack Pointer (non-secure)
  \details Assigns the given value to the non-secure Process Stack Pointer (PSP) when in secure state.
  \param [in]    topOfProcStack  Process Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __TZ_set_PSP_NS(uint32_t topOfProcStack)
{
  __ASM volatile ("MSR psp_ns, %0" : : "r" (topOfProcStack) : );
}
#endif


/**
  \brief   Get Main Stack Pointer
  \details Returns the current value of the Main Stack Pointer (MSP).
  \return               MSP Register value
 */
__STATIC_FORCEINLINE uint32_t __get_MSP(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Main Stack Pointer (non-secure)
  \details Returns the current value of the non-secure Main Stack Pointer (MSP) when in secure state.
  \return               MSP Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_MSP_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, msp_ns" : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Main Stack Pointer
  \details Assigns the given value to the Main Stack Pointer (MSP).
  \param [in]    topOfMainStack  Main Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __set_MSP(uint32_t topOfMainStack)
{
  __ASM volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Main Stack Pointer (non-secure)
  \details Assigns the given value to the non-secure Main Stack Pointer (MSP) when in secure state.
  \param [in]    topOfMainStack  Main Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __TZ_set_MSP_NS(uint32_t topOfMainStack)
{
  __ASM volatile ("MSR msp_ns, %0" : : "r" (topOfMainStack) : );
}
#endif


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Stack Pointer (non-secure)
  \details Returns the current value of the non-secure Stack Pointer (SP) when in secure state.
  \return               SP Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_SP_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, sp_ns" : "=r" (result) );
  return(result);
}


/**
  \brief   Set Stack Pointer (non-secure)
  \details Assigns the given value to the non-secure Stack Pointer (SP) when in secure state.
  \param [in]    topOfStack  Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __TZ_set_SP_NS(uint32_t topOfStack)
{
  __ASM volatile ("MSR sp_ns, %0" : : "r" (topOfStack) : );
}
#endif


/**
  \brief   Get Priority Mask
  \details Returns the current state of the priority mask bit from the Priority Mask Register.
  \return               Priority Mask value
 */
__STATIC_FORCEINLINE uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Priority Mask (non-secure)
  \details Returns the current state of the non-secure priority mask bit from the Priority Mask Register when in secure state.
  \return               Priority Mask value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_PRIMASK_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, primask_ns" : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Priority Mask
  \details Assigns the given value to the Priority Mask Register.
  \param [in]    priMask  Priority Mask
 */
__STATIC_FORCEINLINE void __set_PRIMASK(uint32_t priMask)
{
  __ASM volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Priority Mask (non-secure)
  \details Assigns the given value to the non-secure Priority Mask Register when in secure state.
  \param [in]    priMask  Priority Mask
 */
__STATIC_FORCEINLINE void __TZ_set_PRIMASK_NS(uint32_t priMask)
{
  __ASM volatile ("MSR primask_ns, %0" : : "r" (priMask) : "memory");
}
#endif


#if ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
     (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
     (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    )
/**
  \brief   Enable FIQ
  \details Enables FIQ interrupts by clearing the F-bit in the CPSR.
           Can only be executed in Privileged modes.
 */
__STATIC_FORCEINLINE void __enable_fault_irq(void)
{
  __ASM volatile ("cpsie f" : : : "memory");
}


/**
  \brief   Disable FIQ
  \details Disables FIQ interrupts by setting the F-bit in the CPSR.
           Can only be executed in Privileged modes.
 */
__STATIC_FORCEINLINE void __disable_fault_irq(void)
{
  __ASM volatile ("cpsid f" : : : "memory");
}


/**
  \brief   Get Base Priority
  \details Returns the current value of the Base Priority register.
  \return               Base Priority register value
 */
__STATIC_FORCEINLINE uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Base Priority (non-secure)
  \details Returns the current value of the non-secure Base Priority register when in secure state.
  \return               Base Priority register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_BASEPRI_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, basepri_ns" : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Base Priority
  \details Assigns the given value to the Base Priority register.
  \param [in]    basePri  Base Priority value to set
 */
__STATIC_FORCEINLINE void __set_BASEPRI(uint32_t basePri)
{
  __ASM volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Base Priority (non-secure)
  \details Assigns the given value to the non-secure Base Priority register when in secure state.
  \param [in]    basePri  Base Priority value to set
 */
__STATIC_FORCEINLINE void __TZ_set_BASEPRI_NS(uint32_t basePri)
{
  __ASM volatile ("MSR basepri_ns, %0" : : "r" (basePri) : "memory");
}
#endif


/**
  \brief   Set Base Priority with condition
  \details Assigns the given value to the Base Priority register only if BASEPRI masking is disabled,
           or the new value increases the BASEPRI priority level.
  \param [in]    basePri  Base Priority value to set
 */
__STATIC_FORCEINLINE void __set_BASEPRI_MAX(uint32_t basePri)
{
  __ASM volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}


/**
  \brief   Get Fault Mask
  \details Returns the current value of the Fault Mask register.
  \return               Fault Mask register value
 */
__STATIC_FORCEINLINE uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Fault Mask (non-secure)
  \details Returns the current value of the non-secure Fault Mask register when in secure state.
  \return               Fault Mask register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_FAULTMASK_NS(void)
{
  uint32_t result;

  __ASM volatile ("MRS %0, faultmask_ns" : "=r" (result) );
  return(result);
}
#endif


/**
  \brief   Set Fault Mask
  \details Assigns the given value to the Fault Mask register.
  \param [in]    faultMask  Fault Mask value to set
 */
__STATIC_FORCEINLINE void __set_FAULTMASK(uint32_t faultMask)
{
  __ASM volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}


#if (defined (__ARM_FEATURE_CMSE ) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Set Fault Mask (non-secure)
  \details Assigns the given value to the non-secure Fault Mask register when in secure state.
  \param [in]    faultMask  Fault Mask value to set
 */
__STATIC_FORCEINLINE void __TZ_set_FAULTMASK_NS(uint32_t faultMask)
{
  __ASM volatile ("MSR faultmask_ns, %0" : : "r" (faultMask) : "memory");
}
#endif

#endif /* ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
           (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
           (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    ) */


#if ((defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
     (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    )

/**
  \brief   Get Process Stack Pointer Limit
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence zero is returned always in non-secure
  mode.

  \details Returns the current value of the Process Stack Pointer Limit (PSPLIM).
  \return               PSPLIM Register value
 */
__STATIC_FORCEINLINE uint32_t __get_PSPLIM(void)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) && \
    (!defined (__ARM_FEATURE_CMSE) || (__ARM_FEATURE_CMSE < 3)))
    // without main extensions, the non-secure PSPLIM is RAZ/WI
  return 0U;
#else
  uint32_t result;
  __ASM volatile ("MRS %0, psplim"  : "=r" (result) );
  return result;
#endif
}

#if (defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3))
/**
  \brief   Get Process Stack Pointer Limit (non-secure)
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence zero is returned always.

  \details Returns the current value of the non-secure Process Stack Pointer Limit (PSPLIM) when in secure state.
  \return               PSPLIM Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_PSPLIM_NS(void)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)))
  // without main extensions, the non-secure PSPLIM is RAZ/WI
  return 0U;
#else
  uint32_t result;
  __ASM volatile ("MRS %0, psplim_ns"  : "=r" (result) );
  return result;
#endif
}
#endif


/**
  \brief   Set Process Stack Pointer Limit
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence the write is silently ignored in non-secure
  mode.

  \details Assigns the given value to the Process Stack Pointer Limit (PSPLIM).
  \param [in]    ProcStackPtrLimit  Process Stack Pointer Limit value to set
 */
__STATIC_FORCEINLINE void __set_PSPLIM(uint32_t ProcStackPtrLimit)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) && \
    (!defined (__ARM_FEATURE_CMSE) || (__ARM_FEATURE_CMSE < 3)))
  // without main extensions, the non-secure PSPLIM is RAZ/WI
  (void)ProcStackPtrLimit;
#else
  __ASM volatile ("MSR psplim, %0" : : "r" (ProcStackPtrLimit));
#endif
}


#if (defined (__ARM_FEATURE_CMSE  ) && (__ARM_FEATURE_CMSE   == 3))
/**
  \brief   Set Process Stack Pointer (non-secure)
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence the write is silently ignored.

  \details Assigns the given value to the non-secure Process Stack Pointer Limit (PSPLIM) when in secure state.
  \param [in]    ProcStackPtrLimit  Process Stack Pointer Limit value to set
 */
__STATIC_FORCEINLINE void __TZ_set_PSPLIM_NS(uint32_t ProcStackPtrLimit)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)))
  // without main extensions, the non-secure PSPLIM is RAZ/WI
  (void)ProcStackPtrLimit;
#else
  __ASM volatile ("MSR psplim_ns, %0\n" : : "r" (ProcStackPtrLimit));
#endif
}
#endif


/**
  \brief   Get Main Stack Pointer Limit
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence zero is returned always in non-secure
  mode.

  \details Returns the current value of the Main Stack Pointer Limit (MSPLIM).
  \return               MSPLIM Register value
 */
__STATIC_FORCEINLINE uint32_t __get_MSPLIM(void)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) && \
    (!defined (__ARM_FEATURE_CMSE) || (__ARM_FEATURE_CMSE < 3)))
  // without main extensions, the non-secure MSPLIM is RAZ/WI
  return 0U;
#else
  uint32_t result;
  __ASM volatile ("MRS %0, msplim" : "=r" (result) );
  return result;
#endif
}


#if (defined (__ARM_FEATURE_CMSE  ) && (__ARM_FEATURE_CMSE   == 3))
/**
  \brief   Get Main Stack Pointer Limit (non-secure)
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence zero is returned always.

  \details Returns the current value of the non-secure Main Stack Pointer Limit(MSPLIM) when in secure state.
  \return               MSPLIM Register value
 */
__STATIC_FORCEINLINE uint32_t __TZ_get_MSPLIM_NS(void)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)))
  // without main extensions, the non-secure MSPLIM is RAZ/WI
  return 0U;
#else
  uint32_t result;
  __ASM volatile ("MRS %0, msplim_ns" : "=r" (result) );
  return result;
#endif
}
#endif


/**
  \brief   Set Main Stack Pointer Limit
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence the write is silently ignored in non-secure
  mode.

  \details Assigns the given value to the Main Stack Pointer Limit (MSPLIM).
  \param [in]    MainStackPtrLimit  Main Stack Pointer Limit value to set
 */
__STATIC_FORCEINLINE void __set_MSPLIM(uint32_t MainStackPtrLimit)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) && \
    (!defined (__ARM_FEATURE_CMSE) || (__ARM_FEATURE_CMSE < 3)))
  // without main extensions, the non-secure MSPLIM is RAZ/WI
  (void)MainStackPtrLimit;
#else
  __ASM volatile ("MSR msplim, %0" : : "r" (MainStackPtrLimit));
#endif
}


#if (defined (__ARM_FEATURE_CMSE  ) && (__ARM_FEATURE_CMSE   == 3))
/**
  \brief   Set Main Stack Pointer Limit (non-secure)
  Devices without ARMv8-M Main Extensions (i.e. Cortex-M23) lack the non-secure
  Stack Pointer Limit register hence the write is silently ignored.

  \details Assigns the given value to the non-secure Main Stack Pointer Limit (MSPLIM) when in secure state.
  \param [in]    MainStackPtrLimit  Main Stack Pointer value to set
 */
__STATIC_FORCEINLINE void __TZ_set_MSPLIM_NS(uint32_t MainStackPtrLimit)
{
#if (!(defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)))
  // without main extensions, the non-secure MSPLIM is RAZ/WI
  (void)MainStackPtrLimit;
#else
  __ASM volatile ("MSR msplim_ns, %0" : : "r" (MainStackPtrLimit));
#endif
}
#endif

#endif /* ((defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
           (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    ) */


/**
  \brief   Get FPSCR
  \details Returns the current value of the Floating Point Status/Control register.
  \return               Floating Point Status/Control register value
 */
__STATIC_FORCEINLINE uint32_t __get_FPSCR(void)
{
#if ((defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)) && \
     (defined (__FPU_USED   ) && (__FPU_USED    == 1U))     )
#if __has_builtin(__builtin_arm_get_fpscr)
// Re-enable using built-in when GCC has been fixed
// || (__GNUC__ > 7) || (__GNUC__ == 7 && __GNUC_MINOR__ >= 2)
  /* see https://gcc.gnu.org/ml/gcc-patches/2017-04/msg00443.html */
  return __builtin_arm_get_fpscr();
#else
  uint32_t result;

  __ASM volatile ("VMRS %0, fpscr" : "=r" (result) );
  return(result);
#endif
#else
  return(0U);
#endif
}


/**
  \brief   Set FPSCR
  \details Assigns the given value to the Floating Point Status/Control register.
  \param [in]    fpscr  Floating Point Status/Control value to set
 */
__STATIC_FORCEINLINE void __set_FPSCR(uint32_t fpscr)
{
#if ((defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)) && \
     (defined (__FPU_USED   ) && (__FPU_USED    == 1U))     )
#if __has_builtin(__builtin_arm_set_fpscr)
// Re-enable using built-in when GCC has been fixed
// || (__GNUC__ > 7) || (__GNUC__ == 7 && __GNUC_MINOR__ >= 2)
  /* see https://gcc.gnu.org/ml/gcc-patches/2017-04/msg00443.html */
  __builtin_arm_set_fpscr(fpscr);
#else
  __ASM volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc", "memory");
#endif
#else
  (void)fpscr;
#endif
}


/*@} end of CMSIS_Core_RegAccFunctions */


/* ##########################  Core Instruction Access  ######################### */
/** \defgroup CMSIS_Core_InstructionInterface CMSIS Core Instruction Interface
  Access to dedicated instructions
  @{
*/

/* Define macros for porting to both thumb1 and thumb2.
 * For thumb1, use low register (r0-r7), specified by constraint "l"
 * Otherwise, use general registers, specified by constraint "r" */
#if defined (__thumb__) && !defined (__thumb2__)
#define __CMSIS_GCC_OUT_REG(r) "=l" (r)
#define __CMSIS_GCC_RW_REG(r) "+l" (r)
#define __CMSIS_GCC_USE_REG(r) "l" (r)
#else
#define __CMSIS_GCC_OUT_REG(r) "=r" (r)
#define __CMSIS_GCC_RW_REG(r) "+r" (r)
#define __CMSIS_GCC_USE_REG(r) "r" (r)
#endif

/**
  \brief   No Operation
  \details No Operation does nothing. This instruction can be used for code alignment purposes.
 */
#define __NOP()                             __ASM volatile ("nop")

/**
  \brief   Wait For Interrupt
  \details Wait For Interrupt is a hint instruction that suspends execution until one of a number of events occurs.
 */
#define __WFI()                             __ASM volatile ("wfi":::"memory")


/**
  \brief   Wait For Event
  \details Wait For Event is a hint instruction that permits the processor to enter
           a low-power state until one of a number of events occurs.
 */
#define __WFE()                             __ASM volatile ("wfe":::"memory")


/**
  \brief   Send Event
  \details Send Event is a hint instruction. It causes an event to be signaled to the CPU.
 */
#define __SEV()                             __ASM volatile ("sev")


/**
  \brief   Instruction Synchronization Barrier
  \details Instruction Synchronization Barrier flushes the pipeline in the processor,
           so that all instructions following the ISB are fetched from cache or memory,
           after the instruction has been completed.
 */
__STATIC_FORCEINLINE void __ISB(void)
{
  __ASM volatile ("isb 0xF":::"memory");
}


/**
  \brief   Data Synchronization Barrier
  \details Acts as a special kind of Data Memory Barrier.
           It completes when all explicit memory accesses before this instruction complete.
 */
__STATIC_FORCEINLINE void __DSB(void)
{
  __ASM volatile ("dsb 0xF":::"memory");
}


/**
  \brief   Data Memory Barrier
  \details Ensures the apparent order of the explicit memory operations before
           and after the instruction, without ensuring their completion.
 */
__STATIC_FORCEINLINE void __DMB(void)
{
  __ASM volatile ("dmb 0xF":::"memory");
}


/**
  \brief   Reverse byte order (32 bit)
  \details Reverses the byte order in unsigned integer value. For example, 0x12345678 becomes 0x78563412.
  \param [in]    value  Value to reverse
  \return               Reversed value
 */
__STATIC_FORCEINLINE uint32_t __REV(uint32_t value)
{
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
  return __builtin_bswap32(value);
#else
  uint32_t result;

  __ASM ("rev %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
#endif
}


/**
  \brief   Reverse byte order (16 bit)
  \details Reverses the byte order within each halfword of a word. For example, 0x12345678 becomes 0x34127856.
  \param [in]    value  Value to reverse
  \return               Reversed value
 */
__STATIC_FORCEINLINE uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __ASM ("rev16 %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
}


/**
  \brief   Reverse byte order (16 bit)
  \details Reverses the byte order in a 16-bit value and returns the signed 16-bit result. For example, 0x0080 becomes 0x8000.
  \param [in]    value  Value to reverse
  \return               Reversed value
 */
__STATIC_FORCEINLINE int16_t __REVSH(int16_t value)
{
#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
  return (int16_t)__builtin_bswap16(value);
#else
  int16_t result;

  __ASM ("revsh %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return result;
#endif
}


/**
  \brief   Rotate Right in unsigned value (32 bit)
  \details Rotate Right (immediate) provides the value of the contents of a register rotated by a variable number of bits.
  \param [in]    op1  Value to rotate
  \param [in]    op2  Number of Bits to rotate
  \return               Rotated value
 */
__STATIC_FORCEINLINE uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}


/**
  \brief   Breakpoint
  \details Causes the processor to enter Debug state.
           Debug tools can use this to investigate system state when the instruction at a particular address is reached.
  \param [in]    value  is ignored by the processor.
                 If required, a debugger can use it to store additional information about the breakpoint.
 */
#define __BKPT(value)                       __ASM volatile ("bkpt "#value)


/**
  \brief   Reverse bit order of value
  \details Reverses the bit order of the given value.
  \param [in]    value  Value to reverse
  \return               Reversed value
 */
__STATIC_FORCEINLINE uint32_t __RBIT(uint32_t value)
{
  uint32_t result;

#if ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
     (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
     (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    )
   __ASM ("rbit %0, %1" : "=r" (result) : "r" (value) );
#else
  uint32_t s = (4U /*sizeof(v)*/ * 8U) - 1U; /* extra shift needed at end */

  result = value;                      /* r will be reversed bits of v; first get LSB of v */
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;                        /* shift when v's highest bits are zero */
#endif
  return result;
}


/**
  \brief   Count leading zeros
  \details Counts the number of leading zeros of a data value.
  \param [in]  value  Value to count the leading zeros
  \return             number of leading zeros in value
 */
__STATIC_FORCEINLINE uint8_t __CLZ(uint32_t value)
{
  /* Even though __builtin_clz produces a CLZ instruction on ARM, formally
     __builtin_clz(0) is undefined behaviour, so handle this case specially.
     This guarantees ARM-compatible results if happening to compile on a non-ARM
     target, and ensures the compiler doesn't decide to activate any
     optimisations using the logic "value was passed to __builtin_clz, so it
     is non-zero".
     ARM GCC 7.3 and possibly earlier will optimise this test away, leaving a
     single CLZ instruction.
   */
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}


#if ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
     (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
     (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
     (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    )
/**
  \brief   LDR Exclusive (8 bit)
  \details Executes a exclusive LDR instruction for 8 bit value.
  \param [in]    ptr  Pointer to data
  \return             value of type uint8_t at (*ptr)
 */
__STATIC_FORCEINLINE uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
   __ASM volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );
#else
    /* Prior to GCC 4.8, "Q" will be expanded to [rx, #0] which is not
       accepted by assembler. So has to use following less efficient pattern.
    */
   __ASM volatile ("ldrexb %0, [%1]" : "=r" (result) : "r" (addr) : "memory" );
#endif
   return ((uint8_t) result);    /* Add explicit type cast here */
}


/**
  \brief   LDR Exclusive (16 bit)
  \details Executes a exclusive LDR instruction for 16 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint16_t at (*ptr)
 */
__STATIC_FORCEINLINE uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
   __ASM volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );
#else
    /* Prior to GCC 4.8, "Q" will be expanded to [rx, #0] which is not
       accepted by assembler. So has to use following less efficient pattern.
    */
   __ASM volatile ("ldrexh %0, [%1]" : "=r" (result) : "r" (addr) : "memory" );
#endif
   return ((uint16_t) result);    /* Add explicit type cast here */
}


/**
  \brief   LDR Exclusive (32 bit)
  \details Executes a exclusive LDR instruction for 32 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint32_t at (*ptr)
 */
__STATIC_FORCEINLINE uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __ASM volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}


/**
  \brief   STR Exclusive (8 bit)
  \details Executes a exclusive STR instruction for 8 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __ASM volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}


/**
  \brief   STR Exclusive (16 bit)
  \details Executes a exclusive STR instruction for 16 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __ASM volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}


/**
  \brief   STR Exclusive (32 bit)
  \details Executes a exclusive STR instruction for 32 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __ASM volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}


/**
  \brief   Remove the exclusive lock
  \details Removes the exclusive lock which is created by LDREX.
 */
__STATIC_FORCEINLINE void __CLREX(void)
{
  __ASM volatile ("clrex" ::: "memory");
}

#endif /* ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
           (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
           (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
           (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    ) */


#if ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
     (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
     (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    )
/**
  \brief   Signed Saturate
  \details Saturates a signed value.
  \param [in]  ARG1  Value to be saturated
  \param [in]  ARG2  Bit position to saturate to (1..32)
  \return             Saturated value
 */
#define __SSAT(ARG1, ARG2) \
__extension__ \
({                          \
  int32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("ssat %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })


/**
  \brief   Unsigned Saturate
  \details Saturates an unsigned value.
  \param [in]  ARG1  Value to be saturated
  \param [in]  ARG2  Bit position to saturate to (0..31)
  \return             Saturated value
 */
#define __USAT(ARG1, ARG2) \
 __extension__ \
({                          \
  uint32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("usat %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })


/**
  \brief   Rotate Right with Extend (32 bit)
  \details Moves each bit of a bitstring right by one bit.
           The carry input is shifted in at the left end of the bitstring.
  \param [in]    value  Value to rotate
  \return               Rotated value
 */
__STATIC_FORCEINLINE uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __ASM volatile ("rrx %0, %1" : __CMSIS_GCC_OUT_REG (result) : __CMSIS_GCC_USE_REG (value) );
  return(result);
}


/**
  \brief   LDRT Unprivileged (8 bit)
  \details Executes a Unprivileged LDRT instruction for 8 bit value.
  \param [in]    ptr  Pointer to data
  \return             value of type uint8_t at (*ptr)
 */
__STATIC_FORCEINLINE uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
   __ASM volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );
#else
    /* Prior to GCC 4.8, "Q" will be expanded to [rx, #0] which is not
       accepted by assembler. So has to use following less efficient pattern.
    */
   __ASM volatile ("ldrbt %0, [%1]" : "=r" (result) : "r" (ptr) : "memory" );
#endif
   return ((uint8_t) result);    /* Add explicit type cast here */
}


/**
  \brief   LDRT Unprivileged (16 bit)
  \details Executes a Unprivileged LDRT instruction for 16 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint16_t at (*ptr)
 */
__STATIC_FORCEINLINE uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;

#if (__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8)
   __ASM volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );
#else
    /* Prior to GCC 4.8, "Q" will be expanded to [rx, #0] which is not
       accepted by assembler. So has to use following less efficient pattern.
    */
   __ASM volatile ("ldrht %0, [%1]" : "=r" (result) : "r" (ptr) : "memory" );
#endif
   return ((uint16_t) result);    /* Add explicit type cast here */
}


/**
  \brief   LDRT Unprivileged (32 bit)
  \details Executes a Unprivileged LDRT instruction for 32 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint32_t at (*ptr)
 */
__STATIC_FORCEINLINE uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}


/**
  \brief   STRT Unprivileged (8 bit)
  \details Executes a Unprivileged STRT instruction for 8 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __ASM volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}


/**
  \brief   STRT Unprivileged (16 bit)
  \details Executes a Unprivileged STRT instruction for 16 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __ASM volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}


/**
  \brief   STRT Unprivileged (32 bit)
  \details Executes a Unprivileged STRT instruction for 32 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __ASM volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}

#else  /* ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
           (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
           (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    ) */

/**
  \brief   Signed Saturate
  \details Saturates a signed value.
  \param [in]  value  Value to be saturated
  \param [in]    sat  Bit position to saturate to (1..32)
  \return             Saturated value
 */
__STATIC_FORCEINLINE int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}

/**
  \brief   Unsigned Saturate
  \details Saturates an unsigned value.
  \param [in]  value  Value to be saturated
  \param [in]    sat  Bit position to saturate to (0..31)
  \return             Saturated value
 */
__STATIC_FORCEINLINE uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}

#endif /* ((defined (__ARM_ARCH_7M__      ) && (__ARM_ARCH_7M__      == 1)) || \
           (defined (__ARM_ARCH_7EM__     ) && (__ARM_ARCH_7EM__     == 1)) || \
           (defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1))    ) */


#if ((defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
     (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    )
/**
  \brief   Load-Acquire (8 bit)
  \details Executes a LDAB instruction for 8 bit value.
  \param [in]    ptr  Pointer to data
  \return             value of type uint8_t at (*ptr)
 */
__STATIC_FORCEINLINE uint8_t __LDAB(volatile uint8_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldab %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return ((uint8_t) result);
}


/**
  \brief   Load-Acquire (16 bit)
  \details Executes a LDAH instruction for 16 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint16_t at (*ptr)
 */
__STATIC_FORCEINLINE uint16_t __LDAH(volatile uint16_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldah %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return ((uint16_t) result);
}


/**
  \brief   Load-Acquire (32 bit)
  \details Executes a LDA instruction for 32 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint32_t at (*ptr)
 */
__STATIC_FORCEINLINE uint32_t __LDA(volatile uint32_t *ptr)
{
    uint32_t result;

   __ASM volatile ("lda %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return(result);
}


/**
  \brief   Store-Release (8 bit)
  \details Executes a STLB instruction for 8 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STLB(uint8_t value, volatile uint8_t *ptr)
{
   __ASM volatile ("stlb %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
}


/**
  \brief   Store-Release (16 bit)
  \details Executes a STLH instruction for 16 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STLH(uint16_t value, volatile uint16_t *ptr)
{
   __ASM volatile ("stlh %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
}


/**
  \brief   Store-Release (32 bit)
  \details Executes a STL instruction for 32 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
 */
__STATIC_FORCEINLINE void __STL(uint32_t value, volatile uint32_t *ptr)
{
   __ASM volatile ("stl %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
}


/**
  \brief   Load-Acquire Exclusive (8 bit)
  \details Executes a LDAB exclusive instruction for 8 bit value.
  \param [in]    ptr  Pointer to data
  \return             value of type uint8_t at (*ptr)
 */
__STATIC_FORCEINLINE uint8_t __LDAEXB(volatile uint8_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldaexb %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return ((uint8_t) result);
}


/**
  \brief   Load-Acquire Exclusive (16 bit)
  \details Executes a LDAH exclusive instruction for 16 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint16_t at (*ptr)
 */
__STATIC_FORCEINLINE uint16_t __LDAEXH(volatile uint16_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldaexh %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return ((uint16_t) result);
}


/**
  \brief   Load-Acquire Exclusive (32 bit)
  \details Executes a LDA exclusive instruction for 32 bit values.
  \param [in]    ptr  Pointer to data
  \return        value of type uint32_t at (*ptr)
 */
__STATIC_FORCEINLINE uint32_t __LDAEX(volatile uint32_t *ptr)
{
    uint32_t result;

   __ASM volatile ("ldaex %0, %1" : "=r" (result) : "Q" (*ptr) : "memory" );
   return(result);
}


/**
  \brief   Store-Release Exclusive (8 bit)
  \details Executes a STLB exclusive instruction for 8 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STLEXB(uint8_t value, volatile uint8_t *ptr)
{
   uint32_t result;

   __ASM volatile ("stlexb %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
   return(result);
}


/**
  \brief   Store-Release Exclusive (16 bit)
  \details Executes a STLH exclusive instruction for 16 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STLEXH(uint16_t value, volatile uint16_t *ptr)
{
   uint32_t result;

   __ASM volatile ("stlexh %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
   return(result);
}


/**
  \brief   Store-Release Exclusive (32 bit)
  \details Executes a STL exclusive instruction for 32 bit values.
  \param [in]  value  Value to store
  \param [in]    ptr  Pointer to location
  \return          0  Function succeeded
  \return          1  Function failed
 */
__STATIC_FORCEINLINE uint32_t __STLEX(uint32_t value, volatile uint32_t *ptr)
{
   uint32_t result;

   __ASM volatile ("stlex %0, %2, %1" : "=&r" (result), "=Q" (*ptr) : "r" ((uint32_t)value) : "memory" );
   return(result);
}

#endif /* ((defined (__ARM_ARCH_8M_MAIN__ ) && (__ARM_ARCH_8M_MAIN__ == 1)) || \
           (defined (__ARM_ARCH_8M_BASE__ ) && (__ARM_ARCH_8M_BASE__ == 1))    ) */

/*@}*/ /* end of group CMSIS_Core_InstructionInterface */


/* ###################  Compiler specific Intrinsics  ########################### */
/** \defgroup CMSIS_SIMD_intrinsics CMSIS SIMD Intrinsics
  Access to dedicated SIMD instructions
  @{
*/

#if (defined (__ARM_FEATURE_DSP) && (__ARM_FEATURE_DSP == 1))

__STATIC_FORCEINLINE uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__STATIC_FORCEINLINE uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__STATIC_FORCEINLINE uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __ASM ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

#define __SSAT16(ARG1, ARG2) \
({                          \
  int32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("ssat16 %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })

#define __USAT16(ARG1, ARG2) \
({                          \
  uint32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("usat16 %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })

__STATIC_FORCEINLINE uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __ASM ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__STATIC_FORCEINLINE uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __ASM ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SXTB16_RORn(uint32_t op1, uint32_t rotate)
{
  uint32_t result;

  __ASM ("sxtb16 %0, %1, ROR %2" : "=r" (result) : "r" (op1), "i" (rotate) );

  return result;
}

__STATIC_FORCEINLINE uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMUAD  (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __ASM volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __ASM volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__STATIC_FORCEINLINE uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;

#ifndef __ARMEB__   /* Little endian */
  __ASM volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );
#else               /* Big endian */
  __ASM volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[1]), "=r" (llr.w32[0]): "r" (op1), "r" (op2) , "0" (llr.w32[1]), "1" (llr.w32[0]) );
#endif

  return(llr.w64);
}

__STATIC_FORCEINLINE uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;

#ifndef __ARMEB__   /* Little endian */
  __ASM volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );
#else               /* Big endian */
  __ASM volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[1]), "=r" (llr.w32[0]): "r" (op1), "r" (op2) , "0" (llr.w32[1]), "1" (llr.w32[0]) );
#endif

  return(llr.w64);
}

__STATIC_FORCEINLINE uint32_t __SMUSD  (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __ASM volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__STATIC_FORCEINLINE uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __ASM volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__STATIC_FORCEINLINE uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;

#ifndef __ARMEB__   /* Little endian */
  __ASM volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );
#else               /* Big endian */
  __ASM volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[1]), "=r" (llr.w32[0]): "r" (op1), "r" (op2) , "0" (llr.w32[1]), "1" (llr.w32[0]) );
#endif

  return(llr.w64);
}

__STATIC_FORCEINLINE uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;

#ifndef __ARMEB__   /* Little endian */
  __ASM volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );
#else               /* Big endian */
  __ASM volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[1]), "=r" (llr.w32[0]): "r" (op1), "r" (op2) , "0" (llr.w32[1]), "1" (llr.w32[0]) );
#endif

  return(llr.w64);
}

__STATIC_FORCEINLINE uint32_t __SEL  (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __ASM volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE  int32_t __QADD( int32_t op1,  int32_t op2)
{
  int32_t result;

  __ASM volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__STATIC_FORCEINLINE  int32_t __QSUB( int32_t op1,  int32_t op2)
{
  int32_t result;

  __ASM volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

#if 0
#define __PKHBT(ARG1,ARG2,ARG3) \
({                          \
  uint32_t __RES, __ARG1 = (ARG1), __ARG2 = (ARG2); \
  __ASM ("pkhbt %0, %1, %2, lsl %3" : "=r" (__RES) :  "r" (__ARG1), "r" (__ARG2), "I" (ARG3)  ); \
  __RES; \
 })

#define __PKHTB(ARG1,ARG2,ARG3) \
({                          \
  uint32_t __RES, __ARG1 = (ARG1), __ARG2 = (ARG2); \
  if (ARG3 == 0) \
    __ASM ("pkhtb %0, %1, %2" : "=r" (__RES) :  "r" (__ARG1), "r" (__ARG2)  ); \
  else \
    __ASM ("pkhtb %0, %1, %2, asr %3" : "=r" (__RES) :  "r" (__ARG1), "r" (__ARG2), "I" (ARG3)  ); \
  __RES; \
 })
#endif

#define __PKHBT(ARG1,ARG2,ARG3)          ( ((((uint32_t)(ARG1))          ) & 0x0000FFFFUL) |  \
                                           ((((uint32_t)(ARG2)) << (ARG3)) & 0xFFFF0000UL)  )

#define __PKHTB(ARG1,ARG2,ARG3)          ( ((((uint32_t)(ARG1))          ) & 0xFFFF0000UL) |  \
                                           ((((uint32_t)(ARG2)) >> (ARG3)) & 0x0000FFFFUL)  )

__STATIC_FORCEINLINE int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __ASM ("smmla %0, %1, %2, %3" : "=r" (result): "r"  (op1), "r" (op2), "r" (op3) );
 return(result);
}

#endif /* (__ARM_FEATURE_DSP == 1) */
/*@} end of group CMSIS_SIMD_intrinsics */


#pragma GCC diagnostic pop

#endif /* __CMSIS_GCC_H */

/******************************************************************************
 * @file     cmsis_version.h
 * @brief    CMSIS Core(M) Version definitions
 * @version  V5.0.4
 * @date     23. July 2019
 ******************************************************************************/
/*
 * Copyright (c) 2009-2019 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if   defined ( __ICCARM__ )
  #pragma system_include         /* treat file as system include file for MISRA check */
#elif defined (__clang__)
  #pragma clang system_header   /* treat file as system include file */
#endif

#ifndef __CMSIS_VERSION_H
#define __CMSIS_VERSION_H

/*  CMSIS Version definitions */
#define __CM_CMSIS_VERSION_MAIN  ( 5U)                                      /*!< [31:16] CMSIS Core(M) main version */
#define __CM_CMSIS_VERSION_SUB   ( 4U)                                      /*!< [15:0]  CMSIS Core(M) sub version */
#define __CM_CMSIS_VERSION       ((__CM_CMSIS_VERSION_MAIN << 16U) | \
                                   __CM_CMSIS_VERSION_SUB           )       /*!< CMSIS Core(M) version number */
#endif

/**************************************************************************
 * @file     core_cm4.h
 * @brief    CMSIS Cortex-M4 Core Peripheral Access Layer Header File
 * @version  V5.1.1
 * @date     27. March 2020
 ******************************************************************************/
/*
 * Copyright (c) 2009-2020 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if   defined ( __ICCARM__ )
  #pragma system_include         /* treat file as system include file for MISRA check */
#elif defined (__clang__)
  #pragma clang system_header   /* treat file as system include file */
#endif

#ifndef __CORE_CM4_H_GENERIC
#define __CORE_CM4_H_GENERIC

#ifdef __cplusplus
 extern "C" {
#endif

/**
  \page CMSIS_MISRA_Exceptions  MISRA-C:2004 Compliance Exceptions
  CMSIS violates the following MISRA-C:2004 rules:

   \li Required Rule 8.5, object/function definition in header file.<br>
     Function definitions in header files are used to allow 'inlining'.

   \li Required Rule 18.4, declaration of union type or object of union type: '{...}'.<br>
     Unions are used for effective representation of core registers.

   \li Advisory Rule 19.7, Function-like macro defined.<br>
     Function-like macros are used to allow more efficient code.
 */


/*******************************************************************************
 *                 CMSIS definitions
 ******************************************************************************/
/**
  \ingroup Cortex_M4
  @{
 */

/* CMSIS CM4 definitions */
#define __CM4_CMSIS_VERSION_MAIN  (__CM_CMSIS_VERSION_MAIN)              /*!< \deprecated [31:16] CMSIS HAL main version */
#define __CM4_CMSIS_VERSION_SUB   (__CM_CMSIS_VERSION_SUB)               /*!< \deprecated [15:0]  CMSIS HAL sub version */
#define __CM4_CMSIS_VERSION       ((__CM4_CMSIS_VERSION_MAIN << 16U) | \
                                    __CM4_CMSIS_VERSION_SUB           )  /*!< \deprecated CMSIS HAL version number */

#define __CORTEX_M                (4U)                                   /*!< Cortex-M Core */

/** __FPU_USED indicates whether an FPU is used or not.
    For this, __FPU_PRESENT has to be checked prior to making use of FPU specific registers and functions.
*/
#if defined ( __CC_ARM )
  #if defined __TARGET_FPU_VFP
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #if defined __ARM_FP
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #warning "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __GNUC__ )
  #if defined (__VFP_FP__) && !defined(__SOFTFP__)
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __ICCARM__ )
  #if defined __ARMVFP__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __TI_ARM__ )
  #if defined __TI_VFP_SUPPORT__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __TASKING__ )
  #if defined __FPU_VFP__
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#elif defined ( __CSMC__ )
  #if ( __CSMC__ & 0x400U)
    #if defined (__FPU_PRESENT) && (__FPU_PRESENT == 1U)
      #define __FPU_USED       1U
    #else
      #error "Compiler generates FPU instructions for a device without an FPU (check __FPU_PRESENT)"
      #define __FPU_USED       0U
    #endif
  #else
    #define __FPU_USED         0U
  #endif

#endif

//#include "cmsis_compiler.h"               /* CMSIS compiler specific defines */


#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM4_H_GENERIC */

#ifndef __CMSIS_GENERIC

#ifndef __CORE_CM4_H_DEPENDANT
#define __CORE_CM4_H_DEPENDANT

#ifdef __cplusplus
 extern "C" {
#endif

/* check device defines and use defaults */
#if defined __CHECK_DEVICE_DEFINES
  #ifndef __CM4_REV
    #define __CM4_REV               0x0000U
    #warning "__CM4_REV not defined in device header file; using default!"
  #endif

  #ifndef __FPU_PRESENT
    #define __FPU_PRESENT             0U
    #warning "__FPU_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __MPU_PRESENT
    #define __MPU_PRESENT             0U
    #warning "__MPU_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __VTOR_PRESENT
    #define __VTOR_PRESENT             1U
    #warning "__VTOR_PRESENT not defined in device header file; using default!"
  #endif

  #ifndef __NVIC_PRIO_BITS
    #define __NVIC_PRIO_BITS          3U
    #warning "__NVIC_PRIO_BITS not defined in device header file; using default!"
  #endif

  #ifndef __Vendor_SysTickConfig
    #define __Vendor_SysTickConfig    0U
    #warning "__Vendor_SysTickConfig not defined in device header file; using default!"
  #endif
#endif

/* IO definitions (access restrictions to peripheral registers) */
/**
    \defgroup CMSIS_glob_defs CMSIS Global Defines

    <strong>IO Type Qualifiers</strong> are used
    \li to specify the access to peripheral variables.
    \li for automatic generation of peripheral register debug information.
*/
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions */
#define     __IO    volatile             /*!< Defines 'read / write' permissions */

/* following defines should be used for structure members */
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */

/*@} end of group Cortex_M4 */



/*******************************************************************************
 *                 Register Abstraction
  Core Register contain:
  - Core Register
  - Core NVIC Register
  - Core SCB Register
  - Core SysTick Register
  - Core Debug Register
  - Core MPU Register
  - Core FPU Register
 ******************************************************************************/
/**
  \defgroup CMSIS_core_register Defines and Type Definitions
  \brief Type definitions and defines for Cortex-M processor based devices.
*/

/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_CORE  Status and Control Registers
  \brief      Core Register type definitions.
  @{
 */

/**
  \brief  Union type to access the Application Program Status Register (APSR).
 */
typedef union
{
  struct
  {
    uint32_t _reserved0:16;              /*!< bit:  0..15  Reserved */
    uint32_t GE:4;                       /*!< bit: 16..19  Greater than or Equal flags */
    uint32_t _reserved1:7;               /*!< bit: 20..26  Reserved */
    uint32_t Q:1;                        /*!< bit:     27  Saturation condition flag */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
  } b;                                   /*!< Structure used for bit  access */
  uint32_t w;                            /*!< Type      used for word access */
} APSR_Type;

/* APSR Register Definitions */
#define APSR_N_Pos                         31U                                            /*!< APSR: N Position */
#define APSR_N_Msk                         (1UL << APSR_N_Pos)                            /*!< APSR: N Mask */

#define APSR_Z_Pos                         30U                                            /*!< APSR: Z Position */
#define APSR_Z_Msk                         (1UL << APSR_Z_Pos)                            /*!< APSR: Z Mask */

#define APSR_C_Pos                         29U                                            /*!< APSR: C Position */
#define APSR_C_Msk                         (1UL << APSR_C_Pos)                            /*!< APSR: C Mask */

#define APSR_V_Pos                         28U                                            /*!< APSR: V Position */
#define APSR_V_Msk                         (1UL << APSR_V_Pos)                            /*!< APSR: V Mask */

#define APSR_Q_Pos                         27U                                            /*!< APSR: Q Position */
#define APSR_Q_Msk                         (1UL << APSR_Q_Pos)                            /*!< APSR: Q Mask */

#define APSR_GE_Pos                        16U                                            /*!< APSR: GE Position */
#define APSR_GE_Msk                        (0xFUL << APSR_GE_Pos)                         /*!< APSR: GE Mask */


/**
  \brief  Union type to access the Interrupt Program Status Register (IPSR).
 */
typedef union
{
  struct
  {
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
    uint32_t _reserved0:23;              /*!< bit:  9..31  Reserved */
  } b;                                   /*!< Structure used for bit  access */
  uint32_t w;                            /*!< Type      used for word access */
} IPSR_Type;

/* IPSR Register Definitions */
#define IPSR_ISR_Pos                        0U                                            /*!< IPSR: ISR Position */
#define IPSR_ISR_Msk                       (0x1FFUL /*<< IPSR_ISR_Pos*/)                  /*!< IPSR: ISR Mask */


/**
  \brief  Union type to access the Special-Purpose Program Status Registers (xPSR).
 */
typedef union
{
  struct
  {
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
    uint32_t _reserved0:1;               /*!< bit:      9  Reserved */
    uint32_t ICI_IT_1:6;                 /*!< bit: 10..15  ICI/IT part 1 */
    uint32_t GE:4;                       /*!< bit: 16..19  Greater than or Equal flags */
    uint32_t _reserved1:4;               /*!< bit: 20..23  Reserved */
    uint32_t T:1;                        /*!< bit:     24  Thumb bit */
    uint32_t ICI_IT_2:2;                 /*!< bit: 25..26  ICI/IT part 2 */
    uint32_t Q:1;                        /*!< bit:     27  Saturation condition flag */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
  } b;                                   /*!< Structure used for bit  access */
  uint32_t w;                            /*!< Type      used for word access */
} xPSR_Type;

/* xPSR Register Definitions */
#define xPSR_N_Pos                         31U                                            /*!< xPSR: N Position */
#define xPSR_N_Msk                         (1UL << xPSR_N_Pos)                            /*!< xPSR: N Mask */

#define xPSR_Z_Pos                         30U                                            /*!< xPSR: Z Position */
#define xPSR_Z_Msk                         (1UL << xPSR_Z_Pos)                            /*!< xPSR: Z Mask */

#define xPSR_C_Pos                         29U                                            /*!< xPSR: C Position */
#define xPSR_C_Msk                         (1UL << xPSR_C_Pos)                            /*!< xPSR: C Mask */

#define xPSR_V_Pos                         28U                                            /*!< xPSR: V Position */
#define xPSR_V_Msk                         (1UL << xPSR_V_Pos)                            /*!< xPSR: V Mask */

#define xPSR_Q_Pos                         27U                                            /*!< xPSR: Q Position */
#define xPSR_Q_Msk                         (1UL << xPSR_Q_Pos)                            /*!< xPSR: Q Mask */

#define xPSR_ICI_IT_2_Pos                  25U                                            /*!< xPSR: ICI/IT part 2 Position */
#define xPSR_ICI_IT_2_Msk                  (3UL << xPSR_ICI_IT_2_Pos)                     /*!< xPSR: ICI/IT part 2 Mask */

#define xPSR_T_Pos                         24U                                            /*!< xPSR: T Position */
#define xPSR_T_Msk                         (1UL << xPSR_T_Pos)                            /*!< xPSR: T Mask */

#define xPSR_GE_Pos                        16U                                            /*!< xPSR: GE Position */
#define xPSR_GE_Msk                        (0xFUL << xPSR_GE_Pos)                         /*!< xPSR: GE Mask */

#define xPSR_ICI_IT_1_Pos                  10U                                            /*!< xPSR: ICI/IT part 1 Position */
#define xPSR_ICI_IT_1_Msk                  (0x3FUL << xPSR_ICI_IT_1_Pos)                  /*!< xPSR: ICI/IT part 1 Mask */

#define xPSR_ISR_Pos                        0U                                            /*!< xPSR: ISR Position */
#define xPSR_ISR_Msk                       (0x1FFUL /*<< xPSR_ISR_Pos*/)                  /*!< xPSR: ISR Mask */


/**
  \brief  Union type to access the Control Registers (CONTROL).
 */
typedef union
{
  struct
  {
    uint32_t nPRIV:1;                    /*!< bit:      0  Execution privilege in Thread mode */
    uint32_t SPSEL:1;                    /*!< bit:      1  Stack to be used */
    uint32_t FPCA:1;                     /*!< bit:      2  FP extension active flag */
    uint32_t _reserved0:29;              /*!< bit:  3..31  Reserved */
  } b;                                   /*!< Structure used for bit  access */
  uint32_t w;                            /*!< Type      used for word access */
} CONTROL_Type;

/* CONTROL Register Definitions */
#define CONTROL_FPCA_Pos                    2U                                            /*!< CONTROL: FPCA Position */
#define CONTROL_FPCA_Msk                   (1UL << CONTROL_FPCA_Pos)                      /*!< CONTROL: FPCA Mask */

#define CONTROL_SPSEL_Pos                   1U                                            /*!< CONTROL: SPSEL Position */
#define CONTROL_SPSEL_Msk                  (1UL << CONTROL_SPSEL_Pos)                     /*!< CONTROL: SPSEL Mask */

#define CONTROL_nPRIV_Pos                   0U                                            /*!< CONTROL: nPRIV Position */
#define CONTROL_nPRIV_Msk                  (1UL /*<< CONTROL_nPRIV_Pos*/)                 /*!< CONTROL: nPRIV Mask */

/*@} end of group CMSIS_CORE */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_NVIC  Nested Vectored Interrupt Controller (NVIC)
  \brief      Type definitions for the NVIC Registers
  @{
 */

/**
  \brief  Structure type to access the Nested Vectored Interrupt Controller (NVIC).
 */
typedef struct
{
  __IOM uint32_t ISER[8U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
        uint32_t RESERVED0[24U];
  __IOM uint32_t ICER[8U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
        uint32_t RESERVED1[24U];
  __IOM uint32_t ISPR[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
        uint32_t RESERVED2[24U];
  __IOM uint32_t ICPR[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
        uint32_t RESERVED3[24U];
  __IOM uint32_t IABR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
        uint32_t RESERVED4[56U];
  __IOM uint8_t  IP[240U];               /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
        uint32_t RESERVED5[644U];
  __OM  uint32_t STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
}  NVIC_Type;

/* Software Triggered Interrupt Register Definitions */
#define NVIC_STIR_INTID_Pos                 0U                                         /*!< STIR: INTLINESNUM Position */
#define NVIC_STIR_INTID_Msk                (0x1FFUL /*<< NVIC_STIR_INTID_Pos*/)        /*!< STIR: INTLINESNUM Mask */

/*@} end of group CMSIS_NVIC */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SCB     System Control Block (SCB)
  \brief    Type definitions for the System Control Block Registers
  @{
 */

/**
  \brief  Structure type to access the System Control Block (SCB).
 */
typedef struct
{
  __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
  __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IOM uint8_t  SHP[12U];               /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
  __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IOM uint32_t CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
  __IOM uint32_t HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
  __IOM uint32_t DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
  __IOM uint32_t MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
  __IOM uint32_t BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
  __IOM uint32_t AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
  __IM  uint32_t PFR[2U];                /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __IM  uint32_t DFR;                    /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __IM  uint32_t ADR;                    /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __IM  uint32_t MMFR[4U];               /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __IM  uint32_t ISAR[5U];               /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
        uint32_t RESERVED0[5U];
  __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
} SCB_Type;

/* SCB CPUID Register Definitions */
#define SCB_CPUID_IMPLEMENTER_Pos          24U                                            /*!< SCB CPUID: IMPLEMENTER Position */
#define SCB_CPUID_IMPLEMENTER_Msk          (0xFFUL << SCB_CPUID_IMPLEMENTER_Pos)          /*!< SCB CPUID: IMPLEMENTER Mask */

#define SCB_CPUID_VARIANT_Pos              20U                                            /*!< SCB CPUID: VARIANT Position */
#define SCB_CPUID_VARIANT_Msk              (0xFUL << SCB_CPUID_VARIANT_Pos)               /*!< SCB CPUID: VARIANT Mask */

#define SCB_CPUID_ARCHITECTURE_Pos         16U                                            /*!< SCB CPUID: ARCHITECTURE Position */
#define SCB_CPUID_ARCHITECTURE_Msk         (0xFUL << SCB_CPUID_ARCHITECTURE_Pos)          /*!< SCB CPUID: ARCHITECTURE Mask */

#define SCB_CPUID_PARTNO_Pos                4U                                            /*!< SCB CPUID: PARTNO Position */
#define SCB_CPUID_PARTNO_Msk               (0xFFFUL << SCB_CPUID_PARTNO_Pos)              /*!< SCB CPUID: PARTNO Mask */

#define SCB_CPUID_REVISION_Pos              0U                                            /*!< SCB CPUID: REVISION Position */
#define SCB_CPUID_REVISION_Msk             (0xFUL /*<< SCB_CPUID_REVISION_Pos*/)          /*!< SCB CPUID: REVISION Mask */

/* SCB Interrupt Control State Register Definitions */
#define SCB_ICSR_NMIPENDSET_Pos            31U                                            /*!< SCB ICSR: NMIPENDSET Position */
#define SCB_ICSR_NMIPENDSET_Msk            (1UL << SCB_ICSR_NMIPENDSET_Pos)               /*!< SCB ICSR: NMIPENDSET Mask */

#define SCB_ICSR_PENDSVSET_Pos             28U                                            /*!< SCB ICSR: PENDSVSET Position */
#define SCB_ICSR_PENDSVSET_Msk             (1UL << SCB_ICSR_PENDSVSET_Pos)                /*!< SCB ICSR: PENDSVSET Mask */

#define SCB_ICSR_PENDSVCLR_Pos             27U                                            /*!< SCB ICSR: PENDSVCLR Position */
#define SCB_ICSR_PENDSVCLR_Msk             (1UL << SCB_ICSR_PENDSVCLR_Pos)                /*!< SCB ICSR: PENDSVCLR Mask */

#define SCB_ICSR_PENDSTSET_Pos             26U                                            /*!< SCB ICSR: PENDSTSET Position */
#define SCB_ICSR_PENDSTSET_Msk             (1UL << SCB_ICSR_PENDSTSET_Pos)                /*!< SCB ICSR: PENDSTSET Mask */

#define SCB_ICSR_PENDSTCLR_Pos             25U                                            /*!< SCB ICSR: PENDSTCLR Position */
#define SCB_ICSR_PENDSTCLR_Msk             (1UL << SCB_ICSR_PENDSTCLR_Pos)                /*!< SCB ICSR: PENDSTCLR Mask */

#define SCB_ICSR_ISRPREEMPT_Pos            23U                                            /*!< SCB ICSR: ISRPREEMPT Position */
#define SCB_ICSR_ISRPREEMPT_Msk            (1UL << SCB_ICSR_ISRPREEMPT_Pos)               /*!< SCB ICSR: ISRPREEMPT Mask */

#define SCB_ICSR_ISRPENDING_Pos            22U                                            /*!< SCB ICSR: ISRPENDING Position */
#define SCB_ICSR_ISRPENDING_Msk            (1UL << SCB_ICSR_ISRPENDING_Pos)               /*!< SCB ICSR: ISRPENDING Mask */

#define SCB_ICSR_VECTPENDING_Pos           12U                                            /*!< SCB ICSR: VECTPENDING Position */
#define SCB_ICSR_VECTPENDING_Msk           (0x1FFUL << SCB_ICSR_VECTPENDING_Pos)          /*!< SCB ICSR: VECTPENDING Mask */

#define SCB_ICSR_RETTOBASE_Pos             11U                                            /*!< SCB ICSR: RETTOBASE Position */
#define SCB_ICSR_RETTOBASE_Msk             (1UL << SCB_ICSR_RETTOBASE_Pos)                /*!< SCB ICSR: RETTOBASE Mask */

#define SCB_ICSR_VECTACTIVE_Pos             0U                                            /*!< SCB ICSR: VECTACTIVE Position */
#define SCB_ICSR_VECTACTIVE_Msk            (0x1FFUL /*<< SCB_ICSR_VECTACTIVE_Pos*/)       /*!< SCB ICSR: VECTACTIVE Mask */

/* SCB Vector Table Offset Register Definitions */
#define SCB_VTOR_TBLOFF_Pos                 7U                                            /*!< SCB VTOR: TBLOFF Position */
#define SCB_VTOR_TBLOFF_Msk                (0x1FFFFFFUL << SCB_VTOR_TBLOFF_Pos)           /*!< SCB VTOR: TBLOFF Mask */

/* SCB Application Interrupt and Reset Control Register Definitions */
#define SCB_AIRCR_VECTKEY_Pos              16U                                            /*!< SCB AIRCR: VECTKEY Position */
#define SCB_AIRCR_VECTKEY_Msk              (0xFFFFUL << SCB_AIRCR_VECTKEY_Pos)            /*!< SCB AIRCR: VECTKEY Mask */

#define SCB_AIRCR_VECTKEYSTAT_Pos          16U                                            /*!< SCB AIRCR: VECTKEYSTAT Position */
#define SCB_AIRCR_VECTKEYSTAT_Msk          (0xFFFFUL << SCB_AIRCR_VECTKEYSTAT_Pos)        /*!< SCB AIRCR: VECTKEYSTAT Mask */

#define SCB_AIRCR_ENDIANESS_Pos            15U                                            /*!< SCB AIRCR: ENDIANESS Position */
#define SCB_AIRCR_ENDIANESS_Msk            (1UL << SCB_AIRCR_ENDIANESS_Pos)               /*!< SCB AIRCR: ENDIANESS Mask */

#define SCB_AIRCR_PRIGROUP_Pos              8U                                            /*!< SCB AIRCR: PRIGROUP Position */
#define SCB_AIRCR_PRIGROUP_Msk             (7UL << SCB_AIRCR_PRIGROUP_Pos)                /*!< SCB AIRCR: PRIGROUP Mask */

#define SCB_AIRCR_SYSRESETREQ_Pos           2U                                            /*!< SCB AIRCR: SYSRESETREQ Position */
#define SCB_AIRCR_SYSRESETREQ_Msk          (1UL << SCB_AIRCR_SYSRESETREQ_Pos)             /*!< SCB AIRCR: SYSRESETREQ Mask */

#define SCB_AIRCR_VECTCLRACTIVE_Pos         1U                                            /*!< SCB AIRCR: VECTCLRACTIVE Position */
#define SCB_AIRCR_VECTCLRACTIVE_Msk        (1UL << SCB_AIRCR_VECTCLRACTIVE_Pos)           /*!< SCB AIRCR: VECTCLRACTIVE Mask */

#define SCB_AIRCR_VECTRESET_Pos             0U                                            /*!< SCB AIRCR: VECTRESET Position */
#define SCB_AIRCR_VECTRESET_Msk            (1UL /*<< SCB_AIRCR_VECTRESET_Pos*/)           /*!< SCB AIRCR: VECTRESET Mask */

/* SCB System Control Register Definitions */
#define SCB_SCR_SEVONPEND_Pos               4U                                            /*!< SCB SCR: SEVONPEND Position */
#define SCB_SCR_SEVONPEND_Msk              (1UL << SCB_SCR_SEVONPEND_Pos)                 /*!< SCB SCR: SEVONPEND Mask */

#define SCB_SCR_SLEEPDEEP_Pos               2U                                            /*!< SCB SCR: SLEEPDEEP Position */
#define SCB_SCR_SLEEPDEEP_Msk              (1UL << SCB_SCR_SLEEPDEEP_Pos)                 /*!< SCB SCR: SLEEPDEEP Mask */

#define SCB_SCR_SLEEPONEXIT_Pos             1U                                            /*!< SCB SCR: SLEEPONEXIT Position */
#define SCB_SCR_SLEEPONEXIT_Msk            (1UL << SCB_SCR_SLEEPONEXIT_Pos)               /*!< SCB SCR: SLEEPONEXIT Mask */

/* SCB Configuration Control Register Definitions */
#define SCB_CCR_STKALIGN_Pos                9U                                            /*!< SCB CCR: STKALIGN Position */
#define SCB_CCR_STKALIGN_Msk               (1UL << SCB_CCR_STKALIGN_Pos)                  /*!< SCB CCR: STKALIGN Mask */

#define SCB_CCR_BFHFNMIGN_Pos               8U                                            /*!< SCB CCR: BFHFNMIGN Position */
#define SCB_CCR_BFHFNMIGN_Msk              (1UL << SCB_CCR_BFHFNMIGN_Pos)                 /*!< SCB CCR: BFHFNMIGN Mask */

#define SCB_CCR_DIV_0_TRP_Pos               4U                                            /*!< SCB CCR: DIV_0_TRP Position */
#define SCB_CCR_DIV_0_TRP_Msk              (1UL << SCB_CCR_DIV_0_TRP_Pos)                 /*!< SCB CCR: DIV_0_TRP Mask */

#define SCB_CCR_UNALIGN_TRP_Pos             3U                                            /*!< SCB CCR: UNALIGN_TRP Position */
#define SCB_CCR_UNALIGN_TRP_Msk            (1UL << SCB_CCR_UNALIGN_TRP_Pos)               /*!< SCB CCR: UNALIGN_TRP Mask */

#define SCB_CCR_USERSETMPEND_Pos            1U                                            /*!< SCB CCR: USERSETMPEND Position */
#define SCB_CCR_USERSETMPEND_Msk           (1UL << SCB_CCR_USERSETMPEND_Pos)              /*!< SCB CCR: USERSETMPEND Mask */

#define SCB_CCR_NONBASETHRDENA_Pos          0U                                            /*!< SCB CCR: NONBASETHRDENA Position */
#define SCB_CCR_NONBASETHRDENA_Msk         (1UL /*<< SCB_CCR_NONBASETHRDENA_Pos*/)        /*!< SCB CCR: NONBASETHRDENA Mask */

/* SCB System Handler Control and State Register Definitions */
#define SCB_SHCSR_USGFAULTENA_Pos          18U                                            /*!< SCB SHCSR: USGFAULTENA Position */
#define SCB_SHCSR_USGFAULTENA_Msk          (1UL << SCB_SHCSR_USGFAULTENA_Pos)             /*!< SCB SHCSR: USGFAULTENA Mask */

#define SCB_SHCSR_BUSFAULTENA_Pos          17U                                            /*!< SCB SHCSR: BUSFAULTENA Position */
#define SCB_SHCSR_BUSFAULTENA_Msk          (1UL << SCB_SHCSR_BUSFAULTENA_Pos)             /*!< SCB SHCSR: BUSFAULTENA Mask */

#define SCB_SHCSR_MEMFAULTENA_Pos          16U                                            /*!< SCB SHCSR: MEMFAULTENA Position */
#define SCB_SHCSR_MEMFAULTENA_Msk          (1UL << SCB_SHCSR_MEMFAULTENA_Pos)             /*!< SCB SHCSR: MEMFAULTENA Mask */

#define SCB_SHCSR_SVCALLPENDED_Pos         15U                                            /*!< SCB SHCSR: SVCALLPENDED Position */
#define SCB_SHCSR_SVCALLPENDED_Msk         (1UL << SCB_SHCSR_SVCALLPENDED_Pos)            /*!< SCB SHCSR: SVCALLPENDED Mask */

#define SCB_SHCSR_BUSFAULTPENDED_Pos       14U                                            /*!< SCB SHCSR: BUSFAULTPENDED Position */
#define SCB_SHCSR_BUSFAULTPENDED_Msk       (1UL << SCB_SHCSR_BUSFAULTPENDED_Pos)          /*!< SCB SHCSR: BUSFAULTPENDED Mask */

#define SCB_SHCSR_MEMFAULTPENDED_Pos       13U                                            /*!< SCB SHCSR: MEMFAULTPENDED Position */
#define SCB_SHCSR_MEMFAULTPENDED_Msk       (1UL << SCB_SHCSR_MEMFAULTPENDED_Pos)          /*!< SCB SHCSR: MEMFAULTPENDED Mask */

#define SCB_SHCSR_USGFAULTPENDED_Pos       12U                                            /*!< SCB SHCSR: USGFAULTPENDED Position */
#define SCB_SHCSR_USGFAULTPENDED_Msk       (1UL << SCB_SHCSR_USGFAULTPENDED_Pos)          /*!< SCB SHCSR: USGFAULTPENDED Mask */

#define SCB_SHCSR_SYSTICKACT_Pos           11U                                            /*!< SCB SHCSR: SYSTICKACT Position */
#define SCB_SHCSR_SYSTICKACT_Msk           (1UL << SCB_SHCSR_SYSTICKACT_Pos)              /*!< SCB SHCSR: SYSTICKACT Mask */

#define SCB_SHCSR_PENDSVACT_Pos            10U                                            /*!< SCB SHCSR: PENDSVACT Position */
#define SCB_SHCSR_PENDSVACT_Msk            (1UL << SCB_SHCSR_PENDSVACT_Pos)               /*!< SCB SHCSR: PENDSVACT Mask */

#define SCB_SHCSR_MONITORACT_Pos            8U                                            /*!< SCB SHCSR: MONITORACT Position */
#define SCB_SHCSR_MONITORACT_Msk           (1UL << SCB_SHCSR_MONITORACT_Pos)              /*!< SCB SHCSR: MONITORACT Mask */

#define SCB_SHCSR_SVCALLACT_Pos             7U                                            /*!< SCB SHCSR: SVCALLACT Position */
#define SCB_SHCSR_SVCALLACT_Msk            (1UL << SCB_SHCSR_SVCALLACT_Pos)               /*!< SCB SHCSR: SVCALLACT Mask */

#define SCB_SHCSR_USGFAULTACT_Pos           3U                                            /*!< SCB SHCSR: USGFAULTACT Position */
#define SCB_SHCSR_USGFAULTACT_Msk          (1UL << SCB_SHCSR_USGFAULTACT_Pos)             /*!< SCB SHCSR: USGFAULTACT Mask */

#define SCB_SHCSR_BUSFAULTACT_Pos           1U                                            /*!< SCB SHCSR: BUSFAULTACT Position */
#define SCB_SHCSR_BUSFAULTACT_Msk          (1UL << SCB_SHCSR_BUSFAULTACT_Pos)             /*!< SCB SHCSR: BUSFAULTACT Mask */

#define SCB_SHCSR_MEMFAULTACT_Pos           0U                                            /*!< SCB SHCSR: MEMFAULTACT Position */
#define SCB_SHCSR_MEMFAULTACT_Msk          (1UL /*<< SCB_SHCSR_MEMFAULTACT_Pos*/)         /*!< SCB SHCSR: MEMFAULTACT Mask */

/* SCB Configurable Fault Status Register Definitions */
#define SCB_CFSR_USGFAULTSR_Pos            16U                                            /*!< SCB CFSR: Usage Fault Status Register Position */
#define SCB_CFSR_USGFAULTSR_Msk            (0xFFFFUL << SCB_CFSR_USGFAULTSR_Pos)          /*!< SCB CFSR: Usage Fault Status Register Mask */

#define SCB_CFSR_BUSFAULTSR_Pos             8U                                            /*!< SCB CFSR: Bus Fault Status Register Position */
#define SCB_CFSR_BUSFAULTSR_Msk            (0xFFUL << SCB_CFSR_BUSFAULTSR_Pos)            /*!< SCB CFSR: Bus Fault Status Register Mask */

#define SCB_CFSR_MEMFAULTSR_Pos             0U                                            /*!< SCB CFSR: Memory Manage Fault Status Register Position */
#define SCB_CFSR_MEMFAULTSR_Msk            (0xFFUL /*<< SCB_CFSR_MEMFAULTSR_Pos*/)        /*!< SCB CFSR: Memory Manage Fault Status Register Mask */

/* MemManage Fault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_MMARVALID_Pos             (SCB_SHCSR_MEMFAULTACT_Pos + 7U)               /*!< SCB CFSR (MMFSR): MMARVALID Position */
#define SCB_CFSR_MMARVALID_Msk             (1UL << SCB_CFSR_MMARVALID_Pos)                /*!< SCB CFSR (MMFSR): MMARVALID Mask */

#define SCB_CFSR_MLSPERR_Pos               (SCB_SHCSR_MEMFAULTACT_Pos + 5U)               /*!< SCB CFSR (MMFSR): MLSPERR Position */
#define SCB_CFSR_MLSPERR_Msk               (1UL << SCB_CFSR_MLSPERR_Pos)                  /*!< SCB CFSR (MMFSR): MLSPERR Mask */

#define SCB_CFSR_MSTKERR_Pos               (SCB_SHCSR_MEMFAULTACT_Pos + 4U)               /*!< SCB CFSR (MMFSR): MSTKERR Position */
#define SCB_CFSR_MSTKERR_Msk               (1UL << SCB_CFSR_MSTKERR_Pos)                  /*!< SCB CFSR (MMFSR): MSTKERR Mask */

#define SCB_CFSR_MUNSTKERR_Pos             (SCB_SHCSR_MEMFAULTACT_Pos + 3U)               /*!< SCB CFSR (MMFSR): MUNSTKERR Position */
#define SCB_CFSR_MUNSTKERR_Msk             (1UL << SCB_CFSR_MUNSTKERR_Pos)                /*!< SCB CFSR (MMFSR): MUNSTKERR Mask */

#define SCB_CFSR_DACCVIOL_Pos              (SCB_SHCSR_MEMFAULTACT_Pos + 1U)               /*!< SCB CFSR (MMFSR): DACCVIOL Position */
#define SCB_CFSR_DACCVIOL_Msk              (1UL << SCB_CFSR_DACCVIOL_Pos)                 /*!< SCB CFSR (MMFSR): DACCVIOL Mask */

#define SCB_CFSR_IACCVIOL_Pos              (SCB_SHCSR_MEMFAULTACT_Pos + 0U)               /*!< SCB CFSR (MMFSR): IACCVIOL Position */
#define SCB_CFSR_IACCVIOL_Msk              (1UL /*<< SCB_CFSR_IACCVIOL_Pos*/)             /*!< SCB CFSR (MMFSR): IACCVIOL Mask */

/* BusFault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_BFARVALID_Pos            (SCB_CFSR_BUSFAULTSR_Pos + 7U)                  /*!< SCB CFSR (BFSR): BFARVALID Position */
#define SCB_CFSR_BFARVALID_Msk            (1UL << SCB_CFSR_BFARVALID_Pos)                 /*!< SCB CFSR (BFSR): BFARVALID Mask */

#define SCB_CFSR_LSPERR_Pos               (SCB_CFSR_BUSFAULTSR_Pos + 5U)                  /*!< SCB CFSR (BFSR): LSPERR Position */
#define SCB_CFSR_LSPERR_Msk               (1UL << SCB_CFSR_LSPERR_Pos)                    /*!< SCB CFSR (BFSR): LSPERR Mask */

#define SCB_CFSR_STKERR_Pos               (SCB_CFSR_BUSFAULTSR_Pos + 4U)                  /*!< SCB CFSR (BFSR): STKERR Position */
#define SCB_CFSR_STKERR_Msk               (1UL << SCB_CFSR_STKERR_Pos)                    /*!< SCB CFSR (BFSR): STKERR Mask */

#define SCB_CFSR_UNSTKERR_Pos             (SCB_CFSR_BUSFAULTSR_Pos + 3U)                  /*!< SCB CFSR (BFSR): UNSTKERR Position */
#define SCB_CFSR_UNSTKERR_Msk             (1UL << SCB_CFSR_UNSTKERR_Pos)                  /*!< SCB CFSR (BFSR): UNSTKERR Mask */

#define SCB_CFSR_IMPRECISERR_Pos          (SCB_CFSR_BUSFAULTSR_Pos + 2U)                  /*!< SCB CFSR (BFSR): IMPRECISERR Position */
#define SCB_CFSR_IMPRECISERR_Msk          (1UL << SCB_CFSR_IMPRECISERR_Pos)               /*!< SCB CFSR (BFSR): IMPRECISERR Mask */

#define SCB_CFSR_PRECISERR_Pos            (SCB_CFSR_BUSFAULTSR_Pos + 1U)                  /*!< SCB CFSR (BFSR): PRECISERR Position */
#define SCB_CFSR_PRECISERR_Msk            (1UL << SCB_CFSR_PRECISERR_Pos)                 /*!< SCB CFSR (BFSR): PRECISERR Mask */

#define SCB_CFSR_IBUSERR_Pos              (SCB_CFSR_BUSFAULTSR_Pos + 0U)                  /*!< SCB CFSR (BFSR): IBUSERR Position */
#define SCB_CFSR_IBUSERR_Msk              (1UL << SCB_CFSR_IBUSERR_Pos)                   /*!< SCB CFSR (BFSR): IBUSERR Mask */

/* UsageFault Status Register (part of SCB Configurable Fault Status Register) */
#define SCB_CFSR_DIVBYZERO_Pos            (SCB_CFSR_USGFAULTSR_Pos + 9U)                  /*!< SCB CFSR (UFSR): DIVBYZERO Position */
#define SCB_CFSR_DIVBYZERO_Msk            (1UL << SCB_CFSR_DIVBYZERO_Pos)                 /*!< SCB CFSR (UFSR): DIVBYZERO Mask */

#define SCB_CFSR_UNALIGNED_Pos            (SCB_CFSR_USGFAULTSR_Pos + 8U)                  /*!< SCB CFSR (UFSR): UNALIGNED Position */
#define SCB_CFSR_UNALIGNED_Msk            (1UL << SCB_CFSR_UNALIGNED_Pos)                 /*!< SCB CFSR (UFSR): UNALIGNED Mask */

#define SCB_CFSR_NOCP_Pos                 (SCB_CFSR_USGFAULTSR_Pos + 3U)                  /*!< SCB CFSR (UFSR): NOCP Position */
#define SCB_CFSR_NOCP_Msk                 (1UL << SCB_CFSR_NOCP_Pos)                      /*!< SCB CFSR (UFSR): NOCP Mask */

#define SCB_CFSR_INVPC_Pos                (SCB_CFSR_USGFAULTSR_Pos + 2U)                  /*!< SCB CFSR (UFSR): INVPC Position */
#define SCB_CFSR_INVPC_Msk                (1UL << SCB_CFSR_INVPC_Pos)                     /*!< SCB CFSR (UFSR): INVPC Mask */

#define SCB_CFSR_INVSTATE_Pos             (SCB_CFSR_USGFAULTSR_Pos + 1U)                  /*!< SCB CFSR (UFSR): INVSTATE Position */
#define SCB_CFSR_INVSTATE_Msk             (1UL << SCB_CFSR_INVSTATE_Pos)                  /*!< SCB CFSR (UFSR): INVSTATE Mask */

#define SCB_CFSR_UNDEFINSTR_Pos           (SCB_CFSR_USGFAULTSR_Pos + 0U)                  /*!< SCB CFSR (UFSR): UNDEFINSTR Position */
#define SCB_CFSR_UNDEFINSTR_Msk           (1UL << SCB_CFSR_UNDEFINSTR_Pos)                /*!< SCB CFSR (UFSR): UNDEFINSTR Mask */

/* SCB Hard Fault Status Register Definitions */
#define SCB_HFSR_DEBUGEVT_Pos              31U                                            /*!< SCB HFSR: DEBUGEVT Position */
#define SCB_HFSR_DEBUGEVT_Msk              (1UL << SCB_HFSR_DEBUGEVT_Pos)                 /*!< SCB HFSR: DEBUGEVT Mask */

#define SCB_HFSR_FORCED_Pos                30U                                            /*!< SCB HFSR: FORCED Position */
#define SCB_HFSR_FORCED_Msk                (1UL << SCB_HFSR_FORCED_Pos)                   /*!< SCB HFSR: FORCED Mask */

#define SCB_HFSR_VECTTBL_Pos                1U                                            /*!< SCB HFSR: VECTTBL Position */
#define SCB_HFSR_VECTTBL_Msk               (1UL << SCB_HFSR_VECTTBL_Pos)                  /*!< SCB HFSR: VECTTBL Mask */

/* SCB Debug Fault Status Register Definitions */
#define SCB_DFSR_EXTERNAL_Pos               4U                                            /*!< SCB DFSR: EXTERNAL Position */
#define SCB_DFSR_EXTERNAL_Msk              (1UL << SCB_DFSR_EXTERNAL_Pos)                 /*!< SCB DFSR: EXTERNAL Mask */

#define SCB_DFSR_VCATCH_Pos                 3U                                            /*!< SCB DFSR: VCATCH Position */
#define SCB_DFSR_VCATCH_Msk                (1UL << SCB_DFSR_VCATCH_Pos)                   /*!< SCB DFSR: VCATCH Mask */

#define SCB_DFSR_DWTTRAP_Pos                2U                                            /*!< SCB DFSR: DWTTRAP Position */
#define SCB_DFSR_DWTTRAP_Msk               (1UL << SCB_DFSR_DWTTRAP_Pos)                  /*!< SCB DFSR: DWTTRAP Mask */

#define SCB_DFSR_BKPT_Pos                   1U                                            /*!< SCB DFSR: BKPT Position */
#define SCB_DFSR_BKPT_Msk                  (1UL << SCB_DFSR_BKPT_Pos)                     /*!< SCB DFSR: BKPT Mask */

#define SCB_DFSR_HALTED_Pos                 0U                                            /*!< SCB DFSR: HALTED Position */
#define SCB_DFSR_HALTED_Msk                (1UL /*<< SCB_DFSR_HALTED_Pos*/)               /*!< SCB DFSR: HALTED Mask */

/*@} end of group CMSIS_SCB */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SCnSCB System Controls not in SCB (SCnSCB)
  \brief    Type definitions for the System Control and ID Register not in the SCB
  @{
 */

/**
  \brief  Structure type to access the System Control and ID Register not in the SCB.
 */
typedef struct
{
        uint32_t RESERVED0[1U];
  __IM  uint32_t ICTR;                   /*!< Offset: 0x004 (R/ )  Interrupt Controller Type Register */
  __IOM uint32_t ACTLR;                  /*!< Offset: 0x008 (R/W)  Auxiliary Control Register */
} SCnSCB_Type;

/* Interrupt Controller Type Register Definitions */
#define SCnSCB_ICTR_INTLINESNUM_Pos         0U                                         /*!< ICTR: INTLINESNUM Position */
#define SCnSCB_ICTR_INTLINESNUM_Msk        (0xFUL /*<< SCnSCB_ICTR_INTLINESNUM_Pos*/)  /*!< ICTR: INTLINESNUM Mask */

/* Auxiliary Control Register Definitions */
#define SCnSCB_ACTLR_DISOOFP_Pos            9U                                         /*!< ACTLR: DISOOFP Position */
#define SCnSCB_ACTLR_DISOOFP_Msk           (1UL << SCnSCB_ACTLR_DISOOFP_Pos)           /*!< ACTLR: DISOOFP Mask */

#define SCnSCB_ACTLR_DISFPCA_Pos            8U                                         /*!< ACTLR: DISFPCA Position */
#define SCnSCB_ACTLR_DISFPCA_Msk           (1UL << SCnSCB_ACTLR_DISFPCA_Pos)           /*!< ACTLR: DISFPCA Mask */

#define SCnSCB_ACTLR_DISFOLD_Pos            2U                                         /*!< ACTLR: DISFOLD Position */
#define SCnSCB_ACTLR_DISFOLD_Msk           (1UL << SCnSCB_ACTLR_DISFOLD_Pos)           /*!< ACTLR: DISFOLD Mask */

#define SCnSCB_ACTLR_DISDEFWBUF_Pos         1U                                         /*!< ACTLR: DISDEFWBUF Position */
#define SCnSCB_ACTLR_DISDEFWBUF_Msk        (1UL << SCnSCB_ACTLR_DISDEFWBUF_Pos)        /*!< ACTLR: DISDEFWBUF Mask */

#define SCnSCB_ACTLR_DISMCYCINT_Pos         0U                                         /*!< ACTLR: DISMCYCINT Position */
#define SCnSCB_ACTLR_DISMCYCINT_Msk        (1UL /*<< SCnSCB_ACTLR_DISMCYCINT_Pos*/)    /*!< ACTLR: DISMCYCINT Mask */

/*@} end of group CMSIS_SCnotSCB */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_SysTick     System Tick Timer (SysTick)
  \brief    Type definitions for the System Timer Registers.
  @{
 */

/**
  \brief  Structure type to access the System Timer (SysTick).
 */
typedef struct
{
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  __IOM uint32_t LOAD;                   /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
  __IOM uint32_t VAL;                    /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  __IM  uint32_t CALIB;                  /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
} SysTick_Type;

/* SysTick Control / Status Register Definitions */
#define SysTick_CTRL_COUNTFLAG_Pos         16U                                            /*!< SysTick CTRL: COUNTFLAG Position */
#define SysTick_CTRL_COUNTFLAG_Msk         (1UL << SysTick_CTRL_COUNTFLAG_Pos)            /*!< SysTick CTRL: COUNTFLAG Mask */

#define SysTick_CTRL_CLKSOURCE_Pos          2U                                            /*!< SysTick CTRL: CLKSOURCE Position */
#define SysTick_CTRL_CLKSOURCE_Msk         (1UL << SysTick_CTRL_CLKSOURCE_Pos)            /*!< SysTick CTRL: CLKSOURCE Mask */

#define SysTick_CTRL_TICKINT_Pos            1U                                            /*!< SysTick CTRL: TICKINT Position */
#define SysTick_CTRL_TICKINT_Msk           (1UL << SysTick_CTRL_TICKINT_Pos)              /*!< SysTick CTRL: TICKINT Mask */

#define SysTick_CTRL_ENABLE_Pos             0U                                            /*!< SysTick CTRL: ENABLE Position */
#define SysTick_CTRL_ENABLE_Msk            (1UL /*<< SysTick_CTRL_ENABLE_Pos*/)           /*!< SysTick CTRL: ENABLE Mask */

/* SysTick Reload Register Definitions */
#define SysTick_LOAD_RELOAD_Pos             0U                                            /*!< SysTick LOAD: RELOAD Position */
#define SysTick_LOAD_RELOAD_Msk            (0xFFFFFFUL /*<< SysTick_LOAD_RELOAD_Pos*/)    /*!< SysTick LOAD: RELOAD Mask */

/* SysTick Current Register Definitions */
#define SysTick_VAL_CURRENT_Pos             0U                                            /*!< SysTick VAL: CURRENT Position */
#define SysTick_VAL_CURRENT_Msk            (0xFFFFFFUL /*<< SysTick_VAL_CURRENT_Pos*/)    /*!< SysTick VAL: CURRENT Mask */

/* SysTick Calibration Register Definitions */
#define SysTick_CALIB_NOREF_Pos            31U                                            /*!< SysTick CALIB: NOREF Position */
#define SysTick_CALIB_NOREF_Msk            (1UL << SysTick_CALIB_NOREF_Pos)               /*!< SysTick CALIB: NOREF Mask */

#define SysTick_CALIB_SKEW_Pos             30U                                            /*!< SysTick CALIB: SKEW Position */
#define SysTick_CALIB_SKEW_Msk             (1UL << SysTick_CALIB_SKEW_Pos)                /*!< SysTick CALIB: SKEW Mask */

#define SysTick_CALIB_TENMS_Pos             0U                                            /*!< SysTick CALIB: TENMS Position */
#define SysTick_CALIB_TENMS_Msk            (0xFFFFFFUL /*<< SysTick_CALIB_TENMS_Pos*/)    /*!< SysTick CALIB: TENMS Mask */

/*@} end of group CMSIS_SysTick */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_ITM     Instrumentation Trace Macrocell (ITM)
  \brief    Type definitions for the Instrumentation Trace Macrocell (ITM)
  @{
 */

/**
  \brief  Structure type to access the Instrumentation Trace Macrocell Register (ITM).
 */
typedef struct
{
  __OM  union
  {
    __OM  uint8_t    u8;                 /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 8-bit */
    __OM  uint16_t   u16;                /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 16-bit */
    __OM  uint32_t   u32;                /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 32-bit */
  }  PORT [32U];                         /*!< Offset: 0x000 ( /W)  ITM Stimulus Port Registers */
        uint32_t RESERVED0[864U];
  __IOM uint32_t TER;                    /*!< Offset: 0xE00 (R/W)  ITM Trace Enable Register */
        uint32_t RESERVED1[15U];
  __IOM uint32_t TPR;                    /*!< Offset: 0xE40 (R/W)  ITM Trace Privilege Register */
        uint32_t RESERVED2[15U];
  __IOM uint32_t TCR;                    /*!< Offset: 0xE80 (R/W)  ITM Trace Control Register */
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  __OM  uint32_t LAR;                    /*!< Offset: 0xFB0 ( /W)  ITM Lock Access Register */
  __IM  uint32_t LSR;                    /*!< Offset: 0xFB4 (R/ )  ITM Lock Status Register */
        uint32_t RESERVED5[6U];
  __IM  uint32_t PID4;                   /*!< Offset: 0xFD0 (R/ )  ITM Peripheral Identification Register #4 */
  __IM  uint32_t PID5;                   /*!< Offset: 0xFD4 (R/ )  ITM Peripheral Identification Register #5 */
  __IM  uint32_t PID6;                   /*!< Offset: 0xFD8 (R/ )  ITM Peripheral Identification Register #6 */
  __IM  uint32_t PID7;                   /*!< Offset: 0xFDC (R/ )  ITM Peripheral Identification Register #7 */
  __IM  uint32_t PID0;                   /*!< Offset: 0xFE0 (R/ )  ITM Peripheral Identification Register #0 */
  __IM  uint32_t PID1;                   /*!< Offset: 0xFE4 (R/ )  ITM Peripheral Identification Register #1 */
  __IM  uint32_t PID2;                   /*!< Offset: 0xFE8 (R/ )  ITM Peripheral Identification Register #2 */
  __IM  uint32_t PID3;                   /*!< Offset: 0xFEC (R/ )  ITM Peripheral Identification Register #3 */
  __IM  uint32_t CID0;                   /*!< Offset: 0xFF0 (R/ )  ITM Component  Identification Register #0 */
  __IM  uint32_t CID1;                   /*!< Offset: 0xFF4 (R/ )  ITM Component  Identification Register #1 */
  __IM  uint32_t CID2;                   /*!< Offset: 0xFF8 (R/ )  ITM Component  Identification Register #2 */
  __IM  uint32_t CID3;                   /*!< Offset: 0xFFC (R/ )  ITM Component  Identification Register #3 */
} ITM_Type;

/* ITM Trace Privilege Register Definitions */
#define ITM_TPR_PRIVMASK_Pos                0U                                            /*!< ITM TPR: PRIVMASK Position */
#define ITM_TPR_PRIVMASK_Msk               (0xFFFFFFFFUL /*<< ITM_TPR_PRIVMASK_Pos*/)     /*!< ITM TPR: PRIVMASK Mask */

/* ITM Trace Control Register Definitions */
#define ITM_TCR_BUSY_Pos                   23U                                            /*!< ITM TCR: BUSY Position */
#define ITM_TCR_BUSY_Msk                   (1UL << ITM_TCR_BUSY_Pos)                      /*!< ITM TCR: BUSY Mask */

#define ITM_TCR_TraceBusID_Pos             16U                                            /*!< ITM TCR: ATBID Position */
#define ITM_TCR_TraceBusID_Msk             (0x7FUL << ITM_TCR_TraceBusID_Pos)             /*!< ITM TCR: ATBID Mask */

#define ITM_TCR_GTSFREQ_Pos                10U                                            /*!< ITM TCR: Global timestamp frequency Position */
#define ITM_TCR_GTSFREQ_Msk                (3UL << ITM_TCR_GTSFREQ_Pos)                   /*!< ITM TCR: Global timestamp frequency Mask */

#define ITM_TCR_TSPrescale_Pos              8U                                            /*!< ITM TCR: TSPrescale Position */
#define ITM_TCR_TSPrescale_Msk             (3UL << ITM_TCR_TSPrescale_Pos)                /*!< ITM TCR: TSPrescale Mask */

#define ITM_TCR_SWOENA_Pos                  4U                                            /*!< ITM TCR: SWOENA Position */
#define ITM_TCR_SWOENA_Msk                 (1UL << ITM_TCR_SWOENA_Pos)                    /*!< ITM TCR: SWOENA Mask */

#define ITM_TCR_DWTENA_Pos                  3U                                            /*!< ITM TCR: DWTENA Position */
#define ITM_TCR_DWTENA_Msk                 (1UL << ITM_TCR_DWTENA_Pos)                    /*!< ITM TCR: DWTENA Mask */

#define ITM_TCR_SYNCENA_Pos                 2U                                            /*!< ITM TCR: SYNCENA Position */
#define ITM_TCR_SYNCENA_Msk                (1UL << ITM_TCR_SYNCENA_Pos)                   /*!< ITM TCR: SYNCENA Mask */

#define ITM_TCR_TSENA_Pos                   1U                                            /*!< ITM TCR: TSENA Position */
#define ITM_TCR_TSENA_Msk                  (1UL << ITM_TCR_TSENA_Pos)                     /*!< ITM TCR: TSENA Mask */

#define ITM_TCR_ITMENA_Pos                  0U                                            /*!< ITM TCR: ITM Enable bit Position */
#define ITM_TCR_ITMENA_Msk                 (1UL /*<< ITM_TCR_ITMENA_Pos*/)                /*!< ITM TCR: ITM Enable bit Mask */

/* ITM Lock Status Register Definitions */
#define ITM_LSR_ByteAcc_Pos                 2U                                            /*!< ITM LSR: ByteAcc Position */
#define ITM_LSR_ByteAcc_Msk                (1UL << ITM_LSR_ByteAcc_Pos)                   /*!< ITM LSR: ByteAcc Mask */

#define ITM_LSR_Access_Pos                  1U                                            /*!< ITM LSR: Access Position */
#define ITM_LSR_Access_Msk                 (1UL << ITM_LSR_Access_Pos)                    /*!< ITM LSR: Access Mask */

#define ITM_LSR_Present_Pos                 0U                                            /*!< ITM LSR: Present Position */
#define ITM_LSR_Present_Msk                (1UL /*<< ITM_LSR_Present_Pos*/)               /*!< ITM LSR: Present Mask */

/*@}*/ /* end of group CMSIS_ITM */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_DWT     Data Watchpoint and Trace (DWT)
  \brief    Type definitions for the Data Watchpoint and Trace (DWT)
  @{
 */

/**
  \brief  Structure type to access the Data Watchpoint and Trace Register (DWT).
 */
typedef struct
{
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  Control Register */
  __IOM uint32_t CYCCNT;                 /*!< Offset: 0x004 (R/W)  Cycle Count Register */
  __IOM uint32_t CPICNT;                 /*!< Offset: 0x008 (R/W)  CPI Count Register */
  __IOM uint32_t EXCCNT;                 /*!< Offset: 0x00C (R/W)  Exception Overhead Count Register */
  __IOM uint32_t SLEEPCNT;               /*!< Offset: 0x010 (R/W)  Sleep Count Register */
  __IOM uint32_t LSUCNT;                 /*!< Offset: 0x014 (R/W)  LSU Count Register */
  __IOM uint32_t FOLDCNT;                /*!< Offset: 0x018 (R/W)  Folded-instruction Count Register */
  __IM  uint32_t PCSR;                   /*!< Offset: 0x01C (R/ )  Program Counter Sample Register */
  __IOM uint32_t COMP0;                  /*!< Offset: 0x020 (R/W)  Comparator Register 0 */
  __IOM uint32_t MASK0;                  /*!< Offset: 0x024 (R/W)  Mask Register 0 */
  __IOM uint32_t FUNCTION0;              /*!< Offset: 0x028 (R/W)  Function Register 0 */
        uint32_t RESERVED0[1U];
  __IOM uint32_t COMP1;                  /*!< Offset: 0x030 (R/W)  Comparator Register 1 */
  __IOM uint32_t MASK1;                  /*!< Offset: 0x034 (R/W)  Mask Register 1 */
  __IOM uint32_t FUNCTION1;              /*!< Offset: 0x038 (R/W)  Function Register 1 */
        uint32_t RESERVED1[1U];
  __IOM uint32_t COMP2;                  /*!< Offset: 0x040 (R/W)  Comparator Register 2 */
  __IOM uint32_t MASK2;                  /*!< Offset: 0x044 (R/W)  Mask Register 2 */
  __IOM uint32_t FUNCTION2;              /*!< Offset: 0x048 (R/W)  Function Register 2 */
        uint32_t RESERVED2[1U];
  __IOM uint32_t COMP3;                  /*!< Offset: 0x050 (R/W)  Comparator Register 3 */
  __IOM uint32_t MASK3;                  /*!< Offset: 0x054 (R/W)  Mask Register 3 */
  __IOM uint32_t FUNCTION3;              /*!< Offset: 0x058 (R/W)  Function Register 3 */
} DWT_Type;

/* DWT Control Register Definitions */
#define DWT_CTRL_NUMCOMP_Pos               28U                                         /*!< DWT CTRL: NUMCOMP Position */
#define DWT_CTRL_NUMCOMP_Msk               (0xFUL << DWT_CTRL_NUMCOMP_Pos)             /*!< DWT CTRL: NUMCOMP Mask */

#define DWT_CTRL_NOTRCPKT_Pos              27U                                         /*!< DWT CTRL: NOTRCPKT Position */
#define DWT_CTRL_NOTRCPKT_Msk              (0x1UL << DWT_CTRL_NOTRCPKT_Pos)            /*!< DWT CTRL: NOTRCPKT Mask */

#define DWT_CTRL_NOEXTTRIG_Pos             26U                                         /*!< DWT CTRL: NOEXTTRIG Position */
#define DWT_CTRL_NOEXTTRIG_Msk             (0x1UL << DWT_CTRL_NOEXTTRIG_Pos)           /*!< DWT CTRL: NOEXTTRIG Mask */

#define DWT_CTRL_NOCYCCNT_Pos              25U                                         /*!< DWT CTRL: NOCYCCNT Position */
#define DWT_CTRL_NOCYCCNT_Msk              (0x1UL << DWT_CTRL_NOCYCCNT_Pos)            /*!< DWT CTRL: NOCYCCNT Mask */

#define DWT_CTRL_NOPRFCNT_Pos              24U                                         /*!< DWT CTRL: NOPRFCNT Position */
#define DWT_CTRL_NOPRFCNT_Msk              (0x1UL << DWT_CTRL_NOPRFCNT_Pos)            /*!< DWT CTRL: NOPRFCNT Mask */

#define DWT_CTRL_CYCEVTENA_Pos             22U                                         /*!< DWT CTRL: CYCEVTENA Position */
#define DWT_CTRL_CYCEVTENA_Msk             (0x1UL << DWT_CTRL_CYCEVTENA_Pos)           /*!< DWT CTRL: CYCEVTENA Mask */

#define DWT_CTRL_FOLDEVTENA_Pos            21U                                         /*!< DWT CTRL: FOLDEVTENA Position */
#define DWT_CTRL_FOLDEVTENA_Msk            (0x1UL << DWT_CTRL_FOLDEVTENA_Pos)          /*!< DWT CTRL: FOLDEVTENA Mask */

#define DWT_CTRL_LSUEVTENA_Pos             20U                                         /*!< DWT CTRL: LSUEVTENA Position */
#define DWT_CTRL_LSUEVTENA_Msk             (0x1UL << DWT_CTRL_LSUEVTENA_Pos)           /*!< DWT CTRL: LSUEVTENA Mask */

#define DWT_CTRL_SLEEPEVTENA_Pos           19U                                         /*!< DWT CTRL: SLEEPEVTENA Position */
#define DWT_CTRL_SLEEPEVTENA_Msk           (0x1UL << DWT_CTRL_SLEEPEVTENA_Pos)         /*!< DWT CTRL: SLEEPEVTENA Mask */

#define DWT_CTRL_EXCEVTENA_Pos             18U                                         /*!< DWT CTRL: EXCEVTENA Position */
#define DWT_CTRL_EXCEVTENA_Msk             (0x1UL << DWT_CTRL_EXCEVTENA_Pos)           /*!< DWT CTRL: EXCEVTENA Mask */

#define DWT_CTRL_CPIEVTENA_Pos             17U                                         /*!< DWT CTRL: CPIEVTENA Position */
#define DWT_CTRL_CPIEVTENA_Msk             (0x1UL << DWT_CTRL_CPIEVTENA_Pos)           /*!< DWT CTRL: CPIEVTENA Mask */

#define DWT_CTRL_EXCTRCENA_Pos             16U                                         /*!< DWT CTRL: EXCTRCENA Position */
#define DWT_CTRL_EXCTRCENA_Msk             (0x1UL << DWT_CTRL_EXCTRCENA_Pos)           /*!< DWT CTRL: EXCTRCENA Mask */

#define DWT_CTRL_PCSAMPLENA_Pos            12U                                         /*!< DWT CTRL: PCSAMPLENA Position */
#define DWT_CTRL_PCSAMPLENA_Msk            (0x1UL << DWT_CTRL_PCSAMPLENA_Pos)          /*!< DWT CTRL: PCSAMPLENA Mask */

#define DWT_CTRL_SYNCTAP_Pos               10U                                         /*!< DWT CTRL: SYNCTAP Position */
#define DWT_CTRL_SYNCTAP_Msk               (0x3UL << DWT_CTRL_SYNCTAP_Pos)             /*!< DWT CTRL: SYNCTAP Mask */

#define DWT_CTRL_CYCTAP_Pos                 9U                                         /*!< DWT CTRL: CYCTAP Position */
#define DWT_CTRL_CYCTAP_Msk                (0x1UL << DWT_CTRL_CYCTAP_Pos)              /*!< DWT CTRL: CYCTAP Mask */

#define DWT_CTRL_POSTINIT_Pos               5U                                         /*!< DWT CTRL: POSTINIT Position */
#define DWT_CTRL_POSTINIT_Msk              (0xFUL << DWT_CTRL_POSTINIT_Pos)            /*!< DWT CTRL: POSTINIT Mask */

#define DWT_CTRL_POSTPRESET_Pos             1U                                         /*!< DWT CTRL: POSTPRESET Position */
#define DWT_CTRL_POSTPRESET_Msk            (0xFUL << DWT_CTRL_POSTPRESET_Pos)          /*!< DWT CTRL: POSTPRESET Mask */

#define DWT_CTRL_CYCCNTENA_Pos              0U                                         /*!< DWT CTRL: CYCCNTENA Position */
#define DWT_CTRL_CYCCNTENA_Msk             (0x1UL /*<< DWT_CTRL_CYCCNTENA_Pos*/)       /*!< DWT CTRL: CYCCNTENA Mask */

/* DWT CPI Count Register Definitions */
#define DWT_CPICNT_CPICNT_Pos               0U                                         /*!< DWT CPICNT: CPICNT Position */
#define DWT_CPICNT_CPICNT_Msk              (0xFFUL /*<< DWT_CPICNT_CPICNT_Pos*/)       /*!< DWT CPICNT: CPICNT Mask */

/* DWT Exception Overhead Count Register Definitions */
#define DWT_EXCCNT_EXCCNT_Pos               0U                                         /*!< DWT EXCCNT: EXCCNT Position */
#define DWT_EXCCNT_EXCCNT_Msk              (0xFFUL /*<< DWT_EXCCNT_EXCCNT_Pos*/)       /*!< DWT EXCCNT: EXCCNT Mask */

/* DWT Sleep Count Register Definitions */
#define DWT_SLEEPCNT_SLEEPCNT_Pos           0U                                         /*!< DWT SLEEPCNT: SLEEPCNT Position */
#define DWT_SLEEPCNT_SLEEPCNT_Msk          (0xFFUL /*<< DWT_SLEEPCNT_SLEEPCNT_Pos*/)   /*!< DWT SLEEPCNT: SLEEPCNT Mask */

/* DWT LSU Count Register Definitions */
#define DWT_LSUCNT_LSUCNT_Pos               0U                                         /*!< DWT LSUCNT: LSUCNT Position */
#define DWT_LSUCNT_LSUCNT_Msk              (0xFFUL /*<< DWT_LSUCNT_LSUCNT_Pos*/)       /*!< DWT LSUCNT: LSUCNT Mask */

/* DWT Folded-instruction Count Register Definitions */
#define DWT_FOLDCNT_FOLDCNT_Pos             0U                                         /*!< DWT FOLDCNT: FOLDCNT Position */
#define DWT_FOLDCNT_FOLDCNT_Msk            (0xFFUL /*<< DWT_FOLDCNT_FOLDCNT_Pos*/)     /*!< DWT FOLDCNT: FOLDCNT Mask */

/* DWT Comparator Mask Register Definitions */
#define DWT_MASK_MASK_Pos                   0U                                         /*!< DWT MASK: MASK Position */
#define DWT_MASK_MASK_Msk                  (0x1FUL /*<< DWT_MASK_MASK_Pos*/)           /*!< DWT MASK: MASK Mask */

/* DWT Comparator Function Register Definitions */
#define DWT_FUNCTION_MATCHED_Pos           24U                                         /*!< DWT FUNCTION: MATCHED Position */
#define DWT_FUNCTION_MATCHED_Msk           (0x1UL << DWT_FUNCTION_MATCHED_Pos)         /*!< DWT FUNCTION: MATCHED Mask */

#define DWT_FUNCTION_DATAVADDR1_Pos        16U                                         /*!< DWT FUNCTION: DATAVADDR1 Position */
#define DWT_FUNCTION_DATAVADDR1_Msk        (0xFUL << DWT_FUNCTION_DATAVADDR1_Pos)      /*!< DWT FUNCTION: DATAVADDR1 Mask */

#define DWT_FUNCTION_DATAVADDR0_Pos        12U                                         /*!< DWT FUNCTION: DATAVADDR0 Position */
#define DWT_FUNCTION_DATAVADDR0_Msk        (0xFUL << DWT_FUNCTION_DATAVADDR0_Pos)      /*!< DWT FUNCTION: DATAVADDR0 Mask */

#define DWT_FUNCTION_DATAVSIZE_Pos         10U                                         /*!< DWT FUNCTION: DATAVSIZE Position */
#define DWT_FUNCTION_DATAVSIZE_Msk         (0x3UL << DWT_FUNCTION_DATAVSIZE_Pos)       /*!< DWT FUNCTION: DATAVSIZE Mask */

#define DWT_FUNCTION_LNK1ENA_Pos            9U                                         /*!< DWT FUNCTION: LNK1ENA Position */
#define DWT_FUNCTION_LNK1ENA_Msk           (0x1UL << DWT_FUNCTION_LNK1ENA_Pos)         /*!< DWT FUNCTION: LNK1ENA Mask */

#define DWT_FUNCTION_DATAVMATCH_Pos         8U                                         /*!< DWT FUNCTION: DATAVMATCH Position */
#define DWT_FUNCTION_DATAVMATCH_Msk        (0x1UL << DWT_FUNCTION_DATAVMATCH_Pos)      /*!< DWT FUNCTION: DATAVMATCH Mask */

#define DWT_FUNCTION_CYCMATCH_Pos           7U                                         /*!< DWT FUNCTION: CYCMATCH Position */
#define DWT_FUNCTION_CYCMATCH_Msk          (0x1UL << DWT_FUNCTION_CYCMATCH_Pos)        /*!< DWT FUNCTION: CYCMATCH Mask */

#define DWT_FUNCTION_EMITRANGE_Pos          5U                                         /*!< DWT FUNCTION: EMITRANGE Position */
#define DWT_FUNCTION_EMITRANGE_Msk         (0x1UL << DWT_FUNCTION_EMITRANGE_Pos)       /*!< DWT FUNCTION: EMITRANGE Mask */

#define DWT_FUNCTION_FUNCTION_Pos           0U                                         /*!< DWT FUNCTION: FUNCTION Position */
#define DWT_FUNCTION_FUNCTION_Msk          (0xFUL /*<< DWT_FUNCTION_FUNCTION_Pos*/)    /*!< DWT FUNCTION: FUNCTION Mask */

/*@}*/ /* end of group CMSIS_DWT */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_TPI     Trace Port Interface (TPI)
  \brief    Type definitions for the Trace Port Interface (TPI)
  @{
 */

/**
  \brief  Structure type to access the Trace Port Interface Register (TPI).
 */
typedef struct
{
  __IM  uint32_t SSPSR;                  /*!< Offset: 0x000 (R/ )  Supported Parallel Port Size Register */
  __IOM uint32_t CSPSR;                  /*!< Offset: 0x004 (R/W)  Current Parallel Port Size Register */
        uint32_t RESERVED0[2U];
  __IOM uint32_t ACPR;                   /*!< Offset: 0x010 (R/W)  Asynchronous Clock Prescaler Register */
        uint32_t RESERVED1[55U];
  __IOM uint32_t SPPR;                   /*!< Offset: 0x0F0 (R/W)  Selected Pin Protocol Register */
        uint32_t RESERVED2[131U];
  __IM  uint32_t FFSR;                   /*!< Offset: 0x300 (R/ )  Formatter and Flush Status Register */
  __IOM uint32_t FFCR;                   /*!< Offset: 0x304 (R/W)  Formatter and Flush Control Register */
  __IM  uint32_t FSCR;                   /*!< Offset: 0x308 (R/ )  Formatter Synchronization Counter Register */
        uint32_t RESERVED3[759U];
  __IM  uint32_t TRIGGER;                /*!< Offset: 0xEE8 (R/ )  TRIGGER Register */
  __IM  uint32_t FIFO0;                  /*!< Offset: 0xEEC (R/ )  Integration ETM Data */
  __IM  uint32_t ITATBCTR2;              /*!< Offset: 0xEF0 (R/ )  ITATBCTR2 */
        uint32_t RESERVED4[1U];
  __IM  uint32_t ITATBCTR0;              /*!< Offset: 0xEF8 (R/ )  ITATBCTR0 */
  __IM  uint32_t FIFO1;                  /*!< Offset: 0xEFC (R/ )  Integration ITM Data */
  __IOM uint32_t ITCTRL;                 /*!< Offset: 0xF00 (R/W)  Integration Mode Control */
        uint32_t RESERVED5[39U];
  __IOM uint32_t CLAIMSET;               /*!< Offset: 0xFA0 (R/W)  Claim tag set */
  __IOM uint32_t CLAIMCLR;               /*!< Offset: 0xFA4 (R/W)  Claim tag clear */
        uint32_t RESERVED7[8U];
  __IM  uint32_t DEVID;                  /*!< Offset: 0xFC8 (R/ )  TPIU_DEVID */
  __IM  uint32_t DEVTYPE;                /*!< Offset: 0xFCC (R/ )  TPIU_DEVTYPE */
} TPI_Type;

/* TPI Asynchronous Clock Prescaler Register Definitions */
#define TPI_ACPR_PRESCALER_Pos              0U                                         /*!< TPI ACPR: PRESCALER Position */
#define TPI_ACPR_PRESCALER_Msk             (0x1FFFUL /*<< TPI_ACPR_PRESCALER_Pos*/)    /*!< TPI ACPR: PRESCALER Mask */

/* TPI Selected Pin Protocol Register Definitions */
#define TPI_SPPR_TXMODE_Pos                 0U                                         /*!< TPI SPPR: TXMODE Position */
#define TPI_SPPR_TXMODE_Msk                (0x3UL /*<< TPI_SPPR_TXMODE_Pos*/)          /*!< TPI SPPR: TXMODE Mask */

/* TPI Formatter and Flush Status Register Definitions */
#define TPI_FFSR_FtNonStop_Pos              3U                                         /*!< TPI FFSR: FtNonStop Position */
#define TPI_FFSR_FtNonStop_Msk             (0x1UL << TPI_FFSR_FtNonStop_Pos)           /*!< TPI FFSR: FtNonStop Mask */

#define TPI_FFSR_TCPresent_Pos              2U                                         /*!< TPI FFSR: TCPresent Position */
#define TPI_FFSR_TCPresent_Msk             (0x1UL << TPI_FFSR_TCPresent_Pos)           /*!< TPI FFSR: TCPresent Mask */

#define TPI_FFSR_FtStopped_Pos              1U                                         /*!< TPI FFSR: FtStopped Position */
#define TPI_FFSR_FtStopped_Msk             (0x1UL << TPI_FFSR_FtStopped_Pos)           /*!< TPI FFSR: FtStopped Mask */

#define TPI_FFSR_FlInProg_Pos               0U                                         /*!< TPI FFSR: FlInProg Position */
#define TPI_FFSR_FlInProg_Msk              (0x1UL /*<< TPI_FFSR_FlInProg_Pos*/)        /*!< TPI FFSR: FlInProg Mask */

/* TPI Formatter and Flush Control Register Definitions */
#define TPI_FFCR_TrigIn_Pos                 8U                                         /*!< TPI FFCR: TrigIn Position */
#define TPI_FFCR_TrigIn_Msk                (0x1UL << TPI_FFCR_TrigIn_Pos)              /*!< TPI FFCR: TrigIn Mask */

#define TPI_FFCR_EnFCont_Pos                1U                                         /*!< TPI FFCR: EnFCont Position */
#define TPI_FFCR_EnFCont_Msk               (0x1UL << TPI_FFCR_EnFCont_Pos)             /*!< TPI FFCR: EnFCont Mask */

/* TPI TRIGGER Register Definitions */
#define TPI_TRIGGER_TRIGGER_Pos             0U                                         /*!< TPI TRIGGER: TRIGGER Position */
#define TPI_TRIGGER_TRIGGER_Msk            (0x1UL /*<< TPI_TRIGGER_TRIGGER_Pos*/)      /*!< TPI TRIGGER: TRIGGER Mask */

/* TPI Integration ETM Data Register Definitions (FIFO0) */
#define TPI_FIFO0_ITM_ATVALID_Pos          29U                                         /*!< TPI FIFO0: ITM_ATVALID Position */
#define TPI_FIFO0_ITM_ATVALID_Msk          (0x1UL << TPI_FIFO0_ITM_ATVALID_Pos)        /*!< TPI FIFO0: ITM_ATVALID Mask */

#define TPI_FIFO0_ITM_bytecount_Pos        27U                                         /*!< TPI FIFO0: ITM_bytecount Position */
#define TPI_FIFO0_ITM_bytecount_Msk        (0x3UL << TPI_FIFO0_ITM_bytecount_Pos)      /*!< TPI FIFO0: ITM_bytecount Mask */

#define TPI_FIFO0_ETM_ATVALID_Pos          26U                                         /*!< TPI FIFO0: ETM_ATVALID Position */
#define TPI_FIFO0_ETM_ATVALID_Msk          (0x1UL << TPI_FIFO0_ETM_ATVALID_Pos)        /*!< TPI FIFO0: ETM_ATVALID Mask */

#define TPI_FIFO0_ETM_bytecount_Pos        24U                                         /*!< TPI FIFO0: ETM_bytecount Position */
#define TPI_FIFO0_ETM_bytecount_Msk        (0x3UL << TPI_FIFO0_ETM_bytecount_Pos)      /*!< TPI FIFO0: ETM_bytecount Mask */

#define TPI_FIFO0_ETM2_Pos                 16U                                         /*!< TPI FIFO0: ETM2 Position */
#define TPI_FIFO0_ETM2_Msk                 (0xFFUL << TPI_FIFO0_ETM2_Pos)              /*!< TPI FIFO0: ETM2 Mask */

#define TPI_FIFO0_ETM1_Pos                  8U                                         /*!< TPI FIFO0: ETM1 Position */
#define TPI_FIFO0_ETM1_Msk                 (0xFFUL << TPI_FIFO0_ETM1_Pos)              /*!< TPI FIFO0: ETM1 Mask */

#define TPI_FIFO0_ETM0_Pos                  0U                                         /*!< TPI FIFO0: ETM0 Position */
#define TPI_FIFO0_ETM0_Msk                 (0xFFUL /*<< TPI_FIFO0_ETM0_Pos*/)          /*!< TPI FIFO0: ETM0 Mask */

/* TPI ITATBCTR2 Register Definitions */
#define TPI_ITATBCTR2_ATREADY2_Pos          0U                                         /*!< TPI ITATBCTR2: ATREADY2 Position */
#define TPI_ITATBCTR2_ATREADY2_Msk         (0x1UL /*<< TPI_ITATBCTR2_ATREADY2_Pos*/)   /*!< TPI ITATBCTR2: ATREADY2 Mask */

#define TPI_ITATBCTR2_ATREADY1_Pos          0U                                         /*!< TPI ITATBCTR2: ATREADY1 Position */
#define TPI_ITATBCTR2_ATREADY1_Msk         (0x1UL /*<< TPI_ITATBCTR2_ATREADY1_Pos*/)   /*!< TPI ITATBCTR2: ATREADY1 Mask */

/* TPI Integration ITM Data Register Definitions (FIFO1) */
#define TPI_FIFO1_ITM_ATVALID_Pos          29U                                         /*!< TPI FIFO1: ITM_ATVALID Position */
#define TPI_FIFO1_ITM_ATVALID_Msk          (0x1UL << TPI_FIFO1_ITM_ATVALID_Pos)        /*!< TPI FIFO1: ITM_ATVALID Mask */

#define TPI_FIFO1_ITM_bytecount_Pos        27U                                         /*!< TPI FIFO1: ITM_bytecount Position */
#define TPI_FIFO1_ITM_bytecount_Msk        (0x3UL << TPI_FIFO1_ITM_bytecount_Pos)      /*!< TPI FIFO1: ITM_bytecount Mask */

#define TPI_FIFO1_ETM_ATVALID_Pos          26U                                         /*!< TPI FIFO1: ETM_ATVALID Position */
#define TPI_FIFO1_ETM_ATVALID_Msk          (0x1UL << TPI_FIFO1_ETM_ATVALID_Pos)        /*!< TPI FIFO1: ETM_ATVALID Mask */

#define TPI_FIFO1_ETM_bytecount_Pos        24U                                         /*!< TPI FIFO1: ETM_bytecount Position */
#define TPI_FIFO1_ETM_bytecount_Msk        (0x3UL << TPI_FIFO1_ETM_bytecount_Pos)      /*!< TPI FIFO1: ETM_bytecount Mask */

#define TPI_FIFO1_ITM2_Pos                 16U                                         /*!< TPI FIFO1: ITM2 Position */
#define TPI_FIFO1_ITM2_Msk                 (0xFFUL << TPI_FIFO1_ITM2_Pos)              /*!< TPI FIFO1: ITM2 Mask */

#define TPI_FIFO1_ITM1_Pos                  8U                                         /*!< TPI FIFO1: ITM1 Position */
#define TPI_FIFO1_ITM1_Msk                 (0xFFUL << TPI_FIFO1_ITM1_Pos)              /*!< TPI FIFO1: ITM1 Mask */

#define TPI_FIFO1_ITM0_Pos                  0U                                         /*!< TPI FIFO1: ITM0 Position */
#define TPI_FIFO1_ITM0_Msk                 (0xFFUL /*<< TPI_FIFO1_ITM0_Pos*/)          /*!< TPI FIFO1: ITM0 Mask */

/* TPI ITATBCTR0 Register Definitions */
#define TPI_ITATBCTR0_ATREADY2_Pos          0U                                         /*!< TPI ITATBCTR0: ATREADY2 Position */
#define TPI_ITATBCTR0_ATREADY2_Msk         (0x1UL /*<< TPI_ITATBCTR0_ATREADY2_Pos*/)   /*!< TPI ITATBCTR0: ATREADY2 Mask */

#define TPI_ITATBCTR0_ATREADY1_Pos          0U                                         /*!< TPI ITATBCTR0: ATREADY1 Position */
#define TPI_ITATBCTR0_ATREADY1_Msk         (0x1UL /*<< TPI_ITATBCTR0_ATREADY1_Pos*/)   /*!< TPI ITATBCTR0: ATREADY1 Mask */

/* TPI Integration Mode Control Register Definitions */
#define TPI_ITCTRL_Mode_Pos                 0U                                         /*!< TPI ITCTRL: Mode Position */
#define TPI_ITCTRL_Mode_Msk                (0x3UL /*<< TPI_ITCTRL_Mode_Pos*/)          /*!< TPI ITCTRL: Mode Mask */

/* TPI DEVID Register Definitions */
#define TPI_DEVID_NRZVALID_Pos             11U                                         /*!< TPI DEVID: NRZVALID Position */
#define TPI_DEVID_NRZVALID_Msk             (0x1UL << TPI_DEVID_NRZVALID_Pos)           /*!< TPI DEVID: NRZVALID Mask */

#define TPI_DEVID_MANCVALID_Pos            10U                                         /*!< TPI DEVID: MANCVALID Position */
#define TPI_DEVID_MANCVALID_Msk            (0x1UL << TPI_DEVID_MANCVALID_Pos)          /*!< TPI DEVID: MANCVALID Mask */

#define TPI_DEVID_PTINVALID_Pos             9U                                         /*!< TPI DEVID: PTINVALID Position */
#define TPI_DEVID_PTINVALID_Msk            (0x1UL << TPI_DEVID_PTINVALID_Pos)          /*!< TPI DEVID: PTINVALID Mask */

#define TPI_DEVID_MinBufSz_Pos              6U                                         /*!< TPI DEVID: MinBufSz Position */
#define TPI_DEVID_MinBufSz_Msk             (0x7UL << TPI_DEVID_MinBufSz_Pos)           /*!< TPI DEVID: MinBufSz Mask */

#define TPI_DEVID_AsynClkIn_Pos             5U                                         /*!< TPI DEVID: AsynClkIn Position */
#define TPI_DEVID_AsynClkIn_Msk            (0x1UL << TPI_DEVID_AsynClkIn_Pos)          /*!< TPI DEVID: AsynClkIn Mask */

#define TPI_DEVID_NrTraceInput_Pos          0U                                         /*!< TPI DEVID: NrTraceInput Position */
#define TPI_DEVID_NrTraceInput_Msk         (0x1FUL /*<< TPI_DEVID_NrTraceInput_Pos*/)  /*!< TPI DEVID: NrTraceInput Mask */

/* TPI DEVTYPE Register Definitions */
#define TPI_DEVTYPE_SubType_Pos             4U                                         /*!< TPI DEVTYPE: SubType Position */
#define TPI_DEVTYPE_SubType_Msk            (0xFUL /*<< TPI_DEVTYPE_SubType_Pos*/)      /*!< TPI DEVTYPE: SubType Mask */

#define TPI_DEVTYPE_MajorType_Pos           0U                                         /*!< TPI DEVTYPE: MajorType Position */
#define TPI_DEVTYPE_MajorType_Msk          (0xFUL << TPI_DEVTYPE_MajorType_Pos)        /*!< TPI DEVTYPE: MajorType Mask */

/*@}*/ /* end of group CMSIS_TPI */


#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_MPU     Memory Protection Unit (MPU)
  \brief    Type definitions for the Memory Protection Unit (MPU)
  @{
 */

/**
  \brief  Structure type to access the Memory Protection Unit (MPU).
 */
typedef struct
{
  __IM  uint32_t TYPE;                   /*!< Offset: 0x000 (R/ )  MPU Type Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x004 (R/W)  MPU Control Register */
  __IOM uint32_t RNR;                    /*!< Offset: 0x008 (R/W)  MPU Region RNRber Register */
  __IOM uint32_t RBAR;                   /*!< Offset: 0x00C (R/W)  MPU Region Base Address Register */
  __IOM uint32_t RASR;                   /*!< Offset: 0x010 (R/W)  MPU Region Attribute and Size Register */
  __IOM uint32_t RBAR_A1;                /*!< Offset: 0x014 (R/W)  MPU Alias 1 Region Base Address Register */
  __IOM uint32_t RASR_A1;                /*!< Offset: 0x018 (R/W)  MPU Alias 1 Region Attribute and Size Register */
  __IOM uint32_t RBAR_A2;                /*!< Offset: 0x01C (R/W)  MPU Alias 2 Region Base Address Register */
  __IOM uint32_t RASR_A2;                /*!< Offset: 0x020 (R/W)  MPU Alias 2 Region Attribute and Size Register */
  __IOM uint32_t RBAR_A3;                /*!< Offset: 0x024 (R/W)  MPU Alias 3 Region Base Address Register */
  __IOM uint32_t RASR_A3;                /*!< Offset: 0x028 (R/W)  MPU Alias 3 Region Attribute and Size Register */
} MPU_Type;

#define MPU_TYPE_RALIASES                  4U

/* MPU Type Register Definitions */
#define MPU_TYPE_IREGION_Pos               16U                                            /*!< MPU TYPE: IREGION Position */
#define MPU_TYPE_IREGION_Msk               (0xFFUL << MPU_TYPE_IREGION_Pos)               /*!< MPU TYPE: IREGION Mask */

#define MPU_TYPE_DREGION_Pos                8U                                            /*!< MPU TYPE: DREGION Position */
#define MPU_TYPE_DREGION_Msk               (0xFFUL << MPU_TYPE_DREGION_Pos)               /*!< MPU TYPE: DREGION Mask */

#define MPU_TYPE_SEPARATE_Pos               0U                                            /*!< MPU TYPE: SEPARATE Position */
#define MPU_TYPE_SEPARATE_Msk              (1UL /*<< MPU_TYPE_SEPARATE_Pos*/)             /*!< MPU TYPE: SEPARATE Mask */

/* MPU Control Register Definitions */
#define MPU_CTRL_PRIVDEFENA_Pos             2U                                            /*!< MPU CTRL: PRIVDEFENA Position */
#define MPU_CTRL_PRIVDEFENA_Msk            (1UL << MPU_CTRL_PRIVDEFENA_Pos)               /*!< MPU CTRL: PRIVDEFENA Mask */

#define MPU_CTRL_HFNMIENA_Pos               1U                                            /*!< MPU CTRL: HFNMIENA Position */
#define MPU_CTRL_HFNMIENA_Msk              (1UL << MPU_CTRL_HFNMIENA_Pos)                 /*!< MPU CTRL: HFNMIENA Mask */

#define MPU_CTRL_ENABLE_Pos                 0U                                            /*!< MPU CTRL: ENABLE Position */
#define MPU_CTRL_ENABLE_Msk                (1UL /*<< MPU_CTRL_ENABLE_Pos*/)               /*!< MPU CTRL: ENABLE Mask */

/* MPU Region Number Register Definitions */
#define MPU_RNR_REGION_Pos                  0U                                            /*!< MPU RNR: REGION Position */
#define MPU_RNR_REGION_Msk                 (0xFFUL /*<< MPU_RNR_REGION_Pos*/)             /*!< MPU RNR: REGION Mask */

/* MPU Region Base Address Register Definitions */
#define MPU_RBAR_ADDR_Pos                   5U                                            /*!< MPU RBAR: ADDR Position */
#define MPU_RBAR_ADDR_Msk                  (0x7FFFFFFUL << MPU_RBAR_ADDR_Pos)             /*!< MPU RBAR: ADDR Mask */

#define MPU_RBAR_VALID_Pos                  4U                                            /*!< MPU RBAR: VALID Position */
#define MPU_RBAR_VALID_Msk                 (1UL << MPU_RBAR_VALID_Pos)                    /*!< MPU RBAR: VALID Mask */

#define MPU_RBAR_REGION_Pos                 0U                                            /*!< MPU RBAR: REGION Position */
#define MPU_RBAR_REGION_Msk                (0xFUL /*<< MPU_RBAR_REGION_Pos*/)             /*!< MPU RBAR: REGION Mask */

/* MPU Region Attribute and Size Register Definitions */
#define MPU_RASR_ATTRS_Pos                 16U                                            /*!< MPU RASR: MPU Region Attribute field Position */
#define MPU_RASR_ATTRS_Msk                 (0xFFFFUL << MPU_RASR_ATTRS_Pos)               /*!< MPU RASR: MPU Region Attribute field Mask */

#define MPU_RASR_XN_Pos                    28U                                            /*!< MPU RASR: ATTRS.XN Position */
#define MPU_RASR_XN_Msk                    (1UL << MPU_RASR_XN_Pos)                       /*!< MPU RASR: ATTRS.XN Mask */

#define MPU_RASR_AP_Pos                    24U                                            /*!< MPU RASR: ATTRS.AP Position */
#define MPU_RASR_AP_Msk                    (0x7UL << MPU_RASR_AP_Pos)                     /*!< MPU RASR: ATTRS.AP Mask */

#define MPU_RASR_TEX_Pos                   19U                                            /*!< MPU RASR: ATTRS.TEX Position */
#define MPU_RASR_TEX_Msk                   (0x7UL << MPU_RASR_TEX_Pos)                    /*!< MPU RASR: ATTRS.TEX Mask */

#define MPU_RASR_S_Pos                     18U                                            /*!< MPU RASR: ATTRS.S Position */
#define MPU_RASR_S_Msk                     (1UL << MPU_RASR_S_Pos)                        /*!< MPU RASR: ATTRS.S Mask */

#define MPU_RASR_C_Pos                     17U                                            /*!< MPU RASR: ATTRS.C Position */
#define MPU_RASR_C_Msk                     (1UL << MPU_RASR_C_Pos)                        /*!< MPU RASR: ATTRS.C Mask */

#define MPU_RASR_B_Pos                     16U                                            /*!< MPU RASR: ATTRS.B Position */
#define MPU_RASR_B_Msk                     (1UL << MPU_RASR_B_Pos)                        /*!< MPU RASR: ATTRS.B Mask */

#define MPU_RASR_SRD_Pos                    8U                                            /*!< MPU RASR: Sub-Region Disable Position */
#define MPU_RASR_SRD_Msk                   (0xFFUL << MPU_RASR_SRD_Pos)                   /*!< MPU RASR: Sub-Region Disable Mask */

#define MPU_RASR_SIZE_Pos                   1U                                            /*!< MPU RASR: Region Size Field Position */
#define MPU_RASR_SIZE_Msk                  (0x1FUL << MPU_RASR_SIZE_Pos)                  /*!< MPU RASR: Region Size Field Mask */

#define MPU_RASR_ENABLE_Pos                 0U                                            /*!< MPU RASR: Region enable bit Position */
#define MPU_RASR_ENABLE_Msk                (1UL /*<< MPU_RASR_ENABLE_Pos*/)               /*!< MPU RASR: Region enable bit Disable Mask */

/*@} end of group CMSIS_MPU */
#endif /* defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U) */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_FPU     Floating Point Unit (FPU)
  \brief    Type definitions for the Floating Point Unit (FPU)
  @{
 */

/**
  \brief  Structure type to access the Floating Point Unit (FPU).
 */
typedef struct
{
        uint32_t RESERVED0[1U];
  __IOM uint32_t FPCCR;                  /*!< Offset: 0x004 (R/W)  Floating-Point Context Control Register */
  __IOM uint32_t FPCAR;                  /*!< Offset: 0x008 (R/W)  Floating-Point Context Address Register */
  __IOM uint32_t FPDSCR;                 /*!< Offset: 0x00C (R/W)  Floating-Point Default Status Control Register */
  __IM  uint32_t MVFR0;                  /*!< Offset: 0x010 (R/ )  Media and FP Feature Register 0 */
  __IM  uint32_t MVFR1;                  /*!< Offset: 0x014 (R/ )  Media and FP Feature Register 1 */
  __IM  uint32_t MVFR2;                  /*!< Offset: 0x018 (R/ )  Media and FP Feature Register 2 */
} FPU_Type;

/* Floating-Point Context Control Register Definitions */
#define FPU_FPCCR_ASPEN_Pos                31U                                            /*!< FPCCR: ASPEN bit Position */
#define FPU_FPCCR_ASPEN_Msk                (1UL << FPU_FPCCR_ASPEN_Pos)                   /*!< FPCCR: ASPEN bit Mask */

#define FPU_FPCCR_LSPEN_Pos                30U                                            /*!< FPCCR: LSPEN Position */
#define FPU_FPCCR_LSPEN_Msk                (1UL << FPU_FPCCR_LSPEN_Pos)                   /*!< FPCCR: LSPEN bit Mask */

#define FPU_FPCCR_MONRDY_Pos                8U                                            /*!< FPCCR: MONRDY Position */
#define FPU_FPCCR_MONRDY_Msk               (1UL << FPU_FPCCR_MONRDY_Pos)                  /*!< FPCCR: MONRDY bit Mask */

#define FPU_FPCCR_BFRDY_Pos                 6U                                            /*!< FPCCR: BFRDY Position */
#define FPU_FPCCR_BFRDY_Msk                (1UL << FPU_FPCCR_BFRDY_Pos)                   /*!< FPCCR: BFRDY bit Mask */

#define FPU_FPCCR_MMRDY_Pos                 5U                                            /*!< FPCCR: MMRDY Position */
#define FPU_FPCCR_MMRDY_Msk                (1UL << FPU_FPCCR_MMRDY_Pos)                   /*!< FPCCR: MMRDY bit Mask */

#define FPU_FPCCR_HFRDY_Pos                 4U                                            /*!< FPCCR: HFRDY Position */
#define FPU_FPCCR_HFRDY_Msk                (1UL << FPU_FPCCR_HFRDY_Pos)                   /*!< FPCCR: HFRDY bit Mask */

#define FPU_FPCCR_THREAD_Pos                3U                                            /*!< FPCCR: processor mode bit Position */
#define FPU_FPCCR_THREAD_Msk               (1UL << FPU_FPCCR_THREAD_Pos)                  /*!< FPCCR: processor mode active bit Mask */

#define FPU_FPCCR_USER_Pos                  1U                                            /*!< FPCCR: privilege level bit Position */
#define FPU_FPCCR_USER_Msk                 (1UL << FPU_FPCCR_USER_Pos)                    /*!< FPCCR: privilege level bit Mask */

#define FPU_FPCCR_LSPACT_Pos                0U                                            /*!< FPCCR: Lazy state preservation active bit Position */
#define FPU_FPCCR_LSPACT_Msk               (1UL /*<< FPU_FPCCR_LSPACT_Pos*/)              /*!< FPCCR: Lazy state preservation active bit Mask */

/* Floating-Point Context Address Register Definitions */
#define FPU_FPCAR_ADDRESS_Pos               3U                                            /*!< FPCAR: ADDRESS bit Position */
#define FPU_FPCAR_ADDRESS_Msk              (0x1FFFFFFFUL << FPU_FPCAR_ADDRESS_Pos)        /*!< FPCAR: ADDRESS bit Mask */

/* Floating-Point Default Status Control Register Definitions */
#define FPU_FPDSCR_AHP_Pos                 26U                                            /*!< FPDSCR: AHP bit Position */
#define FPU_FPDSCR_AHP_Msk                 (1UL << FPU_FPDSCR_AHP_Pos)                    /*!< FPDSCR: AHP bit Mask */

#define FPU_FPDSCR_DN_Pos                  25U                                            /*!< FPDSCR: DN bit Position */
#define FPU_FPDSCR_DN_Msk                  (1UL << FPU_FPDSCR_DN_Pos)                     /*!< FPDSCR: DN bit Mask */

#define FPU_FPDSCR_FZ_Pos                  24U                                            /*!< FPDSCR: FZ bit Position */
#define FPU_FPDSCR_FZ_Msk                  (1UL << FPU_FPDSCR_FZ_Pos)                     /*!< FPDSCR: FZ bit Mask */

#define FPU_FPDSCR_RMode_Pos               22U                                            /*!< FPDSCR: RMode bit Position */
#define FPU_FPDSCR_RMode_Msk               (3UL << FPU_FPDSCR_RMode_Pos)                  /*!< FPDSCR: RMode bit Mask */

/* Media and FP Feature Register 0 Definitions */
#define FPU_MVFR0_FP_rounding_modes_Pos    28U                                            /*!< MVFR0: FP rounding modes bits Position */
#define FPU_MVFR0_FP_rounding_modes_Msk    (0xFUL << FPU_MVFR0_FP_rounding_modes_Pos)     /*!< MVFR0: FP rounding modes bits Mask */

#define FPU_MVFR0_Short_vectors_Pos        24U                                            /*!< MVFR0: Short vectors bits Position */
#define FPU_MVFR0_Short_vectors_Msk        (0xFUL << FPU_MVFR0_Short_vectors_Pos)         /*!< MVFR0: Short vectors bits Mask */

#define FPU_MVFR0_Square_root_Pos          20U                                            /*!< MVFR0: Square root bits Position */
#define FPU_MVFR0_Square_root_Msk          (0xFUL << FPU_MVFR0_Square_root_Pos)           /*!< MVFR0: Square root bits Mask */

#define FPU_MVFR0_Divide_Pos               16U                                            /*!< MVFR0: Divide bits Position */
#define FPU_MVFR0_Divide_Msk               (0xFUL << FPU_MVFR0_Divide_Pos)                /*!< MVFR0: Divide bits Mask */

#define FPU_MVFR0_FP_excep_trapping_Pos    12U                                            /*!< MVFR0: FP exception trapping bits Position */
#define FPU_MVFR0_FP_excep_trapping_Msk    (0xFUL << FPU_MVFR0_FP_excep_trapping_Pos)     /*!< MVFR0: FP exception trapping bits Mask */

#define FPU_MVFR0_Double_precision_Pos      8U                                            /*!< MVFR0: Double-precision bits Position */
#define FPU_MVFR0_Double_precision_Msk     (0xFUL << FPU_MVFR0_Double_precision_Pos)      /*!< MVFR0: Double-precision bits Mask */

#define FPU_MVFR0_Single_precision_Pos      4U                                            /*!< MVFR0: Single-precision bits Position */
#define FPU_MVFR0_Single_precision_Msk     (0xFUL << FPU_MVFR0_Single_precision_Pos)      /*!< MVFR0: Single-precision bits Mask */

#define FPU_MVFR0_A_SIMD_registers_Pos      0U                                            /*!< MVFR0: A_SIMD registers bits Position */
#define FPU_MVFR0_A_SIMD_registers_Msk     (0xFUL /*<< FPU_MVFR0_A_SIMD_registers_Pos*/)  /*!< MVFR0: A_SIMD registers bits Mask */

/* Media and FP Feature Register 1 Definitions */
#define FPU_MVFR1_FP_fused_MAC_Pos         28U                                            /*!< MVFR1: FP fused MAC bits Position */
#define FPU_MVFR1_FP_fused_MAC_Msk         (0xFUL << FPU_MVFR1_FP_fused_MAC_Pos)          /*!< MVFR1: FP fused MAC bits Mask */

#define FPU_MVFR1_FP_HPFP_Pos              24U                                            /*!< MVFR1: FP HPFP bits Position */
#define FPU_MVFR1_FP_HPFP_Msk              (0xFUL << FPU_MVFR1_FP_HPFP_Pos)               /*!< MVFR1: FP HPFP bits Mask */

#define FPU_MVFR1_D_NaN_mode_Pos            4U                                            /*!< MVFR1: D_NaN mode bits Position */
#define FPU_MVFR1_D_NaN_mode_Msk           (0xFUL << FPU_MVFR1_D_NaN_mode_Pos)            /*!< MVFR1: D_NaN mode bits Mask */

#define FPU_MVFR1_FtZ_mode_Pos              0U                                            /*!< MVFR1: FtZ mode bits Position */
#define FPU_MVFR1_FtZ_mode_Msk             (0xFUL /*<< FPU_MVFR1_FtZ_mode_Pos*/)          /*!< MVFR1: FtZ mode bits Mask */

/* Media and FP Feature Register 2 Definitions */

#define FPU_MVFR2_VFP_Misc_Pos              4U                                            /*!< MVFR2: VFP Misc bits Position */
#define FPU_MVFR2_VFP_Misc_Msk             (0xFUL << FPU_MVFR2_VFP_Misc_Pos)              /*!< MVFR2: VFP Misc bits Mask */

/*@} end of group CMSIS_FPU */


/**
  \ingroup  CMSIS_core_register
  \defgroup CMSIS_CoreDebug       Core Debug Registers (CoreDebug)
  \brief    Type definitions for the Core Debug Registers
  @{
 */

/**
  \brief  Structure type to access the Core Debug Register (CoreDebug).
 */
typedef struct
{
  __IOM uint32_t DHCSR;                  /*!< Offset: 0x000 (R/W)  Debug Halting Control and Status Register */
  __OM  uint32_t DCRSR;                  /*!< Offset: 0x004 ( /W)  Debug Core Register Selector Register */
  __IOM uint32_t DCRDR;                  /*!< Offset: 0x008 (R/W)  Debug Core Register Data Register */
  __IOM uint32_t DEMCR;                  /*!< Offset: 0x00C (R/W)  Debug Exception and Monitor Control Register */
} CoreDebug_Type;

/* Debug Halting Control and Status Register Definitions */
#define CoreDebug_DHCSR_DBGKEY_Pos         16U                                            /*!< CoreDebug DHCSR: DBGKEY Position */
#define CoreDebug_DHCSR_DBGKEY_Msk         (0xFFFFUL << CoreDebug_DHCSR_DBGKEY_Pos)       /*!< CoreDebug DHCSR: DBGKEY Mask */

#define CoreDebug_DHCSR_S_RESET_ST_Pos     25U                                            /*!< CoreDebug DHCSR: S_RESET_ST Position */
#define CoreDebug_DHCSR_S_RESET_ST_Msk     (1UL << CoreDebug_DHCSR_S_RESET_ST_Pos)        /*!< CoreDebug DHCSR: S_RESET_ST Mask */

#define CoreDebug_DHCSR_S_RETIRE_ST_Pos    24U                                            /*!< CoreDebug DHCSR: S_RETIRE_ST Position */
#define CoreDebug_DHCSR_S_RETIRE_ST_Msk    (1UL << CoreDebug_DHCSR_S_RETIRE_ST_Pos)       /*!< CoreDebug DHCSR: S_RETIRE_ST Mask */

#define CoreDebug_DHCSR_S_LOCKUP_Pos       19U                                            /*!< CoreDebug DHCSR: S_LOCKUP Position */
#define CoreDebug_DHCSR_S_LOCKUP_Msk       (1UL << CoreDebug_DHCSR_S_LOCKUP_Pos)          /*!< CoreDebug DHCSR: S_LOCKUP Mask */

#define CoreDebug_DHCSR_S_SLEEP_Pos        18U                                            /*!< CoreDebug DHCSR: S_SLEEP Position */
#define CoreDebug_DHCSR_S_SLEEP_Msk        (1UL << CoreDebug_DHCSR_S_SLEEP_Pos)           /*!< CoreDebug DHCSR: S_SLEEP Mask */

#define CoreDebug_DHCSR_S_HALT_Pos         17U                                            /*!< CoreDebug DHCSR: S_HALT Position */
#define CoreDebug_DHCSR_S_HALT_Msk         (1UL << CoreDebug_DHCSR_S_HALT_Pos)            /*!< CoreDebug DHCSR: S_HALT Mask */

#define CoreDebug_DHCSR_S_REGRDY_Pos       16U                                            /*!< CoreDebug DHCSR: S_REGRDY Position */
#define CoreDebug_DHCSR_S_REGRDY_Msk       (1UL << CoreDebug_DHCSR_S_REGRDY_Pos)          /*!< CoreDebug DHCSR: S_REGRDY Mask */

#define CoreDebug_DHCSR_C_SNAPSTALL_Pos     5U                                            /*!< CoreDebug DHCSR: C_SNAPSTALL Position */
#define CoreDebug_DHCSR_C_SNAPSTALL_Msk    (1UL << CoreDebug_DHCSR_C_SNAPSTALL_Pos)       /*!< CoreDebug DHCSR: C_SNAPSTALL Mask */

#define CoreDebug_DHCSR_C_MASKINTS_Pos      3U                                            /*!< CoreDebug DHCSR: C_MASKINTS Position */
#define CoreDebug_DHCSR_C_MASKINTS_Msk     (1UL << CoreDebug_DHCSR_C_MASKINTS_Pos)        /*!< CoreDebug DHCSR: C_MASKINTS Mask */

#define CoreDebug_DHCSR_C_STEP_Pos          2U                                            /*!< CoreDebug DHCSR: C_STEP Position */
#define CoreDebug_DHCSR_C_STEP_Msk         (1UL << CoreDebug_DHCSR_C_STEP_Pos)            /*!< CoreDebug DHCSR: C_STEP Mask */

#define CoreDebug_DHCSR_C_HALT_Pos          1U                                            /*!< CoreDebug DHCSR: C_HALT Position */
#define CoreDebug_DHCSR_C_HALT_Msk         (1UL << CoreDebug_DHCSR_C_HALT_Pos)            /*!< CoreDebug DHCSR: C_HALT Mask */

#define CoreDebug_DHCSR_C_DEBUGEN_Pos       0U                                            /*!< CoreDebug DHCSR: C_DEBUGEN Position */
#define CoreDebug_DHCSR_C_DEBUGEN_Msk      (1UL /*<< CoreDebug_DHCSR_C_DEBUGEN_Pos*/)     /*!< CoreDebug DHCSR: C_DEBUGEN Mask */

/* Debug Core Register Selector Register Definitions */
#define CoreDebug_DCRSR_REGWnR_Pos         16U                                            /*!< CoreDebug DCRSR: REGWnR Position */
#define CoreDebug_DCRSR_REGWnR_Msk         (1UL << CoreDebug_DCRSR_REGWnR_Pos)            /*!< CoreDebug DCRSR: REGWnR Mask */

#define CoreDebug_DCRSR_REGSEL_Pos          0U                                            /*!< CoreDebug DCRSR: REGSEL Position */
#define CoreDebug_DCRSR_REGSEL_Msk         (0x1FUL /*<< CoreDebug_DCRSR_REGSEL_Pos*/)     /*!< CoreDebug DCRSR: REGSEL Mask */

/* Debug Exception and Monitor Control Register Definitions */
#define CoreDebug_DEMCR_TRCENA_Pos         24U                                            /*!< CoreDebug DEMCR: TRCENA Position */
#define CoreDebug_DEMCR_TRCENA_Msk         (1UL << CoreDebug_DEMCR_TRCENA_Pos)            /*!< CoreDebug DEMCR: TRCENA Mask */

#define CoreDebug_DEMCR_MON_REQ_Pos        19U                                            /*!< CoreDebug DEMCR: MON_REQ Position */
#define CoreDebug_DEMCR_MON_REQ_Msk        (1UL << CoreDebug_DEMCR_MON_REQ_Pos)           /*!< CoreDebug DEMCR: MON_REQ Mask */

#define CoreDebug_DEMCR_MON_STEP_Pos       18U                                            /*!< CoreDebug DEMCR: MON_STEP Position */
#define CoreDebug_DEMCR_MON_STEP_Msk       (1UL << CoreDebug_DEMCR_MON_STEP_Pos)          /*!< CoreDebug DEMCR: MON_STEP Mask */

#define CoreDebug_DEMCR_MON_PEND_Pos       17U                                            /*!< CoreDebug DEMCR: MON_PEND Position */
#define CoreDebug_DEMCR_MON_PEND_Msk       (1UL << CoreDebug_DEMCR_MON_PEND_Pos)          /*!< CoreDebug DEMCR: MON_PEND Mask */

#define CoreDebug_DEMCR_MON_EN_Pos         16U                                            /*!< CoreDebug DEMCR: MON_EN Position */
#define CoreDebug_DEMCR_MON_EN_Msk         (1UL << CoreDebug_DEMCR_MON_EN_Pos)            /*!< CoreDebug DEMCR: MON_EN Mask */

#define CoreDebug_DEMCR_VC_HARDERR_Pos     10U                                            /*!< CoreDebug DEMCR: VC_HARDERR Position */
#define CoreDebug_DEMCR_VC_HARDERR_Msk     (1UL << CoreDebug_DEMCR_VC_HARDERR_Pos)        /*!< CoreDebug DEMCR: VC_HARDERR Mask */

#define CoreDebug_DEMCR_VC_INTERR_Pos       9U                                            /*!< CoreDebug DEMCR: VC_INTERR Position */
#define CoreDebug_DEMCR_VC_INTERR_Msk      (1UL << CoreDebug_DEMCR_VC_INTERR_Pos)         /*!< CoreDebug DEMCR: VC_INTERR Mask */

#define CoreDebug_DEMCR_VC_BUSERR_Pos       8U                                            /*!< CoreDebug DEMCR: VC_BUSERR Position */
#define CoreDebug_DEMCR_VC_BUSERR_Msk      (1UL << CoreDebug_DEMCR_VC_BUSERR_Pos)         /*!< CoreDebug DEMCR: VC_BUSERR Mask */

#define CoreDebug_DEMCR_VC_STATERR_Pos      7U                                            /*!< CoreDebug DEMCR: VC_STATERR Position */
#define CoreDebug_DEMCR_VC_STATERR_Msk     (1UL << CoreDebug_DEMCR_VC_STATERR_Pos)        /*!< CoreDebug DEMCR: VC_STATERR Mask */

#define CoreDebug_DEMCR_VC_CHKERR_Pos       6U                                            /*!< CoreDebug DEMCR: VC_CHKERR Position */
#define CoreDebug_DEMCR_VC_CHKERR_Msk      (1UL << CoreDebug_DEMCR_VC_CHKERR_Pos)         /*!< CoreDebug DEMCR: VC_CHKERR Mask */

#define CoreDebug_DEMCR_VC_NOCPERR_Pos      5U                                            /*!< CoreDebug DEMCR: VC_NOCPERR Position */
#define CoreDebug_DEMCR_VC_NOCPERR_Msk     (1UL << CoreDebug_DEMCR_VC_NOCPERR_Pos)        /*!< CoreDebug DEMCR: VC_NOCPERR Mask */

#define CoreDebug_DEMCR_VC_MMERR_Pos        4U                                            /*!< CoreDebug DEMCR: VC_MMERR Position */
#define CoreDebug_DEMCR_VC_MMERR_Msk       (1UL << CoreDebug_DEMCR_VC_MMERR_Pos)          /*!< CoreDebug DEMCR: VC_MMERR Mask */

#define CoreDebug_DEMCR_VC_CORERESET_Pos    0U                                            /*!< CoreDebug DEMCR: VC_CORERESET Position */
#define CoreDebug_DEMCR_VC_CORERESET_Msk   (1UL /*<< CoreDebug_DEMCR_VC_CORERESET_Pos*/)  /*!< CoreDebug DEMCR: VC_CORERESET Mask */

/*@} end of group CMSIS_CoreDebug */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_core_bitfield     Core register bit field macros
  \brief      Macros for use with bit field definitions (xxx_Pos, xxx_Msk).
  @{
 */

/**
  \brief   Mask and shift a bit field value for use in a register bit range.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of the bit field. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted value.
*/
#define _VAL2FLD(field, value)    (((uint32_t)(value) << field ## _Pos) & field ## _Msk)

/**
  \brief     Mask and shift a register value to extract a bit filed value.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of register. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted bit field value.
*/
#define _FLD2VAL(field, value)    (((uint32_t)(value) & field ## _Msk) >> field ## _Pos)

/*@} end of group CMSIS_core_bitfield */


/**
  \ingroup    CMSIS_core_register
  \defgroup   CMSIS_core_base     Core Definitions
  \brief      Definitions for base addresses, unions, and structures.
  @{
 */

/* Memory mapping of Core Hardware */
#define SCS_BASE            (0xE000E000UL)                            /*!< System Control Space Base Address */
#define ITM_BASE            (0xE0000000UL)                            /*!< ITM Base Address */
#define DWT_BASE            (0xE0001000UL)                            /*!< DWT Base Address */
#define TPI_BASE            (0xE0040000UL)                            /*!< TPI Base Address */
#define CoreDebug_BASE      (0xE000EDF0UL)                            /*!< Core Debug Base Address */
#define SysTick_BASE        (SCS_BASE +  0x0010UL)                    /*!< SysTick Base Address */
#define NVIC_BASE           (SCS_BASE +  0x0100UL)                    /*!< NVIC Base Address */
#define SCB_BASE            (SCS_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */

#define SCnSCB              ((SCnSCB_Type    *)     SCS_BASE      )   /*!< System control Register not in SCB */
#define SCB                 ((SCB_Type       *)     SCB_BASE      )   /*!< SCB configuration struct */
#define SysTick             ((SysTick_Type   *)     SysTick_BASE  )   /*!< SysTick configuration struct */
#define NVIC                ((NVIC_Type      *)     NVIC_BASE     )   /*!< NVIC configuration struct */
#define ITM                 ((ITM_Type       *)     ITM_BASE      )   /*!< ITM configuration struct */
#define DWT                 ((DWT_Type       *)     DWT_BASE      )   /*!< DWT configuration struct */
#define TPI                 ((TPI_Type       *)     TPI_BASE      )   /*!< TPI configuration struct */
#define CoreDebug           ((CoreDebug_Type *)     CoreDebug_BASE)   /*!< Core Debug configuration struct */

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
  #define MPU_BASE          (SCS_BASE +  0x0D90UL)                    /*!< Memory Protection Unit */
  #define MPU               ((MPU_Type       *)     MPU_BASE      )   /*!< Memory Protection Unit */
#endif

#define FPU_BASE            (SCS_BASE +  0x0F30UL)                    /*!< Floating Point Unit */
#define FPU                 ((FPU_Type       *)     FPU_BASE      )   /*!< Floating Point Unit */

/*@} */



/*******************************************************************************
 *                Hardware Abstraction Layer
  Core Function Interface contains:
  - Core NVIC Functions
  - Core SysTick Functions
  - Core Debug Functions
  - Core Register Access Functions
 ******************************************************************************/
/**
  \defgroup CMSIS_Core_FunctionInterface Functions and Instructions Reference
*/



/* ##########################   NVIC functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_NVICFunctions NVIC Functions
  \brief    Functions that manage interrupts and exceptions via the NVIC.
  @{
 */

#ifdef CMSIS_NVIC_VIRTUAL
  #ifndef CMSIS_NVIC_VIRTUAL_HEADER_FILE
    #define CMSIS_NVIC_VIRTUAL_HEADER_FILE "cmsis_nvic_virtual.h"
  #endif
  #include CMSIS_NVIC_VIRTUAL_HEADER_FILE
#else
  #define NVIC_SetPriorityGrouping    __NVIC_SetPriorityGrouping
  #define NVIC_GetPriorityGrouping    __NVIC_GetPriorityGrouping
  #define NVIC_EnableIRQ              __NVIC_EnableIRQ
  #define NVIC_GetEnableIRQ           __NVIC_GetEnableIRQ
  #define NVIC_DisableIRQ             __NVIC_DisableIRQ
  #define NVIC_GetPendingIRQ          __NVIC_GetPendingIRQ
  #define NVIC_SetPendingIRQ          __NVIC_SetPendingIRQ
  #define NVIC_ClearPendingIRQ        __NVIC_ClearPendingIRQ
  #define NVIC_GetActive              __NVIC_GetActive
  #define NVIC_SetPriority            __NVIC_SetPriority
  #define NVIC_GetPriority            __NVIC_GetPriority
  #define NVIC_SystemReset            __NVIC_SystemReset
#endif /* CMSIS_NVIC_VIRTUAL */

#ifdef CMSIS_VECTAB_VIRTUAL
  #ifndef CMSIS_VECTAB_VIRTUAL_HEADER_FILE
    #define CMSIS_VECTAB_VIRTUAL_HEADER_FILE "cmsis_vectab_virtual.h"
  #endif
  #include CMSIS_VECTAB_VIRTUAL_HEADER_FILE
#else
  #define NVIC_SetVector              __NVIC_SetVector
  #define NVIC_GetVector              __NVIC_GetVector
#endif  /* (CMSIS_VECTAB_VIRTUAL) */

#define NVIC_USER_IRQ_OFFSET          16


/* The following EXC_RETURN values are saved the LR on exception entry */
#define EXC_RETURN_HANDLER         (0xFFFFFFF1UL)     /* return to Handler mode, uses MSP after return                               */
#define EXC_RETURN_THREAD_MSP      (0xFFFFFFF9UL)     /* return to Thread mode, uses MSP after return                                */
#define EXC_RETURN_THREAD_PSP      (0xFFFFFFFDUL)     /* return to Thread mode, uses PSP after return                                */
#define EXC_RETURN_HANDLER_FPU     (0xFFFFFFE1UL)     /* return to Handler mode, uses MSP after return, restore floating-point state */
#define EXC_RETURN_THREAD_MSP_FPU  (0xFFFFFFE9UL)     /* return to Thread mode, uses MSP after return, restore floating-point state  */
#define EXC_RETURN_THREAD_PSP_FPU  (0xFFFFFFEDUL)     /* return to Thread mode, uses PSP after return, restore floating-point state  */


/**
  \brief   Set Priority Grouping
  \details Sets the priority grouping field using the required unlock sequence.
           The parameter PriorityGroup is assigned to the field SCB->AIRCR [10:8] PRIGROUP field.
           Only values from 0..7 are used.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS), the smallest possible priority group is set.
  \param [in]      PriorityGroup  Priority grouping field.
 */
__STATIC_INLINE void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);             /* only values 0..7 are used          */

  reg_value  =  SCB->AIRCR;                                                   /* read old register configuration    */
  reg_value &= ~((uint32_t)(SCB_AIRCR_VECTKEY_Msk | SCB_AIRCR_PRIGROUP_Msk)); /* clear bits to change               */
  reg_value  =  (reg_value                                   |
                ((uint32_t)0x5FAUL << SCB_AIRCR_VECTKEY_Pos) |
                (PriorityGroupTmp << SCB_AIRCR_PRIGROUP_Pos)  );              /* Insert write key and priority group */
  SCB->AIRCR =  reg_value;
}


/**
  \brief   Get Priority Grouping
  \details Reads the priority grouping field from the NVIC Interrupt Controller.
  \return                Priority grouping field (SCB->AIRCR [10:8] PRIGROUP field).
 */
__STATIC_INLINE uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) >> SCB_AIRCR_PRIGROUP_Pos));
}


/**
  \brief   Enable Interrupt
  \details Enables a device specific interrupt in the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __COMPILER_BARRIER();
    NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __COMPILER_BARRIER();
  }
}


/**
  \brief   Get Interrupt Enable status
  \details Returns a device specific interrupt enable status from the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt is not enabled.
  \return             1  Interrupt is enabled.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Disable Interrupt
  \details Disables a device specific interrupt in the NVIC interrupt controller.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}


/**
  \brief   Get Pending Interrupt
  \details Reads the NVIC pending register and returns the pending bit for the specified device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not pending.
  \return             1  Interrupt status is pending.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Pending Interrupt
  \details Sets the pending bit of a device specific interrupt in the NVIC pending register.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Clear Pending Interrupt
  \details Clears the pending bit of a device specific interrupt in the NVIC pending register.
  \param [in]      IRQn  Device specific interrupt number.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}


/**
  \brief   Get Active Interrupt
  \details Reads the active register in the NVIC and returns the active bit for the device specific interrupt.
  \param [in]      IRQn  Device specific interrupt number.
  \return             0  Interrupt status is not active.
  \return             1  Interrupt status is active.
  \note    IRQn must not be negative.
 */
__STATIC_INLINE uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((NVIC->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}


/**
  \brief   Set Interrupt Priority
  \details Sets the priority of a device specific interrupt or a processor exception.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]      IRQn  Interrupt number.
  \param [in]  priority  Priority to set.
  \note    The priority cannot be set for every processor exception.
 */
__STATIC_INLINE void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    NVIC->IP[((uint32_t)IRQn)]               = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
  else
  {
    SCB->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
  }
}


/**
  \brief   Get Interrupt Priority
  \details Reads the priority of a device specific interrupt or a processor exception.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]   IRQn  Interrupt number.
  \return             Interrupt Priority.
                      Value is aligned automatically to the implemented priority bits of the microcontroller.
 */
__STATIC_INLINE uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)NVIC->IP[((uint32_t)IRQn)]               >> (8U - __NVIC_PRIO_BITS)));
  }
  else
  {
    return(((uint32_t)SCB->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - __NVIC_PRIO_BITS)));
  }
}


/**
  \brief   Encode Priority
  \details Encodes the priority for an interrupt with the given priority group,
           preemptive priority value, and subpriority value.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS), the smallest possible priority group is set.
  \param [in]     PriorityGroup  Used priority group.
  \param [in]   PreemptPriority  Preemptive priority value (starting from 0).
  \param [in]       SubPriority  Subpriority value (starting from 0).
  \return                        Encoded priority. Value can be used in the function \ref NVIC_SetPriority().
 */
__STATIC_INLINE uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);   /* only values 0..7 are used          */
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority     & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL)))
         );
}


/**
  \brief   Decode Priority
  \details Decodes an interrupt priority value with a given priority group to
           preemptive priority value and subpriority value.
           In case of a conflict between priority grouping and available
           priority bits (__NVIC_PRIO_BITS) the smallest possible priority group is set.
  \param [in]         Priority   Priority value, which can be retrieved with the function \ref NVIC_GetPriority().
  \param [in]     PriorityGroup  Used priority group.
  \param [out] pPreemptPriority  Preemptive priority value (starting from 0).
  \param [out]     pSubPriority  Subpriority value (starting from 0).
 */
__STATIC_INLINE void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);   /* only values 0..7 are used          */
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(__NVIC_PRIO_BITS)) ? (uint32_t)(__NVIC_PRIO_BITS) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits     = ((PriorityGroupTmp + (uint32_t)(__NVIC_PRIO_BITS)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(__NVIC_PRIO_BITS));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority     = (Priority                   ) & (uint32_t)((1UL << (SubPriorityBits    )) - 1UL);
}


/**
  \brief   Set Interrupt Vector
  \details Sets an interrupt vector in SRAM based interrupt vector table.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
           VTOR must been relocated to SRAM before.
  \param [in]   IRQn      Interrupt number
  \param [in]   vector    Address of interrupt handler function
 */
__STATIC_INLINE void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET] = vector;
  /* ARM Application Note 321 states that the M4 does not require the architectural barrier */
}


/**
  \brief   Get Interrupt Vector
  \details Reads an interrupt vector from interrupt vector table.
           The interrupt number can be positive to specify a device specific interrupt,
           or negative to specify a processor exception.
  \param [in]   IRQn      Interrupt number.
  \return                 Address of interrupt handler function
 */
__STATIC_INLINE uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)SCB->VTOR;
  return vectors[(int32_t)IRQn + NVIC_USER_IRQ_OFFSET];
}


/**
  \brief   System Reset
  \details Initiates a system reset request to reset the MCU.
 */
__NO_RETURN __STATIC_INLINE void __NVIC_SystemReset(void)
{
  __DSB();                                                          /* Ensure all outstanding memory accesses included
                                                                       buffered write are completed before reset */
  SCB->AIRCR  = (uint32_t)((0x5FAUL << SCB_AIRCR_VECTKEY_Pos)    |
                           (SCB->AIRCR & SCB_AIRCR_PRIGROUP_Msk) |
                            SCB_AIRCR_SYSRESETREQ_Msk    );         /* Keep priority group unchanged */
  __DSB();                                                          /* Ensure completion of memory access */

  for(;;)                                                           /* wait until reset */
  {
    __NOP();
  }
}

/*@} end of CMSIS_Core_NVICFunctions */


/* ##########################  MPU functions  #################################### */

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)

#include "mpu_armv7.h"

#endif


/* ##########################  FPU functions  #################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_FpuFunctions FPU Functions
  \brief    Function that provides FPU type.
  @{
 */

/**
  \brief   get FPU type
  \details returns the FPU type
  \returns
   - \b  0: No FPU
   - \b  1: Single precision FPU
   - \b  2: Double + Single precision FPU
 */
__STATIC_INLINE uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = FPU->MVFR0;
  if      ((mvfr0 & (FPU_MVFR0_Single_precision_Msk | FPU_MVFR0_Double_precision_Msk)) == 0x020U)
  {
    return 1U;           /* Single precision FPU */
  }
  else
  {
    return 0U;           /* No FPU */
  }
}


/*@} end of CMSIS_Core_FpuFunctions */



/* ##################################    SysTick function  ############################################ */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_Core_SysTickFunctions SysTick Functions
  \brief    Functions that configure the System.
  @{
 */

#if defined (__Vendor_SysTickConfig) && (__Vendor_SysTickConfig == 0U)

/**
  \brief   System Tick Configuration
  \details Initializes the System Timer and its interrupt, and starts the System Tick Timer.
           Counter is in free running mode to generate periodic interrupts.
  \param [in]  ticks  Number of ticks between two interrupts.
  \return          0  Function succeeded.
  \return          1  Function failed.
  \note    When the variable <b>__Vendor_SysTickConfig</b> is set to 1, then the
           function <b>SysTick_Config</b> is not included. In this case, the file <b><i>device</i>.h</b>
           must contain a vendor-specific implementation of this function.
 */
__STATIC_INLINE uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > SysTick_LOAD_RELOAD_Msk)
  {
    return (1UL);                                                   /* Reload value impossible */
  }

  SysTick->LOAD  = (uint32_t)(ticks - 1UL);                         /* set reload register */
  NVIC_SetPriority (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL); /* set Priority for Systick Interrupt */
  SysTick->VAL   = 0UL;                                             /* Load the SysTick Counter Value */
  SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk |
                   SysTick_CTRL_TICKINT_Msk   |
                   SysTick_CTRL_ENABLE_Msk;                         /* Enable SysTick IRQ and SysTick Timer */
  return (0UL);                                                     /* Function successful */
}

#endif

/*@} end of CMSIS_Core_SysTickFunctions */



/* ##################################### Debug In/Output function ########################################### */
/**
  \ingroup  CMSIS_Core_FunctionInterface
  \defgroup CMSIS_core_DebugFunctions ITM Functions
  \brief    Functions that access the ITM debug interface.
  @{
 */

extern volatile int32_t ITM_RxBuffer;                              /*!< External variable to receive characters. */
#define                 ITM_RXBUFFER_EMPTY  ((int32_t)0x5AA55AA5U) /*!< Value identifying \ref ITM_RxBuffer is ready for next character. */


/**
  \brief   ITM Send Character
  \details Transmits a character via the ITM channel 0, and
           \li Just returns when no debugger is connected that has booked the output.
           \li Is blocking when a debugger is connected, but the previous character sent has not been transmitted.
  \param [in]     ch  Character to transmit.
  \returns            Character to transmit.
 */
__STATIC_INLINE uint32_t ITM_SendChar (uint32_t ch)
{
  if (((ITM->TCR & ITM_TCR_ITMENA_Msk) != 0UL) &&      /* ITM enabled */
      ((ITM->TER & 1UL               ) != 0UL)   )     /* ITM Port #0 enabled */
  {
    while (ITM->PORT[0U].u32 == 0UL)
    {
      __NOP();
    }
    ITM->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}


/**
  \brief   ITM Receive Character
  \details Inputs a character via the external variable \ref ITM_RxBuffer.
  \return             Received character.
  \return         -1  No character pending.
 */
__STATIC_INLINE int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;                           /* no character available */

  if (ITM_RxBuffer != ITM_RXBUFFER_EMPTY)
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ITM_RXBUFFER_EMPTY;       /* ready for next character */
  }

  return (ch);
}


/**
  \brief   ITM Check Character
  \details Checks whether a character is pending for reading in the variable \ref ITM_RxBuffer.
  \return          0  No character available.
  \return          1  Character available.
 */
__STATIC_INLINE int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ITM_RXBUFFER_EMPTY)
  {
    return (0);                              /* no character available */
  }
  else
  {
    return (1);                              /*    character available */
  }
}

/*@} end of CMSIS_core_DebugFunctions */




#ifdef __cplusplus
}
#endif

#endif /* __CORE_CM4_H_DEPENDANT */

#endif /* __CMSIS_GENERIC */

#endif // AT32F403A_H_