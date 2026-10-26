/*
 * FUN_004aa7a8 at 004aa7a8
 * undefined __register FUN_004aa7a8(int * param_1, int * param_2)
 * Address ranges: 004aa7a8-004aa892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aa7a8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_124 = &LAB_004aa893;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_10 = 0;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004ac5f0);
  if ((char)uVar1 != '\0') {
    local_14 = FUN_00403224(local_c,(int)&PTR_FUN_004ac5f0);
    uVar1 = FUN_0040320c(*(int **)(local_14 + 4),(int)&PTR_FUN_0042e674);
    if ((char)uVar1 != '\0') {
      piVar2 = (int *)FUN_00403224(*(int **)(local_14 + 4),(int)&PTR_FUN_0042e674);
      local_10 = FUN_004487c4(piVar2);
    }
  }
  if (local_10 == 0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_138 = "Could not acquire the form for the Hint";
    FUN_004040f0(&local_18,4);
    FUN_00403d94(local_18);
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_1c,2);
  return;
}

