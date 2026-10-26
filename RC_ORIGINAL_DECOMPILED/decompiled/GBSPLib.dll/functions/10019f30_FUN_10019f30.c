/*
 * FUN_10019f30 at 10019f30
 * undefined FUN_10019f30(void)
 * Address ranges: 10019f30-10019f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_10019f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
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
  uVar2 = FUN_10019820(local_4,local_8,param_1,param_3,param_2,0,param_4);
  FUN_10019e60();
  return uVar2;
}

