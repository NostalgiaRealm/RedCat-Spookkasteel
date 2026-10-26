/*
 * FUN_00530cc4 at 00530cc4
 * undefined __register FUN_00530cc4(int * param_1)
 * Address ranges: 00530cc4-00530ed5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00530cc4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar5;
  
  iVar1 = FUN_0045ba40(param_1[0x82]);
  if (0 < iVar1) {
    piVar2 = FUN_00455cc8((int *)&PTR_FUN_004544a8,'\x01',param_1);
    (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
    piVar3 = (int *)FUN_0045bac8(param_1[0x82]);
    iVar1 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
    iVar1 = *(int *)(iVar1 + 0x30);
    piVar3 = (int *)FUN_0045bac8(param_1[0x82]);
    uVar4 = FUN_00403224(piVar3,(int)&PTR_FUN_004fdb04);
    iVar5 = iVar1 + *(int *)(uVar4 + 0x38);
    if (SCARRY4(iVar1,*(int *)(uVar4 + 0x38))) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    iVar1 = iVar5 + 1;
    if (SCARRY4(iVar5,1)) {
      thunk_FUN_00402874(uVar4);
      iVar1 = extraout_EDX;
    }
    FUN_00431f34(piVar2,iVar1);
    FUN_00431d2c(piVar2,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),3),extraout_ECX);
    *(undefined1 *)(piVar2 + 0x4b) = 0;
    FUN_004566c4(piVar2,1);
    FUN_00431f78(piVar2,2);
    piVar2[0x52] = 10;
    *(undefined1 *)(piVar2 + 0x5a) = 2;
    FUN_0043262c(piVar2,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_00);
    piVar2[0x5f] = (int)param_1;
    piVar2[0x5e] = (int)&LAB_00531704;
    (**(code **)(*(int *)param_1[0x83] + 0xc))((int *)param_1[0x83],piVar2);
  }
  piVar2 = FUN_004fe36c((int *)&PTR_FUN_004fdb04,'\x01',param_1);
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
  iVar1 = FUN_0045ba40(param_1[0x83]);
  if (iVar1 < 1) {
    FUN_00431f34(piVar2,0);
  }
  else {
    piVar3 = (int *)FUN_0045bac8(param_1[0x83]);
    iVar1 = FUN_00403224(piVar3,(int)&PTR_FUN_004544a8);
    iVar1 = *(int *)(iVar1 + 0x30);
    piVar3 = (int *)FUN_0045bac8(param_1[0x83]);
    uVar4 = FUN_00403224(piVar3,(int)&PTR_FUN_004544a8);
    iVar5 = iVar1 + *(int *)(uVar4 + 0x38);
    if (SCARRY4(iVar1,*(int *)(uVar4 + 0x38))) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    iVar1 = iVar5 + 1;
    if (SCARRY4(iVar5,1)) {
      thunk_FUN_00402874(uVar4);
      iVar1 = extraout_EDX_02;
    }
    FUN_00431f34(piVar2,iVar1);
  }
  iVar1 = piVar2[0x84];
  FUN_004c554c(iVar1,0x80000005);
  FUN_004c5570(iVar1,0x80000005);
  FUN_004c55b8(iVar1,0x80000005);
  FUN_004c5594(iVar1,0x80000005);
  FUN_00431d2c(piVar2,CONCAT31((int3)((uint)extraout_EDX_03 >> 8),3),extraout_ECX_01);
  FUN_00432858((int)piVar2,'\x01');
  FUN_00431f78(piVar2,0x19);
  FUN_0043262c(piVar2,CONCAT31((int3)((uint)extraout_EDX_04 >> 8),1),extraout_ECX_02);
  (**(code **)(*(int *)param_1[0x82] + 0xc))((int *)param_1[0x82],piVar2);
  return;
}

