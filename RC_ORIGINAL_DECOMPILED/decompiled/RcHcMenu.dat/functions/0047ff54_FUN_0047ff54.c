/*
 * FUN_0047ff54 at 0047ff54
 * undefined __register FUN_0047ff54(int param_1, char param_2, uint param_3)
 * Address ranges: 0047ff54-0048020e;00480216-00480243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047ff54(int param_1,char param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  short sVar6;
  short sVar7;
  int *in_FS_OFFSET;
  undefined1 *puVar8;
  undefined4 **ppuVar9;
  int iVar10;
  undefined2 uVar11;
  int iStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined4 in_stack_ffffff24;
  undefined4 in_stack_ffffff28;
  byte *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  uint local_a4;
  undefined1 local_a0;
  byte *local_9c;
  undefined4 *local_98;
  char local_94 [128];
  int local_14;
  undefined1 local_d;
  int local_c;
  int *local_8;
  uint uVar12;
  
  puVar8 = &stack0xfffffffc;
  local_bc = (undefined4 *)0x0;
  local_c0 = (byte *)0x0;
  local_b8 = (undefined4 *)0x0;
  local_b0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = (undefined *)0x0;
  local_98 = (undefined4 *)0x0;
  local_9c = (byte *)0x0;
  local_d = 0;
  if (param_2 != '\0') {
    puStack_e0 = (undefined1 *)0x47ffa4;
    param_1 = FUN_004033d4(param_1,param_2,param_3,in_stack_ffffff24,in_stack_ffffff28);
    param_3 = extraout_ECX;
    local_d = extraout_DL;
  }
  puStack_e4 = &LAB_00480244;
  iStack_e8 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_e8;
  puStack_e0 = &stack0xfffffffc;
  local_c = param_1;
  FUN_0047f88c('\x01');
  uVar2 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  *(undefined4 *)(local_c + 0xc) = uVar2;
  iVar3 = FUN_0047f0a8();
  bVar1 = FUN_00480bd4(iVar3);
  sVar7 = (short)param_3;
  if ((!bVar1) && (sVar7 != 0x2f01)) {
    ppuVar9 = &local_98;
    FUN_00406a48((undefined4 *)PTR_PTR_00572218,(int *)&local_9c);
    local_a4 = param_3 & 0xffff;
    local_a0 = 0;
    FUN_0040a894(local_9c,&local_a4,0,(int *)ppuVar9);
    FUN_00403e04((int *)(local_c + 4),local_98);
    iVar3 = 0;
    pcVar4 = FUN_004041f4(*(undefined **)(local_c + 4));
    FUN_0047fe54((int *)&DAT_0047d368,'\x01',local_c,pcVar4,iVar3,(short)param_3);
    *in_FS_OFFSET = iStack_e8;
    puStack_e0 = &LAB_0048024b;
    puStack_e4 = (undefined1 *)0x480233;
    FUN_00403dd4((int *)&local_c0,7);
    puStack_e4 = (undefined1 *)0x480243;
    FUN_00403dd4((int *)&local_9c,2);
    return;
  }
  iVar3 = 0;
  uVar12 = param_3;
  FUN_0047fee4(param_3,(int *)&local_a8);
  uVar11 = (undefined2)uVar12;
  pcVar4 = FUN_004041f4(local_a8);
  FUN_0047fe54((int *)&DAT_0047d368,'\x01',local_c,pcVar4,iVar3,uVar11);
  local_8 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_01);
  *in_FS_OFFSET = (int)&stack0xffffff0c;
  if (sVar7 != 0x2ec4) {
    iVar3 = FUN_004802c4(local_c,0);
    FUN_0047feb8(*(int *)(iVar3 + 0xc),extraout_EDX,extraout_ECX_02,(int)puVar8);
  }
  iVar3 = 1;
  while( true ) {
    pcVar4 = local_94;
    piVar5 = &local_14;
    iVar10 = iVar3;
    uVar2 = thunk_FUN_0047990b(piVar5);
    sVar6 = (short)uVar2;
    if ((sVar6 == 0) || (sVar6 == 0x2a06)) break;
    FUN_0047fe54((int *)&DAT_0047d368,'\x01',local_c,local_94,local_14,sVar6);
    if ((local_14 == 0) && (sVar7 != 0x2ec4)) {
      puVar8 = &stack0xfffffffc;
      FUN_0047fee4(uVar2,&local_ac);
      FUN_0047feb8(local_ac,extraout_EDX_00,extraout_ECX_03,(int)puVar8);
    }
    puVar8 = &stack0xfffffffc;
    FUN_00403fe0(&local_b4,local_94,0x80);
    FUN_00409924(local_b4,&local_b0);
    FUN_0047feb8(local_b0,extraout_EDX_01,extraout_ECX_04,(int)puVar8);
    iVar3 = iVar3 + 1;
  }
  (**(code **)(*local_8 + 0x1c))(local_8,&local_b8,*local_8,iVar10,piVar5,pcVar4);
  FUN_00403e04((int *)(local_c + 4),local_b8);
  if (*(int *)(local_c + 4) == 0) {
    ppuVar9 = &local_bc;
    FUN_00406a48((undefined4 *)PTR_PTR_00572548,(int *)&local_c0);
    local_a4 = param_3 & 0xffff;
    local_a0 = 0;
    FUN_0040a894(local_c0,&local_a4,0,(int *)ppuVar9);
    FUN_00403e04((int *)(local_c + 4),local_bc);
  }
  else {
    piVar5 = (int *)(local_c + 4);
    iVar3 = FUN_00404030(*(int *)(local_c + 4));
    FUN_00404238(*(int *)(local_c + 4),1,iVar3 - 2,piVar5);
  }
  *in_FS_OFFSET = iVar10;
  FUN_00403094(local_8);
  return;
}

