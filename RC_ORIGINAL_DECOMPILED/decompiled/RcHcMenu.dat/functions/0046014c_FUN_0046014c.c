/*
 * FUN_0046014c at 0046014c
 * undefined __register FUN_0046014c(int * param_1, int param_2, undefined2 param_3, undefined2 param_4)
 * Address ranges: 0046014c-00460243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046014c(int *param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined2 local_e;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_00460244;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar3 = &stack0xfffffffc;
  local_e = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (0xd < param_1[1]) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "Overflow";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar3 = puStack_120;
  }
  puStack_120 = puVar3;
  uVar4 = local_8[1];
  if (0xe < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  *(undefined2 *)((int)local_8 + uVar4 * 2 + 0x44) = param_4;
  uVar4 = local_8[1];
  if (0xe < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  *(undefined2 *)((int)local_8 + uVar4 * 2 + 0x62) = local_e;
  uVar4 = local_8[1];
  if (0xe < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_8[uVar4 + 2] = local_c;
  piVar1 = local_8 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

