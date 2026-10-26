/*
 * FUN_00524d1c at 00524d1c
 * undefined __register FUN_00524d1c(int * param_1, int * param_2)
 * Address ranges: 00524d1c-00524e9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524d1c(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar5;
  bool bVar7;
  bool bVar8;
  undefined3 uVar6;
  
  bVar7 = param_2[1] != param_1[0x86];
  bVar8 = *param_2 != param_1[0x85];
  if ((param_2[1] == -1) || (*param_2 == 0)) {
    piVar2 = (int *)FUN_0052361c(param_1);
    (**(code **)(*piVar2 + 0xdc))();
  }
  if (((*param_2 != 0) && (param_2[1] != -1)) && (bVar8 || bVar7)) {
    uVar3 = (uint)bVar8;
    piVar2 = (int *)FUN_0052361c(param_1);
    (**(code **)(*piVar2 + 0xd4))(piVar2,param_1 + 0x85,bVar7,uVar3);
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      iVar4 = FUN_0052361c(param_1);
      if (*(char *)(iVar4 + 0x238) == '\0') {
        FUN_00524f8c(param_1,param_1 + 0x85);
      }
      else if (bVar7) {
        FUN_00524fb8(param_1,param_1[0x86]);
      }
    }
    piVar2 = (int *)FUN_0052361c(param_1);
    (**(code **)(*piVar2 + 0xd8))(piVar2,param_2);
    piVar2 = (int *)FUN_0052361c(param_1);
    (**(code **)(*piVar2 + 0xcc))(piVar2,bVar7,bVar8);
    bVar1 = FUN_00438c84((int)param_1);
    uVar6 = extraout_var;
    if (bVar1) {
      iVar4 = FUN_0052361c(param_1);
      if (*(char *)(iVar4 + 0x238) == '\0') {
        FUN_00524f8c(param_1,param_1 + 0x85);
      }
      else if (bVar7) {
        FUN_00524fb8(param_1,param_1[0x86]);
      }
      FUN_00523ae0(param_1,param_2);
      uVar6 = extraout_var_00;
    }
    uVar5 = CONCAT31(uVar6,bVar8);
    piVar2 = (int *)FUN_0052361c(param_1);
    (**(code **)(*piVar2 + 0xd0))(piVar2,param_1 + 0x85,bVar7,uVar5);
  }
  return;
}

