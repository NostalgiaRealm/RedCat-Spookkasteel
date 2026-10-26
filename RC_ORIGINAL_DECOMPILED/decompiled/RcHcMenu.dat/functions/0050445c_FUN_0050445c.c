/*
 * FUN_0050445c at 0050445c
 * undefined __register FUN_0050445c(int * param_1, uint * param_2, int * param_3)
 * Address ranges: 0050445c-005045dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 71 for TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 71 for
   TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_0050445c(int *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  uint *local_2c;
  byte *local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char local_11;
  int *local_10;
  uint *local_c;
  int *local_8;
  
  local_2c = (uint *)0x0;
  local_28 = (byte *)0x0;
  local_1c = (char *)0x0;
  local_20 = (char *)0x0;
  puStack_34 = (undefined1 *)0x504482;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_38 = &LAB_005045de;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_11 = '\0';
  if (local_c == (uint *)0x0) {
    local_11 = '\x01';
    puStack_34 = &stack0xfffffffc;
    iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_00503898);
    FUN_00503c58(iVar2,(uint *)0x0);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    piVar3 = (int *)FUN_0050423c((int)local_8);
    piVar3 = (int *)FUN_00502bdc(piVar3);
    iVar2 = (**(code **)(*piVar3 + 0x14))();
    uVar4 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_24 = uVar4 + 1;
      local_18 = 0;
      do {
        piVar3 = (int *)FUN_0050423c((int)local_8);
        piVar3 = (int *)FUN_00502bdc(piVar3);
        (**(code **)(*piVar3 + 0xc))(piVar3,local_18,&local_28);
        FUN_00409690(local_28,(int *)&local_1c);
        FUN_00409690((byte *)local_c,(int *)&local_20);
        iVar2 = FUN_0040431c(local_20,local_1c);
        if (iVar2 == 1) {
          local_11 = '\x01';
          piVar3 = (int *)FUN_0050423c((int)local_8);
          piVar3 = (int *)FUN_00502bdc(piVar3);
          (**(code **)(*piVar3 + 0xc))(piVar3,local_18,&local_2c);
          puVar1 = local_2c;
          iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_00503898);
          FUN_00503c58(iVar2,puVar1);
          iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_00503898);
          FUN_00503cf0(iVar2,local_18);
          break;
        }
        local_18 = local_18 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    if (local_11 == '\0') {
      iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_00503898);
      FUN_00503c58(iVar2,local_c);
      if ((char)local_8[0x91] == '\0') {
        FUN_005041e4(local_8,-1);
      }
    }
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005045e5;
  puStack_38 = (undefined1 *)0x5045c8;
  FUN_00403dd4((int *)&local_2c,2);
  puStack_38 = (undefined1 *)0x5045d5;
  FUN_00403dd4((int *)&local_20,2);
  puStack_38 = (undefined1 *)0x5045dd;
  FUN_00403db0((int *)&local_c);
  return;
}

