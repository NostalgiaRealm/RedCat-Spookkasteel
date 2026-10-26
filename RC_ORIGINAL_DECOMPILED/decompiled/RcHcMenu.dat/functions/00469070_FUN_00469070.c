/*
 * FUN_00469070 at 00469070
 * undefined4 __register FUN_00469070(int * param_1)
 * Address ranges: 00469070-004690b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00469070(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x74))();
  if (0 < iVar1) {
    if (*(char *)(param_1[10] + 0x8d) == '\x04') {
      uVar2 = FUN_00469420((int)param_1);
      return uVar2;
    }
    if ((*(char *)((int)param_1 + 0x35) == '\0') &&
       (uVar2 = (**(code **)(*(int *)param_1[10] + 0x124))(), (char)uVar2 != '\0')) {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return 0;
}

