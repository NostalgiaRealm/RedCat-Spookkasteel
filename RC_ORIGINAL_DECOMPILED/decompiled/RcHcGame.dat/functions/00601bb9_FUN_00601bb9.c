/*
 * FUN_00601bb9 at 00601bb9
 * undefined FUN_00601bb9(void)
 * Address ranges: 00601bb9-00601bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6517fc slot 1 for .?AV?$ctype@G@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6517fc slot 1 for
   .?AV?$ctype@G@std@@. Original bytes unchanged; names and types still inferred. */

undefined2 * __thiscall
FUN_00601bb9(int *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    cVar1 = (**(code **)(*param_1 + 0x30))(*param_2,0);
    *param_4 = *(undefined2 *)(param_1[4] + cVar1 * 2);
    param_4 = param_4 + 1;
  }
  return param_2;
}

