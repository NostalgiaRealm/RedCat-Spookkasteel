/*
 * FUN_00506d44 at 00506d44
 * undefined __register FUN_00506d44(int * param_1, int * param_2)
 * Address ranges: 00506d44-00506fa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506d44(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char *pcVar6;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = (undefined4 *)0x0;
  local_2c = 0;
  local_30 = (undefined4 *)0x0;
  puStack_44 = &LAB_00506fa3;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_004fec0c(param_1,'\0');
  }
  else {
    puStack_40 = &stack0xfffffffc;
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004f8ee4);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(local_c,(int)&PTR_FUN_00504a1c);
      if ((char)uVar1 != '\0') {
        piVar2 = (int *)FUN_00496d84((int)local_c);
        local_20 = FUN_00403224(piVar2,(int)&PTR_FUN_0050499c);
        *(undefined1 *)(local_8 + 0x9f) = 0;
        FUN_005017f4(local_8,'\0');
        FUN_005071e4((int)local_8);
        iVar3 = (**(code **)(**(int **)(local_20 + 0x48) + 0x14))();
        uVar4 = iVar3 - 1;
        if (SBORROW4(iVar3,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        if (-1 < (int)uVar4) {
          local_1c = uVar4 + 1;
          local_10 = 0;
          do {
            local_11 = '\x01';
            FUN_00506c54((int)local_8,&local_28);
            if (local_28._2_2_ != 0) {
              pcVar6 = &local_11;
              FUN_00506c54((int)local_8,&local_28);
              (*local_28)(local_24,local_c,local_10,pcVar6);
            }
            if (local_11 != '\0') {
              (**(code **)(**(int **)(local_20 + 0x48) + 0xc))
                        (*(int **)(local_20 + 0x48),local_10,&local_38);
              FUN_004586fc('&',local_38,&local_34);
              iVar3 = local_34;
              piVar2 = FUN_00507268((int *)&DAT_0050558c,'\x01',local_10);
              piVar5 = (int *)FUN_0050421c((int)local_8);
              (**(code **)(*piVar5 + 0x38))(piVar5,iVar3,piVar2);
            }
            local_10 = local_10 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
    }
    else {
      piVar2 = (int *)FUN_00496d84((int)local_c);
      local_18 = FUN_00403224(piVar2,(int)&PTR_FUN_004f8e6c);
      FUN_005071e4((int)local_8);
      iVar3 = (**(code **)(**(int **)(local_18 + 0x34) + 0x14))();
      uVar4 = iVar3 - 1;
      if (SBORROW4(iVar3,1)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if (-1 < (int)uVar4) {
        local_1c = uVar4 + 1;
        local_10 = 0;
        do {
          local_11 = '\x01';
          FUN_00506c54((int)local_8,&local_28);
          if (local_28._2_2_ != 0) {
            pcVar6 = &local_11;
            FUN_00506c54((int)local_8,&local_28);
            (*local_28)(local_24,local_c,local_10,pcVar6);
          }
          if (local_11 != '\0') {
            (**(code **)(**(int **)(local_18 + 0x34) + 0xc))
                      (*(int **)(local_18 + 0x34),local_10,&local_30);
            FUN_004586fc('&',local_30,&local_2c);
            iVar3 = local_2c;
            piVar2 = FUN_00507268((int *)&DAT_0050558c,'\x01',local_10);
            piVar5 = (int *)FUN_0050421c((int)local_8);
            (**(code **)(*piVar5 + 0x38))(piVar5,iVar3,piVar2);
          }
          local_10 = local_10 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        local_1c = 0;
      }
    }
    iVar3 = FUN_00496d84((int)local_c);
    FUN_004fec0c(local_8,(*(byte *)(iVar3 + 0x18) & 0x20) != 0);
  }
  FUN_004f1924((undefined4 *)local_8[0xa0],(int)local_c);
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00506faa;
  puStack_44 = (undefined1 *)0x506fa2;
  FUN_00403dd4((int *)&local_38,4);
  return;
}

