/*
 * FUN_1001a1c0 at 1001a1c0
 * undefined FUN_1001a1c0(void)
 * Address ranges: 1001a1c0-1001a2a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001a1c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_8 [4];
  int local_4;
  
  if ((((*(int *)(param_1 + 0x10) != 0) && (param_2 == *(int *)(param_1 + 0x18))) &&
      (param_3 != *(int *)(param_1 + 0x14))) && (param_3 != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0xc) <= param_2) {
      return 0;
    }
    FUN_100203d0();
    FUN_10020370(param_3);
    return 1;
  }
  iVar1 = FUN_10019d90(local_8,&local_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_4 <= param_2) {
    FUN_10019e60();
    return 0;
  }
  FUN_100203d0();
  FUN_10020370(param_3);
  FUN_10019e60();
  return 1;
}

