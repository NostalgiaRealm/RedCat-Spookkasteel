/*
 * FUN_004e3250 at 004e3250
 * undefined4 __register FUN_004e3250(int * param_1)
 * Address ranges: 004e3250-004e328e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e3250(int *param_1)

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
        goto LAB_004e3285;
      }
    }
  }
  uVar2 = 0;
  uVar5 = 0;
LAB_004e3285:
  return CONCAT31(uVar5,uVar2);
}

