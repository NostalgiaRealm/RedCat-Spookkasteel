/*
 * FUN_004a9468 at 004a9468
 * undefined __register FUN_004a9468(int * param_1, uint * param_2, undefined4 param_3)
 * Address ranges: 004a9468-004a94a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9468(int *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (*param_2 == 0x201) {
    cVar1 = (**(code **)(*param_1 + 0xac))();
    param_3 = extraout_ECX;
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xb4))();
      param_3 = extraout_ECX_00;
    }
  }
  FUN_004337cc(param_1,param_2,param_3);
  return;
}

