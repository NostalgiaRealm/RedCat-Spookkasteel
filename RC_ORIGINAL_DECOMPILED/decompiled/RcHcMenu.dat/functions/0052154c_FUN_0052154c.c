/*
 * FUN_0052154c at 0052154c
 * undefined __register FUN_0052154c(int param_1, int param_2)
 * Address ranges: 0052154c-005215ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052154c(int param_1,int param_2)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (param_2 != 0) {
    local_10 = *(undefined4 *)(*(int *)(param_1 + 0x274) + 0x218);
    local_14 = param_2;
    local_c = param_2;
    local_8 = param_1;
    FUN_00524d1c(*(int **)(param_1 + 0x274),&local_14);
    iVar1 = *(int *)(local_8 + 0x274);
    *(int *)(iVar1 + 0x214) = local_14;
    *(undefined4 *)(iVar1 + 0x218) = local_10;
  }
  return;
}

