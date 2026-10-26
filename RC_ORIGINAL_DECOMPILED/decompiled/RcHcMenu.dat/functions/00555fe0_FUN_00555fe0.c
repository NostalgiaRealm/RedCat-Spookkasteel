/*
 * FUN_00555fe0 at 00555fe0
 * undefined __register FUN_00555fe0(int * param_1, undefined4 param_2)
 * Address ranges: 00555fe0-00556285
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x555088 slot published:btnDeleteClick for TfrmPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x555088 slot
   published:btnDeleteClick for TfrmPlayer. Original bytes unchanged; names and types still
   inferred. */

void FUN_00555fe0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int *piVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_24 = 0;
  local_18 = 0;
  piVar3 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffd0;
  local_1c = 0;
  local_20 = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*(int *)param_1[0xc4] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xc4],&local_18);
    local_1c = local_8[0xcd];
  }
  cVar1 = (**(code **)(*(int *)local_8[0xc5] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xc5],&local_18);
    local_1c = local_8[0xce];
  }
  cVar1 = (**(code **)(*(int *)local_8[0xc6] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xc6],&local_18);
    local_1c = local_8[0xcf];
  }
  cVar1 = (**(code **)(*(int *)local_8[199] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[199],&local_18);
    local_1c = local_8[0xd0];
  }
  cVar1 = (**(code **)(*(int *)local_8[200] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[200],&local_18);
    local_1c = local_8[0xd1];
  }
  cVar1 = (**(code **)(*(int *)local_8[0xc9] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xc9],&local_18);
    local_1c = local_8[0xd2];
  }
  cVar1 = (**(code **)(*(int *)local_8[0xca] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xca],&local_18);
    local_1c = local_8[0xd3];
  }
  cVar1 = (**(code **)(*(int *)local_8[0xcb] + 0xb8))();
  if (cVar1 != '\0') {
    FUN_00432714(local_8[0xcb],&local_18);
    local_1c = local_8[0xd4];
  }
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red27");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  cVar1 = FUN_00554b4c(local_18);
  if (cVar1 != '\0') {
    FUN_0056974c(*(int **)PTR_DAT_00572108,local_1c);
    local_c = 0;
    do {
      piVar3 = &local_24;
      FUN_00568e54(*(int **)PTR_DAT_00572108,local_c,&local_18,piVar3,&local_14,&local_10);
      iVar2 = FUN_00404030(local_18);
      if (0 < iVar2) {
        *(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28) = local_c;
      }
      local_c = local_c + 1;
    } while (local_c != 8);
    FUN_005552f8((int)local_8);
  }
  iVar2 = FUN_00569038(*(int **)PTR_DAT_00572108);
  if (iVar2 < 1) {
    *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28) = 0xffffffff;
    FUN_00555e30(local_8);
    FUN_005552f8((int)local_8);
  }
  *in_FS_OFFSET = (int)piVar3;
  FUN_00403db0(&local_24);
  FUN_00403db0(&local_18);
  return;
}

