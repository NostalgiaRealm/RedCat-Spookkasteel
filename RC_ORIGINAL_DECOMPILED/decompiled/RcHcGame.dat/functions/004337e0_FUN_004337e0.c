/*
 * FUN_004337e0 at 004337e0
 * undefined FUN_004337e0(void)
 * Address ranges: 004337e0-00433806
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004337e0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 100) == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x18);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    uVar2 = FUN_0060af10(puVar1);
    *(undefined4 *)(param_1 + 100) = uVar2;
  }
  return;
}

