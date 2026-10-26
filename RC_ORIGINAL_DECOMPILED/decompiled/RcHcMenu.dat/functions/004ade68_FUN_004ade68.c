/*
 * FUN_004ade68 at 004ade68
 * undefined4 __register FUN_004ade68(int * param_1)
 * Address ranges: 004ade68-004adea9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ade68(int *param_1)

{
  undefined1 uVar1;
  HWND pHVar2;
  int *piVar3;
  undefined3 uVar4;
  
  pHVar2 = GetFocus();
  piVar3 = (int *)(**(code **)(*param_1 + 0xb0))();
  if (((char)piVar3 == '\0') &&
     ((*(char *)((int)param_1 + 0x179) == '\0' || (piVar3 = param_1, pHVar2 != (HWND)0x0)))) {
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined3)((uint)piVar3 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar4,uVar1);
}

