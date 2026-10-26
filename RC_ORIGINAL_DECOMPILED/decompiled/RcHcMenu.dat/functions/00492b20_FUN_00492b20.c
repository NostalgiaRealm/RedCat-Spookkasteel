/*
 * FUN_00492b20 at 00492b20
 * undefined __register FUN_00492b20(int * param_1, int * param_2)
 * Address ranges: 00492b20-00492d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492b20(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar6;
  int *extraout_EDX;
  int *extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_134;
  int local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_130 = 0;
  local_134 = 0;
  local_28 = 0;
  local_2c = 0;
  puStack_13c = &LAB_00492d52;
  pcStack_140 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_140;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[1] != '\0') {
    iVar2 = FUN_00491c94((int)param_1,param_2,0);
    iVar2 = FUN_0045da14(iVar2);
    uVar3 = iVar2 - 1;
    uVar6 = extraout_ECX;
    piVar4 = extraout_EDX;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
      uVar6 = extraout_ECX_00;
      piVar4 = extraout_EDX_00;
    }
    if (-1 < (int)uVar3) {
      local_24 = uVar3 + 1;
      local_10 = 0;
      do {
        piVar4 = (int *)FUN_00491c94((int)local_8,piVar4,uVar6);
        sVar1 = FUN_0045db38(piVar4,local_10);
        local_14 = (int)sVar1;
        FUN_00494a28(local_c,local_14,'\0',&local_20,&local_18,&local_1c);
        if (local_18 != (int *)0x0) {
          FUN_00402fe0(*local_8,local_12c);
          FUN_00403fd4(&local_2c,local_12c);
          FUN_004040f0(&local_28,4);
          FUN_00403d94(local_28);
        }
        piVar4 = local_1c;
        iVar2 = (**(code **)(*local_1c + 0x10))();
        local_18 = (int *)(**(code **)(iVar2 + 0x10))(iVar2,1,local_c,piVar4);
        piVar4 = (int *)((int)*(short *)(local_20 + 2) + (int)local_c);
        uVar6 = extraout_ECX_01;
        if (SCARRY4((int)*(short *)(local_20 + 2),(int)local_c)) {
          piVar4 = (int *)thunk_FUN_00402874((uint)piVar4);
          uVar6 = extraout_ECX_02;
        }
        *piVar4 = (int)local_18;
        local_10 = local_10 + 1;
        local_24 = local_24 + -1;
        piVar4 = local_18;
      } while (local_24 != 0);
    }
    iVar2 = FUN_00491c94((int)local_8,piVar4,uVar6);
    iVar2 = FUN_0045da14(iVar2);
    uVar3 = iVar2 - 1;
    uVar6 = extraout_ECX_03;
    uVar7 = extraout_EDX_01;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
      uVar6 = extraout_ECX_04;
      uVar7 = extraout_EDX_02;
    }
    if (-1 < (int)uVar3) {
      local_24 = uVar3 + 1;
      local_10 = 0;
      do {
        piVar4 = (int *)FUN_00491c94((int)local_8,uVar7,uVar6);
        sVar1 = FUN_0045db38(piVar4,local_10);
        local_14 = (int)sVar1;
        local_18 = (int *)FUN_00494b98(local_c,local_14);
        if (local_18 == (int *)0x0) {
          FUN_00402fe0(*local_8,local_12c);
          FUN_00403fd4(&local_134,local_12c);
          pcStack_140 = " not created";
          FUN_004040f0(&local_130,4);
          FUN_00403d94(local_130);
        }
        uVar5 = FUN_0040320c(local_18,(int)&PTR_FUN_00474230);
        uVar6 = extraout_ECX_05;
        uVar7 = extraout_EDX_03;
        if ((char)uVar5 != '\0') {
          piVar4 = (int *)FUN_00403224(local_18,(int)&PTR_FUN_00474230);
          FUN_004744a0(piVar4);
          uVar6 = extraout_ECX_06;
          uVar7 = extraout_EDX_04;
        }
        local_10 = local_10 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  *in_FS_OFFSET = pcStack_140;
  puStack_138 = &LAB_00492d59;
  puStack_13c = (undefined1 *)0x492d44;
  FUN_00403dd4(&local_134,2);
  puStack_13c = (undefined1 *)0x492d51;
  FUN_00403dd4(&local_2c,2);
  return;
}

