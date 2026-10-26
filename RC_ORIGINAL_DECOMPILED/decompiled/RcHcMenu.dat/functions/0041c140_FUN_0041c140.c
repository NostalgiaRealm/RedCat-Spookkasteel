/*
 * FUN_0041c140 at 0041c140
 * undefined __register FUN_0041c140(int * param_1, int param_2)
 * Address ranges: 0041c140-0041c168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c140(int *param_1,int param_2)

{
  byte abStack_18 [8];
  int local_10;
  
  if (-1 < param_2) {
    FUN_0041bfc4((int)param_1,(undefined4 *)abStack_18);
    local_10 = param_2;
    FUN_0041bfdc(param_1,abStack_18);
  }
  return;
}

