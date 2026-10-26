/*
 * FUN_10029d7d at 10029d7d
 * undefined FUN_10029d7d(void)
 * Address ranges: 10029d7d-10029daa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10029d7d(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10029dab(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100313b0(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

