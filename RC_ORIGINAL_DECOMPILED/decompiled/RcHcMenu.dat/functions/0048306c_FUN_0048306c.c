/*
 * FUN_0048306c at 0048306c
 * undefined __register FUN_0048306c(int * param_1, int param_2, char param_3)
 * Address ranges: 0048306c-004830a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048306c(int *param_1,int param_2,char param_3)

{
  int iVar1;
  
  FUN_0041922c((int)param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x1e])) {
    iVar1 = FUN_0047f0a8();
    if (iVar1 != param_1[0x1e]) {
      FUN_00467184(param_1);
      FUN_00483bac(param_1,(uint *)0x0);
    }
  }
  return;
}

