/*
 * FUN_1001a2b0 at 1001a2b0
 * undefined FUN_1001a2b0(void)
 * Address ranges: 1001a2b0-1001a376
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001a2b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0xc) <= param_2) {
      return 0;
    }
    iVar1 = FUN_100203d0();
    local_8 = iVar1 * param_2 + *(int *)(param_1 + 0x1c);
    uVar2 = FUN_10020350();
    *param_3 = uVar2;
    return 1;
  }
  iVar1 = FUN_10019d90(&local_8,&local_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_4 <= param_2) {
    FUN_10019e60();
    return 0;
  }
  FUN_100203d0();
  uVar2 = FUN_10020350();
  *param_3 = uVar2;
  FUN_10019e60();
  return 1;
}

