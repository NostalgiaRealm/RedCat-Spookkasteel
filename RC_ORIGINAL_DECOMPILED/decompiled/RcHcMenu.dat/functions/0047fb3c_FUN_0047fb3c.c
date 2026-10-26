/*
 * FUN_0047fb3c at 0047fb3c
 * undefined __register FUN_0047fb3c(int param_1, char * param_2, int * param_3)
 * Address ranges: 0047fb3c-0047fb6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047fb3c(int param_1,char *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0040a108(param_2);
  FUN_00403e98(param_3,(undefined4 *)0x0,uVar1);
  if (0 < (int)uVar1) {
    FUN_0047fbc8(param_1,param_2,(LPSTR)*param_3,uVar1);
  }
  return;
}

