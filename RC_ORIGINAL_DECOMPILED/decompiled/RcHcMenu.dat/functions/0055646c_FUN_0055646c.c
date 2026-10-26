/*
 * FUN_0055646c at 0055646c
 * undefined __register FUN_0055646c(int * param_1)
 * Address ranges: 0055646c-00556615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x555088 slot published:btnReqOkClick for TfrmPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x555088 slot
   published:btnReqOkClick for TfrmPlayer. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055646c(int *param_1)

{
  char cVar1;
  int local_10;
  
  FUN_0054eebc((int)param_1);
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn1");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  local_10 = -1;
  cVar1 = (**(code **)(*(int *)param_1[0xc4] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xcd];
  }
  cVar1 = (**(code **)(*(int *)param_1[0xc5] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xce];
  }
  cVar1 = (**(code **)(*(int *)param_1[0xc6] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xcf];
  }
  cVar1 = (**(code **)(*(int *)param_1[199] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xd0];
  }
  cVar1 = (**(code **)(*(int *)param_1[200] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xd1];
  }
  cVar1 = (**(code **)(*(int *)param_1[0xc9] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xd2];
  }
  cVar1 = (**(code **)(*(int *)param_1[0xca] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xd3];
  }
  cVar1 = (**(code **)(*(int *)param_1[0xcb] + 0xb8))();
  if (cVar1 != '\0') {
    local_10 = param_1[0xd4];
  }
  *(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28) = local_10;
  if (local_10 < 0) {
    *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28) = 0xffffffff;
    FUN_00555e30(param_1);
  }
  FUN_00569170(*(int **)PTR_DAT_00572108,
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x28));
  return;
}

