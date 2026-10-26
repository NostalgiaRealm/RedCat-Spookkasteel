/*
 * FUN_004e13d0 at 004e13d0
 * undefined FUN_004e13d0(void)
 * Address ranges: 004e13d0-004e141a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c638 slot 6 for .?AVCRcItemCoin@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c638 slot 6 for
   .?AVCRcItemCoin@@. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e13d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,s_Destroy_0069a1fc);
  if (iVar1 == 0) {
    FUN_00502220();
    return 1;
  }
  uVar2 = FUN_0049e310(param_1,param_2,param_3);
  return uVar2;
}

