/*
 * FUN_005807d0 at 005807d0
 * undefined FUN_005807d0(void)
 * Address ranges: 005807d0-00580807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005807d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 8) {
    FUN_0057f170();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

