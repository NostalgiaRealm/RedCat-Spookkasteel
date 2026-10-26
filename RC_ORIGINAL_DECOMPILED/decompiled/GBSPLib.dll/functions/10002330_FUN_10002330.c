/*
 * FUN_10002330 at 10002330
 * undefined FUN_10002330(void)
 * Address ranges: 10002330-10002362
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10002330(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x24) + 0xc);
  uVar2 = *(uint *)(*(int *)(param_2 + 0x24) + 0xc);
  if (((uVar1 & 0x20) != 0) && ((uVar2 & 0x20) == 0)) {
    return 0;
  }
  if (((uVar2 | uVar1) & 0x200) != 0) {
    return 0;
  }
  return uVar1 & 1;
}

