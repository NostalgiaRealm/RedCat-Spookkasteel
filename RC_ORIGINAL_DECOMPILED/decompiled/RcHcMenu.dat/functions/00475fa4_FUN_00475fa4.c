/*
 * FUN_00475fa4 at 00475fa4
 * undefined __register FUN_00475fa4(int param_1, VARIANTARG * param_2)
 * Address ranges: 00475fa4-00475fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475fa4(int param_1,VARIANTARG *param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  float10 in_ST0;
  double local_10;
  
  uVar1 = FUN_00405bf8((undefined2 *)param_2);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    FUN_0040ab80(*(undefined **)((int)&param_2->n1 + 8));
  }
  else {
    FUN_004051ec(param_2);
  }
  local_10 = (double)in_ST0;
  FUN_004760d8(param_1,6,(undefined4 *)&local_10,8);
  return;
}

