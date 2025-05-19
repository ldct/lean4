// Lean compiler output
// Module: Init.Grind.Module.Int
// Imports: Init.Grind.Module.Basic Init.Omega
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Lean_Grind_instPreorderInt___closed__1;
static lean_object* l_Lean_Grind_instIntModuleInt___closed__1;
extern lean_object* l_Int_instNegInt;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_instIntModuleInt;
static lean_object* l_Lean_Grind_instIntModuleInt___closed__2;
extern lean_object* l_Int_instMul;
extern lean_object* l_Int_instLTInt;
static lean_object* l_Lean_Grind_instIntModuleInt___closed__3;
extern lean_object* l_Int_instAdd;
extern lean_object* l_Int_instSub;
lean_object* l_instSMulOfMul___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Int_instLEInt;
LEAN_EXPORT lean_object* l_Lean_Grind_instPreorderInt;
static lean_object* _init_l_Lean_Grind_instIntModuleInt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Grind_instIntModuleInt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Int_instMul;
x_2 = lean_alloc_closure((void*)(l_instSMulOfMul___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Grind_instIntModuleInt___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Grind_instIntModuleInt___closed__1;
x_2 = l_Int_instAdd;
x_3 = l_Int_instNegInt;
x_4 = l_Int_instSub;
x_5 = l_Lean_Grind_instIntModuleInt___closed__2;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Grind_instIntModuleInt() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Grind_instIntModuleInt___closed__3;
return x_1;
}
}
static lean_object* _init_l_Lean_Grind_instPreorderInt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Int_instLEInt;
x_2 = l_Int_instLTInt;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Grind_instPreorderInt() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Grind_instPreorderInt___closed__1;
return x_1;
}
}
lean_object* initialize_Init_Grind_Module_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Omega(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Module_Int(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Module_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_instIntModuleInt___closed__1 = _init_l_Lean_Grind_instIntModuleInt___closed__1();
lean_mark_persistent(l_Lean_Grind_instIntModuleInt___closed__1);
l_Lean_Grind_instIntModuleInt___closed__2 = _init_l_Lean_Grind_instIntModuleInt___closed__2();
lean_mark_persistent(l_Lean_Grind_instIntModuleInt___closed__2);
l_Lean_Grind_instIntModuleInt___closed__3 = _init_l_Lean_Grind_instIntModuleInt___closed__3();
lean_mark_persistent(l_Lean_Grind_instIntModuleInt___closed__3);
l_Lean_Grind_instIntModuleInt = _init_l_Lean_Grind_instIntModuleInt();
lean_mark_persistent(l_Lean_Grind_instIntModuleInt);
l_Lean_Grind_instPreorderInt___closed__1 = _init_l_Lean_Grind_instPreorderInt___closed__1();
lean_mark_persistent(l_Lean_Grind_instPreorderInt___closed__1);
l_Lean_Grind_instPreorderInt = _init_l_Lean_Grind_instPreorderInt();
lean_mark_persistent(l_Lean_Grind_instPreorderInt);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
