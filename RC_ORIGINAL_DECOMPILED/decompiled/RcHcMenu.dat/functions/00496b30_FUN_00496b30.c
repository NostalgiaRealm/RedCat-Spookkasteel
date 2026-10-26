/*
 * FUN_00496b30 at 00496b30
 * undefined4 __register FUN_00496b30(int * param_1)
 * Address ranges: 00496b30-00496b60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00496b30(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x50))();
    if ((char)uVar3 == '\0') {
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      uVar2 = 1;
      goto LAB_00496b57;
    }
  }
  uVar2 = 0;
  uVar4 = 0;
LAB_00496b57:
  return CONCAT31(uVar4,uVar2);
}

