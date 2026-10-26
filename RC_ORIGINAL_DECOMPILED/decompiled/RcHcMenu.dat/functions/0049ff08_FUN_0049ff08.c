/*
 * FUN_0049ff08 at 0049ff08
 * undefined __register FUN_0049ff08(int * param_1, undefined4 param_2)
 * Address ranges: 0049ff08-0049fffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ff08(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[0xb];
  piVar2 = param_1 + 0xb;
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + 1;
  piVar2 = param_1;
  if (iVar3 == -1) {
    piVar2 = (int *)thunk_FUN_00402874((uint)param_1);
  }
  if (piVar2[0xb] == -1) {
    thunk_FUN_00402874(0xffffffff);
  }
  if (((*(char *)(*(int *)(param_1[10] + 0x14) + 4) != '\0') &&
      (*(uint *)(*(int *)(param_1[10] + 0x14) + 0x10) < (uint)param_1[0xb])) &&
     (((uint)param_1[0xe] < *(uint *)(*(int *)(param_1[10] + 0x14) + 8) ||
      (*(int *)(*(int *)(param_1[10] + 0x14) + 8) == 0)))) {
    piVar2 = param_1 + 0xe;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + 1;
    if (iVar3 == -1) {
      thunk_FUN_00402874((uint)param_1);
    }
    param_1[0xb] = *(int *)(*(int *)(param_1[10] + 0x14) + 0xc);
  }
  if (*(int *)(param_1[10] + 4) == param_1[0xb]) {
    iVar3 = *(int *)(param_1[10] + 4) + -1;
    if (*(int *)(param_1[10] + 4) == 0) {
      iVar3 = thunk_FUN_00402874(0xffffffff);
    }
    if (iVar3 == -1) {
      iVar3 = thunk_FUN_00402874(0xffffffff);
    }
    param_1[0xb] = iVar3;
    FUN_004a0b64(param_1);
  }
  if (iVar1 != param_1[0xb]) {
    (**(code **)(*param_1 + 100))(param_1,param_1,*param_1,param_2);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

