/*
 * FUN_005c5040 at 005c5040
 * undefined FUN_005c5040(void)
 * Address ranges: 005c5040-005c50e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c5040(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == param_2) {
    return 1;
  }
  iVar1 = FUN_005c4d80(&local_4,&local_18);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c4d80(&local_c,&local_14);
  if (iVar1 == 0) {
    FUN_005c4e50();
    return 0;
  }
  if (local_14 < local_18) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005c47e0(local_4,local_8,param_1,local_c,local_10,param_2,local_18);
  }
  FUN_005c4e50();
  FUN_005c4e50();
  return uVar2;
}

