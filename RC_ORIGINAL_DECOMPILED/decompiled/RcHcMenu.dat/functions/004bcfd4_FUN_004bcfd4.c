/*
 * FUN_004bcfd4 at 004bcfd4
 * undefined __register FUN_004bcfd4(int * param_1, int * param_2)
 * Address ranges: 004bcfd4-004bd0bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 26 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 26 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bcfd4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_18 = 0;
  puStack_20 = &LAB_004bd0bd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e04(param_2,(undefined4 *)"SQL:\r\n");
  FUN_004040f0(local_c,3);
  iVar1 = FUN_004d68f0((int)local_8);
  if (0 < iVar1) {
    FUN_00404038(local_c,(undefined4 *)"Parameters:\r\n");
  }
  iVar1 = FUN_004d68f0((int)local_8);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      FUN_004d6728(local_8,local_10);
      iVar1 = FUN_004d6728(local_8,local_10);
      FUN_004d4e7c(iVar1,&local_18);
      FUN_004040f0(local_c,6);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = &DAT_004bd0e0;
  FUN_00403db0(&local_18);
  return;
}

