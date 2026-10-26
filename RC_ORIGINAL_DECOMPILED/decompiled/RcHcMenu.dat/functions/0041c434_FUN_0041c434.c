/*
 * FUN_0041c434 at 0041c434
 * undefined __register FUN_0041c434(int * param_1, char param_2)
 * Address ranges: 0041c434-0041c466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c434(int *param_1,char param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_0041c27c((int)param_1,(undefined4 *)abStack_18);
  if (param_2 == '\x01') {
    local_14 = 0xffffff;
  }
  local_c = param_2;
  FUN_0041c29c(param_1,abStack_18);
  return;
}

