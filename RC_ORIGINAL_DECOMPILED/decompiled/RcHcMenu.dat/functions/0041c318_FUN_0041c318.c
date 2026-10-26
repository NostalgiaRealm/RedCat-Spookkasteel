/*
 * FUN_0041c318 at 0041c318
 * undefined __register FUN_0041c318(int * param_1, undefined4 param_2)
 * Address ranges: 0041c318-0041c348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c318(int *param_1,undefined4 param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_0041c27c((int)param_1,(undefined4 *)abStack_18);
  if (local_c == '\x01') {
    local_c = '\0';
  }
  local_14 = param_2;
  FUN_0041c29c(param_1,abStack_18);
  return;
}

