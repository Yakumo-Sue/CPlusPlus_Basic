#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
/*
	开发日志：
	1. 创建项目、导入素材
	2. 设计项目的框架（设计类）
		1. Person 类  人物操控
		2. AI 类      AI 操控
		3. Chesse     棋盘
		4. ChesseGame 游戏控制
	3. 设计每个类的函数
	4. ChesseGame 中进行所有数据的初始化操作
	5. 在 ChesseGame::play 函数中创建游戏渲染程序
	6. main 文件中创建游戏
	7. 设计 Chesse 数据成员数据
	8. 设计 Chesse 棋盘、棋子的的数据
	9. 在 Chesse 的 Init 函数中进行棋盘的初始化和展示
	10. 实现棋手的下棋操作
*/
#include "ChessGame.h"
using namespace std;

int main(void)
{
	Man man;
	// Chess chess;
	Chess chess(13, 44, 43, 67.3);
	AI ai;
	ChessGame game(&man, &ai, &chess);

	game.play();

	return 0;

}