/*
 * FUN_0043e1b0 at 0043e1b0
 * int __register FUN_0043e1b0(uint param_1)
 * Address ranges: 0043e1b0-0043e1cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043e1b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041b688(param_1);
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}

