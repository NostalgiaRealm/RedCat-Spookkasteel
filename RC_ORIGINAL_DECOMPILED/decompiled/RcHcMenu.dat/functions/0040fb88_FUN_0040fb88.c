/*
 * FUN_0040fb88 at 0040fb88
 * undefined __register FUN_0040fb88(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 0040fb88-0040fbb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fb88(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte abStack_10c [256];
  
  FUN_0040400c(abStack_10c,param_3,0xff);
  FUN_0040fb0c(param_1,param_2,abStack_10c);
  return;
}

