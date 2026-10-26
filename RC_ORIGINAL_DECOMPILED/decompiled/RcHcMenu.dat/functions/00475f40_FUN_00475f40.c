/*
 * FUN_00475f40 at 00475f40
 * undefined __register FUN_00475f40(int param_1, VARIANTARG * param_2)
 * Address ranges: 00475f40-00475fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475f40(int param_1,VARIANTARG *param_2)

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
  float10 in_ST1;
  double local_20;
  double local_18;
  undefined4 local_10 [2];
  
  uVar1 = FUN_00405bf8((undefined2 *)param_2);
  if (CONCAT22(extraout_var,uVar1) == 0x100) {
    FUN_0040c5dc(*(int *)((int)&param_2->n1 + 8));
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  else {
    FUN_00405c7c(param_2);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  local_20 = (double)in_ST0;
  FUN_0040abf8(local_10,uVar3,uVar2,local_20);
  FUN_0040ac84();
  local_18 = (double)in_ST1;
  FUN_004760d8(param_1,0xb,(undefined4 *)&local_18,8);
  return;
}

