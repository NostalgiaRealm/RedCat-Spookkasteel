/*
 * FUN_004a474c at 004a474c
 * undefined __register FUN_004a474c(uint param_1, int param_2, byte param_3, int param_4)
 * Address ranges: 004a474c-004a4832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a474c(uint param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_40;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18 [2];
  byte local_d;
  int local_c;
  uint local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  for (iVar2 = param_4 * 2 + 1; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  puStack_28 = (undefined1 *)0x4a4785;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_2c = &LAB_004a4833;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_28 = &stack0xfffffffc;
    FUN_00403d94(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(local_8 + 0xc) != '\0') {
    FUN_004a4500((int)&stack0xffffffdc,param_4);
    if ((local_d & 1) != 0) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    puStack_40 = &DAT_004a48b4;
    FUN_004040f0(local_18,4);
    FUN_004a4324(local_8,0x49,local_18[0]);
    if ((local_d & 2) == 0) {
      piVar1 = (int *)(local_8 + 0x10);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(local_8);
      }
    }
  }
  *in_FS_OFFSET = puStack_40;
  FUN_00403dd4(local_18,2);
  FUN_00403db0(&local_c);
  return;
}

