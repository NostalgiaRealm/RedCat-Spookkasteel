/*
 * FUN_004f5804 at 004f5804
 * undefined __register FUN_004f5804(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004f5804-004f5846
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5804(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(int *)(param_2 + 8) + 8);
  if (iVar1 == -0x228) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    cVar2 = FUN_00403270(param_1,param_2,param_3);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
  else if (iVar1 == -0x227) {
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

