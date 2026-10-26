/*
 * FUN_00533cb0 at 00533cb0
 * undefined4 __register FUN_00533cb0(int param_1)
 * Address ranges: 00533cb0-00533cf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00533cb0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined3 uVar5;
  
  uVar2 = FUN_005017b8(param_1);
  if ((char)uVar2 == '\0') {
    iVar3 = FUN_00532e58(param_1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00532e58(param_1);
      piVar4 = (int *)FUN_004949bc(piVar4);
      uVar2 = (**(code **)(*piVar4 + 0x4c))();
      if ((char)uVar2 == '\0') {
        uVar5 = (undefined3)((uint)uVar2 >> 8);
        uVar1 = 1;
        goto LAB_00533ced;
      }
    }
  }
  uVar1 = 0;
  uVar5 = 0;
LAB_00533ced:
  return CONCAT31(uVar5,uVar1);
}

