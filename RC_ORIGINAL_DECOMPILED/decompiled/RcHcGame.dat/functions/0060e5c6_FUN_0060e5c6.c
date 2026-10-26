/*
 * FUN_0060e5c6 at 0060e5c6
 * undefined FUN_0060e5c6(void)
 * Address ranges: 0060e5c6-0060e600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060e5c6(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_0060e601(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_0061cafb(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

