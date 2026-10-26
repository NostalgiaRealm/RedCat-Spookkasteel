/*
 * FUN_10019fe0 at 10019fe0
 * undefined FUN_10019fe0(void)
 * Address ranges: 10019fe0-1001a04a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10019fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_10019d90(&local_4,&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_c < param_4) {
    param_4 = local_c;
  }
  uVar2 = FUN_10019820(param_3,param_2,0,local_4,local_8,param_1,param_4);
  iVar1 = FUN_10019e60();
  return -(uint)(iVar1 != 0) & uVar2;
}

