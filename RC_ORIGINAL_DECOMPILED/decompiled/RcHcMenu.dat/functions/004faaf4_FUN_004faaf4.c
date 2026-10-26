/*
 * FUN_004faaf4 at 004faaf4
 * undefined __register FUN_004faaf4(int param_1)
 * Address ranges: 004faaf4-004fac19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f9f8c slot 0 for TOAFKComboBoxInterface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f9f8c slot 0 for
   TOAFKComboBoxInterface. Original bytes unchanged; names and types still inferred. */

void FUN_004faaf4(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ULONG *in_FS_OFFSET;
  VARIANT local_2c;
  _union_2683 local_1c;
  int *local_c;
  int local_8;
  
  local_1c._12_4_ = &stack0xfffffffc;
  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c._8_4_ = &LAB_004fac1a;
  local_1c.decVal.Hi32 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_1c.n2.wReserved2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) == 0) goto LAB_004fabf9;
  local_1c._0_4_ = 0x4fab32;
  local_c = (int *)FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_004fa08c);
  local_1c._0_4_ = 0x4fab3d;
  bVar1 = FUN_00543114((int)local_c);
  if (bVar1) {
    local_1c._0_4_ = 0x4fab4c;
    cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x4c))();
    if (cVar2 != '\0') {
      local_1c._0_4_ = 0x4fab5b;
      cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar2 != '\0') {
        local_1c._0_4_ = 0x4fab6c;
        bVar1 = FUN_00405c2c((short *)(local_c + 0xa2));
        if (!bVar1) goto LAB_004fab70;
LAB_004faba0:
        local_1c._0_4_ = 0x4faba8;
        FUN_00542de4(local_c);
        goto LAB_004fabf9;
      }
LAB_004fab70:
      local_1c._0_4_ = 0x4fab7b;
      cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar2 == '\0') {
        local_1c._0_4_ = 0x4fab8d;
        FUN_00496550(*(int **)(local_8 + 0xc),(VARIANT *)&local_1c.n2);
        bVar1 = (VARIANTARG *)(local_c + 0xa2) == (VARIANTARG *)0x0;
        local_1c._0_4_ = 0x4fab9e;
        FUN_00405abc((VARIANTARG *)&local_1c.n2,(VARIANTARG *)(local_c + 0xa2));
        if (bVar1) goto LAB_004faba0;
      }
    }
  }
  local_1c._0_4_ = 0x4fabb2;
  uVar3 = FUN_00543188((int)local_c);
  if ((char)uVar3 == '\0') {
    local_1c._0_4_ = 0x4fabc1;
    cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x4c))();
    if (cVar2 != '\0') {
      local_1c._0_4_ = 0x4fabd0;
      cVar2 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar2 == '\0') {
        local_1c._0_4_ = 0x4fabe2;
        FUN_00496550(*(int **)(local_8 + 0xc),&local_2c);
        local_1c._0_4_ = 0x4fabed;
        FUN_00542e40(local_c,(undefined4 *)&local_2c);
        goto LAB_004fabf9;
      }
    }
    local_1c._0_4_ = 0x4fabf9;
    FUN_00541e48((int)local_c,(uint *)0x0);
  }
LAB_004fabf9:
  *in_FS_OFFSET = local_1c.decVal.Hi32;
  local_1c._12_4_ = &LAB_004fac21;
  local_1c._8_4_ = 0x4fac19;
  FUN_00404878(&local_2c,&DAT_00401108,2);
  return;
}

