static const uint8_t vs_font_basic_glsl[431] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x8a, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, // ....attribute hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ghp vec4 a_color
	0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, // 0;.attribute hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // hp vec2 a_positi
	0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, // on;.attribute hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ghp vec4 a_texco
	0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, // ord0;.varying hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ghp vec4 v_color
	0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 0;.varying highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  vec4 v_texcoord
	0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 0;.uniform highp
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, //  mat4 u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // wProj;.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, //  ().{.  highp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, // mpvar_1.zw = vec
	0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // 2(0.0, 1.0);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, // mpvar_1.xy = a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, // osition;.  gl_Po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // sition = (u_mode
	0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // lViewProj * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ar_1);.  v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // ord0 = a_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, // d0;.  v_color0 =
	0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  a_color0;.}...
};
static const uint8_t vs_font_basic_spv[2111] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x18, 0x08, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, // ......#.........
	0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, // ........GLSL.std
	0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // .450............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, // main....>...B...
	0x45, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, // E...P...S...V...
	0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // ................
	0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // ....main........
	0x26, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, // &...$Global.....
	0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, // &.......u_viewRe
	0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ct......&.......
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, // u_viewTexel.....
	0x26, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, // &.......u_view..
	0x06, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, // ....&.......u_in
	0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // vView.......&...
	0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_proj......
	0x26, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, // &.......u_invPro
	0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // j.......&.......
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, // u_viewProj......
	0x26, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, // &.......u_invVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // wProj.......&...
	0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_model.....
	0x26, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, // &.......u_modelV
	0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x26, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, // iew.....&.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // u_modelViewProj.
	0x06, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, // ....&.......u_al
	0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00, // phaRef4.....(...
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, // ........>...a_co
	0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x42, 0x00, 0x00, 0x00, // lor0........B...
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // a_position......
	0x45, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, // E...a_texcoord0.
	0x05, 0x00, 0x0a, 0x00, 0x50, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, // ....P...@entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, // intOutput.gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x09, 0x00, 0x53, 0x00, 0x00, 0x00, // ition.......S...
	0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, // @entryPointOutpu
	0x74, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, // t.v_color0......
	0x56, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // V...@entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // utput.v_texcoord
	0x30, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // 0...G...%.......
	0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @...H...&.......
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // #.......H...&...
	0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ....#.......H...
	0x26, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // &...........H...
	0x26, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // &.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...&...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...&.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...&.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // #...`...H...&...
	0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x26, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // &...........H...
	0x26, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, // &.......#.......
	0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...&...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...&.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...&.......
	0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // #.......H...&...
	0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // &...........H...
	0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, // &.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...&...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...&.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...&.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // #...`...H...&...
	0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x26, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // &...........H...
	0x26, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, // &.......#.......
	0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...&...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...&.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...&.......
	0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, // #.......H...&...
	0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x26, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // &...........H...
	0x26, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, // &.......#.......
	0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...&...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x26, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....H...&.......
	0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x26, 0x00, 0x00, 0x00, // #... ...G...&...
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ....G...(..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...>.......
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...B.......
	0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x45, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...E.......
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....G...P.......
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x53, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...S.......
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x56, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...V.......
	0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, //  ...............
	0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ............ ...
	0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, // ....+...........
	0x00, 0x00, 0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, // ...?+...........
	0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ........".......
	0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ........#... ...
	0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, // ....+...#...$...
	0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, //  .......%..."...
	0x24, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x26, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // $.......&.......
	0x07, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ...."..."..."...
	0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, // "..."..."...%...
	0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // "..."....... ...
	0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // '.......&...;...
	0x27, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // '...(.......+...
	0x14, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ....)....... ...
	0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // *......."... ...
	0x3d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // =...........;...
	0x3d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // =...>....... ...
	0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // A...........;...
	0x41, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // A...B.......;...
	0x3d, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // =...E....... ...
	0x4f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // O...........;...
	0x4f, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // O...P.......;...
	0x4f, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // O...S.......;...
	0x4f, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, // O...V.......6...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, // ........=.......
	0x3f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, // ?...>...=.......
	0x43, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, // C...B...=.......
	0x46, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, // F...E...Q.......
	0x5e, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, // ^...C.......Q...
	0x06, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ...._...C.......
	0x50, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, // P.......`...^...
	0x5f, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // _...........A...
	0x2a, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, // *...a...(...)...
	0x3d, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, // =..."...b...a...
	0x90, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, // ........c...`...
	0x62, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, // b...Q...........
	0x63, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, // c...............
	0x6b, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, // k.......R.......
	0x8a, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....k...c.......
	0x3e, 0x00, 0x03, 0x00, 0x50, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // >...P.......>...
	0x53, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x56, 0x00, 0x00, 0x00, // S...?...>...V...
	0x46, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00,       // F.......8....@.
};
static const uint8_t vs_font_basic_dx9[329] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x24, 0x01, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x21, 0x00, 0x43, 0x54, 0x41, 0x42, // $.........!.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, // ....W...........
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // ........P...0...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........@.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, // u_modelViewProj.
	0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, // vs_3_0.Microsoft
	0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, //  (R) HLSL Shader
	0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, //  Compiler 10.1..
	0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ................
	0x02, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, // ................
	0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x00, 0x80, 0x02, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, // ................
	0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ......U.........
	0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, // ................
	0x01, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x0f, 0xe0, // ................
	0x02, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                                           // .........
};
static const uint8_t vs_font_basic_dx11[582] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x18, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xe3, 0x5d, 0xf0, 0xa8, 0xb3, 0x95, 0xec, 0x3a, // ....DXBC.].....:
	0x48, 0x51, 0xb3, 0xab, 0xaf, 0x69, 0xf9, 0x66, 0x01, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, // HQ...i.f........
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, // ....,...........
	0x49, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNh...........
	0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // P...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........V.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, // ................
	0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // _...............
	0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x50, 0x4f, // ........COLOR.PO
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, // SITION.TEXCOORD.
	0x4f, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // OSGNl...........
	0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // P...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // b...............
	0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, // ........SV_POSIT
	0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, // ION.COLOR.TEXCOO
	0x52, 0x44, 0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, // RD..SHDR....@...
	0x40, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // @...Y...F. .....
	0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...._...........
	0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, // _...2......._...
	0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, // ........g.... ..
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // ........e.... ..
	0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, // h.......8.......
	0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....V.......F. .
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // ........2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....F. .........
	0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ..... ......F...
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....F. .........
	0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, // 6.... ......F...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....6.... ......
	0x46, 0x1e, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x03, 0x05, 0x00, // F.......>.......
	0x01, 0x00, 0x10, 0x00, 0x40, 0x00,                                                             // ....@.
};
static const uint8_t vs_font_basic_mtl[790] =
{
	0x56, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0xf1, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, // ....using namesp
	0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ace metal;.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, // t xlatMtlShaderI
	0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // nput {.  float4 
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // a_color0 [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // bute(0)]];.  flo
	0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // at2 a_position [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(1)]];
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // .  float4 a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // oord0 [[attribut
	0x65, 0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // e(2)]];.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, //  gl_Position [[p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // osition]];.  flo
	0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, // at4 v_color0;.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // float4 v_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // d0;.};.struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, // rm {.  float4x4 
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, // u_modelViewProj;
	0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.vertex xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, // tlShaderOutput x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, // latMtlMain (xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, // MtlShaderInput _
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // mtl_i [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // ]], constant xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, // m& _mtl_u [[buff
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _mtl_o;.  float
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, // 4 tmpvar_1 = 0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, //   tmpvar_1.zw = 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, // float2(0.0, 1.0)
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, // ;.  tmpvar_1.xy 
	0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // = _mtl_i.a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, // ion;.  _mtl_o.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, // _Position = (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // l_u.u_modelViewP
	0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, // roj * tmpvar_1);
	0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // .  _mtl_o.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, // oord0 = _mtl_i.a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, // _texcoord0;.  _m
	0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, // tl_o.v_color0 = 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, // _mtl_i.a_color0;
	0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, // .  return _mtl_o
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
extern const uint8_t* vs_font_basic_pssl;
extern const uint32_t vs_font_basic_pssl_size;
