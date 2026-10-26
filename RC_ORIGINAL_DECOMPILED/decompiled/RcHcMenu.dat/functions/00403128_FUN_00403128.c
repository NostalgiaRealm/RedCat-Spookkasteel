/*
 * FUN_00403128 at 00403128
 * undefined __register FUN_00403128(int * param_1, int * param_2, int * param_3)
 * Address ranges: 00403128-004031b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403128(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_20 = &LAB_004031b6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  piVar1 = FUN_004031c8(*param_1,param_2);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
  }
  else {
    if (piVar1[5] == 0) {
      FUN_004030f8(param_1,(undefined *)piVar1[6],(int *)&local_c);
      FUN_00406ab8(param_3,local_c);
    }
    else {
      *param_3 = (int)param_1 + piVar1[5];
    }
    if ((*param_3 != 0) && (piVar1[5] != 0)) {
      (**(code **)(*(int *)*param_3 + 4))();
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004031bd;
  puStack_20 = (undefined1 *)0x4031b5;
  FUN_00406aa0((int *)&local_c);
  return;
}

