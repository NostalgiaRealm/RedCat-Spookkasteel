/*
 * FUN_1001e211 at 1001e211
 * undefined FUN_1001e211(void)
 * Address ranges: 1001e211-1001e23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001e211(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001e23f(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1001f062(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

