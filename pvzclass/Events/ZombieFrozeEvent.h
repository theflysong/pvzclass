#pragma once
#include "DLLEvent.h"

// 僵尸被冻结事件
// 参数：触发事件的僵尸
// 无返回值
class ZombieFrozeEvent : public DLLEvent
{
public:
	ZombieFrozeEvent();
};

ZombieFrozeEvent::ZombieFrozeEvent()
{
	int procAddress = PVZ::Memory::GetProcAddress("onZombieFroze");
	hookAddress = 0x5323C0;
	RegisterType args[] = { R_EAX };
	start2(procAddress, STRING(args));
}
