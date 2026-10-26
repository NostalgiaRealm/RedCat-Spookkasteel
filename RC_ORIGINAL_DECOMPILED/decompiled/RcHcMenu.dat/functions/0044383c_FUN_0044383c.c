/*
 * FUN_0044383c at 0044383c
 * undefined __register FUN_0044383c(int * param_1, int param_2, char param_3)
 * Address ranges: 0044383c-0044386c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044383c(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041922c((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    iVar1 = FUN_00442fd4((int)param_1);
    if (param_2 == iVar1) {
      FUN_00443420(param_1,0,extraout_ECX);
    }
  }
  return;
}

