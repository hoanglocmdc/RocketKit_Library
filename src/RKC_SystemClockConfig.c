#include "RKC_SystemClockConfig.h"
//HSI config
void RKC_HSICLK_16MHZ(void)
{
  CLK_DeInit();  
  CLK_HSICmd(ENABLE);
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
}
void RKC_HSICLK_8MHZ(void)
{
  CLK_DeInit();  
  CLK_HSICmd(ENABLE);
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV2);
}
void RKC_HSICLK_4MHZ(void)
{
  CLK_DeInit();  
  CLK_HSICmd(ENABLE);
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV4);
}
void RKC_HSICLK_2MHZ(void)
{
  CLK_DeInit();  
  CLK_HSICmd(ENABLE);
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV8);
}
void RKC_HSICLK_1MHZ(void)
{
  CLK_DeInit();  
  CLK_HSICmd(ENABLE);
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV16);
}
//HSE config
void RKC_HSECLK_16MHZ(void)
{
  CLK_DeInit();  
  CLK_HSECmd(ENABLE);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
}
void RKC_HSECLK_8MHZ(void)
{
  CLK_DeInit();  
  CLK_HSECmd(ENABLE);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV2);
}
void RKC_HSECLK_4MHZ(void)
{
  CLK_DeInit();  
  CLK_HSECmd(ENABLE);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV4);
}
void RKC_HSECLK_2MHZ(void)
{
  CLK_DeInit();  
  CLK_HSECmd(ENABLE);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV8);
}
void RKC_HSECLK_1MHZ(void)
{
  CLK_DeInit();  
  CLK_HSECmd(ENABLE);
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV16);
}