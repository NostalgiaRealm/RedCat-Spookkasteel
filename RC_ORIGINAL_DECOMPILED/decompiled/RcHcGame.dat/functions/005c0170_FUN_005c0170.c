/*
 * FUN_005c0170 at 005c0170
 * undefined FUN_005c0170(void)
 * Address ranges: 005c0170-005c019a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c0170(void)

{
  undefined4 *puVar1;
  
  FUN_005c0110();
  puVar1 = (undefined4 *)FUN_005d9790(DAT_006cc48c);
  *puVar1 = 1;
  puVar1[0x30] = 0x3f800000;
  puVar1[0x2f] = 0x3f800000;
  return;
}

