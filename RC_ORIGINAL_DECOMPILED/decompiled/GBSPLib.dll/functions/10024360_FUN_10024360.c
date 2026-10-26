/*
 * FUN_10024360 at 10024360
 * undefined FUN_10024360(void)
 * Address ranges: 10024360-100243f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10024360(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  uVar1 = param_1;
  iVar2 = FUN_10014ac0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_10014a00(8);
  if (iVar2 == 0) {
    return 0;
  }
  if (iStack_8 != 0x31305444) {
    return 0;
  }
  iVar2 = FUN_10024400(uVar1,&param_1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_10014ac0();
  if (iStack_4 != iStack_10 - local_c) {
    FUN_10024090(param_1);
    return 0;
  }
  return param_1;
}

