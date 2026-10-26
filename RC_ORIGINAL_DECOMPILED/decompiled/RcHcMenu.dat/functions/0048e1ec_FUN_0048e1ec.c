/*
 * FUN_0048e1ec at 0048e1ec
 * undefined __register FUN_0048e1ec(int param_1, int * param_2)
 * Address ranges: 0048e1ec-0048e21d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048e1ec(int param_1,int *param_2)

{
  byte local_10c [256];
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*(int *)(param_1 + 0x18),local_10c);
  FUN_00403fd4(local_c,local_10c);
  return;
}

