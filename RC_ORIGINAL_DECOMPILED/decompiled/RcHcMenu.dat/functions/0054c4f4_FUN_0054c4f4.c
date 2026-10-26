/*
 * FUN_0054c4f4 at 0054c4f4
 * undefined __register FUN_0054c4f4(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0054c4f4-0054c574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054c4f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  
  if (-1 < (int)param_1[0xc5]) {
    FUN_0044dc60((int *)param_1[0xc6],param_2,param_3);
    uVar3 = param_1[0xc5];
    if (9 < uVar3) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    (**(code **)(*(int *)param_1[0xb5] + 0x60))((int *)param_1[0xb5],param_1[uVar3 + 0xbb]);
    piVar1 = param_1 + 0xc5;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402874((uint)param_1);
      uVar4 = extraout_ECX_00;
      uVar5 = extraout_EDX_00;
    }
    FUN_0054c4d8((int)param_1,uVar5,uVar4);
    (**(code **)(**(int **)(param_1[0xb5] + 0x24) + 0x74))();
    FUN_0054c75c(param_1);
  }
  return;
}

