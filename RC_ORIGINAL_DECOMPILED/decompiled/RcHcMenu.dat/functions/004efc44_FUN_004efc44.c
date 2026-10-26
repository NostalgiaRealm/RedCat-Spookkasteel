/*
 * FUN_004efc44 at 004efc44
 * undefined __register FUN_004efc44(int * param_1)
 * Address ranges: 004efc44-004efd22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004efc44(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  
  FUN_00435a24(param_1);
  (**(code **)(*(int *)param_1[0x80] + 0x60))((int *)param_1[0x80],param_1);
  FUN_00431d2c((int *)param_1[0x80],CONCAT31((int3)((uint)extraout_EDX >> 8),4),extraout_ECX);
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  (**(code **)(*piVar1 + 0x60))(piVar1,param_1);
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  FUN_00431f34(piVar1,1);
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  FUN_00431f54(piVar1,1);
  iVar2 = FUN_00432178(param_1);
  uVar3 = iVar2 - *(int *)(param_1[0x80] + 0x38);
  if (SBORROW4(iVar2,*(int *)(param_1[0x80] + 0x38))) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  uVar4 = uVar3 - 2;
  if (SBORROW4(uVar3,2)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  FUN_00431f78(piVar1,uVar4);
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  uVar3 = FUN_004321bc(param_1);
  iVar2 = uVar3 - 2;
  if (SBORROW4(uVar3,2)) {
    thunk_FUN_00402874(uVar3);
    iVar2 = extraout_EDX_00;
  }
  FUN_00431f98(piVar1,iVar2);
  iVar2 = (**(code **)(*param_1 + 0xd0))();
  FUN_00432838(iVar2,'\0');
  return;
}

