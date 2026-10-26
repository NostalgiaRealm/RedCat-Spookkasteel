/*
 * FUN_0049fc3c at 0049fc3c
 * undefined __register FUN_0049fc3c(int * param_1, uint param_2)
 * Address ranges: 0049fc3c-0049fd2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049fc3c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_0049fd2d;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "Frame index out of bounds.";
    FUN_004040f0(&local_14,4);
    FUN_00403d94(local_14);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  local_10 = 0;
  if (local_8[9] == 0) {
    uVar2 = FUN_0045ba40(local_8[0xc]);
    if (0 < (int)uVar2) {
      if ((int)local_c < 0) {
        thunk_FUN_00402874(uVar2);
      }
      piVar3 = (int *)(*(code *)**(undefined4 **)local_8[0xc])();
      local_10 = FUN_00403224(piVar3,(int)&LAB_0049893c);
    }
  }
  else {
    local_10 = (**(code **)(*(int *)local_8[9] + 0x1c))((int *)local_8[9],local_c);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

