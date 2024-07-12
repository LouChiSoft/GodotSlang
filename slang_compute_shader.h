#ifndef SLANG_COMPUTE_H
#define SLANG_COMPUTE_H

#include "slang_shader_base.h"

class SlangComputeShader : public SlangShaderBase {
	GDCLASS(SlangComputeShader, SlangShaderBase)

public:
	SlangComputeShader();

	virtual void load_shader(String shader_name);

protected:
	static void _bind_methods();
};

#endif
