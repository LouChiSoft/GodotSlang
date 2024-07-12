#ifndef SLANG_BASE_H
#define SLANG_BASE_H

#include "core/io/resource.h"

class SlangShaderBase : public Resource {
	GDCLASS(SlangShaderBase, Resource)

public:
	SlangShaderBase();

	virtual void load_shader(String shader_name) = 0;

protected:
	String			m_entry_point;
	PackedByteArray m_spirv_data;
};

#endif
