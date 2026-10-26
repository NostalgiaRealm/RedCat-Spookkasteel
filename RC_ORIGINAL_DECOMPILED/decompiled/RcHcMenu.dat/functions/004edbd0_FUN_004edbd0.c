/*
 * FUN_004edbd0 at 004edbd0
 * undefined __register FUN_004edbd0(int * param_1)
 * Address ranges: 004edbd0-004edccc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004edbd0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004edccd;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[0xd] == '\x02') {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "No active query";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar2 = puStack_118;
  }
  puStack_118 = puVar2;
  *(undefined1 *)(local_8 + 2) = 0;
  if (*(char *)((int)local_8 + 0x35) == '\0') {
    piVar3 = (int *)FUN_004ed810((int)local_8);
    local_9 = (**(code **)(*piVar3 + 0x50))();
  }
  else {
    piVar3 = (int *)FUN_004ed88c(local_8);
    local_9 = (**(code **)(*piVar3 + 0x50))();
    if ((local_9 == '\0') && ((char)local_8[0xd] == '\0')) {
      FUN_004ee454((int)local_8);
      piVar3 = (int *)FUN_004ed810((int)local_8);
      local_9 = (**(code **)(*piVar3 + 0x44))();
    }
  }
  if (local_9 != '\0') {
    piVar3 = local_8 + 0xc;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402874((uint)local_8);
    }
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

