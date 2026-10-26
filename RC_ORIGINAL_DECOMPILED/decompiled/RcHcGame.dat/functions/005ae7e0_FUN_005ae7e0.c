/*
 * FUN_005ae7e0 at 005ae7e0
 * undefined FUN_005ae7e0(void)
 * Address ranges: 005ae7e0-005ae835
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ae7e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ae840();
  FUN_0053cff0(*(undefined4 *)(iVar1 + 8),1,&param_1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_005af210(param_1,1,0);
      return;
    }
    FUN_005af210(param_1,1,*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2);
  }
  return;
}

