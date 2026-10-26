/*
 * FUN_0061ba49 at 0061ba49
 * undefined FUN_0061ba49(void)
 * Address ranges: 0061ba49-0061baaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061ba49(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_0070ff9c = param_1;
  puVar1 = &DAT_006b38f0;
  do {
    if (param_1 == *puVar1) {
      DAT_0070ff98 = *(undefined4 *)(iVar2 * 8 + 0x6b38f4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x6b3a58);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_0070ff98 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_0070ff98 = 8, 0xca < param_1)) {
    DAT_0070ff98 = 0x16;
  }
  return;
}

