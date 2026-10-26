/*
 * FUN_004761f8 at 004761f8
 * undefined __register FUN_004761f8(int param_1, VARIANTARG * param_2)
 * Address ranges: 004761f8-0047624d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004761f8(int param_1,VARIANTARG *param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  float10 in_ST0;
  double local_18;
  undefined4 local_10 [2];
  
  uVar1 = FUN_00405bf8((undefined2 *)param_2);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    FUN_0040c58c(*(int *)((int)&param_2->n1 + 8));
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  else {
    FUN_00405c7c(param_2);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  local_18 = (double)in_ST0;
  FUN_0040abf8(local_10,uVar3,uVar2,local_18);
  FUN_004760d8(param_1,10,local_10,4);
  return;
}

