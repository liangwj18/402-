#pragma once
#include "../include/client/client.h"

void getOperations(Parameters *parameters,
				   State *state,
				   Operations *opt)
{
	
	/*
	@parameters 
		member variables(public):
			AI编号: int num;                                   
			地图宽度: int mapWidth;
			地图长度: int mapHeight;
			初始地价: int landPrice;
			病毒数目: int pollutionComponentNum;
			最大回合数: int maxRoundNum;
			覆盖范围种类数: int maxRangeNum;
			情报价格: int tipsterCost;
			建筑物: std::vector<std::pair<int,int>>buildings;
			治理设备各种范围价格: std::vector<int>processorRangeCost;
			治理设备各种类型价格: std::vector<int>processorTypeCost;
			检测设备各种范围价格: std::vector<int>detectorRangeCost;
			病毒治理收入: std::vector<int>pollutionProfit;
	@state
		member variables(public):
			行动AI编号: int num;
	    	双方钱数: int money[PLAYER];
	    	双方分数: int score[PLAYER];
	    	疫区: int pollution[WIDTH][HEIGHT];
	    	地皮情况: Land lands[WIDTH][HEIGHT];
	    	放置检测设备情况: std::vector<Detector>detectors;
	    	放置治理设备情况: std::vector<Processor>processors;
			
		以下变量如果上两回合无该操作，则对应的容器大小为0或者变量为-1
	    	我方情报贩子的中心点:int tipsterX, tipsterY;
    		我方情报贩子侦测情报位置和疫情:int tipsterCheckX, tipsterCheckY, tipsterCheckPollution;
    		我方检测设备放置位置和范围类型:int myDetectorX, myDetectorY, myDetectorRange;
    		我方治理设备放置位置和范围类型、治理病毒类型:
    			int myProcessorX, myProcessorY, myProcessorRange, myProcessorType;
    		我方标价位置和标价:int myBidX, myBidY, myBidPrice;
    		对方标价位置和标价:int otherBidX, otherBidY, otherBidPrice;
    		对方检测设备放置位置和范围类型:int otherDetectorX, otherDetectorY, otherDetectorRange;
    		对方治理设备放置位置,范围类型,治理病毒类型:int otherProcessorX, otherProcessorY, otherProcessorRange, otherProcessorType;
    		我方检测设备侦测到的疫区位置:std::vector<std::pair<int,int>>myDetectorCheckPos;
    		我方检测设备侦测到的疫区病毒组成:std::vector<int>myDetectorCheckPollution;
    		我方获得收益的点:std::vector<std::pair<int,int>>profitPos;
	@opt
		member functions(public):
			@x 获取情报的中心位置x坐标,对应mapWidth那一维,下标从0开始,以下同理
			@y 获取情报的中心位置y坐标,对应mapHeight那一维,下标从0开始,以下同理
			void setTipster(int x, int y):设置本回合使用情报的中心位置，如果本回合不使用，请勿调用
			
			@x 放置检测设备的位置x坐标
			@y 放置检测设备的位置y坐标
			@rangeType 放置检测设备的检测范围类型,对应maxRangeNum,下标从0开始,以下同理
    		void setDetector(int x, int y, int rangeType):设置本回合放置的检测设备，如果本回合不使用，请勿调用
    		@x 放置治理设备的位置x坐标
    		@y 放置治理设备的位置y坐标
    		@rangeType 放置治理设备的治理范围类型
    		@processingType 放置治理设备的治理病毒类型,对应pollutionComponentNum,下标从0开始
    		void setProcessor(int x, int y, int rangeType, int processingType):设置本回合放置的治理设备，
    		如果本回合不使用，请勿调用
			@x 地皮竞价的位置x坐标
			@y 地皮竞价的位置y坐标
			@bidPrice 本回合对该地皮的报价，要求bidPrice大于上一次报价且为landPrice*0.1的整数倍
    		void setBid(int x, int y, int bidPrice):设置本回合的地皮报价信息，如果本回合不使用，请勿调用
    @覆盖类型:DeltaPos = [
    		[(0,0),(0,1),(0,-1),(1,0),(-1,0),(0,2),(0,-2),(2,0),(-2,0)],     十字
    		[(0,0),(0,1),(0,-1),(1,0),(-1,0),(1,1),(1,-1),(-1,1),(-1,-1)],   区域
    		[(0,0),(1,1),(1,-1),(-1,1),(-1,-1),(2,2),(2,-2),(-2,2),(-2,-2)], 斜十字
		]
	*/
}