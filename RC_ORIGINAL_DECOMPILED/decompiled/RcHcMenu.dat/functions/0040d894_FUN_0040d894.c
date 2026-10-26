/*
 * FUN_0040d894 at 0040d894
 * int __register FUN_0040d894(int param_1, int param_2)
 * Address ranges: 0040d894-0040d8e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0040d894(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = FUN_00404030(param_1);
    if ((param_2 <= iVar1) && (iVar3 = param_2, DAT_005735bc != '\0')) {
      iVar1 = 1;
      iVar3 = 0;
      if (0 < param_2) {
        do {
          uVar2 = (uint)*(byte *)(param_1 + -1 + iVar1);
          if (((byte)(&DAT_0056f16c)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar1 <= param_2);
      }
    }
  }
  return iVar3;
}

