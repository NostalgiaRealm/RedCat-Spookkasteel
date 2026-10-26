/*
 * FUN_00521ed4 at 00521ed4
 * undefined __register FUN_00521ed4(int param_1)
 * Address ranges: 00521ed4-00521fae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521ed4(int param_1)

{
  int iVar1;
  RECT local_18;
  int local_8;
  
  local_8 = param_1;
  if (*(char *)(param_1 + 0x238) == '\0') {
    FUN_00524f8c(*(int **)(param_1 + 0x274),(int *)(*(int *)(param_1 + 0x274) + 0x214));
  }
  else {
    iVar1 = FUN_00523748(*(int *)(param_1 + 0x274));
    FUN_00524fb8(*(int **)(local_8 + 0x274),iVar1);
  }
  if (*(char *)(local_8 + 0x238) == '\0') {
    FUN_00524ec4(*(int **)(local_8 + 0x274),(int *)(*(int *)(local_8 + 0x274) + 0x214),
                 &local_18.left);
    FUN_0041c97c(*(int **)(*(int *)(local_8 + 0x274) + 0x1f0),&local_18);
  }
  else {
    iVar1 = FUN_00523748(*(int *)(local_8 + 0x274));
    FUN_00525054(*(int **)(local_8 + 0x274),iVar1,(uint *)&local_18);
    FUN_0041c97c(*(int **)(*(int *)(local_8 + 0x274) + 0x1f0),&local_18);
  }
  FUN_00437100(local_8);
  return;
}

