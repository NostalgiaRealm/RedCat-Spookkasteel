/*
 * FUN_004f24a0 at 004f24a0
 * undefined __register FUN_004f24a0(undefined4 param_1, int param_2, undefined1 param_3, int * param_4)
 * Address ranges: 004f24a0-004f2569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f24a0(undefined4 param_1,int param_2,undefined1 param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_15;
  int *local_14;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = (int *)0x0;
  puStack_24 = &LAB_004f256a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_15 = 0;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_4 == 0x100) {
    if (*(int *)(param_2 + 0x24) != 0) {
      piVar2 = FUN_00406aa0((int *)&local_14);
      cVar1 = FUN_00403128(*(int **)(local_c + 0x24),(int *)&LAB_004f257c,piVar2);
      if (cVar1 != '\0') {
        (**(code **)(*local_14 + 0xc))(local_14,param_4,local_d,&local_15);
      }
    }
  }
  else if ((*param_4 == 0x102) && (*(int *)(param_2 + 0x24) != 0)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = FUN_00406aa0((int *)&local_14);
    cVar1 = FUN_00403128(*(int **)(local_c + 0x24),(int *)&LAB_004f257c,piVar2);
    if (cVar1 != '\0') {
      (**(code **)(*local_14 + 0x10))(local_14,param_4,local_d,&local_15);
    }
  }
  local_e = local_15;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f2571;
  puStack_24 = (undefined1 *)0x4f2569;
  FUN_00406aa0((int *)&local_14);
  return;
}

