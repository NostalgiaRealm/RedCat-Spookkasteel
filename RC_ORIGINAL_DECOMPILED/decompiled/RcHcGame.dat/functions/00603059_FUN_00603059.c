/*
 * FUN_00603059 at 00603059
 * undefined FUN_00603059(void)
 * Address ranges: 00603059-0060308e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00603059(int param_1,undefined1 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 8);
  *param_2 = param_2._3_1_;
  FUN_004040a0(0);
  sVar1 = _strlen(_Str);
  FUN_004040f0(_Str,sVar1);
  return param_2;
}

