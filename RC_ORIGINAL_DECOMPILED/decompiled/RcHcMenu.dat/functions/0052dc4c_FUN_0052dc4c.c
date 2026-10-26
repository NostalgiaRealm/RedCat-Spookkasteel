/*
 * FUN_0052dc4c at 0052dc4c
 * undefined4 __register FUN_0052dc4c(int * param_1)
 * Address ranges: 0052dc4c-0052dc7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052dc4c(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  iVar2 = FUN_00496d84((int)param_1);
  if ((*(byte *)(iVar2 + 0x18) & 0x20) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x4c))();
    if ((char)uVar3 != '\0') {
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      uVar1 = 1;
      goto LAB_0052dc75;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_0052dc75:
  return CONCAT31(uVar4,uVar1);
}

