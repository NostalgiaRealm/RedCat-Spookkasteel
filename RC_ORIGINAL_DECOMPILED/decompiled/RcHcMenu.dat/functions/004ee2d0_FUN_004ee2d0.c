/*
 * FUN_004ee2d0 at 004ee2d0
 * undefined4 __register FUN_004ee2d0(int * param_1)
 * Address ranges: 004ee2d0-004ee302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ee2d0(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  if ((char)param_1[0xd] != '\x02') {
    piVar2 = (int *)FUN_004ed88c(param_1);
    uVar3 = (**(code **)(*piVar2 + 0x3c))();
    if ((char)uVar3 != '\0') {
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      uVar1 = 1;
      goto LAB_004ee2f9;
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_004ee2f9:
  return CONCAT31(uVar4,uVar1);
}

