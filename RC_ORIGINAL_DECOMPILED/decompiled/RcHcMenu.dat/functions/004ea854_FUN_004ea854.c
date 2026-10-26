/*
 * FUN_004ea854 at 004ea854
 * undefined __register FUN_004ea854(int param_1, int * param_2)
 * Address ranges: 004ea854-004ea9b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 26 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 26 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004ea854(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = (undefined1 *)0x0;
  puStack_28 = &LAB_004ea9b5;
  puStack_2c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e04(param_2,(undefined4 *)"SQL:\r\n");
  iVar2 = (**(code **)(**(int **)(*(int *)(local_8 + 0x30) + 0x238) + 0x14))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_10 = 0;
    do {
      piVar1 = *(int **)(*(int *)(local_8 + 0x30) + 0x238);
      (**(code **)(*piVar1 + 0xc))(piVar1,local_10,&local_18,&DAT_004ea9dc,*local_c);
      puStack_28 = local_18;
      puStack_2c = &DAT_004ea9e8;
      FUN_004040f0(local_c,4);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar2 = FUN_0041300c(*(int *)(*(int *)(local_8 + 0x30) + 0x240));
  if (0 < iVar2) {
    FUN_00404038(local_c,(undefined4 *)"Parameters:\r\n");
  }
  iVar2 = FUN_0041300c(*(int *)(*(int *)(local_8 + 0x30) + 0x240));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_10 = 0;
    do {
      FUN_0046f0d0(*(int *)(*(int *)(local_8 + 0x30) + 0x240),local_10);
      iVar2 = FUN_0046f0d0(*(int *)(*(int *)(local_8 + 0x30) + 0x240),local_10);
      FUN_004708c0(iVar2,&local_1c);
      puStack_2c = &DAT_004ea9e8;
      FUN_004040f0(local_c,6);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = puStack_2c;
  puStack_24 = &LAB_004ea9bc;
  puStack_28 = (undefined1 *)0x4ea9b4;
  FUN_00403dd4(&local_1c,2);
  return;
}

