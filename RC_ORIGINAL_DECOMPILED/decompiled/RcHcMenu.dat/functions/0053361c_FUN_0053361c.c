/*
 * FUN_0053361c at 0053361c
 * undefined __register FUN_0053361c(int param_1, byte * param_2, int * param_3)
 * Address ranges: 0053361c-005337e1;0053382e-00533843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053361c(int param_1,byte *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int *local_18;
  char local_11;
  int *local_10;
  byte *local_c;
  int local_8;
  
  puStack_2c = (undefined1 *)0x533636;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_30 = &LAB_00533844;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  puStack_38 = (undefined1 *)0x533652;
  puStack_2c = &stack0xfffffffc;
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
  if (*(int *)(iVar1 + 0xc) == 0) {
    puStack_38 = (undefined1 *)0x533666;
    piVar2 = (int *)FUN_00549b64(*(int *)(local_8 + 0x294));
    puStack_38 = (undefined1 *)0x53366b;
    uVar3 = FUN_0049206c(piVar2);
    puStack_38 = (undefined1 *)0x53367b;
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  if (local_c == (byte *)0x0) {
    local_11 = '\x01';
    puStack_38 = (undefined1 *)0x533696;
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    puStack_38 = (undefined1 *)0x53369e;
    FUN_00494398(*(int **)(iVar1 + 0xc));
    puStack_38 = (undefined1 *)0x5336ac;
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
    puStack_38 = (undefined1 *)0x5336c1;
    iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
    puStack_38 = (undefined1 *)0x5336c6;
    FUN_00501074(iVar1);
  }
  else {
    puStack_3c = &LAB_005337e2;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    local_11 = FUN_00532f9c(local_8,local_c);
    if (local_11 == '\0') {
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      FUN_00494340(*(int **)(iVar1 + 0xc));
      iVar1 = FUN_00549b48(*(int *)(local_8 + 0x294));
      iVar1 = FUN_0048ec24(*(int *)(iVar1 + 0x10));
      if (iVar1 == 1) {
        puVar5 = &local_1c;
        ppiVar4 = &local_18;
        iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
        FUN_00494e38(*(int **)(iVar1 + 0xc),(byte *)(local_8 + 0x278),'\x01',ppiVar4,puVar5);
        (**(code **)(*local_18 + 0x38))(local_18,local_c);
      }
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      FUN_00501050(iVar1);
    }
    else {
      piVar2 = (int *)FUN_00549b80(*(int *)(local_8 + 0x294));
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      FUN_0053282c(iVar1,piVar2);
      piVar2 = (int *)FUN_00533c14(local_8);
      iVar1 = FUN_005285b8(piVar2);
      uVar3 = FUN_00523748(iVar1);
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00531904);
      FUN_00501050(iVar1);
    }
    *in_FS_OFFSET = uStack_40;
  }
  *in_FS_OFFSET = local_34;
  puStack_2c = &LAB_0053384b;
  puStack_30 = (undefined1 *)0x533843;
  FUN_00403db0((int *)&local_c);
  return;
}

