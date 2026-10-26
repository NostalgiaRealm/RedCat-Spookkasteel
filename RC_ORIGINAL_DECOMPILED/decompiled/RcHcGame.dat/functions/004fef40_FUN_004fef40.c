/*
 * FUN_004fef40 at 004fef40
 * undefined FUN_004fef40(void)
 * Address ranges: 004fef40-004fef75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_004fef40(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x3c);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 0x88) = iVar2;
  }
  return iVar2 != 0;
}

