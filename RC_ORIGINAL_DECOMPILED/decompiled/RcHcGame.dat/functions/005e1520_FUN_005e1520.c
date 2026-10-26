/*
 * FUN_005e1520 at 005e1520
 * undefined FUN_005e1520(void)
 * Address ranges: 005e1520-005e15ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005e1520(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_005cd3f0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005cd3d0(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005e15d0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005cd3f0();
  FUN_005cd3d0(2);
  iVar1 = FUN_005cd3b0(8);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005cd3d0(2);
  *param_3 = param_2 - local_c;
  return 1;
}

