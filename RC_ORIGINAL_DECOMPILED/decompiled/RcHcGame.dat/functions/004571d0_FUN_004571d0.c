/*
 * FUN_004571d0 at 004571d0
 * undefined FUN_004571d0(void)
 * Address ranges: 004571d0-00457207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004571d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_00455c00();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

