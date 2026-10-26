/*
 * FUN_1001efe5 at 1001efe5
 * undefined FUN_1001efe5(void)
 * Address ranges: 1001efe5-1001f015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001efe5(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_1001cb79(param_1);
    uVar1 = FUN_1001f016(param_1);
    FUN_1001cbcb(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

