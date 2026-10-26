/*
 * FUN_004b743c at 004b743c
 * undefined __register FUN_004b743c(undefined2 * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004b743c-004b7463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b743c(undefined2 *param_1,undefined4 *param_2,int *param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00405bf8(param_1);
  if (CONCAT22(extraout_var,uVar1) == 0x2011) {
    *param_3 = (int)(param_1 + 4);
  }
  else {
    *param_3 = (int)param_2;
    *param_2 = 0;
  }
  return;
}

