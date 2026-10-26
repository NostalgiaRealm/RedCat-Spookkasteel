/*
 * FUN_004f09e0 at 004f09e0
 * undefined __register FUN_004f09e0(int * param_1, int param_2)
 * Address ranges: 004f09e0-004f0b5d;004f0c35-004f0c6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f09e0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  bool bVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  int local_18;
  byte local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_28 = 0;
  local_34 = 0;
  local_8 = (int *)0x0;
  puStack_48 = &LAB_004f0c98;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  local_10 = param_2;
  local_c = param_1;
  if ((param_2 == 0) || (puVar1 = &stack0xfffffffc, param_1 == (int *)0x0)) {
    FUN_00403d94("OAC_DoValidateControls2:  Parameter cannot be nil");
    puVar1 = puStack_44;
  }
  puStack_44 = puVar1;
  local_11 = 1;
  local_20 = FUN_00493cac(local_10);
  local_24 = (int *)FUN_00403064((int *)&PTR_FUN_004f0718,'\x01',extraout_ECX);
  puVar11 = (undefined4 *)&LAB_004f0c6b;
  iVar10 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffa8;
  FUN_004f075c(local_24,local_c,'\0');
  local_18 = 0;
  while ((local_18 < local_24[2] & local_11) != 0) {
    piVar3 = (int *)FUN_004f0738(local_24,local_18);
    piVar4 = FUN_00406aa0((int *)&local_8);
    uVar5 = FUN_00403128(piVar3,(int *)&DAT_004f0d10,piVar4);
    if ((char)uVar5 != '\0') {
      iVar6 = (**(code **)(*local_8 + 0x3c))();
      uVar5 = 0;
      if (iVar6 != 0) {
        iVar6 = (**(code **)(*local_8 + 0x3c))();
        uVar5 = FUN_00495ec0(iVar6);
        if (uVar5 == local_20) {
          piVar4 = (int *)&LAB_004f0b5e;
          iVar6 = *in_FS_OFFSET;
          *in_FS_OFFSET = (int)&stack0xffffff9c;
          puVar9 = (undefined4 *)&stack0xfffffffc;
          piVar3 = (int *)(**(code **)(*local_8 + 0x6c))();
          cVar2 = (**(code **)(*piVar3 + 8))();
          if (cVar2 == '\0') {
            piVar3 = (int *)(**(code **)(*local_8 + 0x3c))();
            cVar2 = (**(code **)(*piVar3 + 0x4c))();
            if (cVar2 == '\0') {
              piVar3 = &local_28;
              iVar6 = (**(code **)(*local_8 + 0x3c))();
              iVar6 = FUN_00496d84(iVar6);
              local_30 = *(undefined4 *)(iVar6 + 0x24);
              local_2c = 0xb;
              FUN_0040a894((byte *)" Field \'%s\' cannot be nil",&local_30,0,piVar3);
              iVar6 = (**(code **)(*local_8 + 0x3c))();
              FUN_004b632c(iVar6,&local_34);
              iVar6 = (**(code **)(*local_8 + 0x3c))();
              uVar7 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',(undefined4 *)0x0,iVar6,piVar4,
                                   puVar9,iVar10,puVar11);
              FUN_0040382c(uVar7);
            }
          }
          uVar5 = 0;
          *in_FS_OFFSET = iVar6;
        }
      }
    }
    bVar8 = SCARRY4(local_18,1);
    local_18 = local_18 + 1;
    if (bVar8) {
      thunk_FUN_00402874(uVar5);
    }
  }
  *in_FS_OFFSET = iVar10;
  FUN_00403094(local_24);
  return;
}

