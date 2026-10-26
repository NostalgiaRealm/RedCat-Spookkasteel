/*
 * FUN_00607766 at 00607766
 * undefined FUN_00607766(void)
 * Address ranges: 00607766-006077d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall
FUN_00607766(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 *param_6)

{
  size_t sVar1;
  char *_Str;
  
  if (param_5 == 0) {
    _Str = *(char **)(param_1 + 8);
  }
  else {
    if (param_5 != 1) {
      *param_2 = *param_6;
      FUN_004040a0(0);
      FUN_0040cc00(param_6,0,0xffffffff);
      return param_2;
    }
    _Str = *(char **)(param_1 + 0xc);
  }
  *param_2 = param_2._3_1_;
  FUN_004040a0(0);
  sVar1 = _strlen(_Str);
  FUN_004040f0(_Str,sVar1);
  return param_2;
}

