/*
 * FUN_00595230 at 00595230
 * undefined FUN_00595230(void)
 * Address ranges: 00595230-00595277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00595230(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar1 = FUN_004bc480();
  }
  iVar3 = *(int *)(iVar1 + 0x554);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x508);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 0x554) = iVar3;
  }
  return iVar3 != 0;
}

