/*
 * _set_new_handler at 10009330
 * _func_int_uint * __cdecl _set_new_handler(_func_int_uint * param_1)
 * Address ranges: 10009330-1000935f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100073f0(9);
  p_Var1 = DAT_10031620;
  DAT_10031620 = param_1;
  FUN_10007490(9);
  return p_Var1;
}

