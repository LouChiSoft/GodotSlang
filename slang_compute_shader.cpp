#include "slang_compute_shader.h"

SlangComputeShader::SlangComputeShader() : SlangShaderBase() {
}

void SlangComputeShader::load_shader(String shader_name) {
	print_line(shader_name);
}

void SlangComputeShader::_bind_methods() {
	ClassDB::bind_method(D_METHOD("load_shader", "shader_name"), &SlangComputeShader::load_shader);
}
