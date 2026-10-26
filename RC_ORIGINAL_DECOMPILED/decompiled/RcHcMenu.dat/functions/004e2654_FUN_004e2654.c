/*
 * FUN_004e2654 at 004e2654
 * undefined __register FUN_004e2654(int * param_1, undefined4 * param_2)
 * Address ranges: 004e2654-004e2730
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2654(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004e2731;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_004e28e0((int)param_1,*(byte *)(param_2 + 1));
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "State is not allowed in this array";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  piVar1 = local_8 + 1;
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  FUN_0045d910((uint)local_8,local_8[1]);
  iVar4 = local_8[1] + -1;
  if (SBORROW4(local_8[1],1)) {
    thunk_FUN_00402874((uint)local_8);
    iVar4 = extraout_EDX;
  }
  puVar3 = (undefined4 *)FUN_004e24f8(local_8,iVar4);
  *puVar3 = *local_c;
  puVar3[1] = local_c[1];
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

