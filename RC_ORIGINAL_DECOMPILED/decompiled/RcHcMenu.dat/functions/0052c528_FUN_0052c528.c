/*
 * FUN_0052c528 at 0052c528
 * undefined __register FUN_0052c528(int * param_1, int param_2)
 * Address ranges: 0052c528-0052c66c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052c528(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int *local_11c [2];
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0052c66d;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    iVar3 = FUN_0045da14(param_1[0x20]);
    puVar2 = puStack_120;
    if (local_c < iVar3) goto LAB_0052c5b0;
  }
  puStack_120 = puVar2;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  pcStack_134 = " Array out of bounds";
  FUN_004040f0(&local_10,3);
  FUN_00403d94(local_10);
LAB_0052c5b0:
  FUN_004e251c((int *)local_8[0x20],local_c,local_11c);
  FUN_00403094(local_11c[0]);
  FUN_004e25e8((int *)local_8[0x20],local_c,0);
  FUN_0045d540((int *)local_8[0x20],local_c);
  iVar3 = FUN_0045da14(local_8[0x20]);
  if (iVar3 == 0) {
    local_8[0x22] = -0x80000000;
  }
  else {
    iVar3 = FUN_0045da14(local_8[0x20]);
    if (iVar3 == local_8[0x22]) {
      piVar1 = local_8 + 0x22;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar3,1)) {
        thunk_FUN_00402874((uint)local_8);
      }
    }
  }
  piVar1 = local_8 + 0x25;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_14,2);
  return;
}

