/*
 * FUN_004aa510 at 004aa510
 * undefined FUN_004aa510(void)
 * Address ranges: 004aa510-004aa547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004aa510(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    FUN_00505360();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

