/*
 * FUN_00412578 at 00412578
 * undefined __register FUN_00412578(int * param_1, int param_2)
 * Address ranges: 00412578-004125e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412578(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (0x7ffffff < param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005722b0,param_2);
  }
  if (param_1[3] < param_2) {
    FUN_0041253c(param_1,param_2);
  }
  iVar1 = param_1[2];
  if (iVar1 < param_2) {
    FUN_00402cfc((undefined4 *)(param_1[1] + iVar1 * 4),(param_2 - iVar1) * 4,0);
  }
  else {
    iVar1 = iVar1 + -1;
    if (param_2 - iVar1 == 0 || param_2 < iVar1) {
      iVar2 = (param_2 - iVar1) + -1;
      do {
        FUN_00412224(param_1,iVar1);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  param_1[2] = param_2;
  return;
}

