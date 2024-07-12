#include "slang_shader_base.h"

// #include "slang/slang.h"
// #include "slang/slang-com-ptr.h"

// using namespace slang;

SlangShaderBase::SlangShaderBase() {
	m_spirv_data  = PackedByteArray();
	m_entry_point = "";

	// Slang::ComPtr<IGlobalSession> globalSession;
	// createGlobalSession(globalSession.writeRef());
}
