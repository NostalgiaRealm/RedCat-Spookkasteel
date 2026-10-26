/*
 * FUN_00431ce8 at 00431ce8
 * undefined __register FUN_00431ce8(int * param_1, int param_2, char param_3)
 * Address ranges: 00431ce8-00431d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431ce8(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_0041922c((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == param_1[0x1b]) {
      FUN_004326cc(param_1,(int *)0x0);
    }
    else {
      iVar1 = FUN_00431b5c((int)param_1);
      if (param_2 == iVar1) {
        FUN_00431b8c(param_1,0,extraout_ECX);
      }
    }
  }
  return;
}

