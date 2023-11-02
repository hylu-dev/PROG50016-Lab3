#pragma once
class InputManager final {
private:
	static InputManager* instance;

	friend class Engine;

public:
	static InputManager& Instance() {
		if (instance == nullptr) {
			instance = new InputManager();
		}
		return *instance;
	}

protected:
	void Initialize();
	void Destroy();
	void Update();

private:
	InputManager() = default;
	~InputManager() = default;
	explicit InputManager(InputManager const&) = delete;
	InputManager& operator=(InputManager const&) = delete;
};

