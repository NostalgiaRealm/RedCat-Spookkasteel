/*
 * FUN_004b73dc at 004b73dc
 * undefined __register FUN_004b73dc(VARIANTARG * param_1, VARIANT * param_2, undefined4 * param_3)
 * Address ranges: 004b73dc-004b740a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b73dc(VARIANTARG *param_1,VARIANT *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  
  uVar1 = FUN_00405bf8((undefined2 *)param_1);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    FUN_00405130(param_2,param_1,8);
    *param_3 = param_2;
  }
  else {
    *param_3 = param_1;
  }
  return;
}

