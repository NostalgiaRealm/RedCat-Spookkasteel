/*
 * FUN_004e510c at 004e510c
 * undefined __register FUN_004e510c(char param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004e510c-004e51eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e510c(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int *local_10;
  undefined1 local_c;
  undefined1 local_b;
  char local_5;
  
  local_5 = param_1;
  if (param_1 == '\0') {
    local_10 = (int *)FUN_004e25c4(*(int **)(*(int *)(param_4 + -4) + 0x80),
                                   *(int *)(*(int *)(param_4 + -4) + 0x88));
    local_c = FUN_004e257c(*(int **)(*(int *)(param_4 + -4) + 0x80),
                           *(int *)(*(int *)(param_4 + -4) + 0x88));
    local_b = FUN_004e260c(*(int **)(*(int *)(param_4 + -4) + 0x80),
                           *(int *)(*(int *)(param_4 + -4) + 0x88));
    FUN_0045d540(*(int **)(*(int *)(param_4 + -4) + 0x80),*(int *)(*(int *)(param_4 + -4) + 0x88));
  }
  else {
    local_10 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
    local_c = 3;
    local_b = 0;
  }
  piVar1 = (int *)FUN_00549b80(*(int *)(param_4 + -4));
  FUN_00493768(local_10,piVar1);
  uVar2 = FUN_004e2f38(*(int **)(*(int *)(param_4 + -4) + 0x80),&local_10);
  *(uint *)(*(int *)(param_4 + -4) + 0x88) = uVar2;
  return;
}

