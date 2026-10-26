/*
 * FUN_0041ed24 at 0041ed24
 * undefined4 __register FUN_0041ed24(int param_1, short param_2)
 * Address ranges: 0041ed24-0041ed5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041ed24(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8) + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_00412384(*(undefined4 **)(param_1 + 8),iVar2);
      if (param_2 == (short)uVar1) {
        uVar1 = FUN_00412384(*(undefined4 **)(param_1 + 4),iVar2);
        return uVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return 0;
}

