#include "types.h"
#include "stm32f10x.h"

/*******************************************************************************
* Function Name  : FLASH_PagesMask
* Description    : Calculate the number of pages
* Input          : - Size: The image size
* Output         : None
* Return         : The number of pages
*******************************************************************************/
uint32 FLASH_PagesMask(vu32 Size)
{
  u32 pagenumber = 0x0;
  u32 size = Size;

  if((size % 0x400) != 0)
  {
    pagenumber = (size / 0x400) + 1;
  }
  else
  {
    pagenumber = size / 0x400;
  }
  return pagenumber;
}
