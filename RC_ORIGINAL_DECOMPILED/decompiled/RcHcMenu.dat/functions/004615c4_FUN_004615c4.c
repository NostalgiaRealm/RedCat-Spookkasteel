/*
 * FUN_004615c4 at 004615c4
 * int __register FUN_004615c4(undefined * param_1, int param_2)
 * Address ranges: 004615c4-004615fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004615c4(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    iVar3 = 1;
    do {
      uVar1 = FUN_00461138(param_1,iVar3);
      if (((char)uVar1 != '\x03') && (1 < (byte)((char)uVar1 - 6U))) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}

