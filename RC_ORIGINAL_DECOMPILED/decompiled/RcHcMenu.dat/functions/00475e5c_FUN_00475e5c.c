/*
 * FUN_00475e5c at 00475e5c
 * undefined __register FUN_00475e5c(int param_1, VARIANTARG * param_2, uint param_3)
 * Address ranges: 00475e5c-00475ebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475e5c(int param_1,VARIANTARG *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  float10 in_ST0;
  longlong local_38;
  byte local_30 [36];
  
  uVar1 = FUN_00405bf8((undefined2 *)param_2);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    FUN_0040abbc(*(undefined **)((int)&param_2->n1 + 8));
  }
  else {
    FUN_00405248(param_2);
  }
  local_38 = (longlong)ROUND(in_ST0);
  FUN_00466ea0(local_30,0x20,param_3,local_38);
  FUN_004760d8(param_1,8,(undefined4 *)local_30,0x12);
  return;
}

