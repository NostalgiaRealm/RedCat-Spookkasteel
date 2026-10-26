/*
 * FUN_005c6be0 at 005c6be0
 * undefined FUN_005c6be0(void)
 * Address ranges: 005c6be0-005c6c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c6be0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  bVar2 = pbVar4[1];
  bVar3 = pbVar4[2];
  *param_1 = pbVar4 + 3;
  return ((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3;
}

