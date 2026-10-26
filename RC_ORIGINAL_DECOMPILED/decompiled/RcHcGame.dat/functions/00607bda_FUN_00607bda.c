/*
 * FUN_00607bda at 00607bda
 * undefined FUN_00607bda(void)
 * Address ranges: 00607bda-00607c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00607bda(int param_1,undefined1 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x10);
  *param_2 = param_2._3_1_;
  FUN_004040a0(0);
  sVar1 = _strlen(_Str);
  FUN_004040f0(_Str,sVar1);
  return param_2;
}

