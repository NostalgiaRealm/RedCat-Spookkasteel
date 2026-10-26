/*
 * FUN_005065d4 at 005065d4
 * undefined __register FUN_005065d4(int * param_1)
 * Address ranges: 005065d4-00506895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50551c slot 1 for TOAComboBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50551c slot 1 for
   TOAComboBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_005065d4(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  int in_stack_fffffe94;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 **ppuVar7;
  char *pcVar8;
  int iStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int local_14c;
  byte local_148 [256];
  undefined4 *local_48;
  int local_44;
  undefined1 local_40;
  byte *local_3c;
  undefined4 *local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  undefined1 local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_14c = 0;
  local_48 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_3c = (byte *)0x0;
  local_30 = 0;
  local_34 = (byte *)0x0;
  local_1c = 0;
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  puStack_154 = &LAB_00506896;
  iStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_158;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[3] != 0) {
    iVar2 = FUN_00403224((int *)param_1[2],(int)&PTR_FUN_00505868);
    FUN_005017d8(iVar2,&local_1c);
    if (local_1c == 0) {
      FUN_004f1368((int)local_8,(int *)local_8[3]);
      puVar1 = puStack_150;
    }
    else {
      uVar3 = FUN_0040320c((int *)local_8[3],(int)&PTR_FUN_00504a1c);
      if ((char)uVar3 == '\0') {
        iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
        FUN_005042f4(iVar2,&local_14c);
        (**(code **)(*(int *)local_8[3] + 0x38))((int *)local_8[3],local_14c);
        puVar1 = puStack_150;
      }
      else {
        iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
        local_c = FUN_005041b8(iVar2);
        if (local_c == -1) {
          iVar2 = FUN_00496d84(local_8[3]);
          FUN_004586fc('&',*(undefined4 **)(iVar2 + 0x20),&local_14);
          ppuVar7 = &local_18;
          local_2c = local_14;
          local_28 = 0xb;
          iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
          FUN_005017d8(iVar2,&local_30);
          local_24 = local_30;
          local_20 = 0xb;
          piVar4 = &local_2c;
          FUN_00406a48(&PTR_DAT_005065c4,(int *)&local_34);
          FUN_0040a894(local_34,piVar4,1,(int *)ppuVar7);
          FUN_00404038((int *)&local_18,(undefined4 *)&DAT_005068ac);
          ppuVar7 = &local_38;
          FUN_00406a48(&PTR_DAT_005065cc,(int *)&local_3c);
          local_44 = local_14;
          local_40 = 0xb;
          FUN_0040a894(local_3c,&local_44,0,(int *)ppuVar7);
          FUN_00404038((int *)&local_18,local_38);
          pcVar8 = ".DoCopyDataToAppProp: ";
          pcVar6 = "Selected item doesn\'t exist";
          puVar5 = local_18;
          iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
          iVar2 = FUN_00506d24(iVar2);
          piVar4 = (int *)FUN_00495ee0(iVar2);
          iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
          in_stack_fffffe94 = FUN_00506d24(iVar2);
          FUN_00402fe0(*local_8,local_148);
          FUN_00403fd4((int *)&local_48,local_148);
          uVar3 = FUN_004905f8((int *)&DAT_005054c0,'\x01',local_48,in_stack_fffffe94,piVar4,puVar5,
                               (int)pcVar6,(undefined4 *)pcVar8);
          FUN_0040382c(uVar3);
          puVar1 = puStack_150;
        }
        else {
          iVar2 = FUN_00403224((int *)local_8[2],(int)&PTR_FUN_00505868);
          piVar4 = (int *)FUN_0050421c(iVar2);
          local_10 = (int *)(**(code **)(*piVar4 + 0x18))(piVar4,local_c);
          if (local_10 != (int *)0x0) {
            uVar3 = FUN_0040320c(local_10,(int)&DAT_0050558c);
            if ((char)uVar3 != '\0') {
              iVar2 = FUN_00403224(local_10,(int)&DAT_0050558c);
              uVar3 = *(undefined4 *)(iVar2 + 4);
              piVar4 = (int *)FUN_00403224((int *)local_8[3],(int)&PTR_FUN_00504a1c);
              FUN_00505018(piVar4,uVar3);
              puVar1 = puStack_150;
              goto LAB_0050684b;
            }
          }
          FUN_004f1368((int)local_8,(int *)local_8[3]);
          puVar1 = puStack_150;
        }
      }
    }
  }
LAB_0050684b:
  puStack_150 = puVar1;
  *in_FS_OFFSET = in_stack_fffffe94;
  FUN_00403db0(&local_14c);
  FUN_00403db0((int *)&local_48);
  FUN_00403dd4((int *)&local_3c,3);
  FUN_00403db0(&local_30);
  FUN_00403db0(&local_1c);
  FUN_00403dd4((int *)&local_18,2);
  return;
}

