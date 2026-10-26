/*
 * FUN_0052fde8 at 0052fde8
 * undefined __register FUN_0052fde8(int * param_1)
 * Address ranges: 0052fde8-0053018f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 62 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 62 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0052fde8(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_128;
  int local_124 [3];
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_124[0] = 0;
  local_128 = 0;
  local_124[2] = 0;
  local_124[1] = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_130 = &LAB_00530190;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xb2] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_140 = "AppObjDesc not assigned.";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar2 = puStack_12c;
  }
  puStack_12c = puVar2;
  if (local_8[0xb8] == 0) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(local_124 + 1,local_118);
    FUN_004040f0(local_124 + 2,3);
    FUN_00403d94(local_124[2]);
  }
  if (local_8[0xa5] == 0) {
    cVar1 = *(char *)((int)local_8 + 0x2d9);
    if (cVar1 == '\0') {
      piVar3 = FUN_00547230((int *)&PTR_FUN_0052b7f4,'\x01',local_8[0xba],local_8[0xb8]);
      local_8[0xb5] = (int)piVar3;
    }
    else if (cVar1 == '\x01') {
      piVar3 = FUN_00547230((int *)&PTR_FUN_0054580c,'\x01',local_8[0xba],local_8[0xb8]);
      local_8[0xb5] = (int)piVar3;
    }
    else if (cVar1 == '\x02') {
      piVar3 = FUN_00547230((int *)&LAB_0053b55c,'\x01',local_8[0xba],local_8[0xb8]);
      local_8[0xb5] = (int)piVar3;
    }
    else if (cVar1 == '\x03') {
      piVar3 = FUN_00547230((int *)&PTR_FUN_004e310c,'\x01',local_8[0xba],local_8[0xb8]);
      local_8[0xb5] = (int)piVar3;
    }
    else {
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4(&local_128,local_118);
      FUN_004040f0(local_124,3);
      FUN_00403d94(local_124[0]);
    }
    piVar3 = FUN_005471e0((int *)&PTR_FUN_004e310c,'\x01',local_8[0xba]);
    local_8[0xb4] = (int)piVar3;
    piVar3 = FUN_00529e04((int *)&PTR_FUN_00529d00,'\x01',local_8[0xba],local_8[0xb5],local_8[0xb4])
    ;
    FUN_00532f2c((int)local_8,(int)piVar3);
    iVar4 = FUN_00403224((int *)local_8[0xa5],(int)&PTR_FUN_00529d00);
    *(int **)(iVar4 + 0x94) = local_8;
    *(code **)(iVar4 + 0x90) = FUN_005308d4;
    iVar4 = FUN_00403224((int *)local_8[0xa5],(int)&PTR_FUN_00529d00);
    *(int **)(iVar4 + 0x9c) = local_8;
    *(code **)(iVar4 + 0x98) = FUN_00530934;
    FUN_0054a14c((int *)local_8[0xa5],(int *)local_8[0xb7]);
    FUN_0054a030((int *)local_8[0xa5],(char)local_8[0xb9]);
    FUN_00549a28((int *)local_8[0xb4]);
    uVar5 = *(int *)(local_8[0xb3] + 8) - 1;
    if (SBORROW4(*(int *)(local_8[0xb3] + 8),1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if (-1 < (int)uVar5) {
      local_10 = uVar5 + 1;
      local_c = 0;
      do {
        FUN_00548f9c((int *)local_8[0xb4]);
        puVar6 = (undefined4 *)FUN_00412384((undefined4 *)local_8[0xb3],local_c);
        piVar3 = (int *)*puVar6;
        piVar7 = (int *)FUN_00549b80(local_8[0xb4]);
        FUN_00493768(piVar7,piVar3);
        FUN_00549504((int *)local_8[0xb4]);
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  FUN_00533128(local_8);
  *in_FS_OFFSET = pcStack_140;
  FUN_00403dd4(&local_128,4);
  FUN_00403dd4(&local_18,2);
  return;
}

