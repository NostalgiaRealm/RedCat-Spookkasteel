/*
 * FUN_00533128 at 00533128
 * undefined __register FUN_00533128(int * param_1)
 * Address ranges: 00533128-00533388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00533128(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  byte local_12c [256];
  int local_2c;
  int local_28;
  _union_2683 local_24;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  local_24._0_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._8_4_ = 0;
  local_24._12_4_ = 0;
  puStack_138 = &LAB_00533389;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xa5] == 0) {
    FUN_00402fe0(*param_1,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    pcStack_148 = "Geen AppObjList aangesloten.";
    FUN_004040f0(&local_28,3);
    FUN_00403d94(local_28);
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  FUN_00404e28((VARIANT *)&local_24.n2,(VARIANTARG *)PTR_DAT_00572140);
  iVar3 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
  if (*(int *)(iVar3 + 0xc) == 0) {
    piVar4 = (int *)FUN_00549b64(local_8[0xa5]);
    uVar5 = FUN_0049206c(piVar4);
    iVar3 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
  }
  else {
    iVar3 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
    piVar4 = (int *)FUN_004949bc(*(int **)(iVar3 + 0xc));
    cVar2 = (**(code **)(*piVar4 + 0x4c))();
    if (cVar2 != '\0') {
      iVar3 = FUN_00403224((int *)local_8[0x8d],(int)&PTR_FUN_00531904);
      piVar4 = (int *)FUN_004949bc(*(int **)(iVar3 + 0xc));
      FUN_00496550(piVar4,(VARIANT *)&local_24.n2);
    }
  }
  iVar3 = FUN_00403224((int *)local_8[0x8f],(int)&PTR_FUN_00531904);
  if (*(int *)(iVar3 + 0xc) == 0) {
    piVar4 = (int *)FUN_00549b64(local_8[0xa5]);
    uVar5 = FUN_0049206c(piVar4);
    iVar3 = FUN_00403224((int *)local_8[0x8f],(int)&PTR_FUN_00531904);
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
  }
  piVar4 = (int *)FUN_00533c14((int)local_8);
  FUN_00528810(piVar4,(int *)local_8[0xa5]);
  if (*(char *)(local_8[0xa5] + 0x18) == '\0') {
    FUN_00549a28((int *)local_8[0xa5]);
  }
  iVar3 = (**(code **)(*(int *)local_8[0xa5] + 0xc))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)local_8[0xa5] + 0xc))();
    piVar4 = *(int **)(iVar3 + 4);
    puVar6 = (undefined4 *)FUN_00549b80(local_8[0xa5]);
    iVar3 = FUN_00402fdc(puVar6);
    iVar3 = FUN_004cecf8(piVar4,iVar3);
    local_8[0xa6] = iVar3;
  }
  piVar4 = (int *)FUN_00533c14((int)local_8);
  iVar3 = FUN_005286e0(piVar4);
  iVar3 = FUN_0051e160(iVar3);
  uVar7 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar7 = thunk_FUN_00402874(uVar7);
  }
  if (-1 < (int)uVar7) {
    local_10 = uVar7 + 1;
    local_c = 0;
    do {
      piVar4 = (int *)FUN_00533c14((int)local_8);
      iVar3 = FUN_005286e0(piVar4);
      iVar3 = FUN_00527084(iVar3,0);
      *(undefined1 *)(iVar3 + 5) = 0;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  (**(code **)(*local_8 + 0x144))(local_8,&local_24);
  *in_FS_OFFSET = pcStack_148;
  FUN_00403dd4(&local_2c,2);
  FUN_00405bcc((VARIANTARG *)&local_24.n2);
  return;
}

