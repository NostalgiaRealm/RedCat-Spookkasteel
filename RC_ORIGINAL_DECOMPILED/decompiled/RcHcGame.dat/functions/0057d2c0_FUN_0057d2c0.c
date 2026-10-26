/*
 * FUN_0057d2c0 at 0057d2c0
 * undefined FUN_0057d2c0(void)
 * Address ranges: 0057d2c0-0057d301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057d2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 8) {
    if (*(int *)(iVar2 + 4) != 0) {
      FUN_004098d0();
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

