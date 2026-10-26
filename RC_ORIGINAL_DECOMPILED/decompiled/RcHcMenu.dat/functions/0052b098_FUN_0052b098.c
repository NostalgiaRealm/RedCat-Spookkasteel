/*
 * FUN_0052b098 at 0052b098
 * undefined4 __register FUN_0052b098(int param_1, undefined4 * param_2)
 * Address ranges: 0052b098-0052b102
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052b098(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_28 [8];
  int local_8;
  
  puVar5 = local_28;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  local_8 = param_1;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_0052b0d0:
    if (*(int *)(local_8 + 0x88) != 0) {
      local_8 = (**(code **)(**(int **)(local_8 + 0x88) + 0x74))(*(int **)(local_8 + 0x88),local_28)
      ;
      if ((char)local_8 == '\0') goto LAB_0052b0f1;
    }
    uVar3 = (undefined3)((uint)local_8 >> 8);
    uVar2 = 1;
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x74))(*(int **)(param_1 + 0x84),local_28);
    if (cVar1 != '\0') goto LAB_0052b0d0;
LAB_0052b0f1:
    uVar2 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar2);
}

