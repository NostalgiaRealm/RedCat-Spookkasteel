/*
 * FUN_00490e3c at 00490e3c
 * undefined __register FUN_00490e3c(int param_1, undefined4 * param_2, undefined4 param_3, byte param_4, int param_5)
 * Address ranges: 00490e3c-00490eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00490e3c(int param_1,undefined4 *param_2,undefined4 param_3,byte param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  byte local_15;
  
  for (iVar2 = param_5; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  local_15 = 0;
  if ((param_4 & 1) != 0) {
    local_15 = 8;
  }
  piVar1 = FUN_00496f60((int *)&DAT_0048e950,'\x01',param_1,local_15,param_2);
  FUN_0048ed08((int *)piVar1[6],&stack0xffffffe0,param_5);
  FUN_004926bc(param_1,(int)piVar1);
  return;
}

