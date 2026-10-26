/*
 * FUN_004f6200 at 004f6200
 * undefined4 __register FUN_004f6200(int param_1, int param_2)
 * Address ranges: 004f6200-004f624f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f6200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_004f6268(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_004f6250(param_1,iVar4);
      if ((iVar2 == *(int *)(param_2 + 0x24)) && (param_1 == *(int *)(param_2 + 0x90))) {
        uVar3 = FUN_004f6250(param_1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

