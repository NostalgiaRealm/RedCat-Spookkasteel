/*
 * FUN_00607c46 at 00607c46
 * undefined FUN_00607c46(void)
 * Address ranges: 00607c46-00607c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00607c46(int param_1,undefined1 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x18);
  *param_2 = param_2._3_1_;
  FUN_004040a0(0);
  sVar1 = _strlen(_Str);
  FUN_004040f0(_Str,sVar1);
  return param_2;
}

