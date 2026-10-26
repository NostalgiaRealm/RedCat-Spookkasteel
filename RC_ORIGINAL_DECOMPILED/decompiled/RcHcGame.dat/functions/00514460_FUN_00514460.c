/*
 * FUN_00514460 at 00514460
 * undefined FUN_00514460(void)
 * Address ranges: 00514460-00514497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00514460(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_0057d310();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

