/*
 * FUN_004f5e14 at 004f5e14
 * undefined __register FUN_004f5e14(int param_1)
 * Address ranges: 004f5e14-004f5e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5e14(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_004f6268(param_1);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iVar3 = FUN_004f6250(param_1,iVar4);
      bVar1 = *(byte *)(iVar3 + 0x1fa);
      iVar3 = FUN_004f6250(param_1,iVar4);
      FUN_004f5d20(iVar3,bVar1);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

