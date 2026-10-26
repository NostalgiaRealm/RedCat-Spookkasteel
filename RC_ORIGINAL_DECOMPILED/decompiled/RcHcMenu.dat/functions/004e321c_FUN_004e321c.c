/*
 * FUN_004e321c at 004e321c
 * undefined4 __register FUN_004e321c(int * param_1)
 * Address ranges: 004e321c-004e324e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e321c(int *param_1)

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
      goto LAB_004e3245;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_004e3245:
  return CONCAT31(uVar4,uVar1);
}

