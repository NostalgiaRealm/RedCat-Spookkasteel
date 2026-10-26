/*
 * FUN_00473f60 at 00473f60
 * undefined __register FUN_00473f60(int param_1, int * param_2)
 * Address ranges: 00473f60-00473fba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473f60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004687b0(*(int *)(param_1 + 0x24));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00468730(*(int *)(param_1 + 0x24),iVar3);
      if ((*(byte *)(iVar2 + 0x88) & 4) != 0) {
        if (*param_2 != 0) {
          FUN_00404038(param_2,(undefined4 *)&LAB_00473fc4);
        }
        iVar2 = FUN_00468730(*(int *)(param_1 + 0x24),iVar3);
        FUN_00404038(param_2,*(undefined4 **)(iVar2 + 0x2c));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

