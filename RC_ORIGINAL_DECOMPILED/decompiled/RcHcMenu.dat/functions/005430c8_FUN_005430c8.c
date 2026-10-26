/*
 * FUN_005430c8 at 005430c8
 * undefined4 __register FUN_005430c8(int param_1)
 * Address ranges: 005430c8-00543113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005430c8(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  bVar1 = FUN_00543114(param_1);
  if ((bVar1) && (*(int *)(param_1 + 0x22c) != 0)) {
    uVar3 = FUN_00494528(*(int **)(param_1 + 0x230),*(int **)(param_1 + 0x22c));
    if ((char)uVar3 != '\0') {
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      uVar2 = 1;
      goto LAB_0054310a;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_0054310a:
  return CONCAT31(uVar4,uVar2);
}

