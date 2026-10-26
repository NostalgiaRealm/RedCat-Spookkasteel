/*
 * FUN_0052c120 at 0052c120
 * undefined __register FUN_0052c120(int * param_1, int param_2)
 * Address ranges: 0052c120-0052c1d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052c120(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_d;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_0052c1d7;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x22] == -0x80000000) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_130 = " Cannot move relative while no current record";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  iVar2 = local_8[0x22] + local_c;
  if (SCARRY4(local_8[0x22],local_c)) {
    thunk_FUN_00402874((uint)local_8);
    iVar2 = extraout_EDX;
  }
  local_d = FUN_0052c25c(local_8,iVar2);
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

