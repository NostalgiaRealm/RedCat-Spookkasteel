/*
 * FUN_0056974c at 0056974c
 * undefined __register FUN_0056974c(int * param_1, int param_2)
 * Address ranges: 0056974c-00569971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056974c(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcVar8;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 *local_138;
  int local_134;
  byte *local_130;
  undefined4 *local_12c;
  int local_128;
  undefined4 *local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_138 = (undefined4 *)0x0;
  local_134 = 0;
  local_130 = (byte *)0x0;
  local_12c = (undefined4 *)0x0;
  local_128 = 0;
  local_124 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_10 = (undefined4 *)0x0;
  puStack_140 = &LAB_00569972;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_14 = 0;
  local_18 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_120);
  FUN_00403fd4(&local_20,local_120);
  pcVar8 = "DeletePlayer";
  FUN_004040f0(&local_1c,3);
  iVar7 = local_1c;
  uVar2 = FUN_004a418c();
  FUN_004a474c(uVar2,iVar7,0,(int)pcVar8);
  FUN_004b0344(local_c,(int *)&local_124);
  FUN_0040407c((int *)&local_10,(undefined4 *)local_8[0x44],local_124);
  uVar3 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar3 != '\0') {
    bVar1 = FUN_00409eec((undefined *)local_10);
    if (!bVar1) {
      FUN_0040407c(&local_128,(undefined4 *)"failed to delete ",local_10);
      iVar7 = local_128;
      iVar4 = FUN_004a418c();
      FUN_004a4bf4(iVar4,iVar7);
      FUN_0040407c((int *)&local_12c,(undefined4 *)"failed to delete ",local_10);
      piVar5 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_12c);
      FUN_0040382c(piVar5);
    }
  }
  pcVar8 = "Player%d.ini";
  FUN_004040f0((int *)&local_130,3);
  iVar7 = local_c + 1;
  pbVar6 = local_130;
  if (SCARRY4(local_c,1)) {
    pbVar6 = (byte *)thunk_FUN_00402874((uint)local_130);
    iVar7 = extraout_EDX;
  }
  local_14 = 0;
  local_18 = iVar7;
  FUN_0040a894(pbVar6,&local_18,0,(int *)pcVar8);
  uVar3 = FUN_00409dd0((undefined *)local_10);
  if ((char)uVar3 != '\0') {
    bVar1 = FUN_00409eec((undefined *)local_10);
    if (!bVar1) {
      FUN_0040407c(&local_134,(undefined4 *)"failed to delete ",local_10);
      iVar7 = local_134;
      iVar4 = FUN_004a418c();
      FUN_004a4bf4(iVar4,iVar7);
      FUN_0040407c((int *)&local_138,(undefined4 *)"failed to delete ",local_10);
      piVar5 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',local_138);
      FUN_0040382c(piVar5);
    }
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Settings\\";
  FUN_00403dd4((int *)&local_138,6);
  FUN_00403dd4(&local_20,2);
  FUN_00403db0((int *)&local_10);
  return;
}

