/*
 * FUN_0052dc80 at 0052dc80
 * undefined4 __register FUN_0052dc80(int * param_1)
 * Address ranges: 0052dc80-0052dcbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052dc80(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  
  iVar3 = FUN_00496d84((int)param_1);
  if ((*(byte *)(iVar3 + 0x18) & 0x20) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x50))();
      if ((char)uVar4 == '\0') {
        uVar5 = (undefined3)((uint)uVar4 >> 8);
        uVar2 = 1;
        goto LAB_0052dcb5;
      }
    }
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_0052dcb5:
  return CONCAT31(uVar5,uVar2);
}

