/*
 * FUN_004602a4 at 004602a4
 * undefined __register FUN_004602a4(int * param_1)
 * Address ranges: 004602a4-0046035b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004602a4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0046035c;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[1] < 1) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Underflow";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar3 = puStack_118;
  }
  puStack_118 = puVar3;
  piVar1 = local_8 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  uVar4 = local_8[1];
  if (0xe < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_c = local_8[uVar4 + 2];
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

