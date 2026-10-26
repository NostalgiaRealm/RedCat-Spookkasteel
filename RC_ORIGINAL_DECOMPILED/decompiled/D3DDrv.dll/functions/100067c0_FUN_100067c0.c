/*
 * FUN_100067c0 at 100067c0
 * undefined __stdcall FUN_100067c0(void)
 * Address ranges: 100067c0-10006800
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100067c0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar1 = &DAT_10116dc0;
  if (0 < (int)DAT_101271c0) {
    puVar3 = &DAT_101199c0;
    do {
      *puVar3 = puVar1;
      puVar1 = puVar1 + 0x2c;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)DAT_101271c0);
  }
  FUN_10007d59(&DAT_101199c0,DAT_101271c0,4,&LAB_10006810);
  return;
}

