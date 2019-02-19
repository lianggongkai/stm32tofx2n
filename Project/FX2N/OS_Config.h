#define BITBAND(addr, bitnum)    ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)           *((volatile unsigned long  *)(addr)) 
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 
//IO口地址映射
#define GPIOA_ODR_Addr    (GPIOA_BASE+12) //0x4001080C 
#define GPIOB_ODR_Addr    (GPIOB_BASE+12) //0x40010C0C 
#define GPIOC_ODR_Addr    (GPIOC_BASE+12) //0x4001100C 
#define GPIOD_ODR_Addr    (GPIOD_BASE+12) //0x4001140C  
//IO模式定义
#define GPIOA_IDR_Addr    (GPIOA_BASE+8) //0x40010808 
#define GPIOB_IDR_Addr    (GPIOB_BASE+8) //0x40010C08 
#define GPIOC_IDR_Addr    (GPIOC_BASE+8) //0x40011008 
#define GPIOD_IDR_Addr    (GPIOD_BASE+8) //0x40011408 
//IO口操作,只对单一的IO口!
//确保n的值小于16!
#define PAout(n)   BIT_ADDR(GPIOA_ODR_Addr,n)  //输出 
#define PAin(n)    BIT_ADDR(GPIOA_IDR_Addr,n)  //输入 

#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //输出 
#define PBin(n)    BIT_ADDR(GPIOB_IDR_Addr,n)  //输入 

#define PCout(n)   BIT_ADDR(GPIOC_ODR_Addr,n)  //输出 
#define PCin(n)    BIT_ADDR(GPIOC_IDR_Addr,n)  //输入 

#define PDout(n)   BIT_ADDR(GPIOD_ODR_Addr,n)  //输出 
#define PDin(n)    BIT_ADDR(GPIOD_IDR_Addr,n)  //输入 

//*********************

//输入X定义
#define X0  PCin(6)	
#define X1  PCin(7)
#define X2  PCin(8)
#define X3  PCin(9)
#define X4  PAin(8)		 
#define X5  PAin(11)
#define X6  PAin(12)
#define X7  PCin(10)

#define X10 PCin(11)		
#define X11 PCin(12)
#define X12 PDin(2)
#define X13 PBin(5)

#define X14 PBin(6)
#define X15 PBin(7)
#define X16 PBin(8)
#define X17 PBin(9)

#define RUN_STOP PCin(13)
#define PVD PCin(0)

//输出Y定义
#define Y00 PBout(5)    
#define Y01 PBout(13)
#define Y02 PBout(14)
#define Y03 PBout(15)
#define Y04 PBout(1 )   
#define Y05 PBout(0 ) 
#define Y06 PCout(5 ) 
#define Y07 PCout(4 )

#define Y10 PAout(7)    
#define Y11 PAout(6)
#define Y12 PAout(5)
#define Y13 PAout(4)
#define Y14 PAout(3)   
#define Y15 PAout(2) 
#define Y16 PAout(1) 
#define Y17 PAout(0)

#define Run PBout(3)
#define Com PBout(4)
#define Err PAout(15)

