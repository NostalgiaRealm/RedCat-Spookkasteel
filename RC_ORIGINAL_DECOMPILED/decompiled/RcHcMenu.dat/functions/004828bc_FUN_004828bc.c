/*
 * FUN_004828bc at 004828bc
 * int __register FUN_004828bc(char * param_1)
 * Address ranges: 004828bc-00482924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004828bc(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 1;
  iVar1 = FUN_0040a108(param_1);
  if (iVar1 < 0x10) {
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        iVar3 = (uint)(byte)param_1[iVar4] + iVar3 * 0x25;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 7;
    }
    for (iVar1 = iVar1 + -1; -1 < iVar1; iVar1 = iVar1 - (iVar2 >> 3)) {
      iVar3 = (uint)(byte)param_1[iVar4] + iVar3 * 0x27;
      iVar4 = iVar4 + (iVar2 >> 3);
    }
  }
  return iVar3;
}

