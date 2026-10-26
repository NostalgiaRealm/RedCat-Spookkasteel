/*
 * FUN_00529eac at 00529eac
 * undefined4 __register FUN_00529eac(int param_1)
 * Address ranges: 00529eac-00529f30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00529eac(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x80))();
    if ((char)uVar2 == '\0') goto LAB_00529ed6;
LAB_00529f25:
    uVar3 = (undefined3)((uint)uVar2 >> 8);
    uVar1 = 1;
  }
  else {
LAB_00529ed6:
    if (*(char *)(param_1 + 0x80) == '\x02') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x80))();
      if ((char)uVar2 != '\0') goto LAB_00529f25;
    }
    if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x88) != 0)) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 100))();
      if ((char)uVar2 == '\0') goto LAB_00529f25;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar1);
}

