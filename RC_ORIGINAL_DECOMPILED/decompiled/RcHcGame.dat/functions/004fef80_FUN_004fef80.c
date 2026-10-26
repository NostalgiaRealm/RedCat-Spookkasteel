/*
 * FUN_004fef80 at 004fef80
 * undefined FUN_004fef80(void)
 * Address ranges: 004fef80-004fefaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004fef80(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xf4) == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0xa8);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    uVar2 = FUN_0060af10(puVar1);
    *(undefined4 *)(param_1 + 0xf4) = uVar2;
  }
  return;
}

