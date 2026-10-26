/*
 * FUN_10005d30 at 10005d30
 * undefined __stdcall FUN_10005d30(void)
 * Address ranges: 10005d30-10005d70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005d30(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar1 = &DAT_1010b180;
  if (0 < (int)DAT_10116d80) {
    puVar3 = &DAT_1010c980;
    do {
      *puVar3 = puVar1;
      puVar1 = puVar1 + 0x18;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)DAT_10116d80);
  }
  FUN_10007d59(&DAT_1010c980,DAT_10116d80,4,&LAB_10005d80);
  return;
}

