/*
 * FUN_00445938 at 00445938
 * undefined __register FUN_00445938(int param_1, int * param_2)
 * Address ranges: 00445938-0044599a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00445938(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00403db0(param_2);
  iVar3 = 1;
  iVar1 = FUN_00404030(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + -1 + iVar3);
      if (((byte)PTR_DAT_005725fc[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) == 0) {
        if (((*(char *)(param_1 + -1 + iVar3) == '&') && (0 < iVar1 - iVar3)) &&
           (iVar3 = iVar3 + 1, *(char *)(param_1 + -1 + iVar3) != '&')) {
          FUN_00403f58(param_2,(uint)*(byte *)(param_1 + -1 + iVar3));
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  return;
}

