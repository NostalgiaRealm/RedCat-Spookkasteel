/*
 * FUN_005c5270 at 005c5270
 * undefined FUN_005c5270(void)
 * Address ranges: 005c5270-005c5336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c5270(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0xc) <= param_2) {
      return 0;
    }
    iVar1 = FUN_005c6a70();
    local_8 = iVar1 * param_2 + *(int *)(param_1 + 0x1c);
    uVar2 = FUN_005c6970();
    *param_3 = uVar2;
    return 1;
  }
  iVar1 = FUN_005c4d80(&local_8,&local_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_4 <= param_2) {
    FUN_005c4e50();
    return 0;
  }
  FUN_005c6a70();
  uVar2 = FUN_005c6970();
  *param_3 = uVar2;
  FUN_005c4e50();
  return 1;
}

