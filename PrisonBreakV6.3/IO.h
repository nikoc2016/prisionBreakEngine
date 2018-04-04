#ifndef IOFUNCS
#define IOFUNCS
#include "Prison.h"
//=========================================== I\O FUNCTIONs ================================================
//                                                v3.1
//   PUT THIS CPP UNDER YOUR MAIN DIRECTORY, PROTOYPE THESE FUNCTIONS BEFORE YOU USE IT
//   All I\O INTERFACES ARE INCLUDED HERE
//   该 CPP 包含了程序需要的所有 I\O 接口
//   使用方法: 放在 MAIN 的根目录下， 在别的地方要用这些函数时，预声明一下就好

bool IO_loadFBI(DLinklist<Wantedperson>* &FBIWanted, string FBIFILENAME);
//   读取 FBI WANTED LIST
//   This functions build the FBIWanted list.
//   Argument 1 : the pointer to a DLinklist holds every wantedperson (RETURN USES)
//   Argument 2 : the file name of the FBIWanted list

bool IO_loadDATA(DLinklist<Prisoner*>* &thePrison, string LOADFILENAME);
//   读取存档
//   This functions build a prisoner list from the savedfile.
//   Argument 1 : the PTR to a DLinklist holds the PTR of all prisoners (RETURN USES)
//   Argument 2 : the file name of the file to load

bool IO_saveDATA(DLinklist<Prisoner*>* &thePrison, string SAVEFILENAME);
//   保存存档
//   This function saves a file of the prisoner list
//   Argument 1 : the PTR to a DLinklist holds the PTR of all prisoners in the jail
//   Argument 2 : the file name needs to be written

bool IO_checkDATA(string SAVEFILENAME);
//   检查存档是否可用
//   This function checks is a file is occupied save file
//   Argument 1 : The filename needs to be check

bool IO_getPrisoner(Prisoner* &returnPrisoner, DLinklist<Wantedperson>* wantedList);
//   从通缉表里随机创建一个囚犯
//   This function get a random wanted man from the wanted list, and create it as a prisoner
//   Argument 1 : the address of a prisoner just created
//   Argument 2 : the ptr to the wantedlist holds every wanted man
//   WARNING : Random pick from the wantedlist could DUPLICATE, caller needs to check if duplicates.
#endif