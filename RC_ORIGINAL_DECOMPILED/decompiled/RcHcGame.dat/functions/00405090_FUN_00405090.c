/*
 * FUN_00405090 at 00405090
 * undefined FUN_00405090(void)
 * Address ranges: 00405090-004050b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00405090(undefined4 *param_1,undefined4 param_2)

{
  FUN_0040ab10(param_2);
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_0064a5a0;
  return param_1;
}

