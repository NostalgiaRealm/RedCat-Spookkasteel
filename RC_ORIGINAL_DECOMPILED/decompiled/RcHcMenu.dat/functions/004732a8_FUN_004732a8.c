/*
 * FUN_004732a8 at 004732a8
 * undefined __register FUN_004732a8(int param_1)
 * Address ranges: 004732a8-00473325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 92 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 92 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004732a8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_1c;
  int local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_1c._12_4_ = 0;
  local_1c._8_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._0_4_ = 0;
  puStack_2c = &LAB_00473326;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  iVar1 = FUN_00471d88(param_1);
  if (-1 < iVar1 + -1) {
    local_c = 0;
    do {
      piVar2 = (int *)FUN_00468730(*(int *)(local_8 + 0x24),local_c);
      if (*(char *)((int)piVar2 + 0x36) == '\x03') {
        (**(code **)(*piVar2 + 0x5c))(piVar2,&local_1c);
        (**(code **)(*piVar2 + 0xa4))(piVar2,&local_1c);
      }
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0047332d;
  puStack_2c = (undefined1 *)0x473325;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

