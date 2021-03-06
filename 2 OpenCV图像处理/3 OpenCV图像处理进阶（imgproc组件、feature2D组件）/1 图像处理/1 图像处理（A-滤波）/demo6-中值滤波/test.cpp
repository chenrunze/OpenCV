﻿/**
  ******************************************************************************
  * @file    test.cpp
  * @author  Bruceou
  * @version V1.0
  * @date    2017-11
  * @brief   中值滤波
  ******************************************************************************
  * @attention
  * 本程序适用于OpenCV2和OpenCV3版本。
  ******************************************************************************
  */
/**Includes*********************************************************************/    
#include "opencv2/core/core.hpp"  
#include"opencv2/highgui/highgui.hpp"  
#include"opencv2/imgproc/imgproc.hpp"  

/**namespace*******************************************************************/
using namespace cv;  
   
/**
  * @brief     主函数
  * @param     argc 命令行参数个数
               argv 命令行参数
  * @retval    int
  */
int main (int argc, char **argv)   
{  
       //载入原图  
       Mat image=imread("1.jpg");  
   
       //创建窗口  
       namedWindow("中值滤波【原图】" );  
       namedWindow("中值滤波【效果图】");  
   
       //显示原图  
       imshow("中值滤波【原图】", image );  
   
       //进行中值滤波操作  
       Mat out;  
       medianBlur( image, out, 7);  
   
       //显示效果图  
       imshow("中值滤波【效果图】" ,out );  
   
       waitKey(0 );      
}  
