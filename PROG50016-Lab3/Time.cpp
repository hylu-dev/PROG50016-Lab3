#include "Time.h"

void Time::Update() {
	beginTime = std::chrono::system_clock::now();
	endTime = std::chrono::system_clock::now();
}