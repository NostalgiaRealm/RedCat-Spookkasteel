/*
 * FUN_0040abf8 at 0040abf8
 * undefined __register FUN_0040abf8(undefined4 * param_1, undefined4 param_2, undefined4 param_3, double param_4)
 * Address ranges: 0040abf8-0040ac37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040abf8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int iStack_8;
  
  uVar1 = (ulonglong)ROUND(param_4 * (double)_DAT_0056f1c0);
  local_c = (int)uVar1;
  iStack_8 = (int)(uVar1 >> 0x20);
  if ((longlong)uVar1 < 0) {
    uVar1 = CONCAT44(-(uint)(local_c != 0) - iStack_8,-local_c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0056f1c4);
    iVar2 = -(int)(uVar1 / DAT_0056f1c4);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_0056f1c4);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0056f1c4);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}

