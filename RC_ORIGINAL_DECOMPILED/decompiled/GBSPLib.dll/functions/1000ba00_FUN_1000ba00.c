/*
 * FUN_1000ba00 at 1000ba00
 * undefined FUN_1000ba00(void)
 * Address ranges: 1000ba00-1000ba4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ba00(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_100016c0(param_1);
  iVar3 = 0;
  puVar1[10] = 0xffffffff;
  if (0 < (int)puVar1[0xb]) {
    pbVar2 = (byte *)(puVar1 + 0x10);
    do {
      iVar3 = iVar3 + 1;
      *pbVar2 = *pbVar2 & 0xfb;
      pbVar2 = pbVar2 + 0x14;
    } while (iVar3 < (int)puVar1[0xb]);
  }
  puVar1[3] = param_3;
  *puVar1 = *param_2;
  *param_2 = puVar1;
  return 1;
}

