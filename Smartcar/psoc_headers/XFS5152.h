/***************************飞音云电子****************************
**  工程名称：YS-XFS5051语音合成配套程序
**	CPU: STC89LE52
**	晶振：22.1184MHZ
**	波特率：9600 bit/S
**	配套产品信息：YS-XFS5051语音合成模块
**                http://yuesheng001.taobao.com
**  作者：zdings
**  联系：751956552@qq.com
**  修改日期：2012.8.25
**  说明：。。
/***************************飞音云电子******************************/


#ifndef XFS_H
#define XFS_H
    
#include <stdint.h>
#include <string.h>
#include <project.h>



/**************芯片设置命令*********************/
uint8_t XFS_StopCom[]={0xFD,0X00,0X01,0X02};//停止合成
uint8_t XFS_SuspendCom[]={0XFD,0X00,0X01,0X03};//暂停合成
uint8_t XFS_RecoverCom[]={0XFD,0X00,0X01,0X04};//恢复合成
uint8_t XFS_ChackCom[]={0XFD,0X00,0X01,0X21};//状态查询
uint8_t XFS_PowerDownCom[]={0XFD,0X00,0X01,0X88};//进入POWER DOWN 状态命令

/***********************************************/


/************************************************************************
功能描述： 串口初始化
入口参数： none
返 回 值： none
其他说明： 需要在主程序运行开始时调用
**************************************************************************/
void XFS_init()
{
	UART_AUDIO_Start();
}


/************************************************************************
功能描述： 串口发送字符串数据
入口参数： 	*DAT：字符串指针
返 回 值： none
其他说明： API 供外部使用，直观！
**************************************************************************/
void PrintCom(uint8_t *DAT,uint8_t len)
{
	uint8_t i;
	for(i=0;i<len;i++)
	{
	 	UART_AUDIO_PutChar(*DAT++);
	}	
}


/***********************************************************
* 名    称：  YS-XFS5051 文本合成函数
* 功    能：  发送合成文本到XFS5051芯片进行合成播放
* 入口参数：  *HZdata:文本指针变量 
* 出口参数：
* 说    明： 本函数只用于文本合成，具备背景音乐选择。默认波特率9600bps。					 
* 调用方法：例： SYN_FrameInfo（“飞音云电子”）；
**********************************************************/
void XFS_FrameInfo(uint8_t *HZdata)
{
/****************需要发送的文本**********************************/ 
		 unsigned  char Frame_Info[50]; //定义的文本长度
         unsigned  int  HZ_Length;  

	     unsigned  int i=0; 
		 HZ_Length =strlen(HZdata); 			//需要发送文本的长度
 		 
/*****************帧固定配置信息**************************************/           
		 Frame_Info[0] = 0xFD ; 			//构造帧头FD
		 Frame_Info[1] = 0x00 ; 			//构造数据区长度的高字节
		 Frame_Info[2] = HZ_Length+2; 		//构造数据区长度的低字节
		 Frame_Info[3] = 0x01 ; 			//构造命令字：合成播放命令		 		 
		 Frame_Info[4] = 0x01;       //文本编码格式：GBK 
 
/*******************发送帧信息***************************************/		  
         memcpy(&Frame_Info[5], HZdata, HZ_Length);
		 PrintCom(Frame_Info,5+HZ_Length); //发送帧配置
}


/*
* 名    称： void  main(void)
* 功    能： 主函数	程序入口
* 入口参数： *Info_data:固定的配置信息变量 
* 出口参数：
* 说    明：本函数用于配置，停止合成、暂停合成等设置 ，默认波特率9600bps。					 
* 调用方法：通过调用已经定义的相关数组进行配置。 
**********************************************************/
void YS_XFS_Set(uint8_t *Info_data)
{
	uint8_t Com_Len;
	Com_Len =strlen(Info_data);
	PrintCom(Info_data,Com_Len);
}

#endif