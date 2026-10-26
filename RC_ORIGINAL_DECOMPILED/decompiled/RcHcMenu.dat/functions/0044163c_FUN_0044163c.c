/*
 * FUN_0044163c at 0044163c
 * undefined __register FUN_0044163c(int param_1, int param_2, byte param_3)
 * Address ranges: 0044163c-0044169b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044163c(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00442fec(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_00442ffc(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x33)) {
          FUN_00440834((undefined4 *)PTR_PTR_00572114);
        }
      }
      else {
        iVar2 = FUN_00442ffc(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x33) < param_3) {
          iVar2 = FUN_00442ffc(param_1,iVar3);
          *(byte *)(iVar2 + 0x33) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

