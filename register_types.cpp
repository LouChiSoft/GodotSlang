#include "register_types.h"
#include "core/object/class_db.h"

#include "slang_shader_base.h"
#include "slang_compute_shader.h"

void initialize_slang_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ClassDB::register_abstract_class<SlangShaderBase>();
	ClassDB::register_class<SlangComputeShader>();
}

void uninitialize_slang_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
