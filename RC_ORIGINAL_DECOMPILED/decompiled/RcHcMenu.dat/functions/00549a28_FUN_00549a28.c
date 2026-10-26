/*
 * FUN_00549a28 at 00549a28
 * undefined __register FUN_00549a28(int * param_1)
 * Address ranges: 00549a28-00549a99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549a28(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 6) = 1;
  FUN_00549aec((int)param_1);
  piVar2 = (int *)FUN_00549b80((int)param_1);
  FUN_00494398(piVar2);
  if (*(short *)((int)param_1 + 10) == 0) {
    (**(code **)(*param_1 + 0x54))();
  }
  else {
    (*(code *)param_1[2])(param_1[3]);
  }
  FUN_00547a58(param_1);
  FUN_00549b08((int)param_1);
  piVar2 = param_1 + 9;
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874((uint)param_1);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  FUN_00403270((int *)param_1[0x16],uVar4,uVar3);
  return;
}

