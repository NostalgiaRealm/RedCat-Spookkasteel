/*
 * FUN_005c4fd0 at 005c4fd0
 * undefined FUN_005c4fd0(void)
 * Address ranges: 005c4fd0-005c503a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005c4fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_005c4d80(&local_4,&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_c < param_4) {
    param_4 = local_c;
  }
  uVar2 = FUN_005c47e0(param_3,param_2,0,local_4,local_8,param_1,param_4);
  iVar1 = FUN_005c4e50();
  return -(uint)(iVar1 != 0) & uVar2;
}

