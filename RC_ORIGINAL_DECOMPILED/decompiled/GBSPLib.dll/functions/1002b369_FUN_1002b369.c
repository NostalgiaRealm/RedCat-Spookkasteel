/*
 * FUN_1002b369 at 1002b369
 * undefined FUN_1002b369(void)
 * Address ranges: 1002b369-1002b3db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b369(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_1002b3e5();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_1003cef8;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_1002b3dc();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x1003cefc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x1003d060);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_1002b3dc();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_1002b3dc();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_1002b3dc();
  *puVar2 = 0x16;
  return;
}

