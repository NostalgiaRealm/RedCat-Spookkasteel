/*
 * FUN_1001a050 at 1001a050
 * undefined FUN_1001a050(void)
 * Address ranges: 1001a050-1001a0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001a050(int param_1,int param_2)

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
  iVar1 = FUN_10019d90(&local_4,&local_18);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_10019d90(&local_c,&local_14);
  if (iVar1 == 0) {
    FUN_10019e60();
    return 0;
  }
  if (local_14 < local_18) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10019820(local_4,local_8,param_1,local_c,local_10,param_2,local_18);
  }
  FUN_10019e60();
  FUN_10019e60();
  return uVar2;
}

