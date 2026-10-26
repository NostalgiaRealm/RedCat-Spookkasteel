/*
 * FUN_004a7130 at 004a7130
 * undefined FUN_004a7130(void)
 * Address ranges: 004a7130-004a715f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_004a7130(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 == -0x80000000) {
    puVar1 = *(undefined1 **)(param_1 + 0x18);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar1);
    *(int *)(param_1 + 100) = iVar2;
  }
  return iVar2 != 0;
}

