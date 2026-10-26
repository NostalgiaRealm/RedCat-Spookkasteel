/*
 * FUN_0053951c at 0053951c
 * undefined __register FUN_0053951c(int * param_1, int param_2)
 * Address ranges: 0053951c-0053960d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053951c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_140;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  uint *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  local_18 = 0;
  local_11c = 0;
  local_10 = (int *)0x0;
  puStack_124 = &LAB_0053960e;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_2 + 0x68) != 0) {
    piVar3 = FUN_00406aa0((int *)&local_10);
    cVar2 = FUN_00403128(*(int **)(local_c + 0x68),(int *)&DAT_0053961c,piVar3);
    if (cVar2 == '\0') {
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4(&local_18,local_118);
      FUN_005257bc(local_c,&local_11c);
      puStack_140 = &DAT_0053968c;
      FUN_004040f0((int *)&local_14,6);
      FUN_004570ec(local_14);
      puVar1 = puStack_120;
    }
    else {
      (**(code **)(*local_10 + 0xc))(local_10,local_8);
      puVar1 = puStack_120;
    }
  }
  puStack_120 = puVar1;
  *in_FS_OFFSET = puStack_140;
  FUN_00403db0(&local_11c);
  FUN_00403dd4(&local_18,2);
  FUN_00406aa0((int *)&local_10);
  return;
}

