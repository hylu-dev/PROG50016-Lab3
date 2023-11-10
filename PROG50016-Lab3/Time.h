#pragma once

#ifndef _TIME_H_
#define _TIME_H_

#include <chrono>

class Time
{
public:
	inline static Time& Instance() {
		if (instance == nullptr) {
			instance = new Time();
		}
		return *instance;
	}

	inline void Destroy() {
		if (instance != nullptr) {
			delete instance;
			instance = nullptr;
		}
	}
	inline float DeltaTime() { return deltaTime.count(); };

	inline float TotalTime() { return totalTime.count(); };

	unsigned int FrameCount() { return frameCount; };

protected:
	inline void Initialize();

	inline void Update();

private:
	friend class Engine;

	int frameCount = 0;
	std::chrono::duration<float> deltaTime = std::chrono::duration<float>(0.0f);
	std::chrono::duration<float> totalTime = std::chrono::duration<float>(0.0f);
	std::chrono::time_point<std::chrono::system_clock> beginTime;
	std::chrono::time_point<std::chrono::system_clock> endTime;

	static Time* instance;
private:
	inline explicit Time() = default;
	inline ~Time() = default;
	inline explicit Time(Time const&) = delete;
	inline Time& operator=(Time const&) = delete;
};

#endif