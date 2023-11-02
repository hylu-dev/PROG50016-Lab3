#pragma once

#ifndef _IRENDERABLE_H_
#define _IRENDERABLE_H_

class IRenderable {
private:
	friend class RenderSystem;

protected:
	IRenderable();
	~IRenderable();
	virtual void Render() = 0;
};
#endif